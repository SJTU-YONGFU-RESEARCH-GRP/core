module pwm_generator #(
    parameter COUNTER_WIDTH = 8,
    parameter DEFAULT_DUTY = 128
)(
    input wire clk,
    input wire rst_n,
    input wire enable,
    input wire [COUNTER_WIDTH-1:0] duty_cycle,
    input wire [COUNTER_WIDTH-1:0] period,
    output reg pwm_out
);

    // Counter register
    reg [COUNTER_WIDTH-1:0] counter;
    
    // Duty cycle register (allows for changing duty cycle without glitches)
    reg [COUNTER_WIDTH-1:0] duty_reg;
    
    // Period register
    reg [COUNTER_WIDTH-1:0] period_reg;
    
    // Update duty cycle and period at counter reset to avoid glitches
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            duty_reg <= DEFAULT_DUTY;
            period_reg <= {COUNTER_WIDTH{1'b1}}; // Default to max period
        end
        else if (counter == period_reg) begin
            duty_reg <= duty_cycle;
            period_reg <= period;
        end
    end
    
    // Counter logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            counter <= {COUNTER_WIDTH{1'b0}};
            pwm_out <= 1'b0;
        end
        else if (enable) begin
            // Reset counter when it reaches the period
            if (counter >= period_reg) begin
                counter <= {COUNTER_WIDTH{1'b0}};
            end
            else begin
                counter <= counter + 1'b1;
            end
            
            // Set output based on duty cycle comparison
            pwm_out <= (counter < duty_reg) ? 1'b1 : 1'b0;
        end
    end

endmodule 
