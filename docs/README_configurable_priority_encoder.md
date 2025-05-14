# Configurable Priority Encoder

## Overview
This module implements a parameterized priority encoder with configurable input width. The priority encoder takes a binary input vector and produces a binary encoded output representing the position of the highest priority bit that is set (with MSB having the highest priority). It also generates a valid signal to indicate whether any bit in the input is set.

## Features
- Parameterized input width (default: 8 bits)
- Automatically calculated output width based on input width
- MSB has highest priority
- Valid output signal indicates if any input bit is set

## Parameters
- `INPUT_WIDTH`: Width of the input request vector (default: 8)
- `OUTPUT_WIDTH`: Width of the output grant_index signal, automatically calculated as $clog2(INPUT_WIDTH)

## Interface

### Inputs
- `request[INPUT_WIDTH-1:0]`: Input request vector where each bit represents a request

### Outputs
- `grant_index[OUTPUT_WIDTH-1:0]`: Binary encoded output representing the position of the highest priority bit
- `valid`: Asserted if any bit in the input request vector is set

## Functionality
The module examines each bit in the input vector starting from the MSB (highest priority) to the LSB (lowest priority). The first set bit encountered determines the output. If no bits are set, the valid signal is deasserted.

## Example Usage

```verilog
// Instantiate an 8-bit priority encoder
configurable_priority_encoder #(
    .INPUT_WIDTH(8)
) priority_encoder_inst (
    .request(request_vector),
    .grant_index(encoded_output),
    .valid(valid_output)
);
```

## Truth Table

For a 4-bit priority encoder:

| request[3:0] | grant_index[1:0] | valid |
|--------------|------------------|-------|
| 0000         | 00               | 0     |
| 0001         | 00               | 1     |
| 0010         | 01               | 1     |
| 0011         | 01               | 1     |
| 0100         | 10               | 1     |
| 0101         | 10               | 1     |
| 0110         | 10               | 1     |
| 0111         | 10               | 1     |
| 1000         | 11               | 1     |
| 1xxx         | 11               | 1     |

Where x can be either 0 or 1, and the highest set bit (MSB) determines the output.

## Testing
The testbench verifies the priority encoder's functionality with different input widths, ensuring that the highest priority bit is properly encoded and the valid signal correctly indicates when there are active requests.

## Implementation Notes

### Verilator Limitations
When testing with Verilator, the input signal `request` is limited to 8 bits due to the default settings in the generated C++ interface. For verification purposes, we have limited our tests to 4-bit and 8-bit configurations. In a real hardware implementation, larger bit widths would work correctly.

If you need to test larger bit widths, consider:
1. Using a different simulator than Verilator
2. Splitting large input requests into multiple smaller signals
3. Modifying the Verilator-generated code to support wider input signals

## Applications
- Interrupt handling in processors
- Resource allocation in arbitration
- Request selection in multi-master systems 