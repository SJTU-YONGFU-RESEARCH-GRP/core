# Configurable Multiplier

## Overview
The Configurable Multiplier is a parameterized Verilog module that implements a multiplier with configurable bit-width and support for both signed and unsigned multiplication. It can be statically configured at instantiation time via parameters or dynamically controlled during operation.

## Features
- Configurable bit-width for operands
- Support for both signed and unsigned multiplication modes
- Dynamic sign mode selection at runtime
- Full-width product output (2*WIDTH bits)
- Optimized for synthesis

## Module Parameters
- `WIDTH`: The bit-width of each input operand (default: 8)
- `SIGNED_MODE`: Static configuration for signed (1) or unsigned (0) multiplication (default: 0)

## Module Interface
| Port       | Direction | Width       | Description                                       |
|------------|-----------|-------------|---------------------------------------------------|
| `a`        | Input     | `WIDTH`     | First operand                                     |
| `b`        | Input     | `WIDTH`     | Second operand                                    |
| `sign_mode`| Input     | 1           | Dynamic sign mode control (0=unsigned, 1=signed)  |
| `product`  | Output    | `2*WIDTH`   | Multiplication result (a * b)                     |

## Usage Example
```verilog
// Instantiate a 16-bit unsigned multiplier
configurable_mult #(
    .WIDTH(16),
    .SIGNED_MODE(0)
) unsigned_mult_inst (
    .a(operand_a),
    .b(operand_b),
    .sign_mode(1'b0),  // Force unsigned mode
    .product(result)
);

// Instantiate an 8-bit signed multiplier
configurable_mult #(
    .WIDTH(8),
    .SIGNED_MODE(1)
) signed_mult_inst (
    .a(operand_a),
    .b(operand_b),
    .sign_mode(1'b1),  // Force signed mode
    .product(result)
);

// Instantiate a multiplier with runtime-configurable signed/unsigned operation
configurable_mult #(
    .WIDTH(12)
) dynamic_mult_inst (
    .a(operand_a),
    .b(operand_b),
    .sign_mode(mode_select),  // Dynamic control
    .product(result)
);
```

## Implementation Details
The module implements multiplication using the following approach:
1. For unsigned mode, it performs a direct multiplication of the two operands
2. For signed mode, it sign-extends the inputs appropriately before multiplication
3. It selects between signed and unsigned results based on the configuration

## Performance and Resource Usage
This multiplier is designed to be efficient while maintaining flexibility. When `SIGNED_MODE` is set at instantiation time, synthesis tools can optimize away unused logic. Dynamic mode switching allows for flexible usage with minimal additional resources.

## Testing
The testbench verifies the multiplier's functionality with:
- Multiple bit-widths (4, 8, 16)
- Both signed and unsigned modes
- Various test cases including corner cases
- Comprehensive verification against expected results 