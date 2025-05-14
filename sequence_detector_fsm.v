module sequence_detector_fsm #(
    parameter PATTERN_WIDTH = 4,
    parameter PATTERN = 4'b1011  // Default pattern to detect
)(
    input wire clk,
    input wire rst_n,
    input wire enable,
    input wire serial_in,
    input wire [PATTERN_WIDTH-1:0] config_pattern,  // Configurable pattern
    input wire load_pattern,                        // Load new pattern when high
    output reg pattern_detected
);

    // FSM state encoding
    localparam IDLE = 0;
    localparam DETECTING = 1;
    
    // FSM state and internal registers
    reg state;
    reg [PATTERN_WIDTH-1:0] pattern_reg;
    /* verilator lint_off UNUSEDSIGNAL */
    reg [PATTERN_WIDTH-1:0] shift_reg;
    /* verilator lint_on UNUSEDSIGNAL */
    reg [$clog2(PATTERN_WIDTH):0] bit_count;
    
    // FSM logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
            pattern_reg <= PATTERN;
            shift_reg <= {PATTERN_WIDTH{1'b0}};
            bit_count <= 0;
            pattern_detected <= 0;
        end else begin
            // Default values
            pattern_detected <= 0;
            
            // Load new pattern if requested
            if (load_pattern) begin
                pattern_reg <= config_pattern;
                state <= IDLE;
                bit_count <= 0;
                shift_reg <= {PATTERN_WIDTH{1'b0}};
            end else if (enable) begin
                case (state)
                    IDLE: begin
                        // Start detecting
                        shift_reg <= {shift_reg[PATTERN_WIDTH-2:0], serial_in};
                        bit_count <= 1;
                        state <= DETECTING;
                    end
                    
                    DETECTING: begin
                        // Shift in new bit
                        shift_reg <= {shift_reg[PATTERN_WIDTH-2:0], serial_in};
                        
                        // Increment bit count
                        if (bit_count < PATTERN_WIDTH) begin
                            bit_count <= bit_count + 1;
                        end
                        
                        // Check for pattern match with previous shift register state
                        if (bit_count >= PATTERN_WIDTH-1) begin
                            // We'll have enough bits to check after this shift
                            if ({shift_reg[PATTERN_WIDTH-2:0], serial_in} == pattern_reg) begin
                                pattern_detected <= 1;
                            end
                        end
                    end
                endcase
            end
        end
    end

endmodule 
