# CORE: Corpus Of RTL designs for EDA Research

A comprehensive collection of parameterized and configurable RTL modules written in Verilog, organized by category for EDA research and development. This repository contains **137 verified modules** across **24 categories** with complete testbenches and documentation.

## Table of Contents

- [Installation](#installation)
- [Quick Start](#quick-start)
- [Dataset Overview](#dataset-overview)
- [Directory Structure](#directory-structure)
- [Dataset Analysis Tools](#dataset-analysis-tools)
  - [Verification Report](#verification-report)
  - [Dataset Analysis](#dataset-analysis)
  - [Verilog Standards Analysis](#verilog-standards-analysis)
- [Contributing](#contributing)
- [Technical Information](#technical-information)
- [Citation](#citation)
- [License](#license)

## Installation

### Prerequisites
- Python 3.6 or higher
- Icarus Verilog (iverilog) 12.0 or higher
- GTKWave (for waveform viewing)
- Make
- Verilator 5.0 or higher

### Installation Steps
1. Clone the repository:
```bash
git clone https://github.com/SJTU-YONGFU-RESEARCH-GRP/core.git
cd core
```

2. Install Verilator (if not already installed):

Using package manager:
```bash
# For Ubuntu/Debian
sudo apt-get install verilator

# For CentOS/RHEL
sudo yum install verilator

# For macOS
brew install verilator

# For Windows (using WSL)
sudo apt-get install verilator
```

Or install from GitHub source (recommended for latest version):
```bash
# Install build dependencies
# For Ubuntu/Debian
sudo apt-get install git make autoconf g++ flex bison

# For CentOS/RHEL
sudo yum install git make autoconf gcc-c++ flex bison

# For macOS
brew install git make autoconf flex bison

# Clone and build Verilator
git clone https://github.com/verilator/verilator.git
cd verilator
git checkout stable  # or 'git checkout master' for latest development version
autoconf
./configure
make
sudo make install
```

3. Install Yosys (if not already installed):

Using package manager:
```bash
# For Ubuntu/Debian
sudo apt-get install yosys

# For CentOS/RHEL
yum install epel-release
yum install yosys

# For macOS
brew install yosys

# For Windows (using WSL)
sudo apt-get install yosys
```

Or install from GitHub source (recommended for latest version):
```bash
# Install build dependencies
# For Ubuntu/Debian
sudo apt-get install git build-essential clang bison flex libreadline-dev gawk tcl-dev libffi-dev graphviz xdot pkg-config python3 python3-pip libboost-system-dev libboost-python-dev libboost-filesystem-dev zlib1g-dev

# For CentOS/RHEL
yum install git gcc clang bison flex readline-devel gawk tcl-devel libffi-devel graphviz xdot pkgconfig python3 python3-pip boost-devel zlib-devel

# For macOS
brew install git clang bison flex readline gawk tcl-tk libffi graphviz xdot pkg-config python3 boost zlib

# Clone and build Yosys
git clone https://github.com/YosysHQ/yosys.git
cd yosys
make
sudo make install
```

4. Install Python dependencies:
```bash
pip install -r requirements.txt
```

The Python dependencies include:
- `typing-extensions>=0.4.6` - For enhanced type hints support
- `colorama>=0.4.6` - For colored terminal output  
- `tqdm>=4.65.0` - For progress bars
- `rich>=13.0.0` - For rich terminal formatting and logging
- `matplotlib` - For generating plots and visualizations
- `seaborn` - For statistical data visualization

## Quick Start

After installation, you can immediately start using the modules:

1. **Browse the dataset**: Explore modules in the `libraries/` directory
2. **Run verification**: Run `make verify_all`, then `python3 scripts/report.py` to generate a verification report
3. **Analyze the dataset**: Use `python3 scripts/analyze_verilog_dataset.py` for detailed analysis
4. **View documentation**: Check category-specific docs in the `docs/` directory

## Dataset Overview

| Category | Docs | Number | Modules |
|----------|------|-------:|---------|
| Adders | [Adders](docs/README_ADDERS.md) | 6 | [configurable_brent_kung_adder](libraries/adders/configurable_brent_kung_adder.v), [configurable_carry_lookahead_adder](libraries/adders/configurable_carry_lookahead_adder.v), [configurable_carry_select_adder](libraries/adders/configurable_carry_select_adder.v), [configurable_carry_skip_adder](libraries/adders/configurable_carry_skip_adder.v), [configurable_conditional_sum_adder](libraries/adders/configurable_conditional_sum_adder.v), [configurable_kogge_stone_adder](libraries/adders/configurable_kogge_stone_adder.v) |
| Arbitration | [Arbitration](docs/README_ARBITERS.md) | 4 | [arbiter](libraries/arbiters/arbiter.v), [arbiter_rr](libraries/arbiters/arbiter_rr.v), [fair_priority_arbiter](libraries/arbiters/fair_priority_arbiter.v), [matrix_arbiter](libraries/arbiters/matrix_arbiter.v) |
| Arithmetic | [Arithmetic](docs/README_ALU.md) | 2 | [alu](libraries/alu/alu.v), [configurable_comparator](libraries/alu/configurable_comparator.v) |
| CORDIC | [CORDIC](docs/README_CORDIC.md) | 3 | [cordic](libraries/cordic/cordic.v), [cordic_core](libraries/cordic/cordic_core.v), [sine_cosine_generator](libraries/cordic/sine_cosine_generator.v) |
| Clock Domain Crossing | [Clock Domain Crossing](docs/README_CDC.md) | 4 | [clock_domain_crossing](libraries/cdc/clock_domain_crossing.v), [clock_domain_crossing_fifo](libraries/cdc/clock_domain_crossing_fifo.v), [handshake_synchronizer](libraries/cdc/handshake_synchronizer.v), [multi_flop_synchronizer](libraries/cdc/multi_flop_synchronizer.v) |
| Communication | [Communication](docs/README_COMMS.md) | 12 | [ahb_lite_master](libraries/comms/ahb_lite_master.v), [basic_spi_master](libraries/comms/basic_spi_master.v), [fixed_spi_master](libraries/comms/fixed_spi_master.v), [final_spi_master](libraries/comms/final_spi_master.v), [parameterized_deserializer](libraries/comms/parameterized_deserializer.v), [parameterized_i2c_master](libraries/comms/parameterized_i2c_master.v), [parameterized_serdes](libraries/comms/parameterized_serdes.v), [parameterized_spi_master](libraries/comms/parameterized_spi_master.v), [parameterized_uart_rx](libraries/comms/parameterized_uart_rx.v), [parameterized_uart_tx](libraries/comms/parameterized_uart_tx.v), [simple_spi_master](libraries/comms/simple_spi_master.v), [spi_master](libraries/comms/spi_master.v) |
| Counters | [Counters](docs/README_COUNTERS.md) | 15 | [configurable_clz_clo](libraries/counters/configurable_clz_clo.v), [gray_counter](libraries/counters/gray_counter.v), [johnson_counter](libraries/counters/johnson_counter.v), [leading_zero_counter](libraries/counters/leading_zero_counter.v), [loadable_updown_counter](libraries/counters/loadable_updown_counter.v), [parameterized_decade_counter](libraries/counters/parameterized_decade_counter.v), [parameterized_gray_counter](libraries/counters/parameterized_gray_counter.v), [parameterized_johnson_counter](libraries/counters/parameterized_johnson_counter.v), [parameterized_johnson_updown_counter](libraries/counters/parameterized_johnson_updown_counter.v), [parameterized_loadable_counter](libraries/counters/parameterized_loadable_counter.v), [parameterized_onehot_counter](libraries/counters/parameterized_onehot_counter.v), [parameterized_ring_counter](libraries/counters/parameterized_ring_counter.v), [parameterized_self_correcting_counter](libraries/counters/parameterized_self_correcting_counter.v), [parameterized_sync_reset_counter](libraries/counters/parameterized_sync_reset_counter.v), [parameterized_updown_counter](libraries/counters/parameterized_updown_counter.v) |
| Debugging | [Debugging](docs/README_DEBUG.md) | 2 | [logic_analyzer](libraries/debug/logic_analyzer.v), [performance_counter](libraries/debug/performance_counter.v) |
| Encoding/Decoding | [Encoding/Decoding](docs/README_CODINGS.md) | 7 | [binary_to_gray](libraries/codings/binary_to_gray.v), [configurable_priority_encoder](libraries/codings/configurable_priority_encoder.v), [gray_to_binary](libraries/codings/gray_to_binary.v), [hamming_code](libraries/codings/hamming_code.v), [parameterized_crc_generator](libraries/codings/parameterized_crc_generator.v), [parameterized_scrambler](libraries/codings/parameterized_scrambler.v), [priority_encoder](libraries/codings/priority_encoder.v) |
| Encryption | [Encryption](docs/README_ENCRYPTION.md) | 2 | [aes_core](libraries/encryption/aes_core.v), [true_random_generator](libraries/encryption/true_random_generator.v) |
| FIFOs | [FIFOs](docs/README_FIFOS.md) | 20 | [async_fifo](libraries/fifos/async_fifo.v), [barrel_shifter_fifo](libraries/fifos/barrel_shifter_fifo.v), [bidirectional_fifo](libraries/fifos/bidirectional_fifo.v), [cache_fifo](libraries/fifos/cache_fifo.v), [circular_buffer_fifo](libraries/fifos/circular_buffer_fifo.v), [configurable_param_fifo](libraries/fifos/configurable_param_fifo.v), [configurable_sync_fifo](libraries/fifos/configurable_sync_fifo.v), [credit_based_fifo](libraries/fifos/credit_based_fifo.v), [dual_clock_fifo](libraries/fifos/dual_clock_fifo.v), [elastic_buffer](libraries/fifos/elastic_buffer.v), [fifo](libraries/fifos/fifo.v), [fwft_fifo](libraries/fifos/fwft_fifo.v), [memory_mapped_fifo](libraries/fifos/memory_mapped_fifo.v), [multi_ported_fifo](libraries/fifos/multi_ported_fifo.v), [parameterized_priority_queue](libraries/fifos/parameterized_priority_queue.v), [pipelined_fifo](libraries/fifos/pipelined_fifo.v), [showahead_fifo](libraries/fifos/showahead_fifo.v), [skid_buffer](libraries/fifos/skid_buffer.v), [smart_fifo](libraries/fifos/smart_fifo.v), [sync_fifo](libraries/fifos/sync_fifo.v) |
| Filters | [Filters](docs/README_FILTERS.md) | 2 | [configurable_fir_filter](libraries/filters/configurable_fir_filter.v), [fir_filter](libraries/filters/fir_filter.v) |
| Input/Output | [Input/Output](docs/README_IO.md) | 2 | [dma_controller](libraries/io/dma_controller.v), [gpio_controller](libraries/io/gpio_controller.v) |
| Interfaces | [Interfaces](docs/README_INTERFACES.md) | 4 | [axi_lite_master](libraries/interfaces/axi_lite_master.v), [axi_stream_interface](libraries/interfaces/axi_stream_interface.v), [pcie_endpoint](libraries/interfaces/pcie_endpoint.v), [wishbone_master](libraries/interfaces/wishbone_master.v) |
| Mathematics | [Mathematics](docs/README_MATH.md) | 3 | [fixed_point_sqrt](libraries/math/fixed_point_sqrt.v), [floating_point_adder](libraries/math/floating_point_adder.v), [non_restoring_divider](libraries/math/non_restoring_divider.v) |
| Memory | [Memory](docs/README_MEMORY.md) | 4 | [ddr_controller](libraries/mems/ddr_controller.v), [dual_port_ram](libraries/mems/dual_port_ram.v), [memory_controller](libraries/mems/memory_controller.v), [parameterized_cam](libraries/mems/parameterized_cam.v) |
| Multiplication | [Multiplication](docs/README_MULTIPLIERS.md) | 3 | [booth_multiplier](libraries/multipliers/booth_multiplier.v), [configurable_mult](libraries/multipliers/configurable_mult.v), [radix4_booth_multiplier](libraries/multipliers/radix4_booth_multiplier.v) |
| Network on Chip | [Network on Chip](docs/README_NOC.md) | 5 | [configurable_mesh_router](libraries/noc/configurable_mesh_router.v), [crossbar_switch](libraries/noc/crossbar_switch.v), [mesh_router](libraries/noc/mesh_router.v), [network_interface](libraries/noc/network_interface.v), [network_interface_cdc](libraries/noc/network_interface_cdc.v) |
| Power Management | [Power Management](docs/README_PM.md) | 5 | [clock_divider](libraries/power/clock_divider.v), [clock_gating](libraries/power/clock_gating.v), [parameterized_clock_gating](libraries/power/parameterized_clock_gating.v), [parameterized_freq_divider](libraries/power/parameterized_freq_divider.v), [power_domain_controller](libraries/power/power_domain_controller.v) |
| Registers | [Registers](docs/README_REGISTERS.md) | 19 | [barrel_rotator](libraries/registers/barrel_rotator.v), [barrel_shifter](libraries/registers/barrel_shifter.v), [bidirectional_shift_register](libraries/registers/bidirectional_shift_register.v), [dual_edge_register](libraries/registers/dual_edge_register.v), [lfsr](libraries/registers/lfsr.v), [onehot_decoder_register](libraries/registers/onehot_decoder_register.v), [parameterized_barrel_rotator](libraries/registers/parameterized_barrel_rotator.v), [parameterized_rotation_sipo](libraries/registers/parameterized_rotation_sipo.v), [piso_register](libraries/registers/piso_register.v), [register_file](libraries/registers/register_file.v), [scan_register](libraries/registers/scan_register.v), [shadow_register](libraries/registers/shadow_register.v), [sipo_register](libraries/registers/sipo_register.v), [siso_register](libraries/registers/siso_register.v), [sync_preset_register](libraries/registers/sync_preset_register.v), [toggle_register](libraries/registers/toggle_register.v), [universal_shift_register](libraries/registers/universal_shift_register.v), [shift_register_left](libraries/registers/shift_register_left.v), [shift_register_right](libraries/registers/shift_register_right.v) |
| Signal Processing | [Signal Processing](docs/README_SIGNALS.md) | 9 | [configurable_lfsr](libraries/signals/configurable_lfsr.v), [configurable_prng](libraries/signals/configurable_prng.v), [digital_thermometer_controller](libraries/signals/digital_thermometer_controller.v), [multi_phase_pwm_controller](libraries/signals/multi_phase_pwm_controller.v), [parameterized_dds](libraries/signals/parameterized_dds.v), [parameterized_fft](libraries/signals/parameterized_fft.v), [parameterized_pwm](libraries/signals/parameterized_pwm.v), [pulse_width_detector](libraries/signals/pulse_width_detector.v), [pwm_generator](libraries/signals/pwm_generator.v) |
| State Machines | [State Machines](docs/README_FSM.md) | 1 | [sequence_detector_fsm](libraries/fsm/sequence_detector_fsm.v) |
| Testing | [Testing](docs/README_TESTING.md) | 2 | [bist_controller](libraries/test/bist_controller.v), [jtag_controller](libraries/test/jtag_controller.v) |
| Voting | [Voting](docs/README_VOTING.md) | 1 | [majority_voter](libraries/voters/majority_voter.v) |

## Directory Structure
```
/ libraries         # Verilog RTL modules
/ docs              # Category documentation
report.py           # Verification report generator
REPORT.md           # Latest verification report
LICENSE             # Licensing information
README.md           # This file
``` 

## Dataset Analysis Tools

### Verification Report

Generate a comprehensive report of the verification results:

```bash
make verify_all
python3 scripts/report.py
```

This script scans RTL files and their testbenches, executes tests using `make`, and produces `REPORT.md`.

📊 **View the latest report:** [REPORT.md](REPORT.md)

### Dataset Analysis

Analyze the Verilog dataset and generate a comprehensive report with synthesis metrics:

```bash
python3 scripts/analyze_verilog_dataset.py --synth --output my_report.md --loglevel INFO
```

**What it does:**
- Analyzes all Verilog files in `libraries/` for code metrics (lines, parameters, ports, patterns, etc.)
- Optionally runs Yosys synthesis to collect hardware metrics (cell count, wire count, etc.)
- Generates plots and a markdown report summarizing the dataset's structure, complexity, and synthesis statistics

📊 **View the latest analysis:** [DATASET.md](DATASET.md)

### Verilog Standards Analysis

Generate a detailed standards compliance report:

```bash
python3 scripts/verilog_standard_report.py --output VERILOG_STANDARDS.md --loglevel INFO
```

**Analysis includes:**
- Standards compliance (Verilog-1995 through SystemVerilog-2017)
- Feature usage statistics
- File-by-file analysis
- Visual charts showing standards distribution

📊 **View the standards report:** [VERILOG_STANDARDS.md](VERILOG_STANDARDS.md)

## Contributing

We welcome and encourage community contributions to expand the CORE dataset! Your contributions help make this repository a more comprehensive resource for EDA research and development.

### How to Contribute

#### 1. Reporting Issues
- Found a bug or issue? [Create an issue](https://github.com/SJTU-YONGFU-RESEARCH-GRP/core/issues/new) on GitHub
- Include detailed information about the problem and steps to reproduce it
- Suggest improvements or request new module categories

#### 2. Contributing New Modules
We're always looking for new high-quality Verilog RTL modules to add to the dataset. Here's how you can contribute:

**What we're looking for:**
- Well-documented, parameterized Verilog modules
- Comprehensive testbenches (preferably in C++ using Verilator)
- Modules that follow good RTL design practices
- Coverage of new design patterns or categories not currently in the dataset

**Contribution Process:**
1. **Fork the repository** and create a new branch for your contribution
2. **Add your Verilog module(s)** to the appropriate category in `libraries/`
3. **Include comprehensive testbenches** following our naming convention (`tb_*.cpp`)
4. **Add documentation** explaining the module's functionality and parameters
5. **Test your modules** using our verification flow (`make` command)
6. **Submit a pull request** with a clear description of your contribution

**File Organization:**
- Place Verilog files in the appropriate `libraries/[category]/` directory
- Include testbench files with `tb_` prefix
- Add documentation to the corresponding `docs/README_[CATEGORY].md` file
- Follow existing naming conventions and coding styles

#### 3. Improving Existing Modules
- Fix bugs in existing modules
- Improve testbench coverage
- Optimize implementations
- Add better documentation or comments

#### 4. Documentation and Tools
- Improve documentation clarity
- Enhance analysis scripts
- Add new visualization features
- Fix typos or formatting issues

### Contribution Guidelines

- **Code Quality:** Ensure your code is clean, well-commented, and follows Verilog best practices
- **Testing:** All modules must include working testbenches that demonstrate functionality
- **Documentation:** Provide clear documentation explaining module purpose, parameters, and usage
- **Licensing:** By contributing, you agree that your contributions will be licensed under the same CC BY-NC 4.0 license

### Getting Started

1. **Explore the existing codebase** to understand our structure and conventions
2. **Check open issues** to see if there are specific modules or features we need
3. **Start small** - consider fixing bugs or improving documentation before adding large new features
4. **Ask questions** - create an issue if you need clarification on contribution guidelines

**Join our community** and help make CORE the most comprehensive RTL dataset for EDA research!

For questions about contributions, please create an issue or reach out to the maintainers.

## Technical Information

- **Current Version:** 1.0.0
- **Last Updated:** 2024
- **Supported Verilog Standards:** IEEE 1364-2005, IEEE 1800-2012
- **Tool Versions:**
  - Verilator: 5.036
  - Yosys: 0.53+81
  - Icarus Verilog: 11.0
  - Python: 3.10.12

## Citation

If you use this repository in your research or work, please cite it as follows:

```bibtex
@misc{core2024,
  author = {Kian Kit Cheah, Fu Qi Chua, Yunxiang Zhang, Zhuofan Lin, Yuxin Ji, Xinfei Guo, Harikrishnan Ramiah, and Yongfu Li},
  title = {Descriptor: A Corpus of Synthesizable Verilog RTL Modules Dataset for EDA Research (CORE)},
  year = {2025},
  journal = {IEEE Data Descriptions},
  url = {\url{https://github.com/SJTU-YONGFU-RESEARCH-GRP/core}},
}
```

## License
This project is licensed under the [Creative Commons Attribution-NonCommercial 4.0 International Public License](LICENSE).
