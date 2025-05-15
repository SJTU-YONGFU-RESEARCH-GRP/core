# SPI Master Modules

This document provides an overview of the various SPI (Serial Peripheral Interface) master implementations available in this repository.

## Overview

SPI is a synchronous serial communication protocol used for short-distance communication, primarily in embedded systems. The protocol is a master-slave architecture with a single master device that initiates all communications with one or more slave devices.

The repository contains several SPI master implementations with varying levels of complexity and features:

1. **Simple SPI Master**: Basic implementation with minimal features
2. **SPI Master**: Standard implementation with debug features
3. **Fixed SPI Master**: Improved implementation with better bit handling
4. **Basic SPI Master**: Clean implementation with clock enable mechanism
5. **Parameterized SPI Master**: Fully configurable implementation supporting different SPI modes

## Module Descriptions

### Simple SPI Master
A straightforward implementation of an SPI master with minimal features.

**Features:**
- Basic state machine (IDLE, TRANSMIT, FINISH)
- Fixed data width (configurable via parameter)
- No clock division - toggles SPI clock on every system clock
- MSB-first data transfer
- Active-low chip select

### SPI Master
A standard implementation with additional debug features.

**Features:**
- Debug register for MISO samples
- State machine with IDLE, ACTIVE, DONE states
- MSB-first data transfer
- Active-low chip select

### Fixed SPI Master
An improved implementation with better bit handling.

**Features:**
- Robust bit ordering during sampling
- Clean state machine implementation
- MSB-first data transfer
- Active-low chip select

### Basic SPI Master
A clean implementation with a clock enable mechanism.

**Features:**
- Clock enable mechanism for better timing control
- Structured approach to bit transmission and reception
- Clear separation between clock edge handling
- MSB-first data transfer
- Active-low chip select

### Parameterized SPI Master
A fully configurable implementation supporting different SPI modes.

**Features:**
- Configurable system clock frequency
- Configurable SPI clock frequency
- Configurable data width
- Configurable clock polarity (CPOL)
- Configurable clock phase (CPHA)
- Support for all four SPI modes (combinations of CPOL and CPHA)
- Clock division logic
- MSB-first data transfer
- Active-low chip select

## Interface

All SPI master modules share a common interface:

```verilog
module spi_master (
    input wire clk,                  // System clock
    input wire rst_n,                // Active low reset
    input wire [DATA_WIDTH-1:0] tx_data, // Data to transmit
    input wire tx_valid,             // Signal to start transmission
    output reg tx_ready,             // Ready for new data to transmit
    output reg [DATA_WIDTH-1:0] rx_data, // Received data
    output reg rx_valid,             // Received data is valid
    
    // SPI interface
    output reg spi_clk,              // SPI clock
    output reg spi_mosi,             // Master Out Slave In
    input wire spi_miso,             // Master In Slave Out
    output reg spi_cs_n              // Chip select (active low)
);
```

## Usage

To use any of the SPI master modules:

1. Instantiate the module in your design
2. Connect the system clock and reset signals
3. To transmit data:
   - Set `tx_data` to the data you want to transmit
   - Assert `tx_valid` for one clock cycle
   - Wait for `tx_ready` to be asserted again
4. To receive data:
   - Monitor `rx_valid` signal
   - When `rx_valid` is asserted, read the data from `rx_data`

## Example

```verilog
// Instantiate the parameterized SPI master
parameterized_spi_master #(
    .CLK_FREQ(50000000),    // 50 MHz system clock
    .SPI_FREQ(1000000),     // 1 MHz SPI clock
    .DATA_WIDTH(8),         // 8-bit data width
    .CPOL(0),               // Clock polarity: idle low
    .CPHA(0)                // Clock phase: sample on first edge
) spi_master_inst (
    .clk(clk),
    .rst_n(rst_n),
    .tx_data(tx_data),
    .tx_valid(tx_valid),
    .tx_ready(tx_ready),
    .rx_data(rx_data),
    .rx_valid(rx_valid),
    .spi_clk(spi_clk),
    .spi_mosi(spi_mosi),
    .spi_miso(spi_miso),
    .spi_cs_n(spi_cs_n)
);
```

## SPI Modes

The parameterized SPI master supports all four SPI modes:

| Mode | CPOL | CPHA | Clock Idle State | Data Sampled On |
|------|------|------|-----------------|-----------------|
| 0    | 0    | 0    | Low             | Rising Edge     |
| 1    | 0    | 1    | Low             | Falling Edge    |
| 2    | 1    | 0    | High            | Falling Edge    |
| 3    | 1    | 1    | High            | Rising Edge     |

## Bit Ordering

All SPI master implementations in this repository use MSB-first transmission. This means that the most significant bit (bit 7 for an 8-bit transfer) is transmitted first, followed by the remaining bits in descending order. 