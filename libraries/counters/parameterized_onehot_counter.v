module parameterized_onehot_counter #(
    parameter WIDTH = 8
)(
    input wire clk,
    input wire rst_n,    // Active low reset
    input wire enable,   // Enable signal
    output wire [WIDTH-1:0] count
);

    reg [WIDTH-1:0] counter_reg;
    
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            counter_reg <= 1;  // Initialize with LSB set (one-hot)
        end else if (enable) begin
            // Shift left and wrap around to LSB when MSB is set
            counter_reg <= counter_reg[WIDTH-1] ? 1 : (counter_reg << 1);
        end
    end
    
    assign count = counter_reg;

endmodule 
