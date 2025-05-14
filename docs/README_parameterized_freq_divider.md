# Parameterized Frequency Divider with Configurable Duty Cycle

This module implements a configurable frequency divider with adjustable duty cycle. It can divide an input clock frequency by any integer value of 2 or greater, and can generate output clocks with duty cycles ranging from 0% to 100%.

## Features

- Parameterized counter width for flexible division range
- Runtime-configurable division factor
- Runtime-configurable duty cycle (0-100%)
- Handles edge cases (division by less than 2, 0% and 100% duty cycles)
- Enable input to control operation

## Parameters

| Parameter | Description | Default |
|-----------|-------------|---------|
| COUNTER_WIDTH | Width of the internal counter | 16 |
| DEFAULT_DIVIDE_VALUE | Default division factor used when an invalid value is provided | 2 |
| DEFAULT_DUTY_CYCLE | Default duty cycle percentage used with default division factor | 50 |

## Ports

| Port | Direction | Width | Description |
|------|-----------|-------|-------------|
| clk_in | Input | 1 | Input clock signal |
| rst_n | Input | 1 | Active-low asynchronous reset |
| enable | Input | 1 | Enable signal (active high) |
| divide_value | Input | COUNTER_WIDTH | Division factor (must be ≥ 2) |
| duty_cycle | Input | 7 | Duty cycle percentage (0-100) |
| clk_out | Output | 1 | Output clock signal |

## Operation

The module divides the input clock frequency by the specified `divide_value`. For example, if the input clock is 100MHz and `divide_value` is 4, the output clock will be 25MHz.

The `duty_cycle` input specifies the percentage of time the output clock should be high during each cycle. For example, with a 50% duty cycle, the clock will be high for half of each period and low for the other half.

Special cases:
- If `divide_value` is less than 2, the module uses `DEFAULT_DIVIDE_VALUE` (2) instead
- If `duty_cycle` is 0, the output is always low
- If `duty_cycle` is 100, the output is always high (unless disabled)

When `enable` is low, the output is held at 0 and counting is disabled.

## Example Usage

```verilog
// Instantiate a freq divider with 8-bit counter width
parameterized_freq_divider #(
    .COUNTER_WIDTH(8),        // 8-bit counter
    .DEFAULT_DIVIDE_VALUE(2), // Default division by 2
    .DEFAULT_DUTY_CYCLE(50)   // Default 50% duty cycle
) div_inst (
    .clk_in(sys_clk),         // Input clock
    .rst_n(sys_rst_n),        // System reset
    .enable(1'b1),            // Always enabled
    .divide_value(8'd10),     // Divide by 10
    .duty_cycle(7'd25),       // 25% duty cycle
    .clk_out(divided_clk)     // Output clock
);
```

This example creates a frequency divider that divides the input clock by 10 and produces an output with a 25% duty cycle.

## Implementation Details

The module uses a counter-based approach to implement the division. The counter increments with each input clock cycle and wraps around when it reaches the `divide_value`. The output is high when the counter is less than the calculated high time: `(divide_value * duty_cycle) / 100`.

The module operates on the positive edge of the input clock and resets asynchronously on the negative edge of `rst_n`. 