module parameterized_freq_divider #(
    parameter COUNTER_WIDTH = 16,                  // Width of counter
    parameter DEFAULT_DIVIDE_VALUE = 2,            // Default division factor
    parameter DEFAULT_DUTY_CYCLE = 50              // Default duty cycle percentage (0-100)
) (
    input wire clk_in,                             // Input clock
    input wire rst_n,                              // Active low reset
    input wire enable,                             // Enable signal
    input wire [COUNTER_WIDTH-1:0] divide_value,   // Division factor (must be ≥ 2)
    input wire [6:0] duty_cycle,                   // Duty cycle percentage (0-100)
    output reg clk_out                             // Output clock
);

    // Internal counter
    reg [COUNTER_WIDTH-1:0] counter;
    
    // High time calculation based on duty cycle
    wire [COUNTER_WIDTH-1:0] high_time; // Same width as counter
    
    // Calculate high_time based on duty cycle percentage
    // Use multiplication and division to get accurate duty cycle
    assign high_time = (divide_value * duty_cycle + 50) / 100; // +50 for proper rounding
    
    always @(posedge clk_in or negedge rst_n) begin
        if (!rst_n) begin
            counter <= {COUNTER_WIDTH{1'b0}};
            clk_out <= 1'b0;
        end else if (!enable) begin
            counter <= {COUNTER_WIDTH{1'b0}};
            clk_out <= 1'b0;
        end else begin
            // Use default value if divide_value is invalid (less than 2)
            if (divide_value < 2) begin
                if (counter >= DEFAULT_DIVIDE_VALUE - 1) begin
                    counter <= {COUNTER_WIDTH{1'b0}};
                end else begin
                    counter <= counter + 1'b1;
                end
                
                // Calculate high time for default
                if (counter < ((DEFAULT_DIVIDE_VALUE * DEFAULT_DUTY_CYCLE) + 50) / 100) begin
                    clk_out <= 1'b1;
                end else begin
                    clk_out <= 1'b0;
                end
            end else begin
                // Normal operation with specified divide_value
                if (counter >= divide_value - 1) begin
                    counter <= {COUNTER_WIDTH{1'b0}};
                end else begin
                    counter <= counter + 1'b1;
                end
                
                // Set output based on duty cycle
                if (duty_cycle == 0) begin
                    // Special case for 0% duty cycle
                    clk_out <= 1'b0;
                end else if (duty_cycle >= 100) begin
                    // Special case for 100% duty cycle
                    clk_out <= 1'b1;
                end else begin
                    // Normal operation with calculated duty cycle
                    if (counter < high_time) begin
                        clk_out <= 1'b1;  // High portion of cycle
                    end else begin
                        clk_out <= 1'b0;  // Low portion of cycle
                    end
                end
            end
        end
    end

endmodule 
