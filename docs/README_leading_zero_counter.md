# Leading Zero Counter (LZC)

## Overview
The Leading Zero Counter (LZC) is a parameterized Verilog module that counts the number of leading zeros in an input word. It is commonly used in floating-point arithmetic units, normalization operations, and priority encoders.

## Features
- Parameterized input data width
- Automatically calculated output width based on input size
- Valid signal to indicate if the input contains any non-zero bits
- Fully combinational design

## Parameters
- `DATA_WIDTH`: Width of the input data (default: 32 bits)
- `COUNT_WIDTH`: Width of the counter output, automatically calculated as log2(DATA_WIDTH + 1)

## Ports
- `data_in [DATA_WIDTH-1:0]`: Input data to count leading zeros
- `zero_count [COUNT_WIDTH-1:0]`: Number of leading zeros in the input
- `valid_input`: High if input contains at least one '1' bit, low otherwise

## Behavior
1. If the input is all zeros, `zero_count` will be equal to `DATA_WIDTH` and `valid_input` will be low
2. Otherwise, `zero_count` will be the number of leading zeros before the first '1' bit, and `valid_input` will be high

## Example
For an 8-bit input:
- Input: 8'b00000000 → zero_count = 8, valid_input = 0
- Input: 8'b00010000 → zero_count = 3, valid_input = 1
- Input: 8'b10000000 → zero_count = 0, valid_input = 1

## Usage
```verilog
// Instantiate with default parameters (32-bit)
leading_zero_counter lzc_inst (
    .data_in(input_data),
    .zero_count(leading_zeros),
    .valid_input(valid)
);

// Instantiate with custom width
leading_zero_counter #(
    .DATA_WIDTH(16)
) lzc_16bit_inst (
    .data_in(input_data_16bit),
    .zero_count(leading_zeros_16bit),
    .valid_input(valid_16bit)
);
``` 