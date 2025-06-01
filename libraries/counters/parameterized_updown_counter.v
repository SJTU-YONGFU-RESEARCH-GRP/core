module parameterized_updown_counter #(
    parameter WIDTH = 4,
    parameter MAX_COUNT = (1 << WIDTH) - 1
)(
    input wire clk,
    input wire rst_n,        // Active low reset
    input wire enable,       // Enable signal
    input wire up_down,      // Direction control (1 for up, 0 for down)
    output wire [WIDTH-1:0] count,
    output wire overflow     // Overflow/underflow indicator
);

    reg [WIDTH-1:0] counter_reg;
    reg overflow_reg;
    
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            counter_reg <= {WIDTH{1'b0}}; // Reset to 0
            overflow_reg <= 1'b0;
        end else if (enable) begin
            overflow_reg <= 1'b0;
            
            if (up_down) begin
                // Count up
                if (counter_reg == MAX_COUNT) begin
                    counter_reg <= {WIDTH{1'b0}}; // Wrap around to 0
                    overflow_reg <= 1'b1;
                end else begin
                    counter_reg <= counter_reg + 1'b1;
                end
            end else begin
                // Count down
                if (counter_reg == {WIDTH{1'b0}}) begin
                    counter_reg <= MAX_COUNT; // Wrap around to MAX_COUNT
                    overflow_reg <= 1'b1;
                end else begin
                    counter_reg <= counter_reg - 1'b1;
                end
            end
        end
    end
    
    assign count = counter_reg;
    assign overflow = overflow_reg;

endmodule 
