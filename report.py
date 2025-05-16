#!/usr/bin/env python3

import os
import subprocess
import re
import sys
import time
from datetime import datetime
import glob
import argparse
from typing import List, Dict, Optional
import logging

# Configure logging
logging.basicConfig(level=logging.DEBUG, format='%(asctime)s - %(levelname)s - %(message)s', handlers=[
    logging.FileHandler("verification.log"),
    logging.StreamHandler()
])

# Define the base directory
BASE_DIR = os.getcwd()
LIBRARIES_DIR = os.path.join(BASE_DIR, "libraries")
REPORT_FILE = os.path.join(BASE_DIR, "REPORT.md")

# Define category mappings
DIRECTORY_TO_CATEGORY = {
    "adders": "Adders",
    "arbiters": "Arbitration", 
    "alu": "Arithmetic",
    "comms": "Communication",
    "codings": "Encoding/Decoding",
    "counters": "Counters",
    "dividers": "Division",
    "fifos": "FIFOs",
    "filters": "Filters",
    "fsm": "State Machines",
    "mems": "Memory",
    "multipliers": "Multiplication",
    "registers": "Registers",
    "signals": "Signal Processing",
    "cdc": "Clock Domain Crossing",
    "debug": "Debugging",
    "dsp": "Digital Signal Processing",
    "encryption": "Encryption",
    "interfaces": "Interfaces",
    "io": "Input/Output",
    "math": "Mathematics",
    "noc": "Network on Chip",
    "power": "Power Management",
    "test": "Testing",
    "voters": "Voting",
    "cordic": "CORDIC"
}

# Get all make targets from Makefile
def get_make_targets():
    result = subprocess.run(["make", "-pRrq", ":"], 
                           capture_output=True, 
                           text=True, 
                           check=False)
    
    output = result.stdout
    targets = []
    
    # First, get explicitly defined targets
    for line in output.split('\n'):
        if line.startswith('verify_') and ':' in line and '#' not in line:
            target = line.split(':')[0].strip()
            # Skip special targets and the template target verify_$(1)
            if target not in ["verify_config_fir_low_pass", "verify_config_fir_high_pass", "verify_$(1)", "verify_all"]:
                targets.append(target)
    
    # Get all Verilog files to create pattern-based targets
    verilog_files = glob.glob(os.path.join(LIBRARIES_DIR, "**/*.v"), recursive=True)
    for vfile in verilog_files:
        module_name = os.path.splitext(os.path.basename(vfile))[0]
        if not module_name.startswith('tb_'):
            target = f"verify_{module_name}"
            if target not in targets:
                targets.append(target)
    
    # Add variable-based targets
    targets.extend([
        "verify_param_freq_div",  # From PARAM_FREQ_DIV_TARGET
    ])
    
    return sorted(targets)

# Scan directories to find RTL files and their testbenches
def scan_rtl_files():
    rtl_files = {}
    
    # Check the root directory for special cases like fp_adder
    for vfile in glob.glob("*.v"):
        module_name = vfile.replace(".v", "")
        tb_file = f"tb_{module_name}.cpp"
        if os.path.exists(tb_file):
            rtl_files[module_name] = {"file": vfile, "tb_file": tb_file, "directory": ""}
    
    # Scan all subdirectories in the libraries folder
    for root, dirs, files in os.walk(LIBRARIES_DIR):
        rel_dir = os.path.relpath(root, BASE_DIR)
        subdir = os.path.basename(root)
        
        verilog_files = [f for f in files if f.endswith('.v') and not f.startswith('tb_')]
        testbench_files = [f for f in files if f.startswith('tb_') and f.endswith('.cpp')]
        
        for vfile in verilog_files:
            module_name = vfile.replace(".v", "")
            tb_file = f"tb_{module_name}.cpp"
            
            if tb_file in testbench_files:
                rtl_files[module_name] = {
                    "file": os.path.join(rel_dir, vfile),
                    "tb_file": os.path.join(rel_dir, tb_file),
                    "directory": subdir
                }
            else:
                # Report modules with missing testbenches
                rtl_files[module_name] = {
                    "file": os.path.join(rel_dir, vfile),
                    "tb_file": "MISSING",
                    "directory": subdir,
                    "status": "Missing Testbench"
                }
    
    return rtl_files

