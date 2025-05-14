#!/usr/bin/env python3

import os
import subprocess
import re
import sys
import time
from datetime import datetime
import glob

# Define the base directory
BASE_DIR = os.getcwd()
LIBRARIES_DIR = os.path.join(BASE_DIR, "libraries")
REPORT_FILE = os.path.join(BASE_DIR, "REPORT.md")

# Get all make targets from Makefile
def get_make_targets():
    result = subprocess.run(["make", "-pRrq", ":"], 
                           capture_output=True, 
                           text=True, 
                           check=False)
    
    output = result.stdout
    # Extract targets that start with run_
    targets = []
    for line in output.split('\n'):
        if line.startswith('run_') and ':' in line and '#' not in line:
            target = line.split(':')[0].strip()
            # Skip special targets and the template target run_$(1)
            if target not in ["run_config_fir_low_pass", "run_config_fir_high_pass", "run_$(1)"]:
                targets.append(target)
    
    # Add variable-based targets
    targets.extend([
        "run_param_freq_div",  # From PARAM_FREQ_DIV_TARGET
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
    
    return rtl_files

# Map make targets to module names and directories
def map_targets_to_modules(rtl_files):
    # Create a mapping from module name to make target
    module_mappings = {}
    for module_name, info in rtl_files.items():
        # Map to make target by prepending 'run_' to the module name
        target_name = f"run_{module_name}"
        
        module_mappings[target_name] = {
            "module_name": module_name,
            "file": info["file"],
            "tb_file": info["tb_file"],
            "directory": info["directory"]
        }
    
    return module_mappings

# Run a make target and capture the result with timing information
def run_make_target(target):
    print(f"\n📋 Running target: {target}")
    try:
        start_time = time.time()
        process = subprocess.run(["make", target], 
                                capture_output=True, 
                                text=True, 
                                check=False,
                                timeout=120)  # Set timeout to 2 minutes
        end_time = time.time()
        elapsed_time = end_time - start_time
        
        # Check if the target succeeded
        if process.returncode == 0:
            result = "✅ PASSED"
            # Try to find more specific pass information
            if "ALL TESTS PASSED" in process.stdout:
                details = "All tests passed"
            elif "Test PASSED" in process.stdout:
                details = "Test passed"
            elif "PASS" in process.stdout:
                details = "Tests passed"
            else:
                details = "Execution completed successfully"
        else:
            result = "❌ FAILED"
            # Try to find error message
            if "Error" in process.stderr:
                error_lines = [line for line in process.stderr.splitlines() if "Error" in line]
                details = error_lines[0] if error_lines else "Unknown error"
            elif "Warning" in process.stderr and "Exiting due to" in process.stderr:
                warning_lines = [line for line in process.stderr.splitlines() if "Warning" in line]
                details = warning_lines[0] if warning_lines else "Warnings caused failure"
            else:
                details = f"Process exited with code {process.returncode}"
        
        return {
            "target": target,
            "status": result,
            "details": details,
            "stdout": process.stdout,
            "stderr": process.stderr,
            "runtime": elapsed_time
        }
    except subprocess.TimeoutExpired:
        return {
            "target": target,
            "status": "⚠️ TIMEOUT",
            "details": "Execution exceeded 2 minutes and was terminated",
            "stdout": "",
            "stderr": "",
            "runtime": 120.0  # Timeout value
        }
    except Exception as e:
        return {
            "target": target,
            "status": "❌ ERROR",
            "details": str(e),
            "stdout": "",
            "stderr": "",
            "runtime": 0.0
        }

# Categorize modules based on their directory
def categorize_modules(module_mappings):
    categories = {}
    
    # Create a mapping from directory to category
    dir_to_category = {
        "adders": "Adders",
        "arbiters": "Arbitration",
        "alu": "Arithmetic",
        "comms": "Communication",
        "codings": "Encoding/Decoding",
        "counters": "Counters",
        "dividers": "Division",
        "fifo": "FIFOs",
        "filters": "Filters",
        "fsm": "State Machines",
        "mems": "Memory",
        "multipliers": "Multiplication",
        "registers": "Registers",
        "signals": "Signal Processing"
    }
    
    # Map each target to its category
    for target, info in module_mappings.items():
        directory = info["directory"]
        
        # Special case for fp_adder in root directory
        if not directory and "fp_adder" in info["module_name"]:
            category = "Arithmetic"
        else:
            category = dir_to_category.get(directory, "Miscellaneous")
            
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
        "Not Tested": "- NOT TESTED"
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
        
        # Calculate total and average runtime
        total_runtime = sum(r.get("runtime", 0.0) for r in results)
        avg_runtime = total_runtime / total if total > 0 else 0
        
        f.write("## Summary\n\n")
        f.write(f"- Total modules tested: {total}\n")
        f.write(f"- Passed: {passed} ({passed/total*100:.1f}%)\n")
        f.write(f"- Failed: {failed} ({failed/total*100:.1f}%)\n")
        f.write(f"- Timeouts: {timeouts}\n")
        f.write(f"- Total runtime: {total_runtime:.2f} seconds\n")
        f.write(f"- Average runtime per module: {avg_runtime:.2f} seconds\n\n")
        
        # Create a summary table
        f.write("## Category Overview\n\n")
        f.write("| Category | Passed | Failed | Pass Rate | Avg Runtime (s) |\n")
        f.write("|----------|-------:|-------:|----------:|----------------:|\n")
        
        for category, targets in sorted(categories.items()):
            cat_total = len(targets)
            cat_passed = sum(1 for t in targets if t in results_dict and "PASS" in results_dict[t]["status"])
            cat_failed = sum(1 for t in targets if t in results_dict and "FAIL" in results_dict[t]["status"])
            pass_rate = cat_passed / cat_total * 100 if cat_total > 0 else 0
            
            # Calculate category runtime stats
            cat_runtime = sum(results_dict[t].get("runtime", 0.0) for t in targets if t in results_dict)
            cat_avg_runtime = cat_runtime / cat_total if cat_total > 0 else 0
            
            # Add link to category section
            category_id = category.lower().replace(' ', '-')
            f.write(f"| [{category}](#category-{category_id}) | {cat_passed} | {cat_failed} | {pass_rate:.1f}% | {cat_avg_runtime:.2f} |\n")
        
        # Detailed results by category
        f.write("\n## Detailed Results\n\n")
        
        for category, targets in sorted(categories.items()):
            # Create an anchor for the category
            category_id = category.lower().replace(' ', '-')
            f.write(f"<a name='category-{category_id}'></a>\n")
            f.write(f"### {category}\n\n")
            
            # Add a link back to top
            f.write("[Back to top](#table-of-contents)\n\n")
            
            f.write("| Module | File Path | Status | Runtime (s) | Details |\n")
            f.write("|--------|-----------|:------:|------------:|----------|\n")
            
            for target in sorted(targets):
                if target in module_mappings:
                    module_name = module_mappings[target]["module_name"]
                    file_path = module_mappings[target]["file"]
                else:
                    module_name = target.replace("run_", "")
                    file_path = "Unknown"
                
                if target in results_dict:
                    result = results_dict[target]
                    status_key = "PASSED" if "PASS" in result["status"] else "FAILED" if "FAIL" in result["status"] else "TIMEOUT" if "TIMEOUT" in result["status"] else "ERROR"
                    status = status_symbols[status_key]
                    details = result["details"]
                    runtime = result.get("runtime", 0.0)
                else:
                    status = status_symbols["Not Tested"]
                    details = "Module was not tested"
                    runtime = 0.0
                
                f.write(f"| {module_name} | {file_path} | {status} | {runtime:.2f} | {details} |\n")
            
            f.write("\n")
        
        f.write("<a name='notes'></a>\n")
        f.write("## Notes\n\n")
        f.write("- Tests were run using Verilator with the build directory set to 'build'\n")
        f.write("- Some tests may fail due to issues with the implementation, not the build system\n")
        f.write("- Timeouts indicate tests that took longer than 2 minutes to complete\n")
        f.write("- Runtime measurements include compilation and execution time\n")

def main():
    print("🔍 Scanning for RTL files and their testbenches...")
    rtl_files = scan_rtl_files()
    print(f"Found {len(rtl_files)} RTL modules with testbenches.")
    
    print("🔍 Mapping RTL files to make targets...")
    module_mappings = map_targets_to_modules(rtl_files)
    
    print("🔍 Getting available make targets...")
    targets = get_make_targets()
    print(f"Found {len(targets)} make targets.")
    
    # Filter targets that have a matching RTL file and testbench
    valid_targets = [t for t in targets if t in module_mappings]
    print(f"Found {len(valid_targets)} valid targets with matching RTL files.")
    
    print("🧪 Running tests for each target...")
    results = []
    
    start_total = time.time()
    for i, target in enumerate(valid_targets, 1):
        print(f"\nRunning {i}/{len(valid_targets)}: {target}")
        result = run_make_target(target)
        results.append(result)
        print(f"Result: {result['status']} (Runtime: {result.get('runtime', 0.0):.2f}s)")
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