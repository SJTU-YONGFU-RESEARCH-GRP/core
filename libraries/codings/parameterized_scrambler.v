// Parameterized Scrambler/Descrambler Module
// This module implements a configurable scrambler/descrambler based on linear feedback shift registers
// Can be used for data whitening, data randomization and noise spreading in communications

module parameterized_scrambler #(
    parameter WIDTH = 8,             // LFSR width
    parameter [WIDTH-1:0] POLYNOMIAL = 8'h71,  // x^7 + x^6 + x^0 (0b01110001)
    parameter [WIDTH-1:0] INITIAL_SEED = {WIDTH{1'b1}},  // All ones initial seed
    parameter SELF_SYNCHRONIZED = 0   // 0 = reset based, 1 = self-synchronized
)(
    input wire clk,                  // Clock signal
    input wire rst_n,                // Active-low reset
    input wire enable,               // Enable signal
    input wire data_in,              // Input data bit
    output wire data_out,            // Output scrambled/descrambled data
    output wire [WIDTH-1:0] lfsr_state // LFSR state (for debugging)
);

    // LFSR register
    reg [WIDTH-1:0] lfsr_reg;
    
    // Next state logic
    wire feedback;
    wire next_input;
    
    // Reset based or self-synchronized mode selection
    generate
        if (SELF_SYNCHRONIZED) begin : gen_self_sync_mode
            // Self-synchronized mode: feedback from input data
            assign next_input = data_in;
        end else begin : gen_reset_based_mode
            // Reset based mode: feedback from LFSR
            assign next_input = lfsr_reg[0];
        end
    endgenerate
    
    // Calculate feedback based on polynomial taps
    assign feedback = ^(lfsr_reg & POLYNOMIAL);
    
    // LFSR state register update
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            lfsr_reg <= INITIAL_SEED;
        end else if (enable) begin
            // Shift right with feedback in MSB
            lfsr_reg <= {feedback ^ next_input, lfsr_reg[WIDTH-1:1]};
        end
    end
    
    // Output is XOR of input and LFSR LSB
    assign data_out = data_in ^ lfsr_reg[0];
    
    // Expose LFSR state for debugging
    assign lfsr_state = lfsr_reg;

endmodule 