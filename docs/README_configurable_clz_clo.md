# Configurable Count Leading Zeros/Ones (CLZ/CLO) Module

## Overview
The Configurable CLZ/CLO module is a parameterized Verilog design that counts the number of consecutive zeros or ones starting from the most significant bit (MSB) of the input data. It can operate in two modes:
1. Count Leading Zeros (CLZ) - counts the number of consecutive zeros from the MSB
2. Count Leading Ones (CLO) - counts the number of consecutive ones from the MSB

The module also provides two status flags indicating if the input contains all zeros or all ones.

## Parameters
- `DATA_WIDTH`: Width of the input data (default: 32 bits)
- `COUNT_WIDTH`: Width of the counter output, automatically calculated as `$clog2(DATA_WIDTH+1)`

## Ports
### Inputs
- `data_in[DATA_WIDTH-1:0]`: Input data
- `count_ones`: Mode selection (0 for Count Leading Zeros, 1 for Count Leading Ones)

### Outputs
- `count_out[COUNT_WIDTH-1:0]`: Number of leading zeros/ones detected
- `all_zeros`: Flag indicating if the input consists of all zeros
- `all_ones`: Flag indicating if the input consists of all ones

## Functionality
- When operating in CLZ mode (`count_ones = 0`), the module counts the number of consecutive zeros from the MSB.
- When operating in CLO mode (`count_ones = 1`), the module counts the number of consecutive ones from the MSB.
- The count starts from the MSB (leftmost bit) and proceeds toward the LSB until a bit of the opposite value is encountered.
- If the input consists entirely of zeros, the `all_zeros` flag is set to 1, and `count_out` equals `DATA_WIDTH`.
- If the input consists entirely of ones, the `all_ones` flag is set to 1, and `count_out` equals `DATA_WIDTH`.

## Example
For a 32-bit input:
- If `data_in = 0x00800000` and `count_ones = 0`, then `count_out = 8` (there are 8 leading zeros before the first '1')
- If `data_in = 0xFF000000` and `count_ones = 1`, then `count_out = 8` (there are 8 leading ones before the first '0')
- If `data_in = 0x00000000` and `count_ones = 0`, then `count_out = 32` and `all_zeros = 1`
- If `data_in = 0xFFFFFFFF` and `count_ones = 1`, then `count_out = 32` and `all_ones = 1`

## Applications
- CPU instruction set extensions (e.g., ARM CLZ instruction)
- Floating-point operations (normalizing mantissa)
- Priority encoders
- Data compression algorithms
- Signal processing

## Verification
The module is verified using a Verilator-based C++ testbench that applies various test patterns in both modes and compares the results with software-calculated reference values. 