# Map make targets to module names and directories
def map_targets_to_modules(rtl_files):
    # Create a mapping from module name to make target
    module_mappings = {}
    for module_name, info in rtl_files.items():
        # Map to make target by prepending 'verify_' to the module name
        target_name = f"verify_{module_name}"
        
        module_mappings[target_name] = {
            "module_name": module_name,
            "file": info["file"],
            "tb_file": info["tb_file"],
            "directory": info["directory"],
            "status": info.get("status", "")
        }
    
    return module_mappings

# Extract test results from command output
def extract_test_results(stdout, stderr):
    test_summary = {
        "total_tests": 0,
        "passed_tests": 0,
        "result": "Unknown",
        "details": "",
        "error_message": ""
    }
    
    # Get the last non-empty line of stdout for details
    last_lines = [line.strip() for line in stdout.splitlines() if line.strip()]
    if last_lines:
        test_summary["details"] = last_lines[-1]
    
    # Look for the standardized test summary format
    try:
        if "==== Test Summary ====" in stdout:
            # Extract result
            result_match = re.search(r'Result:\s+(Pass|Fail)', stdout)
            if result_match:
                test_summary["result"] = result_match.group(1)
            
            # Extract test counts
            tests_match = re.search(r'Tests:\s+(\d+)\s+of\s+(\d+)', stdout)
            if tests_match:
                test_summary["passed_tests"] = int(tests_match.group(1))
                test_summary["total_tests"] = int(tests_match.group(2))
                test_summary["details"] = f"{test_summary['passed_tests']} of {test_summary['total_tests']}"
            
            return test_summary
    except Exception as e:
        print(f"Error extracting test results: {e}")
    
    # Try to extract test counts from other patterns in the output
    try:
        # Look for patterns like "Testing X test cases" or "Running X tests"
        test_count_patterns = [
            r'Testing\s+(\d+)\s+test\s+cases',
            r'Running\s+(\d+)\s+tests',
            r'Total\s+tests:\s+(\d+)',
            r'(\d+)\s+tests\s+executed',
            r'Executing\s+(\d+)\s+tests',
            r'Ran\s+(\d+)\s+tests'
        ]
        
        for pattern in test_count_patterns:
            match = re.search(pattern, stdout, re.IGNORECASE)
            if match:
                test_summary["total_tests"] = int(match.group(1))
                break
        
        # Look for patterns indicating passed tests
        pass_count_patterns = [
            r'(\d+)\s+tests\s+passed',
            r'Passed\s+(\d+)\s+of\s+\d+',
            r'(\d+)\s+passing',
            r'(\d+)\s+OK',
            r'(\d+)\s+successful'
        ]
        
        for pattern in pass_count_patterns:
            match = re.search(pattern, stdout, re.IGNORECASE)
            if match:
                test_summary["passed_tests"] = int(match.group(1))
                break
    except Exception as e:
        print(f"Error extracting additional test counts: {e}")
    
    # Extract error messages if any
    error_patterns = [
        r'Error:\s*(.*)',
        r'Failed:\s*(.*)',
        r'Assertion failed:\s*(.*)',
        r'Test failed:\s*(.*)'
    ]
    
    for pattern in error_patterns:
        match = re.search(pattern, stdout + "\n" + stderr, re.IGNORECASE)
        if match:
            test_summary["error_message"] = match.group(1).strip()
            break
    
    # If we couldn't find the standardized format, try to make a best guess
    if "PASSED" in stdout or "Test PASSED" in stdout or "Tests passed" in stdout:
        test_summary["result"] = "Pass"
        if not test_summary["details"]:
            test_summary["details"] = "All tests passed"
    elif "FAILED" in stdout or "Test FAILED" in stdout:
        test_summary["result"] = "Fail"
        if not test_summary["details"]:
            test_summary["details"] = "Tests failed"
    
    # If we have detected test counts but no details, add them to details
    if test_summary["total_tests"] > 0 and not test_summary["details"].startswith(str(test_summary["passed_tests"])):
        test_summary["details"] = f"{test_summary['passed_tests']} of {test_summary['total_tests']} tests passed - {test_summary['details']}"
    
    return test_summary

