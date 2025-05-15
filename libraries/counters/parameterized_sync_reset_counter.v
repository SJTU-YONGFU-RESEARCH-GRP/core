module parameterized_sync_reset_counter #(
    parameter WIDTH = 8,
    parameter MAX_COUNT = (1 << WIDTH) - 1
)(
    input wire clk,
    input wire sync_rst,  // Synchronous reset (active high)
    input wire enable,    // Enable signal
    output wire [WIDTH-1:0] count,
    output wire tc        // Terminal count signal (high when count = MAX_COUNT)
);

    reg [WIDTH-1:0] counter_reg;
    
    always @(posedge clk) begin
        if (sync_rst) begin
            counter_reg <= {WIDTH{1'b0}}; // Reset to 0
        end else if (enable) begin
            if (counter_reg == MAX_COUNT) begin
                counter_reg <= {WIDTH{1'b0}}; // Wrap around to 0
            end else begin
                counter_reg <= counter_reg + 1'b1;
            end
        end
    end
    
    assign count = counter_reg;
    assign tc = (counter_reg == MAX_COUNT) ? 1'b1 : 1'b0;

endmodule 
