import os
import re
from collections import defaultdict
import statistics
import json
from pathlib import Path
import matplotlib.pyplot as plt
import numpy as np
import argparse
import logging
import subprocess

class VerilogAnalyzer:
    def __init__(self, root_dir, logger=None):
        self.root_dir = root_dir
        self.logger = logger or logging.getLogger(__name__)
        self.stats = {
            'total_modules': 0,
            'modules_by_category': defaultdict(int),
            'parameter_usage': defaultdict(int),
            'module_complexity': [],
            'clock_domains': defaultdict(int),
            'synchronous_designs': 0,
            'asynchronous_designs': 0,
            'interface_complexity': [],
            'design_patterns': defaultdict(int),
            'code_metrics': []
        }
        
    def analyze_file(self, file_path):
        with open(file_path, 'r') as f:
            content = f.read()
            
        # Basic metrics
        lines = content.split('\n')
        non_empty_lines = [l for l in lines if l.strip()]
        comments = len([l for l in lines if l.strip().startswith('//') or l.strip().startswith('/*')])
        
        # Module parameters
        param_pattern = r'parameter\s+(\w+)\s*='
        params = re.findall(param_pattern, content)
        
        # Port analysis
        port_pattern = r'(input|output|inout)\s+(?:wire|reg)?\s*(?:\[([^\]]+)\])?\s*(\w+)'
        ports = re.findall(port_pattern, content)
        
        # Clock domain analysis
        clock_pattern = r'(?:posedge|negedge)\s+(\w+)'
        clocks = re.findall(clock_pattern, content)
        
        # Design pattern detection
        patterns = {
            'generate': 'generate' in content,
            'always_ff': 'always_ff' in content,
            'always_comb': 'always_comb' in content,
            'case': 'case' in content,
            'if_else': 'if' in content and 'else' in content,
            'for_loop': 'for' in content,
            'while_loop': 'while' in content
        }
        
        return {
            'lines': len(lines),
            'non_empty_lines': len(non_empty_lines),
            'comments': comments,
            'parameters': len(params),
            'ports': len(ports),
            'clocks': len(clocks),
            'patterns': patterns
        }
    
    def analyze_directory(self):
        for root, dirs, files in os.walk(self.root_dir):
            for file in files:
                if file.endswith('.v'):
                    file_path = os.path.join(root, file)
                    category = os.path.basename(os.path.dirname(file_path))
                    
                    # Update basic stats
                    self.stats['total_modules'] += 1
                    self.stats['modules_by_category'][category] += 1
                    
                    # Analyze file
                    file_stats = self.analyze_file(file_path)
                    self.stats['code_metrics'].append(file_stats)
                    
                    # Update complexity metrics
                    self.stats['module_complexity'].append({
                        'name': file,
                        'category': category,
                        'parameters': file_stats['parameters'],
                        'ports': file_stats['ports'],
                        'lines': file_stats['lines']
                    })
                    
                    # Update design patterns
                    for pattern, present in file_stats['patterns'].items():
                        if present:
                            self.stats['design_patterns'][pattern] += 1
                    
                    # Clock domain analysis
                    if file_stats['clocks'] > 0:
                        self.stats['synchronous_designs'] += 1
                    else:
                        self.stats['asynchronous_designs'] += 1

    def generate_plots(self):
        # Use default style and set background to white, black lines
        plt.style.use('default')
        plt.rcParams['axes.facecolor'] = 'white'
        plt.rcParams['figure.facecolor'] = 'white'
        plt.rcParams['lines.linewidth'] = 2.0
        plt.rcParams['axes.linewidth'] = 2.0
        plt.rcParams['axes.edgecolor'] = 'black'
        plt.rcParams['xtick.major.width'] = 2.0
        plt.rcParams['ytick.major.width'] = 2.0
        plt.rcParams['xtick.color'] = 'black'
        plt.rcParams['ytick.color'] = 'black'
        plt.rcParams['font.size'] = 12
        plt.rcParams['axes.grid'] = False
        plt.rcParams['grid.alpha'] = 0.7
        plt.rcParams['grid.linestyle'] = '--'
        plt.rcParams['grid.color'] = 'black'
        
        # Create plots directory if it doesn't exist
        os.makedirs('plots', exist_ok=True)
        
        # Module distribution by category
        categories = list(self.stats['modules_by_category'].keys())
        counts = list(self.stats['modules_by_category'].values())
        plt.figure(figsize=(12, 6))
        bars = plt.bar(categories, counts, width=0.6, color='#007bff')  # Blue
        plt.xticks(rotation=45, ha='right', fontweight='bold')
        plt.yticks(fontweight='bold')
        plt.title('Module Distribution by Category', pad=20, fontsize=14, fontweight='bold')
        plt.ylabel('Number of Modules', fontsize=12, fontweight='bold')
        plt.tight_layout()
        # Annotate bar values
        for bar in bars:
            height = bar.get_height()
            plt.annotate(f'{height}',
                         xy=(bar.get_x() + bar.get_width() / 2, height),
                         xytext=(0, 3),  # 3 points vertical offset
                         textcoords="offset points",
                         ha='center', va='bottom', fontsize=8, fontweight='bold')
        plt.savefig('plots/module_distribution.png', dpi=300, bbox_inches='tight')
        plt.close()
        
        # Design patterns usage
        patterns = list(self.stats['design_patterns'].keys())
        pattern_counts = list(self.stats['design_patterns'].values())
        plt.figure(figsize=(10, 6))
        bars = plt.bar(patterns, pattern_counts, width=0.6, color='#007bff')
        plt.xticks(rotation=45, ha='right', fontweight='bold')
        plt.yticks(fontweight='bold')
        plt.title('Design Pattern Usage', pad=20, fontsize=14, fontweight='bold')
        plt.ylabel('Number of Modules', fontsize=12, fontweight='bold')
        plt.tight_layout()
        # Annotate bar values
        for bar in bars:
            height = bar.get_height()
            plt.annotate(f'{height}',
                         xy=(bar.get_x() + bar.get_width() / 2, height),
                         xytext=(0, 3),
                         textcoords="offset points",
                         ha='center', va='bottom', fontsize=8, fontweight='bold')
        plt.savefig('plots/design_patterns.png', dpi=300, bbox_inches='tight')
        plt.close()
        
        # Module complexity distribution
        complexity = {
            'Simple (0-50 lines)': len([m for m in self.stats['code_metrics'] if m['lines'] <= 50]),
            'Medium (51-200 lines)': len([m for m in self.stats['code_metrics'] if 50 < m['lines'] <= 200]),
            'Complex (>200 lines)': len([m for m in self.stats['code_metrics'] if m['lines'] > 200])
        }
        colors = ['#007bff', '#ffc107', '#dc3545']  # Blue, Yellow, Red
        plt.figure(figsize=(8, 6))
        plt.pie(complexity.values(), labels=complexity.keys(), autopct='%1.1f%%',
                wedgeprops={'linewidth': 2, 'edgecolor': 'white'},
                colors=colors, textprops={'fontweight': 'bold'})
        plt.title('Module Complexity Distribution', pad=20, fontsize=14, fontweight='bold')
        plt.tight_layout()
        plt.savefig('plots/complexity_distribution.png', dpi=300, bbox_inches='tight')
        plt.close()

        # --- Yosys-based plots ---
        synth_stats, cell_type_totals, wire_counts, memory_counts, cell_counts, area_counts = self.gather_synthesis_stats()
        # Histogram of cell counts
        cell_counts_nonzero = [c for c in cell_counts if c > 0]
        if cell_counts_nonzero:
            plt.figure(figsize=(10, 6))
            bins = np.logspace(np.log10(min(cell_counts_nonzero)), np.log10(max(cell_counts_nonzero)), 50)
            n, bins, patches = plt.hist(cell_counts_nonzero, bins=bins, color='#007bff', edgecolor='black', alpha=0.8)
            plt.title('Distribution of Cell Counts per Module', pad=20, fontsize=14, fontweight='bold')
            plt.xlabel('Cell Count', fontsize=12, fontweight='bold')
            plt.ylabel('Number of Modules', fontsize=12, fontweight='bold')
            plt.xscale('log')
            plt.yscale('log')
            plt.tight_layout()
            # Annotate histogram bars
            for i in range(len(patches)):
                height = n[i]
                if height > 0:
                    plt.annotate(f'{int(height)}',
                                 xy=(patches[i].get_x() + patches[i].get_width() / 2, height),
                                 xytext=(0, 3),
                                 textcoords="offset points",
                                 ha='center', va='bottom', fontsize=8, fontweight='bold')
            plt.savefig('plots/cell_count_histogram.png', dpi=300, bbox_inches='tight')
            plt.close()
        # Histogram of wire counts
        wire_counts_nonzero = [w for w in wire_counts if w > 0]
        if wire_counts_nonzero:
            plt.figure(figsize=(10, 6))
            bins = np.logspace(np.log10(min(wire_counts_nonzero)), np.log10(max(wire_counts_nonzero)), 50)
            n, bins, patches = plt.hist(wire_counts_nonzero, bins=bins, color='#007bff', edgecolor='black', alpha=0.8)
            plt.title('Distribution of Wire Counts per Module', pad=20, fontsize=14, fontweight='bold')
            plt.xlabel('Wire Count', fontsize=12, fontweight='bold')
            plt.ylabel('Number of Modules', fontsize=12, fontweight='bold')
            plt.xscale('log')
            plt.yscale('log')
            plt.tight_layout()
            # Annotate histogram bars
            for i in range(len(patches)):
                height = n[i]
                if height > 0:
                    plt.annotate(f'{int(height)}',
                                 xy=(patches[i].get_x() + patches[i].get_width() / 2, height),
                                 xytext=(0, 3),
                                 textcoords="offset points",
                                 ha='center', va='bottom', fontsize=8, fontweight='bold')
            plt.savefig('plots/wire_count_histogram.png', dpi=300, bbox_inches='tight')
            plt.close()
        # Histogram of memory counts
        if memory_counts:
            plt.figure(figsize=(10, 6))
            n, bins, patches = plt.hist(memory_counts, bins=20, color='#007bff', edgecolor='black', alpha=0.8)
            plt.title('Distribution of Memory Counts per Module', pad=20, fontsize=14, fontweight='bold')
            plt.xlabel('Memory Count', fontsize=12, fontweight='bold')
            plt.ylabel('Number of Modules', fontsize=12, fontweight='bold')
            plt.tight_layout()
            # Annotate histogram bars
            for i in range(len(patches)):
                height = n[i]
                if height > 0:
                    plt.annotate(f'{int(height)}',
                                 xy=(patches[i].get_x() + patches[i].get_width() / 2, height),
                                 xytext=(0, 3),
                                 textcoords="offset points",
                                 ha='center', va='bottom', fontsize=8, fontweight='bold')
            plt.savefig('plots/memory_count_histogram.png', dpi=300, bbox_inches='tight')
            plt.close()
        # Bar chart of most common cell types
        if cell_type_totals:
            # Filter out paramod cell types for plotting
            filtered_cells = [
                (re.sub(r'[^a-zA-Z0-9]+', '_', re.sub(r'^\$_?', '', c)).strip('_'), v)
                for c, v in cell_type_totals.items()
                if not re.sub(r'[^a-zA-Z0-9]+', '_', re.sub(r'^\$_?', '', c)).strip('_').lower().startswith('paramod')
            ]
            sorted_cells = sorted(filtered_cells, key=lambda x: x[1], reverse=True)[:20]
            labels = [c[0] for c in sorted_cells]
            counts = [c[1] for c in sorted_cells]
            plt.figure(figsize=(12, 6))
            bars = plt.bar(labels, counts, color='#007bff')
            plt.xticks(rotation=45, ha='right', fontweight='bold')
            plt.yticks(fontweight='bold')
            plt.title('Top 20 Most Common Cell Types (All Modules)', pad=20, fontsize=14, fontweight='bold')
            plt.ylabel('Number of Modules', fontsize=12, fontweight='bold')
            plt.tight_layout()
            # Annotate bar values
            for bar in bars:
                height = bar.get_height()
                plt.annotate(f'{height}',
                             xy=(bar.get_x() + bar.get_width() / 2, height),
                             xytext=(0, 3),
                             textcoords="offset points",
                             ha='center', va='bottom', fontsize=8, fontweight='bold')
            plt.savefig('plots/cell_type_histogram.png', dpi=300, bbox_inches='tight')
            plt.close()


    def parse_yosys_log(self, log_path):
        stats = {}
        if not os.path.exists(log_path):
            return stats
        with open(log_path, 'r') as f:
            lines = f.readlines()
        for i, line in enumerate(lines):
            if 'Number of wires:' in line:
                stats['wire_count'] = int(line.split(':')[1].strip())
            if 'Number of wire bits:' in line:
                stats['wire_bits'] = int(line.split(':')[1].strip())
            if 'Number of public wires:' in line:
                stats['public_wire_count'] = int(line.split(':')[1].strip())
            if 'Number of public wire bits:' in line:
                stats['public_wire_bits'] = int(line.split(':')[1].strip())
            if 'Number of ports:' in line:
                stats['port_count'] = int(line.split(':')[1].strip())
            if 'Number of port bits:' in line:
                stats['port_bits'] = int(line.split(':')[1].strip())
            if 'Number of memories:' in line:
                stats['memories'] = int(line.split(':')[1].strip())
            if 'Number of memory bits:' in line:
                stats['memory_bits'] = int(line.split(':')[1].strip())
            if 'Number of cells:' in line:
                stats['cell_count'] = int(line.split(':')[1].strip())
            if '=== cells ===' in line:
                stats['cell_types'] = {}
                for cell_line in lines[i+1:]:
                    if cell_line.strip() == '' or cell_line.startswith('==='):
                        break
                    parts = cell_line.strip().split()
                    if len(parts) == 2:
                        stats['cell_types'][parts[0]] = int(parts[1])
        return stats

    def gather_synthesis_stats(self):
        synth_stats = {}
        cell_type_totals = {}
        wire_counts = []
        memory_counts = []
        cell_counts = []
        area_counts = []
        for mod in self.stats['module_complexity']:
            name = mod['name'].replace('.v', '')
            log_path = os.path.join('build', f'{name}.yosys.log')
            json_path = os.path.join('build', f'{name}.yosys.json')
            stats = self.parse_yosys_log(log_path)
            # Try to parse JSON for richer details
            if os.path.exists(json_path):
                try:
                    with open(json_path, 'r') as jf:
                        yosys_json = json.load(jf)
                    modules = yosys_json.get('modules', {})
                    design = modules.get(name)
                    if not design:
                        if len(modules) == 1:
                            only_mod_name = list(modules.keys())[0]
                            print(f"[DEBUG] Module '{name}' not found in {json_path}. Using only module '{only_mod_name}' in file.")
                            design = modules[only_mod_name]
                        else:
                            print(f"[DEBUG] Module '{name}' not found in {json_path}. Available modules: {list(modules.keys())}")
                    # Only extract if a design is found
                    if design:
                        # Prefer log values for wire_count, memories, port_count
                        if 'wire_count' not in stats:
                            wire_count = len(design.get('wires', {}))
                            stats['wire_count'] = wire_count
                        if 'memories' not in stats:
                            memories = design.get('memories', {})
                            stats['memories'] = len(memories)
                        if 'port_count' not in stats:
                            ports = design.get('ports', {})
                            stats['port_count'] = len(ports)
                        # Collect for summary/plots
                        if 'wire_count' in stats:
                            wire_counts.append(stats['wire_count'])
                        if 'memories' in stats:
                            memory_counts.append(stats['memories'])
                        # Cells
                        cells = design.get('cells', {})
                        stats['cell_count'] = len(cells)
                        cell_counts.append(len(cells))
                        # Area (if available)
                        area = design.get('attributes', {}).get('area', None)
                        if area is not None:
                            stats['area'] = area
                            area_counts.append(float(area))
                        # Cell breakdown
                        cell_types = {}
                        for cell in cells.values():
                            cell_type = cell.get('type', 'unknown')
                            cell_types[cell_type] = cell_types.get(cell_type, 0) + 1
                        stats['cell_types'] = cell_types
                        for cell, count in cell_types.items():
                            cell_type_totals[cell] = cell_type_totals.get(cell, 0) + count
                except Exception as e:
                    self.logger.warning(f"Failed to parse {json_path}: {e}")
            else:
                # Fallback: parse log for cell types
                if stats.get('cell_types'):
                    for cell, count in stats['cell_types'].items():
                        cell_type_totals[cell] = cell_type_totals.get(cell, 0) + count
                if 'wire_count' in stats:
                    wire_counts.append(stats['wire_count'])
                if 'memories' in stats:
                    memory_counts.append(stats['memories'])
                if 'cell_count' in stats:
                    cell_counts.append(stats['cell_count'])
            if stats:
                synth_stats[name] = stats
        return synth_stats, cell_type_totals, wire_counts, memory_counts, cell_counts, area_counts
        
    def generate_markdown_report(self):
        # Generate plots first
        self.generate_plots()
        
        # Gather synthesis stats
        synth_stats, cell_type_totals, wire_counts, memory_counts, cell_counts, area_counts = self.gather_synthesis_stats()
        
        # Create markdown content
        md_content = f"""# Verilog Dataset Analysis Report

## Dataset Overview

The dataset contains {self.stats['total_modules']} Verilog modules across {len(self.stats['modules_by_category'])} different categories, providing a comprehensive collection of digital design components.

### Module Distribution by Category

![Module Distribution](plots/module_distribution.png)

### Synchronous vs Asynchronous Designs

- Synchronous Designs: {self.stats['synchronous_designs']}
- Asynchronous Designs: {self.stats['asynchronous_designs']}

## Code Metrics

### Average Metrics per Module
- Lines of Code: {statistics.mean([m['lines'] for m in self.stats['code_metrics']]):.2f}
- Parameters: {statistics.mean([m['parameters'] for m in self.stats['code_metrics']]):.2f}
- Ports: {statistics.mean([m['ports'] for m in self.stats['code_metrics']]):.2f}

### Module Complexity Distribution

![Complexity Distribution](plots/complexity_distribution.png)

- Simple (0-50 lines): {len([m for m in self.stats['code_metrics'] if m['lines'] <= 50])}
- Medium (51-200 lines): {len([m for m in self.stats['code_metrics'] if 50 < m['lines'] <= 200])}
- Complex (>200 lines): {len([m for m in self.stats['code_metrics'] if m['lines'] > 200])}

## Design Patterns

![Design Patterns](plots/design_patterns.png)

| Pattern | Count | Percentage |
|---------|-------|------------|
"""
        
        # Add design patterns table
        total_modules = self.stats['total_modules']
        for pattern, count in self.stats['design_patterns'].items():
            percentage = (count / total_modules) * 100
            md_content += f"| {pattern} | {count} | {percentage:.1f}% |\n"
        
        # Add category details
        md_content += "\n## Category Details\n\n"
        for category, count in sorted(self.stats['modules_by_category'].items(), key=lambda x: x[1], reverse=True):
            md_content += f"- {category}: {count} modules\n"
        
        # Add synthesis statistics
        # Determine which columns to include based on available data
        include_area = any(s.get('area') is not None for s in synth_stats.values())
        include_wire = any(s.get('wire_count') not in (None, 'N/A') for s in synth_stats.values())
        include_mem = any(s.get('memories') not in (None, 'N/A') for s in synth_stats.values())

        # Build table header
        table_header = '| Module | Gate/Cell Count '
        if include_area:
            table_header += '| Area '
        if include_wire:
            table_header += '| Wire Count '
        if include_mem:
            table_header += '| Memory Count '
        table_header += '|\n'
        table_header += '|--------|-----------------'
        if include_area:
            table_header += '|------'
        if include_wire:
            table_header += '|------------'
        if include_mem:
            table_header += '|--------------'
        table_header += '|\n'
        md_content += """

## Synthesis Statistics (Yosys)

The following table summarizes the gate (cell) count{}for each module as reported by Yosys synthesis:

""".format(
    (', area' if include_area else '') + (', wire count' if include_wire else '') + (', memory count' if include_mem else '')
)
        md_content += table_header
        for mod in self.stats['module_complexity']:
            name = mod['name'].replace('.v', '')
            cell_count = synth_stats.get(name, {}).get('cell_count', 'N/A')
            row = f'| {name} | {cell_count} '
            if include_area:
                area = synth_stats.get(name, {}).get('area', 'N/A')
                row += f'| {area} '
            if include_wire:
                wire_count = synth_stats.get(name, {}).get('wire_count', 'N/A')
                row += f'| {wire_count} '
            if include_mem:
                mem_count = synth_stats.get(name, {}).get('memories', 'N/A')
                row += f'| {mem_count} '
            row += '|\n'
            md_content += row
        # Add summary statistics if available
        if cell_counts:
            md_content += f"\n- **Average Gate/Cell Count:** {statistics.mean(cell_counts):.2f}\n"
        if include_area and area_counts:
            md_content += f"- **Average Area:** {statistics.mean([float(a) for a in area_counts]):.2f}\n"
        if include_wire and wire_counts:
            md_content += f"- **Average Wire Count:** {statistics.mean(wire_counts):.2f}\n"
        if include_mem and memory_counts:
            md_content += f"- **Average Memory Count:** {statistics.mean(memory_counts):.2f}\n"

        # Add cell type summary if available
        if cell_type_totals:
            md_content += "\n### Most Common Cell Types (All Modules)\n\n"
            md_content += "| Cell Type | Total Count |\n|-----------|------------|\n"
            for cell, count in sorted(cell_type_totals.items(), key=lambda x: x[1], reverse=True):
                # Remove $ and $_, replace non-alphanumeric with _
                clean_cell = re.sub(r'^\$_?', '', cell)
                clean_cell = re.sub(r'[^a-zA-Z0-9]+', '_', clean_cell)
                clean_cell = clean_cell.strip('_')
                # Exclude parameterized module cells after cleaning
                if clean_cell.lower().startswith('paramod'):
                    continue
                md_content += f"| {clean_cell} | {count} |\n"
        
        # Add synthesis plots
        md_content += """

#### Synthesis Plots

- ![Cell Count Histogram](plots/cell_count_histogram.png)
- ![Wire Count Histogram](plots/wire_count_histogram.png)
- ![Memory Count Histogram](plots/memory_count_histogram.png)
- ![Top Cell Types](plots/cell_type_histogram.png)
"""

        # Dynamically generate conclusion
        conclusion_intro = "This dataset provides a diverse collection of Verilog modules that represent various aspects of digital design:\n\n"
        # 1. Design Complexity
        simple_modules = len([m for m in self.stats['code_metrics'] if m['lines'] <= 50])
        medium_modules = len([m for m in self.stats['code_metrics'] if 50 < m['lines'] <= 200])
        complex_modules = len([m for m in self.stats['code_metrics'] if m['lines'] > 200])
        complexity_point = (f"1. **Design Complexity**: The dataset includes {simple_modules} simple (0-50 lines), "
                            f"{medium_modules} medium (51-200 lines), and {complex_modules} complex (>200 lines) modules, "
                            f"offering a varied set for analysis and research purposes.\n\n")
        # 2. Design Patterns
        if self.stats['total_modules'] > 0 and self.stats['design_patterns']:
            sorted_patterns = sorted(self.stats['design_patterns'].items(), key=lambda item: item[1], reverse=True)
            top_patterns_list = [f"{p[0]} ({p[1]/self.stats['total_modules']*100:.1f}%)" for p in sorted_patterns[:min(3, len(sorted_patterns))]]
            top_patterns_str = ", ".join(top_patterns_list) if top_patterns_list else "various common constructs"
            patterns_point = (f"2. **Design Patterns**: Common Verilog constructs such as {top_patterns_str} are frequently used ({len(self.stats['design_patterns'])} distinct patterns observed), "
                            f"indicating that the dataset reflects typical coding practices.\n\n")
        else:
            patterns_point = "2. **Design Patterns**: The dataset exhibits a range of Verilog design patterns, aligning with standard coding practices.\n\n"
        # 3. Parameterization
        avg_params = statistics.mean([m['parameters'] for m in self.stats['code_metrics']]) if self.stats['code_metrics'] else 0
        parameterization_point = (f"3. **Parameterization**: An average of {avg_params:.2f} parameters per module "
                                f"suggests that many designs are configurable and promote reusability.\n\n")
        # 4. Interface Complexity
        avg_ports = statistics.mean([m['ports'] for m in self.stats['code_metrics']]) if self.stats['code_metrics'] else 0
        interface_point = (f"4. **Interface Complexity**: With an average of {avg_ports:.2f} ports per module, "
                        f"the designs demonstrate a range of interface complexities suitable for diverse applications.\n\n")
        # 5. Synthesis Metrics
        avg_syn_cells = statistics.mean(cell_counts) if cell_counts else 0
        synthesis_point = (f"5. **Synthesis Metrics**: Available synthesis statistics (e.g., an average of {avg_syn_cells:.2f} cells for {len(cell_counts)} successfully synthesized modules with cell data) "
                        f"provide insights into the hardware implications and implementation styles. Detailed metrics are available in the synthesis section.\n\n")
        research_areas = """This dataset is well-suited for research in areas such as:
- RTL design patterns and best practices
- Code complexity analysis and prediction
- Design automation, synthesis, and optimization techniques
- Advanced verification and testing methodologies
- Design reuse strategies and parameterization effectiveness
- Benchmarking for synthesis tools and hardware cost analysis
"""
        # Fix: Properly format the conclusion as Markdown
        dynamic_conclusion = f"\n## Conclusion\n\n{conclusion_intro}{complexity_point}{patterns_point}{parameterization_point}{interface_point}{synthesis_point}{research_areas}"
        # Unescape double backslashes and ensure newlines are correct
        dynamic_conclusion = dynamic_conclusion.replace('\\n', '\n')
        md_content += dynamic_conclusion
        return md_content

