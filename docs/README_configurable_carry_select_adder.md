# Configurable Carry-Select Adder

## Overview
The Configurable Carry-Select Adder is a parameterized binary adder implementation that uses the carry-select architecture to improve performance. It divides the addition operation into blocks, pre-computes the addition result for each block assuming both possible carry-in values (0 and 1), and then selects the correct result once the actual carry-in is known.

## Features
- Fully parameterized design with configurable data width and block size
- Optimized for better performance compared to simple ripple-carry adders
- Handles arbitrary data width through automatic block sizing
- Verified working with 32-bit and 64-bit configurations

## Parameters
- `DATA_WIDTH`: Width of the operands (default: 64 bits)
- `BLOCK_SIZE`: Size of each carry-select block (default: 8 bits)

## Ports
- `a`: First operand input (DATA_WIDTH bits)
- `b`: Second operand input (DATA_WIDTH bits)
- `cin`: Carry-in input (1 bit)
- `sum`: Sum output (DATA_WIDTH bits)
- `cout`: Carry-out output (1 bit)

## Architecture
The Carry-Select Adder divides the addition into blocks:
1. The first block is a standard ripple-carry adder that processes the least significant bits.
2. For each subsequent block:
   - Two additions are performed in parallel, one assuming carry-in is 0 and the other assuming carry-in is 1.
   - When the actual carry-in becomes available (from the previous block), a multiplexer selects the correct pre-computed result.

This approach reduces the critical path delay compared to a simple ripple-carry adder, as the carry propagation is parallelized across blocks.

## Block Sizing
The module automatically handles the case where the data width is not an exact multiple of the block size. The last block may be smaller than the specified block size.

## Performance Considerations
- Smaller block sizes generally result in faster operation but consume more resources.
- Larger block sizes reduce resource usage but may introduce longer critical path delays.
- The optimal block size depends on the target technology and requirements.
- For this implementation, we've tested:
  - 32-bit width with 4-bit blocks
  - 64-bit width with 8-bit blocks

## Verification
The testbench performs:
1. Basic operation verification with simple test patterns
2. Edge case testing (e.g., overflow conditions, alternating bit patterns)
3. Random input testing
4. Correctness validation against software reference model

The module has been thoroughly tested with both 32-bit and 64-bit configurations, demonstrating the flexibility of the parameterized design.

## Test Results
All tests have passed for both configurations:
- 32-bit adder (DATA_WIDTH=32, BLOCK_SIZE=4)
- 64-bit adder (DATA_WIDTH=64, BLOCK_SIZE=8)

The implementation correctly handles overflow detection and provides accurate carry-out flags.

## How to Use
To use this module:
```verilog
configurable_carry_select_adder #(
    .DATA_WIDTH(64),  // Change to desired width
    .BLOCK_SIZE(8)    // Change to desired block size
) adder_inst (
    .a(input_a),
    .b(input_b),
    .cin(carry_in),
    .sum(result),
    .cout(carry_out)
);
```

## Build and Run
To build and run the testbench:
```bash
make -f Makefile.carry_select_adder
``` 