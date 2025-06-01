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
    
    // Declare center_val and scale_val as reg at the module level
    reg [OUTPUT_WIDTH-1:0] center_val; // Change to reg
    reg [OUTPUT_WIDTH-1:0] scale_val;  // Change to reg
    
    // LUT initialization state machine
    reg [LUT_ADDR_WIDTH:0] init_counter;
    reg lut_initialized;
    
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            init_counter <= 0;
            lut_initialized <= 0;
        end else if (!lut_initialized) begin
            integer angle;
            integer scaled_angle, sine_scaled;
            localparam integer PI_SCALED = 528487449; // Pre-calculated 3.1415926 * 2^24 / 180

            // Calculate current index
            angle = (init_counter * (USE_QUARTER_SINE ? 90 : 360)) / 
                   (1 << (USE_QUARTER_SINE ? (LUT_ADDR_WIDTH - 1) : LUT_ADDR_WIDTH));
            
            // Fixed-point sine calculation
            scaled_angle = angle * PI_SCALED;
            sine_scaled = scaled_angle - 
                        ((scaled_angle * scaled_angle * scaled_angle) / 6) + 
                        ((scaled_angle * scaled_angle * scaled_angle * 
                        scaled_angle * scaled_angle) / 120);
            
            // Store in LUT
            sine_lut[init_counter] = ((sine_scaled >> (24 - OUTPUT_WIDTH + 8)) + 
                                    (1 << (OUTPUT_WIDTH-1))) & ((1 << OUTPUT_WIDTH) - 1);
            
            // Update counter
            if (init_counter == (1 << LUT_ADDR_WIDTH) - 1)
                lut_initialized <= 1;
            else
                init_counter <= init_counter + 1;
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
            // Full sine, simply add π/2 worth of phase
            wire [PHASE_WIDTH-1:0] phase_plus_pi2;
            assign phase_plus_pi2 = phase_with_offset + (1 << (PHASE_WIDTH-2)); // Add π/2
            assign cosine_addr = phase_plus_pi2[PHASE_WIDTH-1:PHASE_WIDTH-LUT_ADDR_WIDTH];
        end
    endgenerate
    
    // Sine/Cosine output generation with proper sign handling
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            sine_out <= {OUTPUT_WIDTH{1'b0}};
            cosine_out <= {OUTPUT_WIDTH{1'b0}};
        end else if (enable) begin
            if (USE_QUARTER_SINE) begin
                // Sine output with quadrant sign handling
                sine_out <= quadrant[1] ? 
                    (center_val - (sine_lut[sine_addr] - center_val)) : 
                    sine_lut[sine_addr];
                
                // Cosine output with quadrant sign handling
                cosine_out <= cos_quadrant[1] ? 
                    (center_val - (sine_lut[cosine_addr] - center_val)) : 
                    sine_lut[cosine_addr];
            end else begin
                sine_out <= sine_lut[sine_addr];
                cosine_out <= sine_lut[cosine_addr];
            end
        end
    end

endmodule 


