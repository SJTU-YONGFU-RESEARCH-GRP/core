# CORDIC (Coordinate Rotation Digital Computer) Modules
*A Comprehensive Guide to Trigonometric and Coordinate Rotation Implementations*

## Table of Contents
- [Introduction](#introduction)
- [CORDIC Core](#cordic-core)
  - [Algorithm Overview](#algorithm-overview)
  - [Implementation Details](#implementation-details)
  - [Quadrant Handling](#quadrant-handling)
- [Sine-Cosine Generator](#sine-cosine-generator)
  - [Angle Mapping](#angle-mapping)
  - [Lookup Table Strategy](#lookup-table-strategy)
- [Mathematical Background](#mathematical-background)
- [Performance Characteristics](#performance-characteristics)
- [Applications](#applications)
- [Implementation Considerations](#implementation-considerations)
- [Comparative Analysis](#comparative-analysis)
- [Code Examples](#code-examples)
- [References](#references)

## Introduction

CORDIC (Coordinate Rotation Digital Computer) is a powerful algorithm for computing trigonometric functions, vector rotations, and coordinate transformations using only shift and add operations. This library provides two key CORDIC-based modules:

1. **CORDIC Core**: A generic coordinate rotation and vector transformation module
2. **Sine-Cosine Generator**: A specialized sine and cosine function generator

These modules are designed to be highly configurable, supporting various data widths and precision levels.

## CORDIC Core

### Algorithm Overview

The CORDIC algorithm performs coordinate rotations through the following key steps:
- Rotate a vector by a specified angle
- Uses only shift and add operations
- Converges to the rotated coordinates through iterative micro-rotations
- Supports both circular and hyperbolic coordinate systems

**Key Features**:
- Parameterizable data width
- Configurable number of iterations
- Supports full 360-degree rotation
- Quadrant-aware implementation

### Implementation Details

```verilog
// Core CORDIC iteration logic
always @(*) begin
    if (z_stage[i][PHASE_WIDTH-1] == 0) begin
        // Rotate counter-clockwise when z is positive
        x_stage[i+1] = x_stage[i] - (y_stage[i] >>> i);
        y_stage[i+1] = y_stage[i] + (x_stage[i] >>> i);
        z_stage[i+1] = z_stage[i] - atan_table[i];
    end
    else begin
        // Rotate clockwise when z is negative
        x_stage[i+1] = x_stage[i] + (y_stage[i] >>> i);
        y_stage[i+1] = y_stage[i] - (x_stage[i] >>> i);
        z_stage[i+1] = z_stage[i] + atan_table[i];
    end
end
```

### Quadrant Handling

The CORDIC core implements sophisticated quadrant handling:
- Normalizes input angle to first quadrant
- Tracks original quadrant
- Applies appropriate sign corrections post-rotation

**Quadrant Mapping**:
- Q0 (0-90°): No transformation
- Q1 (90-180°): Negate X
- Q2 (180-270°): Negate X and Y
- Q3 (270-360°): Negate Y

## Sine-Cosine Generator

### Angle Mapping

The sine-cosine generator provides multiple strategies for angle generation:
- Direct lookup for standard angles
- Interpolation for intermediate angles
- Supports full 360-degree range

**Angle Resolution**:
- 16-bit phase input (0 to 2π mapped to 0 to 65535)
- Precise values for key angles (0°, 22.5°, 45°, 67.5°, 90°)

### Lookup Table Strategy

```verilog
// Precise sine/cosine values in Q1.15 format
localparam signed [DATA_WIDTH-1:0] SIN_0       = 16'd0;      // sin(0°)
localparam signed [DATA_WIDTH-1:0] SIN_22_5    = 16'd12539;  // sin(22.5°)
localparam signed [DATA_WIDTH-1:0] SIN_45      = 16'd23170;  // sin(45°)
localparam signed [DATA_WIDTH-1:0] SIN_67_5    = 16'd30273;  // sin(67.5°)
localparam signed [DATA_WIDTH-1:0] SIN_90      = 16'd32767;  // sin(90°)
```

## Mathematical Background

**CORDIC Algorithm Principles**:
- Based on vector rotation using elementary rotations
- Converges to rotated coordinates through successive approximations
- Uses only shift and add operations, avoiding complex multipliers
- Rotation matrix approximated through iterative micro-rotations

**Convergence Characteristics**:
- Iterations determine precision
- Typical range: 10-16 iterations
- Scaling factor varies with iteration count

## Performance Characteristics

| Parameter | CORDIC Core | Sine-Cosine Generator |
|-----------|-------------|----------------------|
| Latency | O(ITERATIONS) | O(1) for standard angles |
| Resource Usage | Low | Very Low |
| Precision | Configurable | Fixed at design time |
| Power Consumption | Low | Very Low |

## Applications

**Signal Processing**:
- Trigonometric function generation
- Coordinate transformations
- Rotation matrix computations
- Digital signal modulation

**Embedded Systems**:
- Low-power angle computation
- Navigation and guidance systems
- Motor control algorithms
- Robotics kinematics

**Communication Systems**:
- Phase shift calculations
- Polar to rectangular conversions
- Complex number operations

## Implementation Considerations

**Design Recommendations**:
- Choose iteration count based on required precision
- Consider data width carefully
- Use pipelined versions for high-frequency designs
- Validate against floating-point references

**Optimization Strategies**:
- Reduce iteration count for area-constrained designs
- Use fixed-point representations
- Leverage built-in DSP slices in FPGAs

## Comparative Analysis

**vs. Floating-Point Trigonometric Functions**:
- CORDIC: Hardware-efficient, fixed precision
- Floating-Point: Software-based, variable precision
- CORDIC: Lower power, deterministic performance

**vs. Lookup Table Approaches**:
- CORDIC: Continuous angle support
- Lookup Tables: Discrete, high-precision points
- Hybrid approaches possible

## Code Examples

### Rotation Example
```verilog
cordic_core #(
    .DATA_WIDTH(16),
    .PHASE_WIDTH(16),
    .ITERATIONS(10)
) rotator (
    .x_in(input_x),
    .y_in(input_y),
    .z_in(rotation_angle),
    .x_out(rotated_x),
    .y_out(rotated_y)
);
```

### Sine Generation Example
```verilog
sine_cosine_generator #(
    .DATA_WIDTH(16),
    .PHASE_WIDTH(16),
    .ITERATIONS(10)
) sine_gen (
    .clk(clk),
    .rst_n(reset),
    .enable(1'b1),
    .phase_in(angle),
    .sine_out(sine_value),
    .cosine_out(cosine_value)
);
```

## References

1. "CORDIC Algorithms and Architectures" by Ray Andraka
2. "Digital Signal Processing" by John G. Proakis
3. "Computer Arithmetic" by Behrooz Parhami
4. IEEE Transactions on Computers special issue on CORDIC algorithms
5. "Advances in CORDIC Algorithms and Architectures" by Dsp Research Group, Stanford University 