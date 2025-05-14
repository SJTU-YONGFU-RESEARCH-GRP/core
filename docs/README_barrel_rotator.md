# Barrel Rotator

## Overview
The Barrel Rotator is a configurable digital circuit that performs rotation operations on a data bus. Unlike a shift register which shifts data and discards bits, a rotator preserves all bits by wrapping them around. This implementation supports both left and right rotation by a parameterized amount.

## Implementations

### Basic Barrel Rotator
- Fixed 8-bit data width
- Simple case-based implementation
- Handles rotation amounts from 0 to 7

### Parameterized Barrel Rotator
- Configurable data width (default: 32 bits)
- Uses a logarithmic approach for scalability
- Efficiently handles any data width using a double-width concatenation technique
- Rotation amounts calculated based on the data width

## Parameters
- `DATA_WIDTH`: Width of the data bus (default: 8 bits for basic, 32 bits for parameterized)
- `SHIFT_WIDTH`: Width of the rotate_amount input, calculated as log2(DATA_WIDTH)

## Interface
| Port           | Direction | Width             | Description                           |
|----------------|-----------|-------------------|---------------------------------------|
| data_in        | Input     | DATA_WIDTH        | Input data to be rotated              |
| rotate_amount  | Input     | SHIFT_WIDTH       | Number of positions to rotate         |
| direction      | Input     | 1                 | Rotation direction (0=right, 1=left)  |
| data_out       | Output    | DATA_WIDTH        | Rotated output data                   |

## Operation
- When `direction` is 0, the data is rotated right by `rotate_amount` positions
- When `direction` is 1, the data is rotated left by `rotate_amount` positions

## Parameterized Implementation Details
The parameterized barrel rotator uses an efficient approach with these key techniques:
1. **Double-width concatenation**: Creates an extended data word `{data_in, data_in}` to simplify rotation
2. **Vector part-select**: Uses Verilog's part-select operator to efficiently extract the rotated result
3. **Rotation formulas**:
   - Right rotation: `extended_data[DATA_WIDTH+rotate_amount-1 -: DATA_WIDTH]`
   - Left rotation: `extended_data[2*DATA_WIDTH-1-rotate_amount -: DATA_WIDTH]`

## Example Usage
For a 32-bit data bus with DATA_WIDTH=32:
- Input: 0x12345678, Rotate Right by 8, Output: 0x78123456
- Input: 0x12345678, Rotate Left by 8, Output: 0x34567812

## Verification
The module has been verified with a comprehensive testbench that:
1. Tests all rotation amounts (0 to DATA_WIDTH-1)
2. Tests both rotation directions
3. Uses various patterns (single bit, alternating patterns, etc.)
4. Compares RTL outputs with expected software model outputs

## Applications
- Cryptography (bit permutations)
- Data manipulation
- Digital signal processing
- Microprocessor instruction set implementation (rotate operations)

## Performance Considerations
- The parameterized implementation has O(log n) complexity, making it efficient for larger data widths
- The double-width concatenation approach allows for clean, readable code without complex loops

## Limitations
- Both implementations are purely combinational and don't include any registers
- The basic implementation only supports 8-bit data width
- The parameterized implementation requires more resources due to the double-width concatenation
- For very large data widths, resource utilization might become a concern 