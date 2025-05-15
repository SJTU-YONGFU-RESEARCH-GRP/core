// Parameterized Direct Digital Synthesis (DDS) Module
// This module implements a phase accumulator based DDS with
// configurable phase and amplitude precision

module parameterized_dds #(
    parameter PHASE_WIDTH = 24,        // Phase accumulator width
    parameter OUTPUT_WIDTH = 12,       // Output sample width
    parameter LUT_ADDR_WIDTH = 10,     // Phase to amplitude LUT address width
    parameter USE_QUARTER_SINE = 1     // Use quarter sine LUT with symmetry (1) or full sine LUT (0)
) (
    input wire clk,                    // System clock
    input wire rst_n,                  // Active low reset
    input wire enable,                 // Module enable
    input wire [PHASE_WIDTH-1:0] fcw,  // Frequency control word
    input wire [PHASE_WIDTH-1:0] phase_offset,  // Phase offset
    output reg [OUTPUT_WIDTH-1:0] sine_out,     // Sine output
    output reg [OUTPUT_WIDTH-1:0] cosine_out    // Cosine output
);

    // Phase accumulator register
    reg [PHASE_WIDTH-1:0] phase_acc;
    
    // Phase after adding offset
    wire [PHASE_WIDTH-1:0] phase_with_offset;
    assign phase_with_offset = phase_acc + phase_offset;
    
    // Truncated phase for LUT addressing
    wire [LUT_ADDR_WIDTH-1:0] lut_addr;
    
    // Quadrant detection signals (for quarter sine implementation)
    wire [1:0] quadrant;
    
    // Signals for amplitude lookup
    reg [OUTPUT_WIDTH-1:0] sine_lut [0:(1<<LUT_ADDR_WIDTH)-1];
    reg [OUTPUT_WIDTH-1:0] sine_value;
    wire [LUT_ADDR_WIDTH-1:0] sine_addr;
    
    // Initialize the sine LUT
    initial begin
        integer i;
        real angle, sine_val;
        integer temp_val;
        real center_val, scale_val;
        
        // Calculate center and scale values for the amplitude conversion
        center_val = (1 << (OUTPUT_WIDTH-1));
        scale_val = center_val - 1;
        
        for (i = 0; i < (1<<LUT_ADDR_WIDTH); i = i + 1) begin
            if (USE_QUARTER_SINE != 0) 
                // Only first quadrant stored (0 to π/2)
                angle = (i * 3.14159265359 / 2.0) / (1<<LUT_ADDR_WIDTH); 
            else
                // Full sine wave stored (0 to 2π)
                angle = (i * 2.0 * 3.14159265359) / (1<<LUT_ADDR_WIDTH);
                
            sine_val = $sin(angle);
            // Scale to OUTPUT_WIDTH-bit unsigned value centered at 2^(OUTPUT_WIDTH-1)
            temp_val = $rtoi(sine_val * scale_val + center_val);
            
            // Clamp value to valid range for OUTPUT_WIDTH
            if (temp_val >= (1<<OUTPUT_WIDTH))
                sine_lut[i] = (1<<OUTPUT_WIDTH) - 1;
            else if (temp_val < 0)
                sine_lut[i] = 0;
            else
                sine_lut[i] = temp_val[OUTPUT_WIDTH-1:0];
        end
    end

    // Extract quadrant information from the phase (2 MSBs)
    assign quadrant = phase_with_offset[PHASE_WIDTH-1:PHASE_WIDTH-2];
    
    // Compute LUT address based on quarter-sine optimization
    generate
        if (USE_QUARTER_SINE != 0) begin : quarter_sine_impl
            // Quarter sine implementation uses symmetry
            // We need to handle 4 quadrants differently
            reg [LUT_ADDR_WIDTH-1:0] addr_tmp;
            
            always @(*) begin
                case (quadrant)
                    2'b00: addr_tmp = phase_with_offset[PHASE_WIDTH-3:PHASE_WIDTH-2-LUT_ADDR_WIDTH]; // Q1: 0 to π/2
                    2'b01: addr_tmp = ~phase_with_offset[PHASE_WIDTH-3:PHASE_WIDTH-2-LUT_ADDR_WIDTH]; // Q2: π/2 to π
                    2'b10: addr_tmp = phase_with_offset[PHASE_WIDTH-3:PHASE_WIDTH-2-LUT_ADDR_WIDTH]; // Q3: π to 3π/2
                    2'b11: addr_tmp = ~phase_with_offset[PHASE_WIDTH-3:PHASE_WIDTH-2-LUT_ADDR_WIDTH]; // Q4: 3π/2 to 2π
                    default: addr_tmp = {LUT_ADDR_WIDTH{1'b0}};
                endcase
            end
            
            assign sine_addr = addr_tmp;
        end else begin : full_sine_impl
            // Full sine table
            assign sine_addr = phase_with_offset[PHASE_WIDTH-1:PHASE_WIDTH-LUT_ADDR_WIDTH];
        end
    endgenerate
    
    // Phase accumulation process
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            phase_acc <= {PHASE_WIDTH{1'b0}};
        end else if (enable) begin
            phase_acc <= phase_acc + fcw;
        end
    end
    
    // Calculate cosine address by adding π/2 to sine phase
    wire [LUT_ADDR_WIDTH-1:0] cosine_addr;
    wire [1:0] cos_quadrant;
    
    generate
        if (USE_QUARTER_SINE != 0) begin : cos_quarter_impl
            // For quarter sine, we need to adjust the quadrant and address
            wire [1:0] adj_quadrant;
            assign adj_quadrant = quadrant + 2'b01; // Add π/2 by incrementing quadrant
            assign cos_quadrant = adj_quadrant;
            
            reg [LUT_ADDR_WIDTH-1:0] cos_addr_tmp;
            
            always @(*) begin
                case (cos_quadrant)
                    2'b00: cos_addr_tmp = phase_with_offset[PHASE_WIDTH-3:PHASE_WIDTH-2-LUT_ADDR_WIDTH]; // Q1: 0 to π/2
                    2'b01: cos_addr_tmp = ~phase_with_offset[PHASE_WIDTH-3:PHASE_WIDTH-2-LUT_ADDR_WIDTH]; // Q2: π/2 to π
                    2'b10: cos_addr_tmp = phase_with_offset[PHASE_WIDTH-3:PHASE_WIDTH-2-LUT_ADDR_WIDTH]; // Q3: π to 3π/2
                    2'b11: cos_addr_tmp = ~phase_with_offset[PHASE_WIDTH-3:PHASE_WIDTH-2-LUT_ADDR_WIDTH]; // Q4: 3π/2 to 2π
                    default: cos_addr_tmp = {LUT_ADDR_WIDTH{1'b0}};
                endcase
            end
            
            assign cosine_addr = cos_addr_tmp;
        end else begin : cos_full_impl
            // For full sine, simply add π/2 worth of phase
            assign cosine_addr = sine_addr + (1<<(LUT_ADDR_WIDTH-2));
        end
    endgenerate
    
    // Sine/Cosine output generation
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            sine_out <= {OUTPUT_WIDTH{1'b0}};
            cosine_out <= {OUTPUT_WIDTH{1'b0}};
            sine_value <= {OUTPUT_WIDTH{1'b0}};
        end else if (enable) begin
            // Sine output
            sine_value <= sine_lut[sine_addr];
            
            if (USE_QUARTER_SINE != 0) begin
                if (quadrant == 2'b10 || quadrant == 2'b11) begin
                    // In 3rd or 4th quadrant, sine is negative
                    sine_out <= (1 << OUTPUT_WIDTH) - sine_lut[sine_addr];
                end else begin
                    sine_out <= sine_lut[sine_addr];
                end
                
                // Cosine output based on adjusted quadrant
                if (cos_quadrant == 2'b10 || cos_quadrant == 2'b11) begin
                    // In 3rd or 4th quadrant, cosine is negative
                    cosine_out <= (1 << OUTPUT_WIDTH) - sine_lut[cosine_addr];
                end else begin
                    cosine_out <= sine_lut[cosine_addr];
                end
            end else begin
                // Full sine implementation
                sine_out <= sine_lut[sine_addr];
                cosine_out <= sine_lut[cosine_addr];
            end
        end
    end

endmodule 


