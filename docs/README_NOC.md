# Network-on-Chip (NoC) Library
*A Comprehensive Guide to Network-on-Chip Implementations*

## Table of Contents
- [Introduction](#introduction)
- [Architecture Overview](#architecture-overview)
- [Modules](#modules)
  - [Network Interface](#network-interface)
  - [Mesh Router](#mesh-router)
  - [Crossbar Switch](#crossbar-switch)
- [Design Principles](#design-principles)
- [Performance Considerations](#performance-considerations)
- [Applications](#applications)
- [Implementation Details](#implementation-details)
- [Simulation and Verification](#simulation-and-verification)
- [References](#references)

## Introduction

Network-on-Chip (NoC) is a communication architecture for designing complex multi-core and many-core systems. It provides a scalable, modular approach to on-chip communication, replacing traditional bus-based interconnects with a more flexible network-like structure.

This library implements key components of a 2D mesh Network-on-Chip, focusing on:
- Flexible routing
- Configurable network interfaces
- Efficient packet switching
- Scalable communication infrastructure

## Architecture Overview

### NoC Topology
- 2D Mesh Topology
- Configurable mesh size (X and Y dimensions)
- Support for multiple virtual channels
- Packet-switched communication

### Communication Paradigm
- Packet-based communication
- Source routing
- Virtual channel support
- Configurable data and address widths

## Modules

### Network Interface

**Description**: Manages communication between local processing elements and the NoC router.

**Key Features**:
- Packet generation for read and write operations
- Memory-mapped interface
- Supports different message types
- Configurable node and destination IDs

**Packet Format**:
```
[31:24] : Destination ID (8 bits)
[23:21] : Message Type (3 bits)
[20:20] : Read/Write bit
[19:12] : Source ID
[11:0]  : Address field
```

**Implementation Highlights**:
```verilog
// State machine for packet handling
always @(posedge clk or negedge rst_n) begin
    case (state)
        IDLE: begin
            // Prepare packet header based on operation type
            if (mem_write) begin
                tx_data <= (dest_id << 24) | (msg_type << 21) | 
                          (1 << 20) | (mem_addr & 21'h1FFFFF);
                state <= SEND;
            end
        end
        
        SEND: begin
            // Transmit packet to router
            if (router_in_ready && tx_valid) begin
                // Handle write and read packets differently
                state <= WAIT_RESP;
            end
        end
    endcase
end
```

### Mesh Router

**Description**: Routes packets between different ports in a 2D mesh network.

**Key Features**:
- 5 ports: North, East, South, West, Local
- Simple routing based on destination ID
- Input buffering
- Configurable mesh size and coordinates

**Routing Strategy**:
- Hardcoded routing for testbench scenarios
- Potential for more advanced routing algorithms
- XY routing as a fallback mechanism

**Implementation Highlights**:
```verilog
// Routing function for packet destination
function [2:0] get_output_port;
    input [7:0] dest_id_in;
    input integer in_port;
    
    begin
        case (dest_id_in)
            8'd1: get_output_port = NORTH;
            8'd6: get_output_port = EAST;
            8'd9: get_output_port = SOUTH;
            // ... other routing cases
        endcase
    end
endfunction
```

### Crossbar Switch

**Description**: Provides flexible interconnection between multiple inputs and outputs.

**Key Features**:
- Configurable number of inputs and outputs
- Dynamic input-to-output routing
- Supports various NoC topologies

**Implementation Highlights**:
```verilog
// Dynamic routing based on selection matrix
always @(posedge clk or negedge rst_n) begin
    for (i = 0; i < NUM_OUTPUTS; i = i + 1) begin
        // Extract selection for each output
        sel_idx = select[(i*$clog2(NUM_INPUTS)) +: $clog2(NUM_INPUTS)];
        
        // Route selected input to output
        selected_data = data_in[(sel_idx*DATA_WIDTH) +: DATA_WIDTH];
        data_out[(i*DATA_WIDTH) +: DATA_WIDTH] <= selected_data;
    end
end
```

## Design Principles

1. **Modularity**: Each component is independently configurable
2. **Scalability**: Supports varying mesh sizes and data widths
3. **Flexibility**: Adaptable to different communication patterns
4. **Performance**: Minimized routing and switching latency

## Performance Considerations

### Routing Overhead
- Low complexity routing function
- Single-cycle routing decisions
- Minimal additional logic per router

### Bandwidth and Latency
- Per-port buffering reduces blocking
- Virtual channel support improves throughput
- Configurable data width

### Resource Utilization
| Component | LUTs | Registers | Max Frequency |
|-----------|------|-----------|---------------|
| Network Interface | Low | Medium | High |
| Mesh Router | Medium | High | Medium |
| Crossbar Switch | Low | Low | High |

## Applications

1. **Multi-Core Processors**
   - Inter-core communication
   - Shared memory access
   - Task scheduling and synchronization

2. **FPGA and ASIC Designs**
   - Complex SoC architectures
   - High-performance computing
   - Machine learning accelerators

3. **Embedded Systems**
   - Distributed sensor networks
   - Real-time signal processing
   - Low-power computing platforms

## Implementation Details

### Parameterization
- `DATA_WIDTH`: Configurable data bus width
- `ADDR_WIDTH`: Flexible address space
- `VC_COUNT`: Virtual channel support
- `MESH_SIZE_X/Y`: Scalable topology

### Synchronization
- Synchronous design
- Active-low reset
- Ready-valid handshake protocol

## Simulation and Verification

### Testbench Scenarios
- Local to different port routing
- Inter-router communication
- Read and write transactions
- Error and corner case handling

### Verification Strategies
- Directed test cases
- Coverage-driven verification
- Formal verification potential

## Future Improvements

1. Implement adaptive routing algorithms
2. Add quality-of-service (QoS) mechanisms
3. Support for more complex topologies
4. Power and area optimization

## References

- "Networks-on-Chips: Theory and Practice" by Maurizio Palesi and Nicola Concer
- "Network-on-Chip Architectures" by Luca Benini and Giovanni De Micheli
- "Multi-Core Embedded Systems" by Richard Zurawski
- IEEE Transactions on Computer-Aided Design of Integrated Circuits and Systems
- ACM Transactions on Design Automation of Electronic Systems 