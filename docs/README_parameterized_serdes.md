# Parameterized SERDES (Serializer/Deserializer)

This module implements a configurable Serializer/Deserializer that can convert between parallel and serial data formats.

## Features

- Configurable data width (parameterized)
- Supports MSB-first or LSB-first serialization/deserialization
- Two operational modes:
  - Serializer mode (parallel-to-serial conversion)
  - Deserializer mode (serial-to-parallel conversion)
- Handshaking signals (tx_done, rx_done) for indicating completion
- Simple synchronous interface

## Module Parameters

- `DATA_WIDTH`: Width of the parallel data bus (default: 8 bits)
- `CLOCK_DIV`: Clock division factor (not used in this simplified version, retained for future enhancements)
- `MSB_FIRST`: Controls bit ordering:
  - `1` (default): Most significant bit first
  - `0`: Least significant bit first

## Interface

### Common Signals
- `clk`: System clock
- `rst_n`: Active low reset
- `enable`: Enable signal (module is inactive when low)
- `mode`: Operation mode selection
  - `0`: Serializer mode (parallel-in, serial-out)
  - `1`: Deserializer mode (serial-in, parallel-out)

### Serializer Interface
- `parallel_in[DATA_WIDTH-1:0]`: Parallel data input
- `load`: Load signal to capture parallel input data
- `serial_out`: Serial data output
- `tx_done`: Transmission complete indicator

### Deserializer Interface
- `serial_in`: Serial data input
- `parallel_out[DATA_WIDTH-1:0]`: Parallel data output
- `rx_done`: Reception complete indicator

## Operation

### Serializer Mode (mode = 0)

1. When `load` is asserted, the module captures parallel data from `parallel_in`
2. On subsequent clock cycles, the module shifts out one bit per clock cycle from `serial_out`
3. Bits are shifted out either MSB-first or LSB-first according to the `MSB_FIRST` parameter
4. After all bits are transmitted, `tx_done` is asserted

### Deserializer Mode (mode = 1)

1. When `load` is asserted, the module resets internal shift register and prepares for reception
2. On subsequent clock cycles, the module shifts in one bit per clock cycle from `serial_in`
3. Bits are shifted in either MSB-first or LSB-first according to the `MSB_FIRST` parameter
4. After all bits are received, the module outputs the complete word on `parallel_out` and asserts `rx_done`

## Usage Example

```verilog
// Instantiate SERDES with 16-bit data width and MSB-first operation
parameterized_serdes #(
    .DATA_WIDTH(16),
    .MSB_FIRST(1)
) serdes_inst (
    .clk(system_clk),
    .rst_n(system_rst_n),
    .enable(1'b1),
    .mode(mode_sel),
    
    // Serializer connections
    .parallel_in(tx_data),
    .load(tx_load),
    .serial_out(tx_serial),
    .tx_done(tx_complete),
    
    // Deserializer connections
    .serial_in(rx_serial),
    .parallel_out(rx_data),
    .rx_done(rx_complete)
);
```

## Verification

The module is verified with a C++ testbench using Verilator, which tests:
- Various data patterns (single bits, alternating patterns, all bits set)
- Both serialization and deserialization functionality
- Proper bit ordering (MSB-first)
- Correct assertion of completion signals 