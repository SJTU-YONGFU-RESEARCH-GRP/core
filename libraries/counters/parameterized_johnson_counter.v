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
            counter_reg <= 0;  // Initialize with all zeros
        end else if (enable) begin
            // Johnson counter operation: shift left and feed inverted MSB to LSB
            counter_reg <= {counter_reg[WIDTH-2:0], ~counter_reg[WIDTH-1]};
        end
    end
    
    assign count = counter_reg;

endmodule