# Run a make target and capture the result with timing information
def run_make_target(target):
    logging.info(f"Running target: {target}")
    try:
        start_time = time.time()
        process = subprocess.run(["make", target, "VERBOSE=1"], 
                                capture_output=True, 
                                text=False,  # Change to False to handle binary output
                                check=False,
                                timeout=120)  # Set timeout to 2 minutes
        
        # Decode the output with error handling
        stdout = process.stdout.decode('utf-8', errors='replace')
        stderr = process.stderr.decode('utf-8', errors='replace')
        
        end_time = time.time()
        elapsed_time = end_time - start_time
        
        # Log the output and errors
        logging.debug(f"STDOUT: {stdout}")
        logging.debug(f"STDERR: {stderr}")
        logging.debug(f"Return code: {process.returncode}")
        
        # Extract test results
        test_results = extract_test_results(stdout, stderr)
        
        # Check if the test summary format was found and indicates a pass
        if "==== Test Summary ====" in stdout and test_results["result"] == "Pass":
            result = "✅ PASSED"
            details = test_results["details"] if test_results["details"] else "All tests passed"
        # Otherwise check process return code
        elif process.returncode == 0:
            result = "✅ PASSED"
            if test_results["result"] == "Pass":
                details = test_results["details"] if test_results["details"] else "All tests passed"
            else:
                details = "Execution completed successfully"
        else:
            result = "❌ FAILED"
            
            # Check for build errors specifically
            if "Error: Module" in stderr or "Error: Module" in stdout:
                build_error_lines = [line for line in stderr.splitlines() + stdout.splitlines() 
                                    if "Error: Module" in line or "not found" in line]
                details = "Build failed: " + (build_error_lines[0] if build_error_lines else "Unknown build error")
            elif "error:" in stderr.lower():
                # Extract compilation errors
                error_lines = [line for line in stderr.splitlines() if "error:" in line.lower()]
                details = "Compilation error: " + (error_lines[0] if error_lines else "Unknown compilation error")
            elif test_results["result"] == "Fail":
                details = test_results["details"] if test_results["details"] else "Tests failed"
            # Try to find error message
            elif test_results.get("error_message"):
                details = test_results["error_message"]
            elif "Error" in stderr:
                error_lines = [line for line in stderr.splitlines() if "Error" in line]
                details = error_lines[0] if error_lines else "Unknown error"
            elif "Warning" in stderr and "Exiting due to" in stderr:
                warning_lines = [line for line in stderr.splitlines() if "Warning" in line]
                details = warning_lines[0] if warning_lines else "Warnings caused failure"
            else:
                details = f"Process exited with code {process.returncode}"
                
            # Save the first 10 lines of stderr for debugging
            if stderr.strip():
                stderr_sample = "\n".join(stderr.splitlines()[:10])
                details += f"\n\nError output sample:\n{stderr_sample}"
        
        logging.info(f"Result for {target}: {result} - {details}")
        
        return {
            "target": target,
            "status": result,
            "details": details,
            "stdout": stdout,
            "stderr": stderr,
            "runtime": elapsed_time,
            "passed_tests": test_results["passed_tests"],
            "total_tests": test_results["total_tests"],
            "result": test_results["result"],
            "error_message": test_results.get("error_message")
        }
    except subprocess.TimeoutExpired:
        logging.error(f"Timeout expired for target: {target}")
        return {
            "target": target,
            "status": "⚠️ TIMEOUT",
            "details": "Execution exceeded 2 minutes and was terminated",
            "stdout": "",
            "stderr": "",
            "runtime": 120.0,  # Timeout value
            "passed_tests": 0,
            "total_tests": 0,
            "result": "Timeout",
            "error_message": "Test execution timed out after 2 minutes"
        }
    except Exception as e:
        logging.exception(f"Exception occurred while running target: {target}")
        return {
            "target": target,
            "status": "❌ ERROR",
            "details": str(e),
            "stdout": "",
            "stderr": "",
            "runtime": 0.0,
            "passed_tests": 0,
            "total_tests": 0,
            "result": "Error",
            "error_message": str(e)
        }

