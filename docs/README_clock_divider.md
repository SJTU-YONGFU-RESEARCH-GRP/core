# Parameterized Clock Divider with Duty Cycle Control

This module implements a configurable clock divider with programmable division ratio and duty cycle control.

## Features

- Parameterized design with configurable bit widths
- Programmable division ratio
- Adjustable duty cycle (0-255 for 0-100%)
- Active-low asynchronous reset

## Parameters

- `DIV_WIDTH`: Width of the division ratio register (default: 8 bits)
- `DUTY_WIDTH`: Width of the duty cycle register (default: 8 bits)

## Ports

- `clk_in`: Input clock signal
- `rst_n`: Active-low asynchronous reset
- `div_ratio`: Clock division ratio (divides the input clock by this value)
- `duty_cycle`: Duty cycle control (0-255 for 0-100%)
- `clk_out`: Output divided clock

## Usage

The clock divider takes an input clock and divides it by the specified division ratio. The duty cycle of the output clock can be controlled by setting the `duty_cycle` input, where 0 represents 0% duty cycle (always low), 128 represents 50% duty cycle, and 255 represents 100% duty cycle (always high).

### Example

```verilog
// Instantiate a clock divider with 8-bit division ratio and duty cycle
clock_divider #(
    .DIV_WIDTH(8),
    .DUTY_WIDTH(8)
) clk_div_inst (
    .clk_in(system_clk),
    .rst_n(reset_n),
    .div_ratio(8'd4),      // Divide clock by 4
    .duty_cycle(8'd128),   // 50% duty cycle
    .clk_out(divided_clk)
);
```

## Verification

The module has been verified using Verilator with a C++ testbench that tests various division ratios and duty cycle settings. The testbench measures the actual duty cycle of the output clock and compares it with the expected value.

To run the verification:

```bash
make run_clock_div
```

The testbench will generate a VCD waveform file (`clock_divider_sim.vcd`) that can be viewed with a waveform viewer like GTKWave. 