# Configurable FIR Filter

This module implements a parameterized Finite Impulse Response (FIR) filter with configurable taps, data width, and coefficient width.

## Description

The FIR filter is a fundamental digital signal processing component that performs convolution of an input signal with a set of filter coefficients (taps). This implementation allows for configuration of:

1. **DATA_WIDTH** - The bit width of input and output data
2. **COEFF_WIDTH** - The bit width of the filter coefficients
3. **NUM_TAPS** - The number of filter taps (coefficients)
4. **COEFFICIENTS** - The actual coefficient values

The filter includes a tapped delay line implemented with shift registers, performs multiplications of samples with their respective coefficients, and then adds all products to produce the filtered output.

## Parameters

- `DATA_WIDTH` (default: 16) - Bit width of input/output data
- `COEFF_WIDTH` (default: 16) - Bit width of coefficients
- `NUM_TAPS` (default: 8) - Number of filter taps
- `COEFFICIENTS` (default: Symmetric low-pass filter) - Array of filter coefficients

## Ports

| Port Name      | Direction | Width        | Description                     |
|----------------|-----------|--------------|----------------------------------|
| clk            | input     | 1            | Clock signal                     |
| rst_n          | input     | 1            | Active-low reset                 |
| data_in        | input     | DATA_WIDTH   | Input sample                     |
| data_valid     | input     | 1            | Input data valid signal          |
| data_out       | output    | DATA_WIDTH   | Filtered output                  |
| data_out_valid | output    | 1            | Output data valid signal         |

## Implementation Details

The filter implements these key features:

1. **Parameterized Design**: All key filter parameters can be configured at instantiation time.
2. **Synchronous Operation**: All operations are synchronized to the clock signal.
3. **Valid Signal Propagation**: Valid signals are used to indicate when input/output data is valid.
4. **Reset Handling**: Proper reset of all internal registers.
5. **Efficient Multiplication**: Uses hardware multipliers with sign extension.
6. **Saturation**: Output is properly scaled to prevent overflow.

## Example Configurations

### Low-Pass Filter

A typical symmetric low-pass filter with 8 taps:

```verilog
parameter [127:0] LP_COEFFS = {
    16'h0400, 16'h0800, 16'h0C00, 16'h1000,
    16'h1000, 16'h0C00, 16'h0800, 16'h0400
};

configurable_fir_filter #(
    .DATA_WIDTH(16),
    .COEFF_WIDTH(16),
    .NUM_TAPS(8),
    .COEFFICIENTS(LP_COEFFS)
) fir_lowpass (
    .clk(clk),
    .rst_n(rst_n),
    .data_in(data_in),
    .data_valid(data_valid),
    .data_out(filtered_data),
    .data_out_valid(filtered_data_valid)
);
```

### High-Pass Filter

A simple high-pass filter configuration:

```verilog
parameter [127:0] HP_COEFFS = {
    16'hFC00, 16'hF800, 16'h0400, 16'h0800, 
    16'h0800, 16'h0400, 16'hF800, 16'hFC00
};

configurable_fir_filter #(
    .DATA_WIDTH(16),
    .COEFF_WIDTH(16),
    .NUM_TAPS(8),
    .COEFFICIENTS(HP_COEFFS)
) fir_highpass (
    .clk(clk),
    .rst_n(rst_n),
    .data_in(data_in),
    .data_valid(data_valid),
    .data_out(filtered_data),
    .data_out_valid(filtered_data_valid)
);
```

## Testing

The module comes with a comprehensive testbench that:

1. Tests different filter configurations
2. Applies sinusoidal inputs of different frequencies
3. Verifies filter response characteristics
4. Checks timing and data valid signals

To run the test:

```bash
make -f Makefile.fir_filter run_config_fir_filter
``` 