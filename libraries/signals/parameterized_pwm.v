module parameterized_pwm #(
    parameter CNT_WIDTH = 8,            // Counter width (resolution)
    parameter POLARITY = 1,             // Output polarity (1: active high, 0: active low)
    parameter DIV_WIDTH = 16            // Clock divider width
)(
    input wire clk,                     // Input clock
    input wire rst_n,                   // Active low reset
    input wire enable,                  // Module enable
    input wire [CNT_WIDTH-1:0] duty,    // Duty cycle value
    input wire [DIV_WIDTH-1:0] div,     // Optional frequency divider
    output wire pwm_out                 // PWM output
);

    // Counter and clock divider registers
    reg [CNT_WIDTH-1:0] counter;
    reg [DIV_WIDTH-1:0] div_counter;
    reg pwm_reg;
    wire tick;
    
    // Clock divider logic - generates tick when div_counter reaches div
    always @(posedge clk) begin
        if (!rst_n) begin
            div_counter <= 0;
        end else if (enable) begin
            if (div_counter >= div) begin
                div_counter <= 0;
            end else begin
                div_counter <= div_counter + 1;
            end
        end
    end
    
    // Generate tick when div_counter reaches div or when div is 0 (no division)
    assign tick = (div == 0) ? 1'b1 : (div_counter >= div);
    
    // PWM counter
    always @(posedge clk) begin
        if (!rst_n) begin
            counter <= 0;
        end else if (enable && tick) begin
            if (counter >= {CNT_WIDTH{1'b1}}) begin
                counter <= 0;
            end else begin
                counter <= counter + 1;
            end
        end
    end
    
    // PWM output logic
    always @(posedge clk) begin
        if (!rst_n) begin
            pwm_reg <= 0;
        end else if (enable) begin
            pwm_reg <= (counter < duty);
        end else begin
            pwm_reg <= 0;
        end
    end
    
    // Output with configurable polarity (using 1-bit comparison to fix WIDTHTRUNC warning)
    assign pwm_out = (POLARITY != 0) ? pwm_reg : ~pwm_reg;

endmodule 
