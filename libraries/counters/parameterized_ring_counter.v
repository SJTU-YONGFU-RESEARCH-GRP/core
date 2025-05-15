module parameterized_ring_counter #(
    parameter WIDTH = 4
)(
    input wire clk,
    input wire rst_n,    // Active low reset
    input wire enable,   // Enable signal
    output wire [WIDTH-1:0] count
);

    reg [WIDTH-1:0] counter_reg;
    
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            counter_reg <= {{(WIDTH-1){1'b0}}, 1'b1};  // Initialize with only LSB set
        end else if (enable) begin
            // Ring counter operation: rotate the single set bit
            counter_reg <= {counter_reg[WIDTH-2:0], counter_reg[WIDTH-1]};
        end
    end
    
    assign count = counter_reg;

endmodule 
