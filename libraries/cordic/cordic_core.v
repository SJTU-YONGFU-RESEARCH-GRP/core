/* verilator lint_off EOFNEWLINE */
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off MULTITOP */

// Combinational CORDIC core module
module cordic_core #(
    parameter DATA_WIDTH = 16,    // Width of data inputs/outputs
    parameter PHASE_WIDTH = 16,   // Width of phase input
    parameter ITERATIONS = 10     // Number of CORDIC iterations
) (
    input wire signed [DATA_WIDTH-1:0] x_in,
    input wire signed [DATA_WIDTH-1:0] y_in,
    input wire [PHASE_WIDTH-1:0] z_in,
    output wire signed [DATA_WIDTH-1:0] x_out,
    output wire signed [DATA_WIDTH-1:0] y_out
);
    // Pre-computed arctangent values for the CORDIC iterations
    // These represent atan(2^-i) in our phase format
    wire [PHASE_WIDTH-1:0] atan_table [0:ITERATIONS-1];
    assign atan_table[0] = 16'h2000; // atan(2^-0) = 45° = 0.785398 rad
    assign atan_table[1] = 16'h12E4; // atan(2^-1) = 26.57° = 0.463648 rad
    assign atan_table[2] = 16'h09FB; // atan(2^-2) = 14.04° = 0.244979 rad
    assign atan_table[3] = 16'h0511; // atan(2^-3) = 7.125° = 0.124355 rad
    assign atan_table[4] = 16'h028B; // atan(2^-4) = 3.576° = 0.062419 rad
    assign atan_table[5] = 16'h0145; // atan(2^-5) = 1.79° = 0.031262 rad
    assign atan_table[6] = 16'h00A3; // atan(2^-6) = 0.895° = 0.015626 rad
    assign atan_table[7] = 16'h0051; // atan(2^-7) = 0.448° = 0.007813 rad
    assign atan_table[8] = 16'h0028; // atan(2^-8) = 0.224° = 0.003906 rad
    assign atan_table[9] = 16'h0014; // atan(2^-9) = 0.112° = 0.001953 rad
    
    // Intermediate calculation arrays
    reg signed [DATA_WIDTH-1:0] x_stage [0:ITERATIONS];
    reg signed [DATA_WIDTH-1:0] y_stage [0:ITERATIONS];
    reg [PHASE_WIDTH-1:0] z_stage [0:ITERATIONS];
    
    // CORDIC algorithm implementation
    integer i;
    always @(*) begin
        // Initialize the first stage with inputs
        x_stage[0] = x_in;
        y_stage[0] = y_in;
        z_stage[0] = z_in;
        
        // Perform iterations
        for (i = 0; i < ITERATIONS; i = i + 1) begin
            if (z_stage[i][PHASE_WIDTH-1] == 0) begin
                // Rotate counter-clockwise when z is positive
                x_stage[i+1] = x_stage[i] - (y_stage[i] >>> i);
                y_stage[i+1] = y_stage[i] + (x_stage[i] >>> i);
                z_stage[i+1] = z_stage[i] - atan_table[i];
            end
            else begin
                // Rotate clockwise when z is negative
                x_stage[i+1] = x_stage[i] + (y_stage[i] >>> i);
                y_stage[i+1] = y_stage[i] - (x_stage[i] >>> i);
                z_stage[i+1] = z_stage[i] + atan_table[i];
            end
        end
    end
    
    // Assign outputs from the final stage
    assign x_out = x_stage[ITERATIONS];
    assign y_out = y_stage[ITERATIONS];
    
endmodule
/* verilator lint_on EOFNEWLINE */ 