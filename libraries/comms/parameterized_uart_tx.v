// Parameterized UART Transmitter
// This module implements a configurable UART transmitter with parameterized
// data width and baud rate settings

module parameterized_uart_tx #(
    parameter CLK_FREQ = 50000,     // Clock frequency in Hz (reduced for simulation)
    parameter BAUD_RATE = 1000,     // Baud rate in bits per second (reduced for simulation)
    parameter DATA_WIDTH = 8,        // Data width (5-9 bits)
    parameter PARITY_EN = 0,         // Parity enable (0=disabled, 1=enabled)
    parameter PARITY_TYPE = 0,       // Parity type (0=even, 1=odd)
    parameter STOP_BITS = 1          // Number of stop bits (1 or 2)
) (
    input wire clk,                  // System clock
    input wire rst_n,                // Active low reset
    input wire tx_start,             // Start transmission
    input wire [DATA_WIDTH-1:0] data_in, // Data to transmit
    output reg tx,                   // UART TX line
    output reg tx_busy               // Transmitter busy flag
);

    // Derived parameters
    localparam CLKS_PER_BIT = CLK_FREQ / BAUD_RATE;
    
    // Define bit widths for counters
    localparam BIT_TIMER_WIDTH = $clog2(CLKS_PER_BIT);
    localparam BIT_COUNTER_WIDTH = $clog2(DATA_WIDTH);
    
    // State definitions
    localparam IDLE = 3'd0;
    localparam START = 3'd1;
    localparam DATA = 3'd2;
    localparam PARITY = 3'd3;
    localparam STOP = 3'd4;
    
    // Internal registers
    reg [2:0] state;
    reg [BIT_TIMER_WIDTH-1:0] clk_counter;
    reg [BIT_COUNTER_WIDTH-1:0] bit_index;
    reg [DATA_WIDTH-1:0] data_reg;
    reg parity_bit;
    reg stop_bit_index;
    
    // Constants for width-matching comparisons
    /* verilator lint_off WIDTHTRUNC */
    localparam [BIT_TIMER_WIDTH-1:0] CLKS_PER_BIT_M1 = CLKS_PER_BIT - 1;
    localparam [BIT_COUNTER_WIDTH-1:0] DATA_WIDTH_M1 = DATA_WIDTH - 1;
    /* verilator lint_on WIDTHTRUNC */
    
    // Debug signals
    // synthesis translate_off
    initial begin
        $display("UART TX Parameters: CLK_FREQ=%0d, BAUD_RATE=%0d, CLKS_PER_BIT=%0d", 
                 CLK_FREQ, BAUD_RATE, CLKS_PER_BIT);
    end
    // synthesis translate_on
    
    // State machine
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
            tx <= 1'b1;           // Idle state is high
            tx_busy <= 1'b0;
            clk_counter <= 0;
            bit_index <= 0;
            data_reg <= 0;
            parity_bit <= 0;
            stop_bit_index <= 0;
        end else begin
            case (state)
                IDLE: begin
                    tx <= 1'b1;             // Idle state is high
                    clk_counter <= 0;
                    bit_index <= 0;
                    stop_bit_index <= 0;
                    tx_busy <= 1'b0;        // Ensure tx_busy is clear in IDLE
                    
                    // Check for tx_start signal
                    if (tx_start) begin
                        // Store data and start transmission
                        data_reg <= data_in;
                        tx_busy <= 1'b1;
                        state <= START;
                        
                        // synthesis translate_off
                        $display("[UART TX] Starting transmission of 0x%h at time %0t", data_in, $time);
                        // synthesis translate_on
                    end
                end
                
                START: begin
                    // Start bit is low
                    tx <= 1'b0;
                    
                    if (clk_counter < CLKS_PER_BIT_M1) begin
                        clk_counter <= clk_counter + 1;
                    end else begin
                        clk_counter <= 0;
                        state <= DATA;
                        
                        // Initialize parity calculation
                        if (PARITY_EN)
                            parity_bit <= PARITY_TYPE;
                            
                        // synthesis translate_off
                        $display("[UART TX] Start bit complete at time %0t", $time);
                        // synthesis translate_on
                    end
                end
                
                DATA: begin
                    // Transmit data bits (LSB first)
                    tx <= data_reg[bit_index];
                    
                    // Update parity if enabled
                    if (PARITY_EN && clk_counter == 0)
                        parity_bit <= parity_bit ^ data_reg[bit_index];
                    
                    if (clk_counter < CLKS_PER_BIT_M1) begin
                        clk_counter <= clk_counter + 1;
                    end else begin
                        clk_counter <= 0;
                        
                        if (bit_index < DATA_WIDTH_M1) begin
                            bit_index <= bit_index + 1;
                            // synthesis translate_off
                            $display("[UART TX] Sending bit %0d = %0b at time %0t", 
                                     bit_index, data_reg[bit_index], $time);
                            // synthesis translate_on
                        end else begin
                            bit_index <= 0;
                            if (PARITY_EN)
                                state <= PARITY;
                            else
                                state <= STOP;
                                
                            // synthesis translate_off
                            $display("[UART TX] All data bits sent at time %0t", $time);
                            // synthesis translate_on
                        end
                    end
                end
                
                PARITY: begin
                    // Transmit parity bit
                    tx <= parity_bit;
                    
                    if (clk_counter < CLKS_PER_BIT_M1) begin
                        clk_counter <= clk_counter + 1;
                    end else begin
                        clk_counter <= 0;
                        state <= STOP;
                        
                        // synthesis translate_off
                        $display("[UART TX] Parity bit sent at time %0t", $time);
                        // synthesis translate_on
                    end
                end
                
                STOP: begin
                    // Stop bit is high
                    tx <= 1'b1;
                    
                    if (clk_counter < CLKS_PER_BIT_M1) begin
                        clk_counter <= clk_counter + 1;
                    end else begin
                        clk_counter <= 0;
                        
                        /* verilator lint_off UNSIGNED */
                        if (stop_bit_index < (STOP_BITS - 1)) begin
                        /* verilator lint_on UNSIGNED */
                            stop_bit_index <= stop_bit_index + 1;
                            // synthesis translate_off
                            $display("[UART TX] Stop bit %0d sent at time %0t", 
                                     stop_bit_index + 1, $time);
                            // synthesis translate_on
                        end else begin
                            state <= IDLE;
                            tx_busy <= 1'b0;  // Transmission complete
                            // synthesis translate_off
                            $display("[UART TX] Transmission complete at time %0t", $time);
                            // synthesis translate_on
                        end
                    end
                end
                
                default: begin
                    state <= IDLE;
                    tx_busy <= 1'b0;  // Make sure tx_busy is cleared in case of error
                end
            endcase
        end
    end

endmodule 
