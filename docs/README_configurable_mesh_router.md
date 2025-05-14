# Configurable Mesh Router

This project implements a parameterized Network-on-Chip (NoC) mesh router in Verilog with Verilator-based verification.

## Design Overview

The configurable mesh router implements a standard 5-port router for 2D mesh networks:
- 4 directional ports: North, East, South, West
- 1 local port connecting to the processing element

### Features

- **Parameterized Design**:
  - Configurable data width
  - Configurable address width
  - Configurable X/Y coordinate widths
  - Configurable input FIFO depths

- **XY Routing Algorithm**:
  - Deterministic routing that first routes in the X dimension, then in the Y dimension
  - Deadlock-free by design

- **Input-Buffered Architecture**:
  - FIFOs at each input port for packet storage
  - Round-robin arbitration for fairness

- **Flow Control**:
  - Ready/Valid handshaking for backpressure support
  - Buffer management to prevent overflow

## Implementation Details

### Parameters

- `DATA_WIDTH`: Width of data payload (default: 32 bits)
- `ADDR_WIDTH`: Width of address field (default: 8 bits)
- `X_ADDR_WIDTH`: Width of X coordinate in address (default: 4 bits)
- `Y_ADDR_WIDTH`: Width of Y coordinate in address (default: 4 bits)
- `FIFO_DEPTH`: Depth of input FIFOs (default: 4 entries)

### Interface

Each of the 5 ports has the following interface signals:
- `valid_i`: Input data valid signal
- `data_i`: Input data payload
- `addr_i`: Input address field
- `ready_o`: Output ready signal (indicates FIFO can accept data)
- `valid_o`: Output data valid signal
- `data_o`: Output data payload
- `addr_o`: Output address field
- `ready_i`: Input ready signal (indicates downstream can accept data)

### Packet Format

Packets consist of:
- Destination address: Contains X and Y coordinates for the destination
- Data payload: Actual data being transferred

### Microarchitecture

1. **Input Stage**:
   - Each input port has a dedicated FIFO
   - Flow control manages FIFO occupancy

2. **Route Computation**:
   - XY routing logic determines output port for each packet
   - Routing is deterministic based on current and destination coordinates

3. **Switch Allocation**:
   - Round-robin arbitration resolves conflicts when multiple inputs request the same output
   - Fair allocation ensures no input port is starved

4. **Output Stage**:
   - Packets are forwarded to the appropriate output port
   - Backpressure is handled through ready/valid handshaking

## Testbench

The testbench includes:

1. **Basic XY Routing Tests**:
   - Verifies correct routing decisions
   - Tests all port-to-port combinations

2. **Concurrent Routing Tests**:
   - Multiple packets arriving simultaneously
   - Tests arbitration mechanism

3. **Backpressure Tests**:
   - Verifies flow control mechanisms
   - Tests FIFO filling and draining

4. **Parameterized Tests**:
   - Tests router configurations with different parameters
   - Includes tests for larger network sizes and deeper FIFOs
   - Demonstrates runtime parameter configuration with Verilator

## Building and Running

The design can be built and simulated using Verilator:

```bash
# Run with default parameters
make -f Makefile.mesh_router run

# Run with alternative parameters (smaller data width, larger address width, deeper FIFOs)
make -f Makefile.mesh_router run_param
```

To view the waveform:

```bash
# View default parameter simulation waveform
make -f Makefile.mesh_router view

# View parameterized simulation waveform
make -f Makefile.mesh_router view_param
```

To clean the project:

```bash
make -f Makefile.mesh_router clean
```

## Parameterization

The default configuration uses:
- DATA_WIDTH = 32 bits
- ADDR_WIDTH = 8 bits
- X_ADDR_WIDTH = 4 bits
- Y_ADDR_WIDTH = 4 bits
- FIFO_DEPTH = 4 entries

The alternative configuration (`run_param` target) uses:
- DATA_WIDTH = 16 bits
- ADDR_WIDTH = 12 bits
- X_ADDR_WIDTH = 6 bits
- Y_ADDR_WIDTH = 6 bits
- FIFO_DEPTH = 8 entries

You can modify these parameters in the Makefile.mesh_router file to test different configurations.

## Expected Results

The simulation will print routing decisions and packet movement through the router. The console output shows:
- Input packet acceptance
- Output packet delivery
- Ready/valid signaling
- Internal state transitions

The VCD waveform file provides a detailed view of all signals during simulation. 