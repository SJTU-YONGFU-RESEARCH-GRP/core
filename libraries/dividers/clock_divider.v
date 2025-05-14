/* verilator lint_off EOFNEWLINE */
module clock_divider #(
    parameter DIV_WIDTH = 8,         // Width of the division ratio register
    parameter DUTY_WIDTH = 8         // Width of the duty cycle register
) (
    input wire clk_in,               // Input clock
    input wire rst_n,                // Active low reset
    input wire [DIV_WIDTH-1:0] div_ratio, // Clock division ratio
    input wire [DUTY_WIDTH-1:0] duty_cycle, // Duty cycle control (0-255 for 0-100%)
    output reg clk_out               // Output divided clock
);

    // Counter for tracking division
    reg [DIV_WIDTH:0] counter;  // Increased counter width to match duty_threshold
    
    // Calculate threshold for duty cycle
    wire [DIV_WIDTH:0] duty_threshold; // Increased width to handle calculation properly
    
    // Scale duty_cycle (0-255) to div_ratio range
    // This ensures duty_threshold is proportional to div_ratio
    assign duty_threshold = (div_ratio * duty_cycle) / 255;
    
    // Clock division logic
    always @(posedge clk_in or negedge rst_n) begin
        if (!rst_n) begin
            counter <= {(DIV_WIDTH+1){1'b0}};
            clk_out <= 1'b0;
        end 
        else begin
            // Increment counter
            if (counter >= div_ratio - 1) begin
                counter <= {(DIV_WIDTH+1){1'b0}};
            end 
            else begin
                counter <= counter + 1'b1;
            end
            
            // Set output based on duty cycle
            /* verilator lint_off UNSIGNED */
            if (counter < duty_threshold && div_ratio > 0) begin
            /* verilator lint_on UNSIGNED */
                clk_out <= 1'b1;
            end 
            else begin
                clk_out <= 1'b0;
            end
        end
    end

endmodule 
