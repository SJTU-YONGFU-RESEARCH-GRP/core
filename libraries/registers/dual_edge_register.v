// Dual-edge triggered register using a two-process approach that's compatible with Verilator
module dual_edge_register #(
    parameter WIDTH = 8
)(
    input wire clk,                     // Clock input
    input wire rst_n,                   // Active low reset
    input wire enable,                  // Enable signal
    input wire [WIDTH-1:0] data_in,     // Data input
    output reg [WIDTH-1:0] data_out     // Data output
);
    // Edge detection registers
    reg clk_prev;
    
    // Capture data on each edge - single process implementation
    always @(posedge clk or negedge clk or negedge rst_n) begin
        if (!rst_n) begin
            data_out <= {WIDTH{1'b0}};
            clk_prev <= 1'b0;
        end else begin
            // First record the previous clock value for edge detection
            clk_prev <= clk;
            
            // If enable is asserted and there was a clock transition, capture data
            if (enable && (clk != clk_prev)) begin
                data_out <= data_in;
            end
        end
    end

endmodule 
