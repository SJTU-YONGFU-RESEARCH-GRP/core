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
    
    // Function to check if a value is valid (less than MODULO)
    function automatic is_valid;
        input [WIDTH-1:0] value;
        begin
            is_valid = (value < MODULO);
        end
    endfunction
    
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            counter_reg <= {WIDTH{1'b0}}; // Reset to 0
        end else if (enable) begin
            // Normal counting operation
            if (counter_reg == MODULO - 1) begin
                counter_reg <= {WIDTH{1'b0}}; // Wrap around to 0
            end else if (is_valid(counter_reg)) begin
                counter_reg <= counter_reg + 1'b1;
            end else begin
                counter_reg <= {WIDTH{1'b0}}; // Self-correction: reset to 0 if in invalid state
            end
        end
    end
    
    assign count = counter_reg;

endmodule 
