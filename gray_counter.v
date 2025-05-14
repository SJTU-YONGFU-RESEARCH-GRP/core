module gray_counter #(
    parameter WIDTH = 4
)(
    input wire clk,
    input wire rst_n,
    input wire enable,
    output reg [WIDTH-1:0] gray_out,
    output wire [WIDTH-1:0] binary_out
);

    // Internal binary counter
    reg [WIDTH-1:0] binary_count;
    
    // Convert binary count to Gray code
    assign binary_out = binary_count;
    
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            binary_count <= {WIDTH{1'b0}};
            gray_out <= {WIDTH{1'b0}};
        end else if (enable) begin
            // Update binary counter
            binary_count <= binary_count + 1'b1;
            
            // Calculate Gray code for the NEXT binary value
            // Gray code = binary XOR (binary >> 1)
            gray_out <= (binary_count + 1'b1) ^ ((binary_count + 1'b1) >> 1);
        end
    end

endmodule 
