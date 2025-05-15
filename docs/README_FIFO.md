# FIFO (First-In-First-Out) Memory Library

This document provides detailed information on the various FIFO (First-In-First-Out) memory implementations available in the RTL library. FIFOs are essential building blocks in digital designs for buffering data between modules, synchronizing between clock domains, and managing data flow.

## Table of Contents

1. [Basic FIFO](#basic-fifo)
2. [Synchronous FIFO](#synchronous-fifo)
3. [Asynchronous FIFO](#asynchronous-fifo)
4. [First-Word Fall-Through (FWFT) FIFO](#first-word-fall-through-fwft-fifo)
5. [Show-Ahead FIFO](#show-ahead-fifo) 
6. [Memory-Mapped FIFO](#memory-mapped-fifo)
7. [Pipelined FIFO](#pipelined-fifo)
8. [Barrel Shifter FIFO](#barrel-shifter-fifo)
9. [Multi-Ported FIFO](#multi-ported-fifo)
10. [Smart FIFO](#smart-fifo)
11. [Cache FIFO](#cache-fifo)
12. [Clock Domain Crossing FIFO](#clock-domain-crossing-fifo)
13. [Circular Buffer FIFO](#circular-buffer-fifo)
14. [Credit-Based FIFO](#credit-based-fifo)
15. [Skid Buffer](#skid-buffer)
16. [Elastic Buffer](#elastic-buffer)
17. [Dual-Clock FIFO](#dual-clock-fifo)
18. [Bidirectional FIFO](#bidirectional-fifo)
19. [Configurable Sync FIFO](#configurable-sync-fifo)
20. [Configurable Parameterized FIFO](#configurable-parameterized-fifo)
21. [Parameterized Priority Queue](#parameterized-priority-queue)

## Common FIFO Parameters

Most FIFOs share these common parameters:

| Parameter | Description | Typical Values |
|-----------|-------------|----------------|
| `DATA_WIDTH` | Width of the data bus in bits | 8, 16, 32, 64, etc. |
| `ADDR_WIDTH` | Width of the address bus, determines FIFO depth (2^ADDR_WIDTH) | 4-12 |
| `ALMOST_FULL_THRESHOLD` | Number of remaining slots to assert almost_full | 1-8 |
| `ALMOST_EMPTY_THRESHOLD` | Number of occupied slots to assert almost_empty | 1-8 |

## Common FIFO Interface Signals

Most FIFOs share these common interface signals:

| Signal | Direction | Description |
|--------|-----------|-------------|
| `clk` | Input | Clock input (for synchronous FIFOs) |
| `rst_n` | Input | Active low synchronous reset |
| `wr_en` | Input | Write enable |
| `wr_data` | Input | Data to write to FIFO |
| `rd_en` | Input | Read enable |
| `rd_data` | Output | Data read from FIFO |
| `full` | Output | FIFO is full |
| `empty` | Output | FIFO is empty |
| `almost_full` | Output | FIFO is almost full (optional) |
| `almost_empty` | Output | FIFO is almost empty (optional) |
| `data_count` | Output | Number of entries in FIFO (optional) |

## Basic FIFO
<a name="basic-fifo"></a>

A simple FIFO implementation with basic functionality.

**Key Features:**
- Basic write and read operations
- Full and empty flags
- Synchronous design (single clock)

**Use Cases:**
- Simple data buffering
- Basic data flow control
- Learning and educational purposes

## Synchronous FIFO
<a name="synchronous-fifo"></a>

A FIFO implementation that operates in a single clock domain.

**Key Features:**
- Single clock domain operation
- Full, empty, and optional almost_full/almost_empty flags
- Optional data count output
- Configurable depth and width

**Use Cases:**
- Standard data buffering within the same clock domain
- Rate matching between producer and consumer
- General-purpose data queuing

## Asynchronous FIFO
<a name="asynchronous-fifo"></a>

A FIFO implementation that safely transfers data between two different clock domains.

**Key Features:**
- Dual clock domain support (separate read and write clocks)
- Gray code pointers for metastability protection
- Multi-stage synchronization of control signals
- Safe clock domain crossing

**Use Cases:**
- Data transfer between different clock domains
- Clock frequency conversion
- Bus width adaptation across clock domains

## First-Word Fall-Through (FWFT) FIFO
<a name="first-word-fall-through-fwft-fifo"></a>

A FIFO that presents the next output data before a read is initiated.

**Key Features:**
- Data available at the output before read signal
- Improved latency compared to standard FIFO
- Read-ahead capability
- "Lookahead" data valid signal

**Use Cases:**
- Low-latency data processing
- Streaming applications
- Pipelined designs needing reduced latency

## Show-Ahead FIFO
<a name="show-ahead-fifo"></a>

Similar to FWFT but with different control behavior for showing the next data word.

**Key Features:**
- Data visible at output before read operation
- Maintains data until explicitly read
- Separate valid and read signals
- Supports peeking at head of queue

**Use Cases:**
- Protocol handlers where data inspection is needed before reading
- Command processing with preview capability
- Packet inspection systems

## Memory-Mapped FIFO
<a name="memory-mapped-fifo"></a>

A FIFO with memory-mapped register interface for configuration and data access.

**Key Features:**
- Addressable register interface
- Status and control registers
- Software accessible via memory-mapped I/O
- Combined FIFO and register functionality

**Use Cases:**
- Processor-controlled FIFO operations
- Software-accessible data queues
- FIFO integration in memory-mapped systems
- Device drivers and peripheral interfaces

## Pipelined FIFO
<a name="pipelined-fifo"></a>

A FIFO with pipelined interfaces for improved throughput.

**Key Features:**
- Registered inputs and outputs for improved timing
- Pipeline stages for high-frequency operation
- Optimized for consecutive read/write operations
- Supports high-throughput data flow

**Use Cases:**
- High-speed data processing pipelines
- Systems with stringent timing requirements
- Buffering between pipelined modules

## Barrel Shifter FIFO
<a name="barrel-shifter-fifo"></a>

A specialized FIFO utilizing barrel shifter architecture for efficient data movement.

**Key Features:**
- Barrel shifter-based data organization
- Efficient data reordering capabilities
- Optimized for partial reads and writes
- Reduced muxing overhead for certain access patterns

**Use Cases:**
- Packet reordering
- Alignment-sensitive data buffering
- Systems with data rotation requirements

## Multi-Ported FIFO
<a name="multi-ported-fifo"></a>

A FIFO with multiple read and write ports for parallel access.

**Key Features:**
- Multiple independent read ports
- Multiple independent write ports
- Concurrent access capability
- Port-specific status signals

**Parameters:**
- `NUM_READ_PORTS`: Number of read ports (default: 2)
- `NUM_WRITE_PORTS`: Number of write ports (default: 2)

**Use Cases:**
- Multi-threaded data access
- Shared buffer designs
- Multi-consumer/multi-producer scenarios
- Bandwidth aggregation

## Smart FIFO
<a name="smart-fifo"></a>

A FIFO with advanced error detection and handling features.

**Key Features:**
- Overflow and underflow protection mechanisms
- Configurable behavior for overflow conditions
- Optional return of last valid data on underflow
- Error counting and reporting

**Parameters:**
- `DROP_ON_OVERFLOW`: Controls behavior when full (0: block, 1: drop new data)
- `RETURN_LAST_ON_UNDERFLOW`: Controls behavior when empty (0: return zeros, 1: return last valid data)

**Use Cases:**
- Robust system designs requiring error resilience
- Critical applications where data loss must be tracked
- Systems requiring graceful degradation
- Debugging and system monitoring

## Cache FIFO
<a name="cache-fifo"></a>

A FIFO with integrated cache for fast access to frequently used data.

**Key Features:**
- Tag-based data identification and retrieval
- Integrated cache with configurable size
- LRU or FIFO cache replacement policy
- Cache hit/miss statistics

**Parameters:**
- `TAG_WIDTH`: Width of tag field for data identification
- `CACHE_SIZE`: Number of cache entries
- `LRU_POLICY`: Cache replacement policy (0: FIFO, 1: LRU)

**Use Cases:**
- Data structures requiring fast access to hot data
- Systems with locality of reference
- Performance-critical applications
- Analytics and telemetry gathering

## Clock Domain Crossing FIFO
<a name="clock-domain-crossing-fifo"></a>

A specialized FIFO designed specifically for safely crossing clock domains.

**Key Features:**
- Dual clock domain support with robust synchronization
- Gray code pointers for safe clock crossing
- Multi-stage synchronizers to prevent metastability
- Separate status signals for each clock domain

**Use Cases:**
- Data transfer between asynchronous clock domains
- Interface between different-frequency systems
- Safe clock boundary crossing in complex SoCs
- Connecting IP blocks with different timing constraints

## Circular Buffer FIFO
<a name="circular-buffer-fifo"></a>

A FIFO implementation based on circular buffer architecture.

**Key Features:**
- Circular (ring) buffer structure
- Wrap-around address handling
- Continuous data flow capability
- Memory-efficient implementation

**Use Cases:**
- Streaming applications
- Audio/video buffering
- Continuous data recording
- Efficient implementation in embedded systems

## Credit-Based FIFO
<a name="credit-based-fifo"></a>

A FIFO that implements a credit-based flow control mechanism.

**Key Features:**
- Credit counter for flow control
- Back-pressure signaling
- Remote flow control capability
- Optimized for network-on-chip applications

**Use Cases:**
- Network-on-chip (NoC) designs
- Long-distance data transfers
- Systems requiring explicit flow control
- Distributed system interconnects

## Skid Buffer
<a name="skid-buffer"></a>

A minimal FIFO buffer used primarily for back-pressure handling.

**Key Features:**
- Minimal depth (typically 1-2 entries)
- Designed for handling back-pressure
- Low-latency operation
- Pipeline-friendly interface

**Use Cases:**
- Pipeline bubble management
- AXI/AHB interface handshaking
- Back-pressure handling in streaming interfaces
- Protocol conversion modules

## Elastic Buffer
<a name="elastic-buffer"></a>

A flexible buffer that can stretch or shrink based on data flow requirements.

**Key Features:**
- Dynamic buffer depth management
- Advanced flow control mechanisms
- Clock compensation capability
- Latency management

**Use Cases:**
- Source-synchronous interfaces
- Systems with variable processing delays
- Data rate matching
- Dynamic latency management

## Dual-Clock FIFO
<a name="dual-clock-fifo"></a>

A FIFO specifically optimized for transferring data between two clock domains with added features.

**Key Features:**
- Independent read and write clocks
- Data capacity tracking in both domains
- Configurable synchronization stages
- Full metastability protection

**Use Cases:**
- Safe data transfer between clock domains
- High-performance asynchronous interfaces
- Systems with multiple clock frequencies
- Crossing between unrelated clock domains

## Bidirectional FIFO
<a name="bidirectional-fifo"></a>

A FIFO supporting data flow in both directions through the same interface.

**Key Features:**
- Dual-direction data transfer capability
- Mode control for direction switching
- Shared data path with multiplexed control
- Independent status signals for both directions

**Use Cases:**
- Half-duplex communication channels
- Time-multiplexed data paths
- Resource-constrained bidirectional interfaces
- Ping-pong buffer applications

## Configurable Sync FIFO
<a name="configurable-sync-fifo"></a>

A synchronous FIFO with extensive configuration options.

**Key Features:**
- Highly parameterizable design
- Runtime reconfigurability options
- Optimized for ASIC or FPGA implementation
- Extensive status reporting

**Use Cases:**
- Applications requiring customizable FIFO behavior
- IP integration with varying requirements
- Systems needing adaptable buffering
- Platform-agnostic designs

## Configurable Parameterized FIFO
<a name="configurable-parameterized-fifo"></a>

An extended configurable FIFO with additional parameters for even more flexibility.

**Key Features:**
- Extensive parameter set for fine-tuning behavior
- Optional features that can be enabled/disabled
- Advanced status signaling options
- Resource optimization features

**Parameters:**
- `ENABLE_ALMOST_FLAGS`: Enable or disable almost-full/empty flags
- Additional customization parameters

**Use Cases:**
- Complex SoC designs with specific FIFO requirements
- Resource-constrained applications needing optimization
- IP blocks requiring specifically tailored FIFOs
- Platform-specific optimizations

## Parameterized Priority Queue
<a name="parameterized-priority-queue"></a>

A specialized FIFO that dequeues data based on priority rather than FIFO order.

**Key Features:**
- Priority-based dequeuing
- Configurable priority levels
- Optional timestamp-based tie-breaking
- Fairness mechanisms

**Parameters:**
- `PRIORITY_WIDTH`: Width of priority field
- `TIMESTAMP_WIDTH`: Width of timestamp field (if used)

**Use Cases:**
- Task scheduling
- Packet scheduling in network applications
- Quality-of-Service implementations
- Real-time systems with priority requirements

## Selection Guide

Choosing the right FIFO for your application depends on several factors:

1. **Clock Domains**:
   - Single clock domain: Use Synchronous FIFO, FWFT FIFO, or Show-Ahead FIFO
   - Multiple clock domains: Use Asynchronous FIFO, Clock Domain Crossing FIFO, or Dual-Clock FIFO

2. **Latency Requirements**:
   - Low latency: Use FWFT FIFO, Show-Ahead FIFO, or Pipelined FIFO
   - Standard latency: Any synchronous or asynchronous FIFO

3. **Interface Requirements**:
   - Memory-mapped interface: Use Memory-Mapped FIFO
   - Multiple producers/consumers: Use Multi-Ported FIFO
   - Flow control: Use Credit-Based FIFO or Elastic Buffer

4. **Special Functionality**:
   - Error handling: Use Smart FIFO
   - Frequently accessed data: Use Cache FIFO
   - Priority-based access: Use Parameterized Priority Queue

5. **Resource Constraints**:
   - Minimal resources: Use Basic FIFO or Skid Buffer
   - Configurable implementation: Use Configurable Parameterized FIFO or Configurable Sync FIFO

## Verification

All FIFO modules have been verified using comprehensive C++ testbenches with Verilator. Each testbench verifies:
- Basic functionality (writes and reads)
- Corner cases (full, empty, almost_full, almost_empty conditions)
- Boundary conditions
- Error scenarios (when applicable)
- Special features specific to each FIFO type

To run tests for a specific FIFO:

```bash
make run_<fifo_name>
```

For example, to test the smart_fifo:

```bash
make run_smart_fifo
```

## Implementation Notes

- All FIFOs are synthesizable RTL implemented in Verilog
- Modules follow a consistent interface convention where possible
- Parameters and generics are used to make modules configurable
- Gray coding is used for clock domain crossing to prevent metastability
- FIFOs with special features include clear documentation of those features
- Error handling and corner case behavior is clearly defined

## Integration Examples

Each FIFO module includes example instantiation code in its module header. For complex integration scenarios, refer to specific documentation or the example testbenches. 