# Categorize modules based on their directory
def categorize_modules(module_mappings):
    categories = {}
    
    # Map each target to its category
    for target, info in module_mappings.items():
        directory = info["directory"]
        
        # Special case for fp_adder in root directory
        if not directory and "fp_adder" in info["module_name"]:
            category = "Arithmetic"
        else:
            category = DIRECTORY_TO_CATEGORY.get(directory, "Miscellaneous")
            
        if category not in categories:
            categories[category] = []
        categories[category].append(target)
    
    # Sort each category
    for category in categories:
        categories[category] = sorted(categories[category])
    
    return categories

# Generate the report
def generate_report(results, module_mappings):
    categories = categorize_modules(module_mappings)
    
    # Build a dictionary for quick lookup
    results_dict = {r["target"]: r for r in results}
    
    # Define more visible status symbols
    status_symbols = {
        "PASSED": "✓ PASS",
        "FAILED": "✗ FAIL",
        "TIMEOUT": "⏱ TIMEOUT",
        "ERROR": "⚠ ERROR",
        "Not Tested": "- NOT TESTED",
        "Missing Testbench": "⚠ NO TESTBENCH"
    }
    
    with open(REPORT_FILE, "w") as f:
        f.write("# RTL Verification Report\n\n")
        f.write(f"Generated on: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}\n\n")
        
        # Add table of contents
        f.write("## Table of Contents\n\n")
        f.write("1. [Summary](#summary)\n")
        f.write("2. [Category Overview](#category-overview)\n")
        
        # Add links to each category
        for i, category in enumerate(sorted(categories.keys()), 3):
            category_id = category.lower().replace(' ', '-')
            f.write(f"{i}. [{category}](#category-{category_id})\n")
        
        f.write(f"{len(categories) + 3}. [Notes](#notes)\n\n")
        
        # Summary statistics
        total = len(results)
        passed = sum(1 for r in results if "PASS" in r["status"])
        failed = sum(1 for r in results if "FAIL" in r["status"])
        timeouts = sum(1 for r in results if "TIMEOUT" in r["status"])
        
        # Count modules with missing testbenches
        missing_tb = sum(1 for _, info in module_mappings.items() if info.get("status") == "Missing Testbench")
        
        # Calculate total tests executed and passed
        total_tests_run = sum(r.get("total_tests", 0) for r in results)
        total_tests_passed = sum(r.get("passed_tests", 0) for r in results)
        
        # Calculate total and average runtime
        total_runtime = sum(r.get("runtime", 0.0) for r in results)
        avg_runtime = total_runtime / total if total > 0 else 0
        
        # Calculate pass percentage safely
        pass_percentage = total_tests_passed/total_tests_run*100 if total_tests_run > 0 else 0
        
        f.write("## Summary\n\n")
        f.write(f"- Total modules scanned: {len(module_mappings)}\n")
        f.write(f"- Modules with missing testbenches: {missing_tb}\n")
        f.write(f"- Total modules tested: {total}\n")
        f.write(f"- Passed: {passed} ({passed/total*100:.1f}%)\n")
        f.write(f"- Failed: {failed} ({failed/total*100:.1f}%)\n")
        f.write(f"- Timeouts: {timeouts}\n")
        f.write(f"- Total tests executed: {total_tests_run}\n")
        f.write(f"- Total tests passed: {total_tests_passed} ({pass_percentage:.1f}%)\n")
        f.write(f"- Total runtime: {total_runtime:.2f} seconds\n")
        f.write(f"- Average runtime per module: {avg_runtime:.2f} seconds\n\n")
        
        # Create a summary table
        f.write("## Category Overview\n\n")
        f.write("| Category | Modules | Passed | Failed | Pass Rate | Tests Passed | Runtime (s) |\n")
        f.write("|----------|--------:|-------:|-------:|----------:|-------------:|-----------:|\n")
        
        for category, targets in sorted(categories.items()):
            cat_total = len(targets)
            cat_passed = sum(1 for t in targets if t in results_dict and "PASS" in results_dict[t]["status"])
            cat_failed = sum(1 for t in targets if t in results_dict and "FAIL" in results_dict[t]["status"])
            pass_rate = cat_passed / cat_total * 100 if cat_total > 0 else 0
            
            # Calculate category test stats
            cat_tests_run = sum(results_dict[t].get("total_tests", 0) for t in targets if t in results_dict)
            cat_tests_passed = sum(results_dict[t].get("passed_tests", 0) for t in targets if t in results_dict)
            
            # Calculate category runtime stats
            cat_runtime = sum(results_dict[t].get("runtime", 0.0) for t in targets if t in results_dict)
            cat_avg_runtime = cat_runtime / cat_total if cat_total > 0 else 0
            
            # Add link to category section
            category_id = category.lower().replace(' ', '-')
            f.write(f"| [{category}](#category-{category_id}) | {cat_total} | {cat_passed} | {cat_failed} | {pass_rate:.1f}% | {cat_tests_passed}/{cat_tests_run} | {cat_avg_runtime:.2f} |\n")
        
        # Detailed results by category
        f.write("\n## Detailed Results\n\n")
        
        for category, targets in sorted(categories.items()):
            # Create an anchor for the category
            category_id = category.lower().replace(' ', '-')
            f.write(f"<a name='category-{category_id}'></a>\n")
            f.write(f"### {category}\n\n")
            
            # Add a link back to top
            f.write("[Back to top](#table-of-contents)\n\n")
            
            f.write("| Module | File Path | Status | Tests | Runtime (s) | Details |\n")
            f.write("|--------|-----------|:------:|------:|-----------:|----------:|\n")
            
            for target in sorted(targets):
                if target in module_mappings:
                    module_name = module_mappings[target]["module_name"]
                    file_path = module_mappings[target]["file"]
                    
                    # Check if module has a missing testbench
                    if module_mappings[target].get("status") == "Missing Testbench":
                        status = status_symbols["Missing Testbench"]
                        details = "No testbench available"
                        runtime = 0.0
                        tests = "0/0"
                    elif target in results_dict:
                        result = results_dict[target]
                        status_key = "PASSED" if "PASS" in result["status"] else "FAILED" if "FAIL" in result["status"] else "TIMEOUT" if "TIMEOUT" in result["status"] else "ERROR"
                        status = status_symbols[status_key]
                        details = result["details"]
                        if result.get("error_message"):
                            details = f"{details}\nError: {result['error_message']}"
                        runtime = result.get("runtime", 0.0)
                        
                        # Format test results
                        passed_tests = result.get("passed_tests", 0)
                        total_tests = result.get("total_tests", 0)
                        tests = f"{passed_tests}/{total_tests}" if total_tests > 0 else "N/A"
                    else:
                        status = status_symbols["Not Tested"]
                        details = "Module was not tested"
                        runtime = 0.0
                        tests = "0/0"
                    
                    f.write(f"| {module_name} | {file_path} | {status} | {tests} | {runtime:.2f} | {details} |\n")
                else:
                    # This should not happen, but just in case
                    module_name = target.replace("verify_", "")
                    f.write(f"| {module_name} | Unknown | {status_symbols['Not Tested']} | 0/0 | 0.00 | Unknown module |\n")
            
            f.write("\n")
        
        f.write("<a name='notes'></a>\n")
        f.write("## Notes\n\n")
        f.write("- Tests were run using Verilator with the build directory set to 'build'\n")
        f.write("- The standardized test summary format '==== Test Summary ====' was used to capture detailed test results\n")
        f.write("- Modules marked with 'NO TESTBENCH' need testbenches to be implemented\n")
        f.write("- Some tests may fail due to issues with the implementation, not the build system\n")
        f.write("- Timeouts indicate tests that took longer than 2 minutes to complete\n")
        f.write("- Runtime measurements include compilation and execution time\n")
        f.write("- Error messages are extracted from test output when available\n")

