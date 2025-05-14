# Configurable Parameterized FIFO

A highly configurable, parameterized FIFO (First-In, First-Out) memory implemented in Verilog for digital designs. This module provides flexibility through various parameters to adapt to different requirements and use cases.

## Features

- Configurable data width
- Configurable FIFO depth
- Adjustable almost-full and almost-empty thresholds
- Optional almost-full and almost-empty flags
- Synchronous reset (active low)
- Full and empty status flags
- Gray code-style pointers for safe clock domain crossing
- Space-efficient implementation

## Parameters

| Parameter | Description | Default |
|-----------|-------------|---------|
| `DATA_WIDTH` | Width of the data bus in bits | 8 |
| `FIFO_DEPTH` | Depth of the FIFO in entries | 16 |
| `ADDR_WIDTH` | Width of the address bus (derived from FIFO_DEPTH) | $clog2(FIFO_DEPTH) |
| `ALMOST_FULL_THRESHOLD` | Threshold for almost-full flag | FIFO_DEPTH - 2 |
| `ALMOST_EMPTY_THRESHOLD` | Threshold for almost-empty flag | 2 |
| `ENABLE_ALMOST_FLAGS` | Enable or disable almost-full/empty flags | 1 (enabled) |

## Interface

| Port | Direction | Description |
|------|-----------|-------------|
| `clk` | Input | Clock input |
| `rst_n` | Input | Active low reset |
| `wr_en` | Input | Write enable |
| `rd_en` | Input | Read enable |
| `wr_data` | Input | Data to write (width = DATA_WIDTH) |
| `rd_data` | Output | Data read from FIFO (width = DATA_WIDTH) |
| `empty` | Output | FIFO empty flag |
| `full` | Output | FIFO full flag |
| `almost_empty` | Output | Almost empty flag (optional) |
| `almost_full` | Output | Almost full flag (optional) |

## Operation

1. **Reset**: When `rst_n` is asserted (low), all pointers and flags are reset.
2. **Write**: Data is written to the FIFO when `wr_en` is high and the FIFO is not full.
3. **Read**: Data is read from the FIFO when `rd_en` is high and the FIFO is not empty.
4. **Status Flags**:
   - `empty`: Asserted when there is no data in the FIFO
   - `full`: Asserted when the FIFO cannot accept more data
   - `almost_empty`: Asserted when the number of entries is <= ALMOST_EMPTY_THRESHOLD
   - `almost_full`: Asserted when the number of entries is >= ALMOST_FULL_THRESHOLD

## Usage Example

```verilog
// Instantiate a 32-bit FIFO with 64 entries
configurable_param_fifo #(
    .DATA_WIDTH(32),
    .FIFO_DEPTH(64),
    .ALMOST_FULL_THRESHOLD(60),
    .ALMOST_EMPTY_THRESHOLD(4),
    .ENABLE_ALMOST_FLAGS(1)
) fifo_inst (
    .clk(clk),
    .rst_n(rst_n),
    .wr_en(wr_en),
    .rd_en(rd_en),
    .wr_data(data_in),
    .rd_data(data_out),
    .empty(empty),
    .full(full),
    .almost_empty(almost_empty),
    .almost_full(almost_full)
);
```

## Verification

The module has been verified using Verilator with a comprehensive C++ testbench that:

1. Tests multiple configurations with different data widths and depths
2. Performs random reads and writes
3. Verifies data integrity
4. Checks for proper empty, full, and almost-empty/full flag behavior
5. Generates VCD waveforms for detailed analysis

To run the verification:

```bash
make -f Makefile.param_fifo
```

To view the waveforms:

```bash
make -f Makefile.param_fifo view_trace
```

## Implementation Details

- Uses separate read and write pointers with an additional bit for full/empty detection
- Implements registered read data for improved timing
- Separates flag generation from data path for cleaner design
- Utilizes generate statements for optional features 