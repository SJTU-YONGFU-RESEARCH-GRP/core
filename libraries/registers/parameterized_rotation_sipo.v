/**
 * Parameterized Rotation SIPO (Serial-In, Parallel-Out) Register
 * 
 * This module implements a configurable serial-to-parallel converter with additional
 * built-in rotation capability. It can be used in various applications including
 * data deserialization, bit pattern detection, and digital communications.
 *
 * Features:
 * - Configurable width for the parallel output
 * - MSB-first or LSB-first operation mode
 * - Configurable rotation amount for the output data
 * - Separate enable and load signals for control flexibility
 *
 * Parameters:
 * - WIDTH: Width of the parallel output (default: 8 bits)
 * - ROTATION: Number of bits to rotate right (default: 0 - no rotation)
 * - MSB_FIRST: When 1, shifts MSB-first; when 0, shifts LSB-first (default: 1)
 *
 * Interface:
 * - clk: Clock input
 * - rst_n: Active-low reset
 * - serial_in: Serial data input
 * - enable: Enable signal for shifting
 * - load: Load signal for parallel output
 * - parallel_out: Parallel data output
 */
module parameterized_rotation_sipo #(
    parameter WIDTH = 8,         // Width of the parallel output
    parameter ROTATION = 0,      // Number of bits to rotate (default: no rotation)
    parameter MSB_FIRST = 1      // 1: MSB first, 0: LSB first
)(
    input wire clk,              // Clock input
    input wire rst_n,            // Active low reset
    input wire serial_in,        // Serial data input
    input wire enable,           // Enable signal for shifting
    input wire load,             // Load signal for parallel output
    output reg [WIDTH-1:0] parallel_out  // Parallel data output
);

    // Internal shift register
    reg [WIDTH-1:0] shift_reg;
    
    // Serial to parallel conversion with reset and enable control
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            shift_reg <= {WIDTH{1'b0}};
        end else if (enable) begin
            if (MSB_FIRST != 0) begin
                // MSB first
                shift_reg <= {shift_reg[WIDTH-2:0], serial_in};
            end else begin
                // LSB first
                shift_reg <= {serial_in, shift_reg[WIDTH-1:1]};
            end
        end
    end
    
    // Load parallel output with optional rotation
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            parallel_out <= {WIDTH{1'b0}};
        end else if (load) begin
            if (ROTATION == 0) begin
                parallel_out <= shift_reg;
            end else begin
                // Right rotation: shift bits right by ROTATION positions
                parallel_out <= {shift_reg[ROTATION-1:0], shift_reg[WIDTH-1:ROTATION]};
            end
        end
    end

endmodule 
