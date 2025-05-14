module gray_counter #(
    parameter WIDTH = 4
)(
    input wire clk,
    input wire rst_n,
    input wire enable,
    input wire direction,  // 0 = count up, 1 = count down
    input wire load,       // Load parallel data
    input wire [WIDTH-1:0] data_in,  // Parallel data input
    output reg [WIDTH-1:0] gray_out,
    output wire [WIDTH-1:0] binary_out
);

    // Internal binary counter
    reg [WIDTH-1:0] binary_count;
    
    // Convert binary count to Gray code
    assign binary_out = binary_count;
    
    // Calculate next binary count based on direction
    wire [WIDTH-1:0] next_binary = direction ? (binary_count - 1'b1) : (binary_count + 1'b1);
    
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            binary_count <= {WIDTH{1'b0}};
            gray_out <= {WIDTH{1'b0}};
        end else if (load) begin
            // Load parallel data
            binary_count <= data_in;
            // Convert to Gray code
            gray_out <= data_in ^ (data_in >> 1);
        end else if (enable) begin
            // Update binary counter based on direction
            binary_count <= next_binary;
            
            // Calculate Gray code for the NEXT binary value
            // Gray code = binary XOR (binary >> 1)
            gray_out <= next_binary ^ (next_binary >> 1);
        end
    end

endmodule
