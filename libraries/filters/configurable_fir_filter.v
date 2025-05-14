module configurable_fir_filter #(
    parameter DATA_WIDTH = 16,          // Width of the input/output data
    parameter COEFF_WIDTH = 16,         // Width of the coefficients
    parameter NUM_TAPS = 8,             // Number of filter taps/coefficients
    parameter FILTER_TYPE = 0,          // 0 = Low-pass, 1 = High-pass
    /* verilator lint_off UNUSEDPARAM */
    parameter [NUM_TAPS*COEFF_WIDTH-1:0] COEFFICIENTS = {   // Default coefficients (not used)
        16'h0400, 16'h0800, 16'h0C00, 16'h1000,
        16'h1000, 16'h0C00, 16'h0800, 16'h0400
    }
    /* verilator lint_on UNUSEDPARAM */
) (
    input wire clk,                     // Clock signal
    input wire rst_n,                   // Active-low reset
    input wire [DATA_WIDTH-1:0] data_in, // Input sample
    input wire data_valid,              // Input data valid signal
    output reg [DATA_WIDTH-1:0] data_out, // Filtered output
    output reg data_out_valid           // Output data valid signal
);

    // Declare tapped delay line (shift register for storing samples)
    reg [DATA_WIDTH-1:0] delay_line [0:NUM_TAPS-1];
    
    // Define a type to store the products before summation
    // Use extra bits to prevent overflow during calculations
    reg signed [DATA_WIDTH+COEFF_WIDTH-1:0] products [0:NUM_TAPS-1];
    
    // Variables for combinational sum calculation
    reg signed [DATA_WIDTH+COEFF_WIDTH-1:0] sum_temp;
    
    // Output selection with sign extension
    reg signed [DATA_WIDTH-1:0] output_value;
    
    // Define max and min values for saturation
    localparam MAX_POS = (1 << (DATA_WIDTH-1)) - 1;
    localparam MIN_NEG = -(1 << (DATA_WIDTH-1));
    
    // Filter coefficients - explicitly define based on filter type
    // Ensure there's a clear distinction between the coefficient sets
    reg signed [COEFF_WIDTH-1:0] coeff_array [0:NUM_TAPS-1];
    
    // Print parameter value using display statement
    initial begin
        $display("FILTER_TYPE parameter value: %0d", FILTER_TYPE);
        
        // Initialize coefficients based on filter type
        case (FILTER_TYPE)
            0: begin // Low-pass filter
                $display("Initializing LOW-PASS filter");
                coeff_array[0] = 16'h0400;
                coeff_array[1] = 16'h0800;
                coeff_array[2] = 16'h0C00;
                coeff_array[3] = 16'h1000;
                coeff_array[4] = 16'h1000;
                coeff_array[5] = 16'h0C00;
                coeff_array[6] = 16'h0800;
                coeff_array[7] = 16'h0400;
            end
            1: begin // High-pass filter
                $display("Initializing HIGH-PASS filter");
                coeff_array[0] = 16'hFC00; // Negative values for high-pass
                coeff_array[1] = 16'hF800;
                coeff_array[2] = 16'h0400;
                coeff_array[3] = 16'h0800;
                coeff_array[4] = 16'h0800;
                coeff_array[5] = 16'h0400;
                coeff_array[6] = 16'hF800;
                coeff_array[7] = 16'hFC00;
            end
            default: begin
                $display("Unknown FILTER_TYPE: %0d, using default (LOW-PASS)", FILTER_TYPE);
                coeff_array[0] = 16'h0400;
                coeff_array[1] = 16'h0800;
                coeff_array[2] = 16'h0C00;
                coeff_array[3] = 16'h1000;
                coeff_array[4] = 16'h1000;
                coeff_array[5] = 16'h0C00;
                coeff_array[6] = 16'h0800;
                coeff_array[7] = 16'h0400;
            end
        endcase
        
        // Print coefficients for verification
        for (int i = 0; i < NUM_TAPS; i++) begin
            $display("Coefficient[%0d] = %0h", i, coeff_array[i]);
        end
    end
    
    integer i;
    
    // Extract individual coefficients from the array
    function signed [COEFF_WIDTH-1:0] get_coeff;
        input integer index;
        begin
            if (index < NUM_TAPS) begin
                get_coeff = coeff_array[index[2:0]];
            end else begin
                get_coeff = 0;
            end
        end
    endfunction
    
    // Combinational logic to calculate the sum
    always @(*) begin
        sum_temp = 0;
        for (i = 0; i < NUM_TAPS; i = i + 1) begin
            sum_temp = sum_temp + products[i];
        end
        
        // Extract the appropriate bits and apply saturation if needed
        if (sum_temp[DATA_WIDTH+COEFF_WIDTH-1] == 0 && sum_temp > (MAX_POS << COEFF_WIDTH)) begin
            // Saturate to maximum positive value when overflow
            output_value = MAX_POS;
        end else if (sum_temp[DATA_WIDTH+COEFF_WIDTH-1] == 1 && sum_temp < (MIN_NEG << COEFF_WIDTH)) begin
            // Saturate to minimum negative value when underflow
            output_value = MIN_NEG;
        end else begin
            // Normal case - arithmetic shift right for proper scaling
            output_value = DATA_WIDTH'(sum_temp >>> COEFF_WIDTH);
        end
    end
    
    // Sequential logic for the FIR filter
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            // Reset all delay line registers
            for (i = 0; i < NUM_TAPS; i = i + 1) begin
                delay_line[i] <= {DATA_WIDTH{1'b0}};
                products[i] <= 0;
            end
            data_out <= {DATA_WIDTH{1'b0}};
            data_out_valid <= 1'b0;
        end else begin
            // Propagate data valid signal
            data_out_valid <= data_valid;
            
            if (data_valid) begin
                // Shift operation: shift samples through the delay line
                for (i = NUM_TAPS-1; i > 0; i = i - 1) begin
                    delay_line[i] <= delay_line[i-1];
                end
                // Insert new sample at the beginning of the delay line
                delay_line[0] <= data_in;

                // Calculate products of each sample with its corresponding coefficient
                for (i = 0; i < NUM_TAPS; i = i + 1) begin
                    products[i] <= $signed(delay_line[i]) * $signed(get_coeff(i));
                end
                
                // Set output using the combinational sum with saturation
                data_out <= output_value;
            end
        end
    end

endmodule 
