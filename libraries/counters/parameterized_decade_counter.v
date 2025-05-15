module parameterized_decade_counter #(
    parameter WIDTH = 4,        // Default width is 4 bits
    parameter MODULO = 10       // Default modulo is 10 (decade counter)
)(
    input wire clk,
    input wire rst_n,           // Active low reset
    input wire enable,          // Enable signal
    output wire [WIDTH-1:0] count,
    output wire tc              // Terminal count signal (high when count = MODULO-1)
);

    reg [WIDTH-1:0] counter_reg;
    
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            counter_reg <= {WIDTH{1'b0}}; // Reset to 0
        end else if (enable) begin
            if (counter_reg == MODULO - 1) begin
                counter_reg <= {WIDTH{1'b0}}; // Reset to 0 when reaching MODULO
            end else begin
                counter_reg <= counter_reg + 1'b1;
            end
        end
    end
    
    assign count = counter_reg;
    assign tc = (counter_reg == MODULO - 1) ? 1'b1 : 1'b0;

endmodule 
