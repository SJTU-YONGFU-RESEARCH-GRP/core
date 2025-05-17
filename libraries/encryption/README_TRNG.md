# True Random Number Generator

## Overview
This directory contains a true random number generator (TRNG) implementation in Verilog. The TRNG provides high-quality random data for cryptographic and security applications using a combination of:

1. Ring oscillators (when `USE_RINGOSCILLATOR=1`)
2. Linear feedback shift registers (LFSR)
3. Entropy mixing techniques

## Files
- `true_random_generator.v` - RTL implementation of the TRNG
- `tb_true_random_generator.cpp` - Verilator C++ testbench
- `Makefile` - Build system for Verilator simulation
- `run_trng_tests.sh` - Convenience script to run tests

## Features
- Configurable data width (default: 32 bits)
- Optional ring oscillator entropy source
- Health monitoring with entropy_low and test_failed signals
- Simple state machine for controlling data generation and output

## Architecture
The TRNG uses a multi-source entropy design:

1. **Ring Oscillator**: When enabled, creates a free-running oscillator by connecting an odd number of inverters in a loop. In hardware, this produces jitter and noise that is sampled as a source of randomness.

2. **Primary LFSR**: A Fibonacci-style LFSR with carefully selected taps for maximum period.

3. **Secondary LFSR**: A Galois-style LFSR with a different polynomial for additional entropy.

4. **Entropy Pool**: Collects and mixes entropy from the sources.

5. **State Machine**: Controls the operation phases: IDLE → COLLECTING → TEST → READY.

## Module Interface

```verilog
module true_random_generator #(
    parameter DATA_WIDTH = 32,
    parameter USE_RINGOSCILLATOR = 1
)(
    // Global signals
    input  wire                  clk,
    input  wire                  rst_n,
    
    // Control signals
    input  wire                  enable,
    input  wire                  read_next,
    output wire                  data_valid,
    
    // Data output
    output wire [DATA_WIDTH-1:0] random_data,
    
    // Health monitoring
    output wire                  entropy_low,
    output wire                  test_failed
);
```

## Health Monitoring
Two signals are provided for monitoring the health of the random number generator:

1. **entropy_low**: Indicates when the entropy collection may be insufficient.
2. **test_failed**: Triggered when basic statistical tests show potential problems with the generated values.

## Testing with Verilator
The testbench performs several checks on the TRNG:

1. **Basic Operation Test**: Verifies that the module produces valid data and that consecutive values differ.
2. **Parameterized Width Test**: Ensures that the full bit-width of the generator is active.
3. **Enable/Disable Test**: Checks that the module responds correctly to the enable signal.
4. **Entropy Quality Test**: Performs basic statistical tests on the generated values to ensure randomness.

## Running Tests
To run the tests:

```bash
# Make the script executable
chmod +x run_trng_tests.sh

# Run the tests
./run_trng_tests.sh
```

The tests will produce a waveform file (`true_random_generator.vcd`) that can be viewed with tools like GTKWave.

## Integration Notes
When integrating this module:

1. For FPGA implementation, ensure that the ring oscillator is properly constrained to prevent optimization.
2. Monitor the health signals during operation for potential entropy issues.
3. In most systems, the TRNG should feed a cryptographic PRNG for post-processing of the random data. 