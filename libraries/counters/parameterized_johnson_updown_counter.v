module parameterized_johnson_updown_counter #(
    parameter WIDTH = 4
)(
    input wire clk,
    input wire rst_n,    // Active low reset
    input wire enable,   // Enable signal
    input wire up_down,  // Direction control (1 for up, 0 for down)
    output wire [WIDTH-1:0] count
);

    reg [WIDTH-1:0] counter_reg;
    
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            counter_reg <= {1'b1, {(WIDTH-1){1'b0}}};  // Initialize with only MSB set
        end else if (enable) begin
            if (up_down) begin
                // Up mode (shift right with inverted feedback)
                counter_reg <= {~counter_reg[0], counter_reg[WIDTH-1:1]};
            end else begin
                // Down mode (shift left with inverted feedback)
                counter_reg <= {counter_reg[WIDTH-2:0], ~counter_reg[WIDTH-1]};
            end
        end
    end
    
    assign count = counter_reg;

endmodule 
