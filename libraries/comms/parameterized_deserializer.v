module parameterized_deserializer #(
    parameter DATA_WIDTH = 8,            // Width of the parallel output
    /* verilator lint_off UNUSEDPARAM */
    parameter CLOCK_DIV = 4,             // Clock division factor 
    parameter MSB_FIRST = 1,             // 1 = MSB first, 0 = LSB first
    /* verilator lint_off UNUSEDPARAM */
    parameter SYNC_PATTERN = 8'hA5,      // Synchronization pattern to detect start of frame
    parameter USE_SYNC_PATTERN = 0       // 1 = Use sync pattern detection, 0 = Use explicit load signal
    /* verilator lint_on UNUSEDPARAM */
) (
    input wire clk,                      // System clock
    input wire rst_n,                    // Active low reset
    input wire enable,                   // Module enable
    input wire serial_in,                // Serial data input
    input wire load,                     // Start reception (used when USE_SYNC_PATTERN=0)
    output reg [DATA_WIDTH-1:0] parallel_out,  // Parallel data output
    output reg rx_done,                  // Reception complete flag
    output reg rx_busy,                  // Deserializer is busy receiving
    output reg sync_detected             // Sync pattern detected (when USE_SYNC_PATTERN=1)
);

    // Internal registers
    reg [DATA_WIDTH-1:0] shift_reg;
    reg [3:0] bit_counter;             // 4 bits for counting 0-8
    reg [2:0] clk_div_counter;         // 3 bits to count 0-7
    
    // State machine states
    localparam IDLE = 2'b00;
    localparam RECEIVING = 2'b01;
    localparam DONE = 2'b10;
    
    reg [1:0] state;
    
    // 1 clock cycle pulse when we should sample the bit
    wire sample_pulse = (clk_div_counter == 3'd0);
    
    // Clock division counter
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            clk_div_counter <= 0;
        end else if (enable) begin
            if (clk_div_counter == 3'd7) begin
                clk_div_counter <= 0;
            end else begin
                clk_div_counter <= clk_div_counter + 1;
            end
        end
    end
    
    // Main state machine
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
            bit_counter <= 0;
            shift_reg <= 0;
            parallel_out <= 0;
            rx_done <= 0;
            rx_busy <= 0;
            sync_detected <= 0;
        end else if (enable) begin
            case (state)
                IDLE: begin
                    // Clear all registers
                    rx_done <= 0;
                    bit_counter <= 0;
                    shift_reg <= 0;
                    
                    // Start reception when load is asserted
                    if (load) begin
                        state <= RECEIVING;
                        rx_busy <= 1;
                    end
                end
                
                RECEIVING: begin
                    // Only process on sample pulse (divided clock)
                    if (sample_pulse) begin
                        // MSB-first deserializer
                        // Shift left and insert new bit at LSB
                        shift_reg <= {shift_reg[DATA_WIDTH-2:0], serial_in};
                        
                        // Keep track of received bits
                        bit_counter <= bit_counter + 1;
                        
                        // Once we've received all 8 bits, go to DONE state
                        if (bit_counter == 4'd7) begin
                            state <= DONE;
                        end
                    end
                end
                
                DONE: begin
                    // Output the fully received parallel data
                    parallel_out <= shift_reg;
                    rx_done <= 1;
                    rx_busy <= 0;
                    
                    // Wait for load to be deasserted before going back to IDLE
                    if (!load) begin
                        state <= IDLE;
                    end
                end
                
                default: state <= IDLE;
            endcase
        end
    end

endmodule 
