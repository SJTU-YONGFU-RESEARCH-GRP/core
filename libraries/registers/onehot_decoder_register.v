module onehot_decoder_register #(
    parameter INPUT_WIDTH = 4,
    parameter OUTPUT_WIDTH = 16  // Should be 2^INPUT_WIDTH
)(
    input wire clk,                           // Clock input
    input wire rst_n,                         // Active low reset
    input wire enable,                        // Enable signal
    input wire [INPUT_WIDTH-1:0] binary_in,   // Binary input
    output reg [OUTPUT_WIDTH-1:0] onehot_out  // One-hot output
);

    // Calculate one-hot value
    wire [OUTPUT_WIDTH-1:0] onehot_decoded;
    
    // Decoder implementation - set the bit position corresponding to binary input
    assign onehot_decoded = {{(OUTPUT_WIDTH-1){1'b0}}, 1'b1} << binary_in;
    
    // Register the decoded output
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            onehot_out <= {OUTPUT_WIDTH{1'b0}};
        end else if (enable) begin
            onehot_out <= onehot_decoded;
        end
    end

    // Parameter validation - ensure OUTPUT_WIDTH = 2^INPUT_WIDTH
    initial begin
        if (OUTPUT_WIDTH != (1 << INPUT_WIDTH)) begin
            $error("Parameter mismatch: OUTPUT_WIDTH (%0d) must be 2^INPUT_WIDTH (2^%0d = %0d)",
                  OUTPUT_WIDTH, INPUT_WIDTH, (1 << INPUT_WIDTH));
        end
    end

endmodule 