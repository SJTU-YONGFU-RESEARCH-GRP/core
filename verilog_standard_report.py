import os
from pyverilog.vparser.parser import parse
from collections import defaultdict
import argparse
import logging
import sys
from typing import Dict, Set, List, Tuple
import time
import matplotlib.pyplot as plt
import numpy as np
import base64
from io import BytesIO

# Default directory to scan
DEFAULT_LIBRARIES_DIR = os.path.join(os.path.dirname(__file__), 'libraries')
VERILOG_EXTENSIONS = ['.v', '.sv']
PLOTS_DIR = os.path.join(os.path.dirname(__file__), 'plots')

# Features unique to each standard
FEATURES = {
    'Verilog-1995': [
        'defparam', 'initial', 'always', 'reg', 'wire', 'module', 'endmodule',
        'input', 'output', 'inout', 'parameter', 'integer', 'real', 'time',
        'single-dimensional array'  # Basic array syntax
    ],
    'Verilog-2001': [
        'generate', 'endgenerate', 'signed', 'localparam', 'automatic',
        'genvar', 'for', 'ifdef', 'ifndef', 'elsif', 'casex', 'casez',
        'function', 'task', 'begin', 'end', 'fork', 'join',
        'array indexing'  # Enhanced array indexing
    ],
    'Verilog-2005': [
        'uwire', 'wor', 'wand', 'triand', 'trior', 'trireg',
        'specify', 'endspecify', 'specparam', 'pulsestyle_onevent',
        'pulsestyle_ondetect', 'showcancelled', 'noshowcancelled',
        'packed array'  # Basic packed array support
    ],
    'SystemVerilog-2005': [
        'interface', 'logic', 'typedef', 'enum', 'unique', 'priority',
        'struct', 'union', 'packed', 'unpacked', 'bit', 'byte', 'shortint',
        'int', 'longint', 'time', 'real', 'shortreal', 'string', 'chandle',
        'multi-dimensional array',  # Multi-dimensional array syntax
        'array slicing',  # Array slicing operations
        'dynamic array',  # Dynamic array declarations
        'associative array',  # Associative array support
        'array methods',  # Array manipulation methods
        'array literals'  # Array literal syntax
    ],
    'SystemVerilog-2009': [
        'class', 'virtual', 'extends', 'implements', 'interface class',
        'covergroup', 'coverpoint', 'cross', 'bins', 'ignore_bins',
        'illegal_bins', 'wildcard', 'intersect', 'first_match',
        'array streaming',  # Array streaming operators
        'array reduction'  # Array reduction methods
    ],
    'SystemVerilog-2012': [
        'program', 'checker', 'randsequence', 'randcase', 'constraint',
        'solve', 'before', 'dist', 'inside', 'with', 'foreach', 'array',
        'associative', 'dynamic', 'queue', 'mailbox', 'semaphore',
        'array manipulation',  # Advanced array manipulation
        'array querying'  # Array query methods
    ],
    'SystemVerilog-2017': [
        'let', 'sequence', 'property', 'assert', 'assume', 'cover',
        'restrict', 'expect', 'strong', 'weak', 'eventually', 'always',
        's_always', 's_eventually', 's_nexttime', 's_until', 's_until_with',
        'array patterns'  # Array pattern matching
    ]
}

# Map features to standards for quick lookup
FEATURE_TO_STANDARD = {}
for std, feats in FEATURES.items():
    for feat in feats:
        FEATURE_TO_STANDARD[feat] = std

