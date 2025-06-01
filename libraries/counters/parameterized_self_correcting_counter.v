module parameterized_self_correcting_counter #(
    parameter WIDTH = 4,
    parameter MODULO = 10   // Default modulo is 10 (decade counter)
)(
    input wire clk,
    input wire rst_n,       // Active low reset
    input wire enable,      // Enable signal
    output wire [WIDTH-1:0] count
);

    reg [WIDTH-1:0] counter_reg;
    reg [WIDTH-1:0] next_count;
    
    // Function to check if a value is valid (less than MODULO)
    function automatic is_valid;
        input [WIDTH-1:0] value;
        begin
            is_valid = (value < MODULO);
        end
    endfunction
    
    // Next state logic
    always @(*) begin
        if (!is_valid(counter_reg)) begin
            next_count = {WIDTH{1'b0}}; // Self-correction: reset to 0 if in invalid state
        end else if (counter_reg == MODULO - 1) begin
            next_count = {WIDTH{1'b0}}; // Wrap around to 0
        end else begin
            next_count = counter_reg + 1'b1; // Normal increment
        end
    end
    
    // State register
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            counter_reg <= {WIDTH{1'b0}}; // Reset to 0
        end else if (enable) begin
            counter_reg <= next_count;
        end
    end
    
    assign count = counter_reg;

endmodule 