def filter_targets_by_categories(targets: List[str], module_mappings: Dict[str, Dict], selected_categories: Optional[List[str]] = None) -> List[str]:
    """Filter targets based on selected categories."""
    if not selected_categories:
        return targets
        
    # Convert selected categories to title case for consistent matching
    selected_categories = [cat.title() for cat in selected_categories]
    
    # Get category for each target
    filtered_targets = []
    for target in targets:
        if target in module_mappings:
            directory = module_mappings[target]["directory"]
            # Special case for fp_adder in root directory
            if not directory and "fp_adder" in module_mappings[target]["module_name"]:
                category = "Arithmetic"
            else:
                category = DIRECTORY_TO_CATEGORY.get(directory, "Miscellaneous")
            
            # Case-insensitive comparison for category matching
            if any(cat.lower() == category.lower() for cat in selected_categories):
                filtered_targets.append(target)
                
    return filtered_targets

def setup_argument_parser() -> argparse.ArgumentParser:
    """Set up command line argument parser."""
    parser = argparse.ArgumentParser(
        description="RTL Verification Script",
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog="Available categories:\n" + "\n".join(f"  - {cat}" for cat in sorted(set(DIRECTORY_TO_CATEGORY.values())))
    )
    
    parser.add_argument(
        "-c", "--categories",
        nargs="+",
        help="Specify one or more categories to verify (default: all categories)",
        choices=sorted(set(DIRECTORY_TO_CATEGORY.values())),
        metavar="CATEGORY"
    )
    
    return parser