class VerilogAnalyzer:
    def __init__(self, path: str, logger: logging.Logger):
        self.path = path
        self.logger = logger
        self.file_results: Dict[str, dict] = {}
        self.standard_counts = defaultdict(int)
        self.total_files = 0
        self.successful_files = 0
        self.failed_files = 0
        
        # Ensure plots directory exists
        os.makedirs(PLOTS_DIR, exist_ok=True)

    def find_verilog_files(self) -> List[str]:
        """Find Verilog files in the path (file or directory)."""
        if os.path.isfile(self.path):
            # If it's a single file, check if it's a Verilog file
            if any(self.path.lower().endswith(ext) for ext in VERILOG_EXTENSIONS):
                return [self.path]
            else:
                self.logger.warning(f"File {self.path} is not a Verilog file")
                return []
        elif os.path.isdir(self.path):
            # If it's a directory, find all Verilog files
            verilog_files = []
            for dirpath, _, filenames in os.walk(self.path):
                for fname in filenames:
                    if any(fname.lower().endswith(ext) for ext in VERILOG_EXTENSIONS):
                        verilog_files.append(os.path.join(dirpath, fname))
            return verilog_files
        else:
            self.logger.error(f"Path {self.path} does not exist")
            return []

    def analyze_file(self, filepath: str) -> dict:
        """Analyze a single Verilog file for standards and features."""
        try:
            # Configure parser for SystemVerilog
            preprocess_include = []
            preprocess_define = []
            
            # Try parsing with SystemVerilog support
            try:
                ast, _ = parse([filepath],
                             preprocess_include=preprocess_include,
                             preprocess_define=preprocess_define,
                             debug=False)  # Disable debug output
            except Exception as e:
                # If parsing fails, try to identify the specific issue
                with open(filepath, 'r') as f:
                    content = f.read()
                    lines = content.split('\n')
                    
                    # Initialize features and standards sets
                    features_found = set()
                    standards_found = set()
                    
                    # Check for basic Verilog features first
                    if 'module' in content:
                        features_found.add('module')
                        standards_found.add('Verilog-1995')
                    
                    # Check for function declarations and parameters
                    for i, line in enumerate(lines, 1):
                        # Check for function declarations
                        if 'function' in line:
                            features_found.add('function')
                            standards_found.add('Verilog-1995')
                            # Check for automatic functions
                            if 'automatic' in line:
                                features_found.add('automatic function')
                                standards_found.add('Verilog-2001')
                            # Check for function parameters
                            if 'input' in line:
                                features_found.add('function parameters')
                                standards_found.add('Verilog-1995')
                            # Check for function return value
                            if not any(keyword in line for keyword in ['input', 'output', 'inout']):
                                features_found.add('function return value')
                                standards_found.add('Verilog-1995')
                            continue
                            
                        # Check for parameter declarations
                        if 'parameter' in line:
                            features_found.add('parameter')
                            standards_found.add('Verilog-1995')
                            # Check for parameter dependencies
                            if '(' in line and ')' in line:
                                features_found.add('parameter dependency')
                                standards_found.add('Verilog-2001')
                            continue
                            
                        # Check for integer declarations
                        if 'integer' in line:
                            features_found.add('integer')
                            standards_found.add('Verilog-1995')
                            continue
                            
                        # Check for array syntax issues
                        if '[' in line and ']' in line:
                            # Check for multi-dimensional array syntax
                            if line.count('[') > 1 and line.count(']') > 1:
                                # Check if it's a valid SystemVerilog array declaration
                                if any(keyword in line for keyword in ['wire', 'reg', 'logic', 'input', 'output']):
                                    features_found.add('multi-dimensional array')
                                    standards_found.add('SystemVerilog-2005')
                                    continue
                            # Check for nested array syntax
                            if '][' in line:
                                features_found.add('array')
                                standards_found.add('SystemVerilog-2005')
                                continue
                            # Check for array declarations
                            if any(keyword in line for keyword in ['wire', 'reg', 'logic']):
                                if line.count('[') > 1:
                                    features_found.add('array')
                                    standards_found.add('SystemVerilog-2005')
                                    continue
                    
                    # Check for generate blocks
                    if 'generate' in content:
                        features_found.add('generate')
                        standards_found.add('Verilog-2001')
                    
                    # Check for preprocessor directives
                    if '`ifndef' in content or '`define' in content:
                        features_found.add('preprocessor')
                        standards_found.add('Verilog-1995')
                    
                    # If we found any features, return them instead of an error
                    if features_found and standards_found:
                        return {
                            'error': None,
                            'standards': standards_found,
                            'features': features_found,
                            'parse_time': 0
                        }
                
                # If we can't identify any features, return the original error
                return {
                    'error': f'Parsing error: {str(e)}',
                    'standards': set(),
                    'features': set(),
                    'parse_time': 0
                }
            
            start_time = time.time()
            parse_time = time.time() - start_time
            
            features_found = set()
            standards_found = set()
            
            def walk(node):
                node_type = node.__class__.__name__
                
                # Data types
                if node_type in ['IntConst', 'Integer']:
                    features_found.add('int')
                    standards_found.add('SystemVerilog-2005')
                elif node_type == 'RealConst':
                    features_found.add('real')
                    standards_found.add('Verilog-1995')
                elif node_type == 'Reg':
                    features_found.add('reg')
                    standards_found.add('Verilog-1995')
                elif node_type == 'Wire':
                    features_found.add('wire')
                    standards_found.add('Verilog-1995')
                elif node_type == 'Logic':
                    features_found.add('logic')
                    standards_found.add('SystemVerilog-2005')
                    
                # Module constructs
                elif node_type == 'ModuleDef':
                    features_found.add('module')
                    standards_found.add('Verilog-1995')
                elif node_type == 'Interface':
                    features_found.add('interface')
                    standards_found.add('SystemVerilog-2005')
                    
                # Behavioral constructs
                elif node_type == 'Always':
                    features_found.add('always')
                    standards_found.add('Verilog-1995')
                elif node_type == 'Initial':
                    features_found.add('initial')
                    standards_found.add('Verilog-1995')
                elif node_type == 'GenerateStatement':
                    features_found.add('generate')
                    standards_found.add('Verilog-2001')
                    
                # Check for other features
                node_str = str(node)
                for feat, std in FEATURE_TO_STANDARD.items():
                    if feat in node_str and feat not in features_found:
                        features_found.add(feat)
                        standards_found.add(std)
                        
                for c in node.children():
                    walk(c)
                    
            walk(ast)
            return {
                'error': None,
                'standards': standards_found,
                'features': features_found,
                'parse_time': parse_time
            }
            
        except Exception as e:
            error_msg = str(e)
            if "No such file or directory: 'iverilog'" in error_msg:
                return {'error': 'Icarus Verilog not installed. Please install iverilog.', 
                       'standards': set(), 'features': set(), 'parse_time': 0}
            elif "syntax error" in error_msg.lower():
                with open(filepath, 'r') as f:
                    content = f.read()
                    # Check for SystemVerilog array syntax
                    if '[' in content and ']' in content:
                        if content.count('[') > content.count(']'):
                            return {'error': 'Syntax error: Unmatched array brackets. This might be due to SystemVerilog array syntax.',
                                   'standards': set(), 'features': set(), 'parse_time': 0}
                        # Check for nested array syntax
                        if '][' in content:
                            return {'error': 'Syntax error: Nested array syntax detected. This requires SystemVerilog support.',
                                   'standards': set(), 'features': set(), 'parse_time': 0}
                    # Check for generate blocks
                    if 'generate' in content and 'genvar' in content:
                        return {'error': 'Syntax error: Complex generate block. This might require SystemVerilog support.',
                               'standards': set(), 'features': set(), 'parse_time': 0}
                    # Check for other SystemVerilog features
                    if any(feat in content for feat in ['logic', 'bit', 'byte', 'int', 'longint']):
                        return {'error': 'Syntax error: SystemVerilog data types detected. This requires SystemVerilog support.',
                               'standards': set(), 'features': set(), 'parse_time': 0}
                return {'error': f'Syntax error: {error_msg}',
                       'standards': set(), 'features': set(), 'parse_time': 0}
            else:
                return {'error': f'Parsing error: {error_msg}',
                       'standards': set(), 'features': set(), 'parse_time': 0}

    def analyze_directory(self):
        """Analyze Verilog files in the path."""
        verilog_files = self.find_verilog_files()
        self.total_files = len(verilog_files)
        
        if self.total_files == 0:
            self.logger.error(f"No Verilog files found in {self.path}")
            return
        
        self.logger.info(f"Found {self.total_files} Verilog file(s) to analyze")
        
        for i, vf in enumerate(verilog_files, 1):
            self.logger.info(f"Analyzing file {i}/{self.total_files}: {os.path.basename(vf)}")
            result = self.analyze_file(vf)
            self.file_results[vf] = result
            
            if result['error'] is None:
                self.successful_files += 1
                for std in result['standards']:
                    self.standard_counts[std] += 1
            else:
                self.failed_files += 1
                self.logger.warning(f"Error in {vf}: {result['error']}")

    def generate_charts(self) -> Dict[str, str]:
        """Generate charts and save them to the plots directory."""
        charts = {}
        
        # Prepare data for charts
        standards = list(FEATURES.keys())
        counts = [self.standard_counts[std] for std in standards]
        
        # Generate bar chart
        plt.figure(figsize=(12, 6))
        bars = plt.bar(standards, counts, width=0.6, color='#007bff', edgecolor='black', linewidth=2)
        plt.title('Verilog Standards Usage', fontsize=14, fontweight='bold')
        plt.xlabel('Standards', fontsize=16, fontweight='bold')
        plt.ylabel('Number of Files', fontsize=12, fontweight='bold')
        plt.xticks(rotation=30, ha='right', fontsize=12, fontweight='bold')
        plt.yticks(fontsize=12, fontweight='bold')
        
        # Add value labels on top of bars
        for bar in bars:
            height = bar.get_height()
            plt.text(bar.get_x() + bar.get_width()/2., height + 0.2,  # Slightly above bar
                    f'{int(height)}',
                    ha='center', va='bottom', fontsize=12, fontweight='bold')

        plt.grid(axis='y', linestyle='--', alpha=0.7)
        # Increase plot box outline thickness
        ax = plt.gca()
        for spine in ax.spines.values():
            spine.set_linewidth(2)  # Set to your desired thickness

        plt.tight_layout()
        bar_chart_path = os.path.join(PLOTS_DIR, 'standards_bar_chart.png')
        plt.savefig(bar_chart_path, dpi=300, bbox_inches='tight')
        plt.close()
        charts['standards_bar'] = 'standards_bar_chart.png'
        
        # Generate pie chart
        plt.figure(figsize=(8, 6))
        # Only show non-zero values
        non_zero_mask = [count > 0 for count in counts]
        non_zero_standards = [std for std, mask in zip(standards, non_zero_mask) if mask]
        non_zero_counts = [count for count, mask in zip(counts, non_zero_mask) if mask]

        colors = ['#007bff', '#ffc107', '#dc3545', '#28a745', '#6f42c1', '#fd7e14', '#20c997']
        plt.pie(non_zero_counts, labels=non_zero_standards, autopct='%1.1f%%',
                wedgeprops={'linewidth': 2, 'edgecolor': 'white'},
                colors=colors, textprops={'fontweight': 'bold'})
        plt.title('Verilog Standards Distribution', pad=20, fontsize=14, fontweight='bold')
        plt.axis('equal')
        # Save to file
        pie_chart_path = os.path.join(PLOTS_DIR, 'standards_pie_chart.png')
        plt.savefig(pie_chart_path, dpi=300, bbox_inches='tight')
        plt.close()
        charts['standards_pie'] = 'standards_pie_chart.png'
        
        # Generate feature distribution chart
        feature_counts = defaultdict(int)
        for result in self.file_results.values():
            if result['features']:
                for feature in result['features']:
                    feature_counts[feature] += 1
        
        # Sort features by count
        sorted_features = sorted(feature_counts.items(), key=lambda x: x[1], reverse=True)
        top_features = sorted_features[:10]  # Show top 10 features
        
        plt.figure(figsize=(12, 6))
        features, counts = zip(*top_features)
        bars = plt.barh(features, counts, color='#007bff', edgecolor='black', linewidth=2)
        plt.title('Top 10 Most Used Features', pad=20, fontsize=14, fontweight='bold')
        plt.xlabel('Number of Files', fontsize=12, fontweight='bold')
        plt.ylabel('Feature', fontsize=12, fontweight='bold')
        plt.xticks(rotation=30, ha='right', fontsize=12, fontweight='bold')
        plt.yticks(fontsize=12, fontweight='bold')

        # Add value labels on bars
        for bar in bars:
            width = bar.get_width()
            plt.text(width, bar.get_y() + bar.get_height()/2.,
                    f'{int(width)}',
                    ha='left', va='center', fontsize=12, fontweight='bold')
        # Increase plot box outline thickness
        ax = plt.gca()
        for spine in ax.spines.values():
            spine.set_linewidth(2)  # Set to your desired thickness

        plt.tight_layout()
        # Save to file
        features_chart_path = os.path.join(PLOTS_DIR, 'features_bar_chart.png')
        plt.savefig(features_chart_path, dpi=300, bbox_inches='tight')
        plt.close()
        charts['features_bar'] = 'features_bar_chart.png'
        
        return charts

    def generate_report(self, output_file: str):
        """Generate a markdown report of the analysis."""
        if self.total_files == 0:
            self.logger.error("No files to analyze")
            return

        lines = []
        lines.append('# Verilog Standards Analytics Report\n')
        lines.append(f'Total Verilog files analyzed: **{self.total_files}**\n')
        lines.append(f'Successfully parsed: **{self.successful_files}**\n')
        lines.append(f'Failed to parse: **{self.failed_files}**\n')
        
        # Show path type (file or directory)
        if os.path.isfile(self.path):
            lines.append(f'File analyzed: `{self.path}`\n')
        else:
            lines.append(f'Directory analyzed: `{self.path}`\n')
        
        # Standards Summary Table
        lines.append('## Standards Summary\n')
        lines.append('| Standard | File Count |')
        lines.append('|----------|------------|')
        for std in FEATURES.keys():
            lines.append(f'| {std} | {self.standard_counts[std]} |')
        lines.append('\n---\n')
        
        # File Analysis Table
        lines.append('## File-by-File Analysis\n')
        lines.append('| File | Standard(s) | Features | Parse Time | Status |')
        lines.append('|------|-------------|----------|------------|--------|')
        for vf, res in self.file_results.items():
            # For single file analysis, show just the filename
            if os.path.isfile(self.path):
                relpath = os.path.basename(vf)
            else:
                relpath = os.path.relpath(vf, self.path)
                
            if res['error']:
                status = '❌ Error'
                stds = 'N/A'
                feats = 'N/A'
                parse_time = 'N/A'
            else:
                status = '✅ OK'
                stds = ', '.join(sorted(res['standards'])) if res['standards'] else 'Unknown'
                feats = ', '.join(sorted(res['features'])) if res['features'] else 'None'
                parse_time = f"{res['parse_time']:.3f}s"
            lines.append(f'| `{relpath}` | {stds} | {feats} | {parse_time} | {status} |')
        
        # Add visualization section with HTML embedded images
        lines.append('\n## Visualizations\n')
        lines.append('The following charts provide a visual representation of the standards and features usage:\n')
        
        # Generate charts and get file paths
        charts = self.generate_charts()
        
        # Add HTML table for charts with better layout
        lines.append('<div style="display: flex; flex-direction: column; gap: 20px;">')
        
        # Standards Bar Chart
        lines.append('<div>')
        lines.append('<h3>Standards Usage (Bar Chart)</h3>')
        lines.append(f'<img src="plots/{charts["standards_bar"]}" style="width: 100%; max-width: 800px; height: auto;">')
        lines.append('</div>')
        
        # Standards Pie Chart
        lines.append('<div>')
        lines.append('<h3>Standards Distribution (Pie Chart)</h3>')
        lines.append(f'<img src="plots/{charts["standards_pie"]}" style="width: 100%; max-width: 600px; height: auto;">')
        lines.append('</div>')
        
        # Features Bar Chart
        lines.append('<div>')
        lines.append('<h3>Top 10 Most Used Features</h3>')
        lines.append(f'<img src="plots/{charts["features_bar"]}" style="width: 100%; max-width: 800px; height: auto;">')
        lines.append('</div>')
        
        lines.append('</div>')
        
        with open(output_file, 'w', encoding='utf-8') as f:
            f.write('\n'.join(lines))
        self.logger.info(f'Report generated: {output_file}')

def main():
    parser = argparse.ArgumentParser(description='Analyze Verilog files and generate a standards report.')
    parser.add_argument('--output', default='VERILOG_STANDARDS.md', help='Output markdown file')
    parser.add_argument('--loglevel', default='INFO', help='Set logging level (DEBUG, INFO, WARNING, ERROR)')
    parser.add_argument('--directory', default=DEFAULT_LIBRARIES_DIR, 
                      help='Path to Verilog file or directory containing Verilog files')
    args = parser.parse_args()
    
    # Setup logging
    logging.basicConfig(
        level=getattr(logging, args.loglevel.upper(), logging.INFO),
        format='%(asctime)s - %(levelname)s - %(message)s'
    )
    logger = logging.getLogger(__name__)
    
    try:
        analyzer = VerilogAnalyzer(args.directory, logger)
        analyzer.analyze_directory()
        analyzer.generate_report(args.output)
    except Exception as e:
        logger.error(f"An error occurred: {str(e)}")
        sys.exit(1)

if __name__ == '__main__':
    main() 