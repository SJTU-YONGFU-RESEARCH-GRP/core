module lfsr #(
    parameter WIDTH = 8,
    parameter TAPS = 8'b10111000  // Default taps for 8-bit LFSR
)(
    input wire clk,
    input wire rst_n,
    input wire enable,
    input wire load,
    input wire [WIDTH-1:0] seed,
    output wire [WIDTH-1:0] lfsr_out,
    output wire bit_out
);

    reg [WIDTH-1:0] lfsr_reg;
    wire feedback;
    
    // Output assignments
    assign lfsr_out = lfsr_reg;
    assign bit_out = lfsr_reg[0];  // LSB is the output bit
    
    // Calculate feedback based on taps
    // The feedback is the XOR of all tapped bits
    genvar i;
    generate
        if (WIDTH <= 8) begin: w8
            assign feedback = ^(lfsr_reg & TAPS);
        end else begin: wn
            wire [WIDTH-1:0] masked_taps;
            for (i = 0; i < WIDTH; i = i + 1) begin: tap_gen
                assign masked_taps[i] = (i < 8) ? (TAPS[i] & lfsr_reg[i]) : 
                                       ((i == WIDTH-1) ? lfsr_reg[i] : 1'b0);
            end
            assign feedback = ^masked_taps;
        end
    endgenerate
    
    // LFSR shift logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            lfsr_reg <= {WIDTH{1'b0}};
        end else if (load) begin
            lfsr_reg <= seed;
        end else if (enable) begin
            // Galois LFSR implementation
            // Shift right and insert feedback at MSB
            lfsr_reg <= {feedback, lfsr_reg[WIDTH-1:1]};
        end
    end

endmodule 
