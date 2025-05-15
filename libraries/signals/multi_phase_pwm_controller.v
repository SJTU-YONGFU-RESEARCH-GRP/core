module multi_phase_pwm_controller #(
    parameter CHANNELS = 3,             // Number of PWM channels
    parameter CNT_WIDTH = 8,            // Counter width (resolution)
    parameter PHASE_WIDTH = 10,         // Phase shift width
    parameter DEADTIME_WIDTH = 6,       // Deadtime control width
    parameter POLARITY = 1              // Output polarity (1: active high, 0: active low)
)(
    input wire clk,                     // Input clock
    input wire rst_n,                   // Active low reset
    input wire enable,                  // Module enable
    input wire [CNT_WIDTH-1:0] duty,    // Duty cycle value (common for all channels for simplicity)
    input wire [DEADTIME_WIDTH-1:0] deadtime, // Deadtime between complementary outputs
    output wire [CHANNELS-1:0] pwm_p_out,     // PWM positive outputs
    output wire [CHANNELS-1:0] pwm_n_out      // PWM negative outputs (with deadtime)
);

    // Counter and phase registers
    reg [CNT_WIDTH-1:0] counter;
    reg [CHANNELS-1:0] pwm_p_reg;
    reg [CHANNELS-1:0] pwm_n_reg;
    
    // Calculate phase shift for each channel
    wire [PHASE_WIDTH-1:0] phase_shifts [0:CHANNELS-1];
    
    genvar i;
    generate
        for (i = 0; i < CHANNELS; i = i + 1) begin : phase_gen
            // Distribute phases evenly across the channels - fix width issue
            /* verilator lint_off WIDTHTRUNC */
            assign phase_shifts[i] = ((2**PHASE_WIDTH - 1) * i) / CHANNELS;
            /* verilator lint_on WIDTHTRUNC */
        end
    endgenerate
    
    // Main counter for PWM generation
    always @(posedge clk) begin
        if (!rst_n) begin
            counter <= 0;
        end else if (enable) begin
            if (counter >= {CNT_WIDTH{1'b1}}) begin
                counter <= 0;
            end else begin
                counter <= counter + 1;
            end
        end
    end
    
    // PWM generation for each channel with phase shifts
    genvar j;
    generate
        for (j = 0; j < CHANNELS; j = j + 1) begin : pwm_gen
            reg [CNT_WIDTH-1:0] phase_counter;
            wire [CNT_WIDTH-1:0] phase_shift_applied = phase_shifts[j][CNT_WIDTH-1:0];
            // Extend deadtime to counter width
            wire [CNT_WIDTH-1:0] dt_extended = {{(CNT_WIDTH-DEADTIME_WIDTH){1'b0}}, deadtime};
            
            // Calculate phase-shifted counter with better overflow handling
            always @(*) begin
                phase_counter = (counter + phase_shift_applied) & {CNT_WIDTH{1'b1}};
            end
            
            // Output logic for positive PWM signal
            always @(posedge clk) begin
                if (!rst_n) begin
                    pwm_p_reg[j] <= 0;
                end else if (enable) begin
                    pwm_p_reg[j] <= (phase_counter < duty);
                end else begin
                    pwm_p_reg[j] <= 0;
                end
            end
            
            // Output logic for negative PWM signal with deadtime
            always @(posedge clk) begin
                if (!rst_n) begin
                    pwm_n_reg[j] <= 0;
                end else if (enable) begin
                    // Add deadtime - turn on after deadtime delay from positive edge going low
                    // and turn off before positive edge goes high
                    if ((phase_counter < (duty - dt_extended)) || 
                        (phase_counter >= (duty + dt_extended) && phase_counter < ({CNT_WIDTH{1'b1}} - dt_extended))) begin
                        pwm_n_reg[j] <= 1;
                    end else begin
                        pwm_n_reg[j] <= 0;
                    end
                end else begin
                    pwm_n_reg[j] <= 0;
                end
            end
        end
    endgenerate
    
    // Apply polarity to all outputs
    genvar k;
    generate
        for (k = 0; k < CHANNELS; k = k + 1) begin : output_polarity
            assign pwm_p_out[k] = (POLARITY != 0) ? pwm_p_reg[k] : ~pwm_p_reg[k];
            assign pwm_n_out[k] = (POLARITY != 0) ? pwm_n_reg[k] : ~pwm_n_reg[k];
        end
    endgenerate

endmodule 