def setup_logger(level=logging.INFO):
    logging.basicConfig(
        format='[%(levelname)s] %(message)s',
        level=level
    )

def run_synthesis(logger):
    logger.info("Running Yosys synthesis for all modules (make synth_all)...")
    result = subprocess.run(['make', 'synth_all'], capture_output=True, text=True)
    if result.returncode == 0:
        logger.info("Synthesis completed successfully.")
    else:
        logger.error("Synthesis failed:\n" + result.stderr)
        exit(1)

def main():
    parser = argparse.ArgumentParser(description="Analyze Verilog dataset and generate DATASET.md")
    parser.add_argument('--synth', '-s', action='store_true', help='Run Yosys synthesis before analysis')
    parser.add_argument('--loglevel', default='DEBUG', help='Set logging level (DEBUG, INFO, WARNING, ERROR)')
    parser.add_argument('--output', default='DATASET.md', help='Output markdown file')
    args = parser.parse_args()

    setup_logger(getattr(logging, args.loglevel.upper(), logging.INFO))
    logger = logging.getLogger(__name__)

    if args.synth:
        run_synthesis(logger)

    analyzer = VerilogAnalyzer('libraries', logger=logger)
    analyzer.analyze_directory()
    md_content = analyzer.generate_markdown_report()
    with open(args.output, 'w') as f:
        f.write(md_content)
    logger.info(f"Analysis complete! Report generated in {args.output}")

if __name__ == '__main__':
    main() 