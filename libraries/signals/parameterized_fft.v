module parameterized_fft #(
    parameter DATA_WIDTH = 16,
    parameter FFT_POINTS = 8,  // Must be a power of 2
    parameter LOG2_FFT_POINTS = $clog2(FFT_POINTS)
)(
    input wire clk,
    input wire rst_n,
    input wire start,
    input wire [DATA_WIDTH-1:0] data_in_real,
    input wire [DATA_WIDTH-1:0] data_in_imag,
    input wire data_valid_in,
    output reg data_ready,
    output reg [(DATA_WIDTH*FFT_POINTS)-1:0] data_out_real,
    output reg [(DATA_WIDTH*FFT_POINTS)-1:0] data_out_imag,
    output reg data_valid_out,
    output reg busy
);

    // State machine
    localparam IDLE = 2'd0;
    localparam LOAD = 2'd1;
    localparam COMPUTE = 2'd2;
    localparam OUTPUT = 2'd3;
    
    reg [1:0] state;
    
    // Internal storage for input samples and computation (packed arrays)
    reg signed [DATA_WIDTH-1:0] samples_real [0:FFT_POINTS-1];
    reg signed [DATA_WIDTH-1:0] samples_imag [0:FFT_POINTS-1];
    reg [LOG2_FFT_POINTS-1:0] sample_count;
    reg [LOG2_FFT_POINTS-1:0] stage;
    reg [LOG2_FFT_POINTS-1:0] butterfly_count;
    reg [LOG2_FFT_POINTS-1:0] bit_rev_idx;
    
    // Temporary variables for butterfly computation
    reg [LOG2_FFT_POINTS-1:0] group;
    reg [LOG2_FFT_POINTS-1:0] butterfly_in_group;
    reg [LOG2_FFT_POINTS-1:0] idx1;
    reg [LOG2_FFT_POINTS-1:0] idx2;
    reg [LOG2_FFT_POINTS-1:0] twiddle_idx;
    reg signed [DATA_WIDTH-1:0] temp_real;
    reg signed [DATA_WIDTH-1:0] temp_imag;
    
    // Twiddle factors (pre-computed)
    // For simplicity, we're using fixed-point representation
    // where the full range [-1,1] is mapped to [-2^(DATA_WIDTH-1), 2^(DATA_WIDTH-1)-1]
    reg signed [DATA_WIDTH-1:0] twiddle_real [0:FFT_POINTS/2-1];
    reg signed [DATA_WIDTH-1:0] twiddle_imag [0:FFT_POINTS/2-1];
    
    // Function to extract a specific sample from packed array
    function [DATA_WIDTH-1:0] get_sample;
        input [(DATA_WIDTH*FFT_POINTS)-1:0] array;
        input [LOG2_FFT_POINTS-1:0] index;
        reg [31:0] full_index;
        begin
            full_index = {28'b0, index} + 1;
            get_sample = array[(full_index*DATA_WIDTH)-1 -: DATA_WIDTH];
        end
    endfunction
    
    // Function to update a specific sample in packed array
    task set_sample;
        inout [(DATA_WIDTH*FFT_POINTS)-1:0] array;
        input [LOG2_FFT_POINTS-1:0] index;
        input [DATA_WIDTH-1:0] value;
        reg [31:0] full_index;
        begin
            full_index = {28'b0, index} + 1;
            array[(full_index*DATA_WIDTH)-1 -: DATA_WIDTH] = value;
        end
    endtask
    
    // Initialize twiddle factors
    integer i;
    initial begin
        // For FFT_POINTS=8 example with DATA_WIDTH=16:
        // W_0 = 1 + j0
        // W_1 = 0.7071 - j0.7071
        // W_2 = 0 - j1
        // W_3 = -0.7071 - j0.7071
        
        if (FFT_POINTS == 8 && DATA_WIDTH == 16) begin
            // W_0
            twiddle_real[0] = 16'h7FFF;  // 1.0 in fixed point
            twiddle_imag[0] = 16'h0000;  // 0.0
            
            // W_1
            twiddle_real[1] = 16'h5A82;  // ~0.7071
            twiddle_imag[1] = 16'hA57E;  // ~-0.7071
            
            // W_2
            twiddle_real[2] = 16'h0000;  // 0.0
            twiddle_imag[2] = 16'h8000;  // -1.0
            
            // W_3
            twiddle_real[3] = 16'hA57E;  // ~-0.7071
            twiddle_imag[3] = 16'hA57E;  // ~-0.7071
        end
        else begin
            // Default initialization for other sizes
            for (i = 0; i < FFT_POINTS/2; i = i + 1) begin
                twiddle_real[i] = 0;
                twiddle_imag[i] = 0;
            end
        end
    end
    
    // Bit-reversed addressing for input reordering
    /* verilator lint_off BLKSEQ */
    function [LOG2_FFT_POINTS-1:0] bit_reverse;
        input [LOG2_FFT_POINTS-1:0] in;
        reg [LOG2_FFT_POINTS-1:0] out;
        integer j;
        begin
            out = 0; // Initialize with zeros
            for (j = 0; j < LOG2_FFT_POINTS; j = j + 1) begin
                // Use a purely combinational approach
                out[LOG2_FFT_POINTS-1-j] = in[j];
            end
            bit_reverse = out;
        end
    endfunction
    /* verilator lint_on BLKSEQ */
    
    // State machine logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
            sample_count <= 0;
            stage <= 0;
            butterfly_count <= 0;
            busy <= 0;
            data_ready <= 1;
            data_valid_out <= 0;
            bit_rev_idx <= 0;
            
            for (i = 0; i < FFT_POINTS; i = i + 1) begin
                samples_real[i] <= 0;
                samples_imag[i] <= 0;
            end
            
            data_out_real <= 0;
            data_out_imag <= 0;
        end
        else begin
            case (state)
                IDLE: begin
                    if (start) begin
                        state <= LOAD;
                        sample_count <= 0;
                        busy <= 1;
                        data_ready <= 1;
                        data_valid_out <= 0;
                    end
                end
                
                LOAD: begin
                    if (data_valid_in) begin
                        // Store input in bit-reversed order (precompute to avoid side effects)
                        bit_rev_idx <= bit_reverse(sample_count);
                        
                        // Use the precomputed bit-reversed index
                        if (sample_count == 0) begin
                            samples_real[0] <= data_in_real;
                            samples_imag[0] <= data_in_imag;
                        end else begin
                            samples_real[bit_rev_idx] <= data_in_real;
                            samples_imag[bit_rev_idx] <= data_in_imag;
                        end
                        
                        if (sample_count == {LOG2_FFT_POINTS{1'b1}}) begin  // FFT_POINTS-1
                            sample_count <= 0;
                            state <= COMPUTE;
                            stage <= 0;
                            butterfly_count <= 0;
                            data_ready <= 0;
                        end
                        else begin
                            sample_count <= sample_count + 1'b1;
                        end
                    end
                end
                
                COMPUTE: begin
                    // FFT computation using Cooley-Tukey algorithm
                    // For each stage, compute butterflies
                    if ({29'b0, stage} < LOG2_FFT_POINTS) begin
                        // Compute one butterfly operation per clock cycle
                        if ({29'b0, butterfly_count} < (FFT_POINTS >> 1)) begin
                            // Calculate indices for the butterfly
                            group <= butterfly_count / (32'b1 << {29'b0, stage});
                            butterfly_in_group <= butterfly_count % (32'b1 << {29'b0, stage});
                            
                            idx1 <= group * (32'b1 << ({29'b0, stage} + 1)) + butterfly_in_group;
                            idx2 <= group * (32'b1 << ({29'b0, stage} + 1)) + butterfly_in_group + (32'b1 << {29'b0, stage});
                            
                            twiddle_idx <= (butterfly_in_group * (32'b1 << (LOG2_FFT_POINTS-1))) >> {29'b0, stage};
                            
                            // Butterfly computation with proper sizing to avoid truncation
                            // temp = samples[idx2] * twiddle_factor, resized to avoid overflow
                            temp_real <= ((samples_real[idx2] * twiddle_real[{29'b0, twiddle_idx} % (FFT_POINTS >> 1)] - 
                                        samples_imag[idx2] * twiddle_imag[{29'b0, twiddle_idx} % (FFT_POINTS >> 1)]) >>> (DATA_WIDTH-1));
                            temp_imag <= ((samples_real[idx2] * twiddle_imag[{29'b0, twiddle_idx} % (FFT_POINTS >> 1)] + 
                                        samples_imag[idx2] * twiddle_real[{29'b0, twiddle_idx} % (FFT_POINTS >> 1)]) >>> (DATA_WIDTH-1));
                            
                            // Update values with saturation to avoid overflow
                            if ($signed(samples_real[idx1]) > 0 && $signed(temp_real) > 0 && $signed(samples_real[idx1] + temp_real) < 0) begin
                                // Positive overflow
                                samples_real[idx1] <= {1'b0, {(DATA_WIDTH-1){1'b1}}};
                            end
                            else if ($signed(samples_real[idx1]) < 0 && $signed(temp_real) < 0 && $signed(samples_real[idx1] + temp_real) > 0) begin
                                // Negative overflow
                                samples_real[idx1] <= {1'b1, {(DATA_WIDTH-1){1'b0}}};
                            end
                            else begin
                                samples_real[idx1] <= samples_real[idx1] + temp_real;
                            end
                            
                            if ($signed(samples_imag[idx1]) > 0 && $signed(temp_imag) > 0 && $signed(samples_imag[idx1] + temp_imag) < 0) begin
                                // Positive overflow
                                samples_imag[idx1] <= {1'b0, {(DATA_WIDTH-1){1'b1}}};
                            end
                            else if ($signed(samples_imag[idx1]) < 0 && $signed(temp_imag) < 0 && $signed(samples_imag[idx1] + temp_imag) > 0) begin
                                // Negative overflow
                                samples_imag[idx1] <= {1'b1, {(DATA_WIDTH-1){1'b0}}};
                            end
                            else begin
                                samples_imag[idx1] <= samples_imag[idx1] + temp_imag;
                            end
                            
                            if ($signed(samples_real[idx1]) > 0 && $signed(temp_real) < 0 && $signed(samples_real[idx1] - temp_real) < 0) begin
                                // Negative overflow
                                samples_real[idx2] <= {1'b1, {(DATA_WIDTH-1){1'b0}}};
                            end
                            else if ($signed(samples_real[idx1]) < 0 && $signed(temp_real) > 0 && $signed(samples_real[idx1] - temp_real) > 0) begin
                                // Positive overflow
                                samples_real[idx2] <= {1'b0, {(DATA_WIDTH-1){1'b1}}};
                            end
                            else begin
                                samples_real[idx2] <= samples_real[idx1] - temp_real;
                            end
                            
                            if ($signed(samples_imag[idx1]) > 0 && $signed(temp_imag) < 0 && $signed(samples_imag[idx1] - temp_imag) < 0) begin
                                // Negative overflow
                                samples_imag[idx2] <= {1'b1, {(DATA_WIDTH-1){1'b0}}};
                            end
                            else if ($signed(samples_imag[idx1]) < 0 && $signed(temp_imag) > 0 && $signed(samples_imag[idx1] - temp_imag) > 0) begin
                                // Positive overflow
                                samples_imag[idx2] <= {1'b0, {(DATA_WIDTH-1){1'b1}}};
                            end
                            else begin
                                samples_imag[idx2] <= samples_imag[idx1] - temp_imag;
                            end
                            
                            butterfly_count <= butterfly_count + 1'b1;
                        end
                        else begin
                            // Move to the next stage
                            stage <= stage + 1'b1;
                            butterfly_count <= 0;
                        end
                    end
                    else begin
                        // FFT computation complete
                        state <= OUTPUT;
                        sample_count <= 0;
                    end
                end
                
                OUTPUT: begin
                    // Copy results to output
                    // Pack the output arrays
                    for (i = 0; i < FFT_POINTS; i = i + 1) begin
                        data_out_real[(i+1)*DATA_WIDTH-1 -: DATA_WIDTH] <= samples_real[i];
                        data_out_imag[(i+1)*DATA_WIDTH-1 -: DATA_WIDTH] <= samples_imag[i];
                    end
                    
                    data_valid_out <= 1;
                    busy <= 0;
                    state <= IDLE;
                    data_ready <= 1;
                end
            endcase
        end
    end

endmodule 
