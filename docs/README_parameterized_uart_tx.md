# Parameterized UART Transmitter

This module implements a configurable UART transmitter with the following features:

- Parameterized data width (5-9 bits)
- Optional parity bit (even or odd)
- Configurable number of stop bits (1 or 2)
- Configurable baud rate generator
- Busy signal to indicate transmitter status

## Parameters

| Parameter    | Description                           | Default Value |
|--------------|---------------------------------------|---------------|
| DATA_WIDTH   | Width of the data to transmit (5-9)   | 8             |
| PARITY_EN    | Enable parity bit (0=off, 1=on)       | 0             |
| PARITY_TYPE  | Parity type (0=even, 1=odd)           | 0             |
| STOP_BITS    | Number of stop bits (1 or 2)          | 1             |
| CLOCK_FREQ   | Input clock frequency in Hz           | 50,000,000    |
| BAUD_RATE    | UART baud rate in bps                 | 115,200       |

## Interface

| Signal   | Direction | Width           | Description                    |
|----------|-----------|-----------------|--------------------------------|
| clk      | input     | 1               | System clock                   |
| rst_n    | input     | 1               | Active low reset               |
| data_in  | input     | DATA_WIDTH      | Data to transmit               |
| tx_start | input     | 1               | Start transmission signal      |
| tx       | output    | 1               | UART TX line                   |
| tx_busy  | output    | 1               | Transmitter busy flag          |

## Functional Description

The UART transmitter module follows the standard UART protocol:

1. Idle state: TX line is high
2. Start bit: TX line transitions to low for one bit period
3. Data bits: LSB first, configurable width
4. Parity bit (optional): Even or odd parity
5. Stop bit(s): TX line is high for one or two bit periods

When `tx_start` is asserted, the transmitter will begin sending the data from `data_in` through the `tx` output. The `tx_busy` flag will be set high during transmission and will be cleared when the transmission is complete.

## Verification

A C++ testbench using Verilator is provided to verify the UART transmitter:

- The testbench sends multiple test patterns through the transmitter
- A UART receiver model captures and checks the transmitted data
- Detailed status and error messages are provided
- Waveform dumps for troubleshooting

### Running the Verification

```bash
# Build and run the testbench
make -f Makefile.uart_tx run

# View waveforms (requires GTKWave)
make -f Makefile.uart_tx wave

# Clean up build artifacts
make -f Makefile.uart_tx clean
```

## Implementation Details

The transmitter uses a state machine to control the transmission process:

- IDLE: Wait for tx_start signal
- START: Send start bit
- DATA: Send data bits
- PARITY: Send parity bit (if enabled)
- STOP: Send stop bit(s)

The baud rate is derived from the clock frequency using an internal counter. The counter is set to ensure that each bit is transmitted for the correct duration according to the configured baud rate. 