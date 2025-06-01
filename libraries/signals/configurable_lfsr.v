module configurable_lfsr #(
    parameter WIDTH = 8
)(
    input wire clk,
    input wire rst_n,
    input wire enable,
    input wire [WIDTH-1:0] seed,
    input wire [WIDTH-1:0] tap_pattern,  // Configurable tap pattern
    input wire load_seed,                // Load seed when high
    output wire serial_out,
    output wire [WIDTH-1:0] parallel_out
);

    // Internal shift register
    reg [WIDTH-1:0] shift_reg;

    // Compute feedback bit based on tap pattern
    wire feedback;
    genvar i;
    generate
        if (WIDTH == 1) begin : single_bit
            assign feedback = shift_reg[0];
        end else begin : multi_bit
            wire [WIDTH-1:0] tapped_bits;
            for (i = 0; i < WIDTH; i = i + 1) begin : tap_gen
                assign tapped_bits[i] = shift_reg[i] & tap_pattern[i];
            end
            
            // XOR reduction for feedback
            reg xor_result;
            integer j;
            always @(*) begin
                xor_result = 1'b0;
                for (j = 0; j < WIDTH; j = j + 1) begin
                    xor_result = xor_result ^ tapped_bits[j];
                end
            end
            assign feedback = xor_result;
        end
    endgenerate

    // Update shift register on clock edge
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            shift_reg <= {WIDTH{1'b0}};
        end else if (load_seed) begin
            shift_reg <= seed;
        end else if (enable) begin
            // Shift right, with feedback bit inserted at MSB
            shift_reg <= {feedback, shift_reg[WIDTH-1:1]};
        end
    end

    // Outputs
    assign serial_out = shift_reg[0];
    assign parallel_out = shift_reg;

endmodule 
