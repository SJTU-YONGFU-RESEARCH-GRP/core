# Encryption Library

## Overview
This library provides two critical cryptographic and security-related modules:
1. AES Core: A hardware implementation of the Advanced Encryption Standard (AES-128)
2. True Random Number Generator: A hardware-based entropy source for generating high-quality random numbers

## 1. AES Core (`aes_core.v`)

### Module Description
The AES Core is a fully synthesizable Verilog implementation of the AES-128 encryption/decryption algorithm. It supports both encryption and decryption operations with a 128-bit key and 128-bit data block.

### Key Features
- Supports both encryption and decryption modes
- Fully pipelined architecture
- Configurable through module parameters
- Implements standard AES-128 round operations

### Interface
```verilog
module aes_core (
    input  wire         clk,        // Clock input
    input  wire         rst_n,      // Active-low reset
    input  wire         start,      // Start operation
    input  wire         encrypt,    // 1 for encrypt, 0 for decrypt
    output reg          done,       // Operation complete
    output reg          busy,       // Core is processing
    input  wire [31:0]  data_in[0:3],  // Input data (128-bit)
    input  wire [31:0]  key[0:3],      // Key input (128-bit)
    output reg  [31:0]  data_out[0:3]  // Output data (128-bit)
);
```

### Key Components
- S-Box Transformation: Non-linear substitution of bytes
- Key Expansion: Generates round keys for each encryption round
- State Transformation: Implements core AES encryption/decryption steps
  - SubBytes: Byte substitution using S-Box
  - ShiftRows (implicit in implementation)
  - MixColumns (implicit in implementation)
  - AddRoundKey

### Performance
- Rounds: 10 (standard for AES-128)
- Latency: Approximately 10 clock cycles
- Throughput: One 128-bit block per 10 clock cycles

## 2. True Random Number Generator (`true_random_generator.v`)

### Module Description
A hardware-based true random number generator that leverages physical entropy sources to generate high-quality random numbers.

### Key Features
- Configurable data width (default 32-bit)
- Multiple entropy sources
  - Ring Oscillator (optional)
  - Linear Feedback Shift Registers (LFSRs)
- Advanced entropy collection and mixing techniques
- Health monitoring and validation

### Interface
```verilog
module true_random_generator #(
    parameter DATA_WIDTH = 32,
    parameter USE_RINGOSCILLATOR = 1
)(
    input  wire                  clk,
    input  wire                  rst_n,
    input  wire                  enable,
    input  wire                  read_next,
    output wire                  data_valid,
    output wire [DATA_WIDTH-1:0] random_data,
    output wire                  entropy_low,
    output wire                  test_failed
);
```

### Entropy Generation Techniques
1. **Ring Oscillator Method**
   - Uses an odd number of inverters in a loop
   - Generates unpredictable oscillations
   - Samples oscillator state for entropy

2. **LFSR (Linear Feedback Shift Register)**
   - Multiple LFSRs with different tap configurations
   - Provides additional entropy sources
   - Uses complex feedback polynomials

### Entropy Mixing and Processing
- Multiple entropy pools
- Complex bit mixing algorithms
- Cross-pool XOR operations
- Byte and half-word swapping

### Health Monitoring
- Entropy collection counter
- State machine for controlled generation
- Configurable test and validation stages

## Usage Guidelines
1. Ensure proper clock and reset management
2. For AES:
   - Provide 128-bit data and key
   - Assert `start` and `encrypt/decrypt` signals
   - Wait for `done` signal
3. For Random Generator:
   - Enable module
   - Check `data_valid` before reading
   - Use `read_next` to request new random data

## Potential Applications
- Secure communication systems
- Cryptographic key generation
- Hardware security modules
- Random number-dependent algorithms

## Synthesis Notes
- Verified with Verilator
- Synthesis directives for ring oscillator
- Parameterizable for different FPGA/ASIC technologies

## Limitations and Considerations
- Performance varies with implementation technology
- Actual randomness depends on physical entropy sources
- Recommend additional post-processing for cryptographic applications

## References
- NIST SP 800-90A (Random Number Generation)
- FIPS 197 (AES Specification)
- "Hardware-based Cryptography" by Cetin K. Koc 