def main():
    # Set up argument parser
    parser = setup_argument_parser()
    args = parser.parse_args()
    
    print("🔍 Scanning for RTL files and their testbenches...")
    rtl_files = scan_rtl_files()
    print(f"Found {len(rtl_files)} RTL modules, including those without testbenches.")
    
    print("🔍 Mapping RTL files to make targets...")
    module_mappings = map_targets_to_modules(rtl_files)
    
    # Count modules with missing testbenches
    missing_tb = sum(1 for _, info in module_mappings.items() if info.get("status") == "Missing Testbench")
    print(f"Found {missing_tb} modules without testbenches.")
    
    # Filter to only include modules with testbenches for testing
    valid_module_mappings = {k: v for k, v in module_mappings.items() if v.get("status") != "Missing Testbench"}
    
    print("🔍 Getting available make targets...")
    targets = get_make_targets()
    print(f"Found {len(targets)} make targets.")
    
    # Filter targets that have a matching RTL file and testbench
    valid_targets = [t for t in targets if t in valid_module_mappings]
    print(f"Found {len(valid_targets)} valid targets with matching RTL files and testbenches.")
    
    # Filter targets by selected categories
    if args.categories:
        valid_targets = filter_targets_by_categories(valid_targets, module_mappings, args.categories)
        print(f"Filtered to {len(valid_targets)} targets in selected categories: {', '.join(args.categories)}")
    
    if not valid_targets:
        print("No valid targets found for the selected categories.")
        sys.exit(1)
    
    print("🧪 Running tests for each target...")
    results = []
    
    start_total = time.time()
    for i, target in enumerate(valid_targets, 1):
        print(f"\nRunning {i}/{len(valid_targets)}: {target}")
        result = run_make_target(target)
        results.append(result)
        
        # Get test result details
        test_details = ""
        if result.get("total_tests", 0) > 0:
            passed = result.get("passed_tests", 0)
            total = result.get("total_tests", 0)
            test_details = f" (Tests: {passed}/{total})"
            
        print(f"Result: {result['status']}{test_details} (Runtime: {result.get('runtime', 0.0):.2f}s)")
    end_total = time.time()
    
    # Run clean target after all tests
    print("\n🧹 Cleaning up build artifacts...")
    subprocess.run(["make", "clean"], check=False)
    
    print("\n📊 Generating report...")
    generate_report(results, module_mappings)
    
    total_runtime = end_total - start_total
    print(f"\n✅ Done! Report saved to {REPORT_FILE}")
    print(f"Total runtime: {total_runtime:.2f} seconds")

if __name__ == "__main__":
    main()