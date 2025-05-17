# AES-128 Core Module

## Overview
This project implements an AES-128 (Advanced Encryption Standard) core module in Verilog, with a C++ testbench using Verilator for simulation and verification.

## Features
- AES-128 encryption implementation
- Parameterized Verilog module
- Verilator-based testbench
- Single test vector verification

## Prerequisites
- Verilator
- GCC/G++ compiler
- Make

## Project Structure
- `libraries/encryption/aes_core.v`: Verilog AES core module
- `libraries/encryption/tb_aes_core.cpp`: C++ testbench
- `Makefile`: Build and test automation

## Building and Testing
```bash
# Compile and simulate
make test

# Clean generated files
make clean
```

## Test Vector
The testbench uses a standard AES-128 test vector:
- Key: `2b 7e 15 16 28 ae d2 a6 ab f7 15 88 09 cf 4f 3c`
- Plaintext: `32 43 f6 a8 88 5a 30 8d 31 31 98 a2 e0 37 07 34`
- Expected Ciphertext: `39 02 dc 19 25 dc 11 6a 84 09 85 0b 1d fb 97 32`

## Limitations
- Currently supports only AES-128
- Simplified S-Box implementation
- Basic encryption functionality

## License
MIT License 