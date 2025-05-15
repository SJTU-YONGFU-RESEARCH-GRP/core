# Counter Modules

This document provides an overview of the various counter modules available in the `libraries/counters` directory.

## Overview

Counters are sequential digital circuits that cycle through a sequence of states in a predetermined order. They are fundamental building blocks in digital systems, used for tasks such as event counting, timing, sequence generation, and state control.

## Available Counter Modules

### 1. Parameterized Up/Down Counter

```verilog
module parameterized_updown_counter #(
    parameter WIDTH = 4,
    parameter MAX_COUNT = (1 << WIDTH) - 1
)(
    input wire clk,
    input wire rst_n,        // Active low reset
    input wire enable,       // Enable signal
    input wire up_down,      // Direction control (1 for up, 0 for down)
    output wire [WIDTH-1:0] count,
    output wire overflow     // Overflow/underflow indicator
);
```

**Features:**
- Configurable bit width
- Configurable maximum count value
- Bidirectional counting (up or down)
- Overflow/underflow detection
- Enable control

**Usage:**
- Use for applications requiring both incrementing and decrementing counting
- Useful for timers, address generators, and control sequencers

### 2. Parameterized Ring Counter

```verilog
module parameterized_ring_counter #(
    parameter WIDTH = 4
)(
    input wire clk,
    input wire rst_n,    // Active low reset
    input wire enable,   // Enable signal
    output wire [WIDTH-1:0] count
);
```

**Features:**
- Configurable bit width
- Single bit rotation pattern
- Initializes with only LSB set (0001)
- Rotates the set bit in a circular pattern

**Usage:**
- Ideal for sequencing operations
- Used in control logic where mutually exclusive states are required
- Applications include state machines and timing control

### 3. Parameterized Decade Counter

```verilog
module parameterized_decade_counter #(
    parameter WIDTH = 4,        // Default width is 4 bits
    parameter MODULO = 10       // Default modulo is 10 (decade counter)
)(
    input wire clk,
    input wire rst_n,           // Active low reset
    input wire enable,          // Enable signal
    output wire [WIDTH-1:0] count,
    output wire tc              // Terminal count signal
);
```

**Features:**
- Configurable bit width
- Configurable modulo value (default is 10 for decade counting)
- Terminal count output signal
- Enable control

**Usage:**
- Decimal counting applications
- Useful for BCD (Binary-Coded Decimal) systems
- Frequency division by arbitrary values
- Display controllers

### 4. Parameterized Loadable Counter

```verilog
module parameterized_loadable_counter #(
    parameter WIDTH = 8
)(
    input wire clk,
    input wire rst_n,                // Active low reset
    input wire enable,               // Enable signal
    input wire load,                 // Load control signal
    input wire [WIDTH-1:0] data_in,  // Parallel data input
    output wire [WIDTH-1:0] count
);
```

**Features:**
- Configurable bit width
- Parallel load capability
- Enable control
- Asynchronous reset

**Usage:**
- Preloadable timer applications
- Systems requiring initialization to specific count values
- Programmable dividers
- Test and debug applications

### 5. Parameterized One-Hot Counter

```verilog
module parameterized_onehot_counter #(
    parameter WIDTH = 8
)(
    input wire clk,
    input wire rst_n,    // Active low reset
    input wire enable,   // Enable signal
    output wire [WIDTH-1:0] count
);
```

**Features:**
- Configurable bit width
- One-hot encoding (exactly one bit set at any time)
- Shifts the set bit left, wrapping around when necessary
- Initializes with only LSB set

**Usage:**
- State machines with one-hot encoding
- Resource allocation systems
- Sequencers with mutually exclusive outputs
- Control systems requiring decoded outputs

### 6. Parameterized Synchronous Reset Counter

```verilog
module parameterized_sync_reset_counter #(
    parameter WIDTH = 8,
    parameter MAX_COUNT = (1 << WIDTH) - 1
)(
    input wire clk,
    input wire sync_rst,  // Synchronous reset (active high)
    input wire enable,    // Enable signal
    output wire [WIDTH-1:0] count,
    output wire tc        // Terminal count signal
);
```

**Features:**
- Configurable bit width
- Configurable maximum count
- Synchronous reset (aligned with clock)
- Terminal count output
- Enable control

**Usage:**
- Synchronous systems requiring deterministic reset behavior
- Applications where reset timing is critical
- Systems where glitch-free operation is essential
- Clock domain crossing applications

### 7. Parameterized Self-Correcting Counter

```verilog
module parameterized_self_correcting_counter #(
    parameter WIDTH = 4,
    parameter MODULO = 10   // Default modulo is 10 (decade counter)
)(
    input wire clk,
    input wire rst_n,       // Active low reset
    input wire enable,      // Enable signal
    output wire [WIDTH-1:0] count
);
```

**Features:**
- Configurable bit width
- Configurable modulo value
- Self-correcting behavior (resets to zero if in an invalid state)
- Enable control

**Usage:**
- Fault-tolerant systems
- Applications susceptible to single-event upsets (SEUs)
- Systems requiring high reliability
- Safety-critical applications

### 8. Parameterized Johnson Up/Down Counter

```verilog
module parameterized_johnson_updown_counter #(
    parameter WIDTH = 4
)(
    input wire clk,
    input wire rst_n,    // Active low reset
    input wire enable,   // Enable signal
    input wire up_down,  // Direction control (1 for up, 0 for down)
    output wire [WIDTH-1:0] count
);
```

**Features:**
- Configurable bit width
- Bidirectional Johnson counting
- Single bit change per clock cycle
- 2*WIDTH unique states
- Enable control

**Usage:**
- Gray code generation
- Noise-resistant sequencing
- Motor control applications
- Applications requiring minimal bit transitions
- Quadrature encoding/decoding

## Implementation Notes

- All counters use synchronous logic triggered on the positive edge of the clock
- Most counters feature an active-low asynchronous reset (rst_n)
- The synchronous reset counter uses an active-high synchronous reset
- All counters include an enable signal for gating operation
- Parameters allow for customization of bit width and other characteristics

## Testing

Each counter module includes a corresponding testbench file (tb_*.cpp) that:
- Verifies basic functionality
- Tests edge cases
- Validates parameter configurations
- Generates waveforms for visual inspection

To run tests for a specific counter, use the make commands defined in the project Makefile. 