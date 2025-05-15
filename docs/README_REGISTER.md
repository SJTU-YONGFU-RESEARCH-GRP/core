# Register Components Library

This document provides detailed information about various register components available in the RTL library. Registers are fundamental building blocks in digital design, used for storing and manipulating data.

## Table of Contents

1. [Basic Shift Registers](#basic-shift-registers)
   - [Right Shift Register](#right-shift-register)
   - [Left Shift Register](#left-shift-register)
   - [Bidirectional Shift Register](#bidirectional-shift-register)
   - [Universal Shift Register](#universal-shift-register)

2. [Serial-Parallel Converters](#serial-parallel-converters)
   - [SIPO (Serial-In-Parallel-Out)](#sipo-serial-in-parallel-out)
   - [PISO (Parallel-In-Serial-Out)](#piso-parallel-in-serial-out)
   - [SISO (Serial-In-Serial-Out)](#siso-serial-in-serial-out)

3. [Special-Purpose Registers](#special-purpose-registers)
   - [Barrel Shifter/Rotator](#barrel-shifterrotator)
   - [Parameterized Barrel Rotator](#parameterized-barrel-rotator)
   - [Johnson Counter Register](#johnson-counter-register)
   - [Loadable Up/Down Counter](#loadable-updown-counter)
   - [Register File](#register-file)
   - [Scan Register](#scan-register)
   - [Shadow Register](#shadow-register)
   - [Sync Preset Register](#sync-preset-register)
   - [Dual Edge Register](#dual-edge-register)
   - [Toggle Register](#toggle-register)
   - [OneHot Decoder Register](#onehot-decoder-register)

4. [Linear Feedback Shift Register (LFSR)](#linear-feedback-shift-register-lfsr)
   - [Basic LFSR](#basic-lfsr)
   - [Configurable LFSR](#configurable-lfsr)

## Basic Shift Registers

### Right Shift Register

The right shift register shifts data from the MSB to the LSB, with new data entering from the left (MSB) side.

**Key Features:**
- Parameterizable width
- Asynchronous reset
- Enable signal for conditional shifting
- Parallel load capability
- Serial and parallel I/O

**Usage Example:**
```verilog
shift_register_right #(
    .WIDTH(8)
) shift_reg (
    .clk(clk),
    .rst_n(reset_n),
    .en(enable),
    .load(load_signal),
    .serial_in(serial_data_in),
    .parallel_in(parallel_data_in),
    .serial_out(serial_data_out),
    .parallel_out(parallel_data_out)
);
```

### Left Shift Register

The left shift register shifts data from the LSB to the MSB, with new data entering from the right (LSB) side.

**Key Features:**
- Parameterizable width
- Asynchronous reset
- Enable signal for conditional shifting
- Parallel load capability
- Serial and parallel I/O

**Usage Example:**
```verilog
shift_register_left #(
    .WIDTH(8)
) shift_reg_left (
    .clk(clk),
    .rst_n(reset_n),
    .en(enable),
    .load(load_signal),
    .serial_in(serial_data_in),
    .parallel_in(parallel_data_in),
    .serial_out(serial_data_out),
    .parallel_out(parallel_data_out)
);
```

### Bidirectional Shift Register

The bidirectional shift register can shift in either direction (left or right) based on the direction control signal.

**Key Features:**
- Parameterizable width
- Selectable shift direction (left/right)
- Asynchronous reset
- Enable signal 
- Separate serial inputs for left and right shift operations

**Usage Example:**
```verilog
bidirectional_shift_register #(
    .WIDTH(8)
) bi_shift_reg (
    .clk(clk),
    .rst_n(reset_n),
    .enable(enable),
    .shift_right(direction), // 1 for right, 0 for left
    .serial_in_left(serial_left),
    .serial_in_right(serial_right),
    .parallel_in(parallel_data),
    .load(load_signal),
    .parallel_out(output_data)
);
```

### Universal Shift Register

The universal shift register is a versatile component that supports multiple operation modes including hold, shift left, shift right, and parallel load.

**Key Features:**
- Parameterizable width
- Multiple operation modes (hold, shift left, shift right, parallel load)
- Asynchronous reset
- Enable signal
- Separate serial inputs for left and right shift operations

**Operation Modes:**
- 00: Hold (no shift)
- 01: Shift right
- 10: Shift left
- 11: Parallel load

**Usage Example:**
```verilog
universal_shift_register #(
    .WIDTH(8),
    .DIRECTION_WIDTH(2)
) uni_shift_reg (
    .clk(clk),
    .rst_n(reset_n),
    .enable(enable),
    .direction(operation_mode),
    .serial_in_left(serial_left),
    .serial_in_right(serial_right),
    .parallel_in(parallel_data),
    .load(load_signal),
    .parallel_out(output_data)
);
```

## Serial-Parallel Converters

### SIPO (Serial-In-Parallel-Out)

The SIPO register converts serial data into parallel format by shifting in bits one at a time and providing them all at once as a parallel output.

**Key Features:**
- Parameterizable width
- Asynchronous reset
- Enable signal for controlling shift operations
- MSB-first or LSB-first operation modes

**Usage Example:**
```verilog
sipo_register #(
    .WIDTH(8)
) sipo_reg (
    .clk(clk),
    .rst_n(reset_n),
    .enable(enable),
    .serial_in(serial_data),
    .lsb_first(shift_direction), // 1 for LSB first, 0 for MSB first
    .parallel_out(parallel_data)
);
```

### PISO (Parallel-In-Serial-Out)

The PISO register converts parallel data into serial format by loading a parallel value and shifting it out one bit at a time.

**Key Features:**
- Parameterizable width
- Asynchronous reset
- Load signal for parallel data input
- Shift enable signal for controlling serial output

**Usage Example:**
```verilog
piso_register #(
    .WIDTH(8)
) piso_reg (
    .clk(clk),
    .rst_n(reset_n),
    .load(load_signal),
    .shift_en(shift_enable),
    .parallel_in(parallel_data),
    .serial_out(serial_data)
);
```

### SISO (Serial-In-Serial-Out)

The SISO register shifts data serially through a chain of flip-flops, with data entering and exiting serially.

**Key Features:**
- Parameterizable width
- Asynchronous reset
- Enable signal for controlling shift operations
- Parallel observation output

**Usage Example:**
```verilog
siso_register #(
    .WIDTH(8)
) siso_reg (
    .clk(clk),
    .rst_n(reset_n),
    .enable(enable),
    .serial_in(serial_input),
    .serial_out(serial_output),
    .parallel_out(internal_state) // For observation
);
```

## Special-Purpose Registers

### Barrel Shifter/Rotator

The barrel shifter/rotator can shift or rotate data by a variable number of positions in a single clock cycle.

**Key Features:**
- Parameterizable width
- Shift amount control inputs
- Rotation vs. shift modes
- Left or right operation

**Usage Example:**
```verilog
barrel_shifter #(
) barrel_shift (
    .clk(clk),
    .rst_n(reset_n),
    .data_in(input_data),
    .shift_amount(amount),
    .shift_left(direction), // 1 for left, 0 for right
    .rotate(rotate_mode),   // 1 for rotate, 0 for shift
    .data_out(output_data)
);
```

### Parameterized Barrel Rotator

A barrel rotator specifically designed for rotation operations with parameterized width.

**Key Features:**
- Parameterizable width
- Variable rotation amount in a single cycle
- Left or right rotation

**Usage Example:**
```verilog
parameterized_barrel_rotator #(
    .WIDTH(16)
) barrel_rot (
    .data_in(input_data),
    .rotate_amount(amount),
    .rotate_left(direction), // 1 for left, 0 for right
    .data_out(rotated_data)
);
```

### Johnson Counter Register

A Johnson counter is a modified ring counter where the inverted output of the last flip-flop is connected to the input of the first flip-flop.

**Key Features:**
- Parameterizable width
- Generates a unique sequence with 2n states (for n-bit width)
- Asynchronous reset
- Enable signal

**Usage Example:**
```verilog
johnson_counter #(
    .WIDTH(4)
) johnson_cnt (
    .clk(clk),
    .rst_n(reset_n),
    .enable(enable),
    .count(counter_output)
);
```

### Loadable Up/Down Counter

A counter with load capability that can count up or down based on control signals.

**Key Features:**
- Parameterizable width
- Up/down counting direction control
- Loadable with arbitrary values
- Asynchronous reset
- Enable signal

**Usage Example:**
```verilog
loadable_updown_counter #(
    .WIDTH(8)
) updown_counter (
    .clk(clk),
    .rst_n(reset_n),
    .enable(enable),
    .up_down(direction), // 1 for up, 0 for down
    .load(load_signal),
    .load_value(initial_value),
    .count(counter_value)
);
```

### Register File

A multi-register storage array with address-based read and write access.

**Key Features:**
- Parameterizable data width and depth
- Separate read and write address inputs
- Write enable signal
- Single read port

**Usage Example:**
```verilog
register_file #(
    .WIDTH(32),
    .DEPTH(32)
) reg_file (
    .clk(clk),
    .rst_n(reset_n),
    .write_en(wr_enable),
    .write_addr(wr_address),
    .write_data(wr_data),
    .read_addr(rd_address),
    .read_data(rd_data)
);
```

### Scan Register

A shift register with scan functionality for testability.

**Key Features:**
- Parameterizable width
- Normal and scan operation modes
- Serial scan input and output
- Parallel data input and output

**Usage Example:**
```verilog
scan_register #(
    .WIDTH(8)
) scan_reg (
    .clk(clk),
    .rst_n(reset_n),
    .scan_en(scan_enable),
    .scan_in(scan_input),
    .data_in(normal_data),
    .scan_out(scan_output),
    .data_out(register_output)
);
```

### Shadow Register

A register with main and shadow copies, useful for safely updating configuration registers.

**Key Features:**
- Parameterizable width
- Main register for normal operation
- Shadow register for temporary storage or backup
- Control signals for capturing, loading, and output selection

**Usage Example:**
```verilog
shadow_register #(
    .WIDTH(32)
) shadow_reg (
    .clk(clk),
    .rst_n(reset_n),
    .main_load_en(main_load_enable),
    .main_data_in(main_input_data),
    .main_data_out(main_output_data),
    .shadow_capture_en(capture_enable),
    .shadow_load_en(shadow_load_enable),
    .shadow_data_in(shadow_input_data),
    .shadow_data_out(shadow_output_data),
    .use_shadow_out(use_shadow)
);
```

### Sync Preset Register

A register with synchronous preset and reset capabilities.

**Key Features:**
- Parameterizable width
- Asynchronous reset (highest priority)
- Synchronous reset (second priority)
- Synchronous preset (third priority)
- Enable signal for normal operation

**Usage Example:**
```verilog
sync_preset_register #(
    .WIDTH(8)
) preset_reg (
    .clk(clk),
    .rst_n(reset_n),
    .sync_rst(sync_reset),
    .sync_preset(sync_preset),
    .enable(enable),
    .data_in(input_data),
    .data_out(output_data)
);
```

### Dual Edge Register

A register that can capture data on either the rising or falling edge of the clock.

**Key Features:**
- Parameterizable width
- Edge selection input (rising or falling)
- Asynchronous reset
- Enable signal

**Usage Example:**
```verilog
dual_edge_register #(
    .WIDTH(8)
) dual_edge_reg (
    .clk(clk),
    .rst_n(reset_n),
    .edge_sel(edge_select), // 0 for rising, 1 for falling
    .enable(enable),
    .data_in(input_data),
    .data_out(output_data)
);
```

### Toggle Register

A register that toggles its output when the toggle signal is asserted.

**Key Features:**
- Parameterizable width
- Toggle control input
- Asynchronous reset
- Load function for direct value setting

**Usage Example:**
```verilog
toggle_register #(
    .WIDTH(8)
) toggle_reg (
    .clk(clk),
    .rst_n(reset_n),
    .toggle(toggle_signal),
    .load(load_signal),
    .data_in(input_data),
    .data_out(output_data)
);
```

### OneHot Decoder Register

A register that stores and decodes one-hot encoded values.

**Key Features:**
- Parameterizable width
- Decoder functionality for one-hot encoding
- Asynchronous reset
- Enable signal

**Usage Example:**
```verilog
onehot_decoder_register #(
    .WIDTH(8)
) onehot_reg (
    .clk(clk),
    .rst_n(reset_n),
    .enable(enable),
    .binary_in(binary_input),
    .onehot_out(onehot_output)
);
```

## Linear Feedback Shift Register (LFSR)

### Basic LFSR

A shift register with feedback paths designed to generate pseudorandom sequences.

**Key Features:**
- Parameterizable width
- Configurable polynomial for sequence generation
- Asynchronous reset
- Enable signal

**Usage Example:**
```verilog
lfsr #(
    .WIDTH(8)
) lfsr_gen (
    .clk(clk),
    .rst_n(reset_n),
    .enable(enable),
    .seed_load(seed_load),
    .seed(initial_seed),
    .lfsr_out(random_output)
);
```

### Configurable LFSR

An enhanced LFSR with configurable feedback polynomial and output modes.

**Key Features:**
- Parameterizable width
- Runtime-configurable polynomial
- Multiple output options (full value or single bit)
- Asynchronous reset
- Seed loading capability

**Usage Example:**
```verilog
configurable_lfsr #(
    .WIDTH(16)
) config_lfsr (
    .clk(clk),
    .rst_n(reset_n),
    .enable(enable),
    .polynomial(feedback_polynomial),
    .seed_load(seed_load),
    .seed(initial_seed),
    .lfsr_full(full_random_value),
    .lfsr_bit(single_random_bit)
);
```

## Design Considerations

When using these register components, consider:

1. **Clock Domain**: Ensure correct clock domain usage, especially with edge-sensitive components.
2. **Reset Strategy**: Choose between synchronous and asynchronous reset based on your design requirements.
3. **Power Optimization**: Use enable signals to reduce dynamic power consumption.
4. **Timing**: For high-speed designs, consider the timing implications of complex register structures.

## Testing

Each register component includes a comprehensive testbench in the corresponding `tb_*.cpp` file. These testbenches use Verilator for simulation and can be built and run using the provided Makefile:

```bash
make run_<register_name>
```

For example:
```bash
make run_sync_preset_register
```

This will compile and run the testbench, generating waveform files for detailed analysis. 