module parameterized_decade_counter #(
    parameter WIDTH = 4,        // Default width is 4 bits
    parameter MODULO = 10       // Default modulo is 10 (decade counter)
)(
    input wire clk,
    input wire rst_n,           // Active low reset
    input wire enable,          // Enable signal
    output reg [WIDTH-1:0] count,
    output wire tc              // Terminal count signal (high when count = MODULO-1)
);

    // Next state logic
    reg [WIDTH-1:0] next_count;
    
    always @(*) begin
        if (enable && count == MODULO - 1)
            next_count = {WIDTH{1'b0}};
        else if (enable)
            next_count = count + 1'b1;
        else
            next_count = count;
    end
    
    // State update
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            count <= {WIDTH{1'b0}};
        else
            count <= next_count;
    end
    
    assign tc = (count == MODULO - 1) ? 1'b1 : 1'b0;

endmodule 
