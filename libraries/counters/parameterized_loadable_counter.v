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
    
    // Reset counter to 0
    initial begin
        counter_reg = {WIDTH{1'b0}};
    end
    
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            counter_reg <= {WIDTH{1'b0}}; // Reset to 0 with proper width
        end else if (load) begin
            counter_reg <= data_in;       // Load parallel data (highest priority) 
        end else if (enable) begin
            counter_reg <= counter_reg + 1'b1; // Increment counter
        end
    end
    
    // Connect the internal register to the output
    assign count = counter_reg;

endmodule 
