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
            counter_reg <= {{(WIDTH-1){1'b0}}, 1'b1};  // Initialize with LSB set (one-hot)
        end else if (enable) begin
            if (counter_reg[WIDTH-1]) begin
                counter_reg <= {{(WIDTH-1){1'b0}}, 1'b1};  // Wrap around to LSB
            end else begin
                counter_reg <= counter_reg << 1;  // Shift left
            end
        end
    end
    
    assign count = counter_reg;

endmodule 
