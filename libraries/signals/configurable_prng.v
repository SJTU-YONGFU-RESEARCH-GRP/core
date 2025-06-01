module configurable_prng #(
    parameter WIDTH = 16,                       // Width of the PRNG output
    parameter [WIDTH-1:0] SEED = 16'hACE1,      // Default seed value (non-zero)
    parameter [WIDTH-1:0] TAPS = 16'hB400,      // Configurable taps for maximum period LFSR
    parameter MODE = 0                         // 0: Fibonacci (external XOR), 1: Galois (internal XOR)
)(
    input wire clk,                  // Clock signal
    input wire rst_n,                // Active-low reset
    input wire enable,               // Enable signal for PRNG operation
    input wire reseed,               // Trigger to load seed value
    input wire [WIDTH-1:0] seed_in,  // External seed input
    output wire [WIDTH-1:0] random,  // Random output
    output wire valid                // Valid output flag
);

    // Internal state register
    reg [WIDTH-1:0] lfsr_reg;
    reg valid_reg;
    
    // Output assignment
    assign random = lfsr_reg;
    assign valid = valid_reg;
    
    // Seed cannot be zero for an LFSR
    wire [WIDTH-1:0] actual_seed = (seed_in == {WIDTH{1'b0}}) ? SEED : seed_in;
    
    // Determine feedback bit based on current state and taps
    // For Fibonacci LFSR
    wire feedback_fibonacci = ^(lfsr_reg & TAPS);
    
    // Next state calculation
    wire [WIDTH-1:0] next_state_fibonacci = {lfsr_reg[WIDTH-2:0], feedback_fibonacci};
    
    // For Galois LFSR
    wire [WIDTH-1:0] next_state_galois = (lfsr_reg[0]) ? 
                      ((lfsr_reg >> 1) ^ (TAPS)) : 
                      (lfsr_reg >> 1);
    
    // Select next state based on mode
    wire [WIDTH-1:0] next_state = (MODE == 0) ? next_state_fibonacci : next_state_galois;
    
    // State update logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            // Reset to seed value
            lfsr_reg <= SEED;
            valid_reg <= 1'b0;
        end else if (reseed) begin
            // Reseed with input value
            lfsr_reg <= actual_seed;
            valid_reg <= 1'b0;
        end else if (enable) begin
            // Update state
            lfsr_reg <= next_state;
            valid_reg <= 1'b1;
        end
    end

endmodule 
