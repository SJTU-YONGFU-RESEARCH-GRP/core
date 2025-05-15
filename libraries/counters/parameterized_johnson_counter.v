module parameterized_johnson_counter #(
    parameter WIDTH = 4  // Default width is 4 bits
)(
    input wire clk,
    input wire rst_n,    // Active low reset
    input wire enable,   // Enable signal
    output wire [WIDTH-1:0] count
);

    reg [WIDTH-1:0] counter_reg;
    
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            counter_reg <= {1'b1, {(WIDTH-1){1'b0}}};  // Initialize with only MSB set
        end else if (enable) begin
            // Johnson counter operation: shift right and invert the feedback bit
            counter_reg <= {~counter_reg[0], counter_reg[WIDTH-1:1]};
        end
    end
    
    assign count = counter_reg;

endmodule 

