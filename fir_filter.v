module fir_filter #(
    parameter DATA_WIDTH = 8,
    parameter COEFF_WIDTH = 8,
    parameter OUTPUT_WIDTH = DATA_WIDTH + COEFF_WIDTH + 3, // Extra bits to prevent overflow
    parameter TAP_COUNT = 4
)(
    input wire clk,
    input wire rst_n,
    input wire [DATA_WIDTH-1:0] data_in,
    input wire data_valid,
    output wire [OUTPUT_WIDTH-1:0] data_out,
    output reg data_out_valid
);

    // Define coefficient values (fixed for this example)
    // In a real design, these might be configurable via registers
    reg signed [COEFF_WIDTH-1:0] coeffs [0:TAP_COUNT-1];
    
    // Delay line for input samples
    reg signed [DATA_WIDTH-1:0] delay_line [0:TAP_COUNT-1];
    
    // Output register
    reg signed [OUTPUT_WIDTH-1:0] result;
    assign data_out = result;
    
    // Wire for MAC calculation
    wire signed [OUTPUT_WIDTH-1:0] mac_result;
    
    // Initialize coefficients
    integer i;
    initial begin
        // Simple low-pass filter coefficients as an example
        coeffs[0] = 1;
        coeffs[1] = 2;
        coeffs[2] = 2;
        coeffs[3] = 1;
    end
    
    // Combinational MAC calculation
    assign mac_result = (delay_line[0] * coeffs[0]) + 
                       (delay_line[1] * coeffs[1]) + 
                       (delay_line[2] * coeffs[2]) + 
                       (delay_line[3] * coeffs[3]);
    
    // Shift register and output logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            for (i = 0; i < TAP_COUNT; i = i + 1) begin
                delay_line[i] <= 0;
            end
            result <= 0;
            data_out_valid <= 0;
        end
        else begin
            if (data_valid) begin
                // Shift delay line
                for (i = TAP_COUNT-1; i > 0; i = i - 1) begin
                    delay_line[i] <= delay_line[i-1];
                end
                delay_line[0] <= data_in;
                
                // Store MAC result
                result <= mac_result;
                
                data_out_valid <= 1;
            end
            else begin
                data_out_valid <= 0;
            end
        end
    end

endmodule 
