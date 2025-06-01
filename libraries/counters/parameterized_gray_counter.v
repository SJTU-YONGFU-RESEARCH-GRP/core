module parameterized_gray_counter #(
    parameter WIDTH = 4,                 // Counter width in bits
    parameter COUNT_MODE = 0,            // 0: Up counter, 1: Down counter
    parameter INITIAL_VALUE = 0          // Initial counter value
)(
    input wire clk,                      // Clock input
    input wire rst_n,                    // Active-low synchronous reset
    input wire enable,                   // Counter enable signal
    output wire [WIDTH-1:0] gray_out,    // Gray code output
    output wire [WIDTH-1:0] binary_out   // Binary counter value (for reference)
);

    // Binary counter register
    reg [WIDTH-1:0] binary_count;

    // Convert binary count to Gray code
    assign gray_out = binary_count ^ (binary_count >> 1);
    assign binary_out = binary_count;

    // Binary counter logic with synchronous reset and enable
    always @(posedge clk) begin
        if (!rst_n) begin
            binary_count <= INITIAL_VALUE;
        end else if (enable) begin
            if (COUNT_MODE == 0) begin
                // Up counting
                binary_count <= binary_count + 1'b1;
            end else begin
                // Down counting
                binary_count <= binary_count - 1'b1;
            end
        end
    end

endmodule 
