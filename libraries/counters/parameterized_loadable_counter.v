module parameterized_loadable_counter #(
    parameter WIDTH = 8
)(
    input wire clk,
    input wire rst_n,                // Active low reset
    input wire enable,               // Enable signal
    input wire load,                 // Load control signal
    input wire [WIDTH-1:0] data_in,  // Parallel data input
    output wire [WIDTH-1:0] count
);

    reg [WIDTH-1:0] counter_reg;
    
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            counter_reg <= 0; // Reset to 0
        end else if (load) begin
            counter_reg <= data_in;   // Load parallel data (highest priority)
        end else if (enable) begin
            counter_reg <= counter_reg + 1'b1; // Increment counter
        end
    end
    
    assign count = counter_reg;

endmodule 
