// Parameterized UART Transmitter
// This module implements a configurable UART transmitter with parameterized
// data width and baud rate settings

module parameterized_uart_tx #(
    parameter DATA_WIDTH = 8,             // Data width (typically 5-9)
    parameter PARITY_EN = 0,              // Enable parity bit (0: disabled, 1: enabled)
    parameter PARITY_TYPE = 0,            // Parity type (0: even, 1: odd)
    parameter STOP_BITS = 1,              // Number of stop bits (1 or 2)
    parameter CLOCK_FREQ = 50_000_000,    // Clock frequency in Hz
    parameter BAUD_RATE = 115200          // Baud rate in bits per second
) (
    input wire clk,                       // System clock
    input wire rst_n,                     // Active low reset
    input wire [DATA_WIDTH-1:0] data_in,  // Data to transmit
    input wire tx_start,                  // Start transmission
    output reg tx,                        // UART TX line
    output reg tx_busy                    // Transmitter busy flag
);

    // Calculate clock ticks per bit based on baud rate
    localparam CLKS_PER_BIT = CLOCK_FREQ / BAUD_RATE;
    
    // State definitions
    localparam IDLE     = 3'd0;
    localparam START    = 3'd1;
    localparam DATA     = 3'd2;
    localparam PARITY   = 3'd3;
    localparam STOP     = 3'd4;
    
    // Internal registers
    reg [2:0] state;
    reg [$clog2(CLKS_PER_BIT)-1:0] bit_timer;
    reg [$clog2(DATA_WIDTH)-1:0] bit_counter;
    reg [DATA_WIDTH-1:0] data_reg;
    reg parity_bit;
    reg [$clog2(STOP_BITS+1)-1:0] stop_bit_counter;

    // Define constants for comparison with proper widths
    localparam [$clog2(CLKS_PER_BIT)-1:0] CLKS_PER_BIT_M1_WIDTH = $clog2(CLKS_PER_BIT)'(CLKS_PER_BIT - 1);
    localparam [$clog2(DATA_WIDTH)-1:0] DATA_WIDTH_M1_WIDTH = $clog2(DATA_WIDTH)'(DATA_WIDTH - 1);
    
    // Function to reverse the bit order for LSB-first transmission
    function [DATA_WIDTH-1:0] reverse_bits;
        input [DATA_WIDTH-1:0] data;
        integer i;
        begin
            for (i = 0; i < DATA_WIDTH; i = i + 1)
                reverse_bits[i] = data[DATA_WIDTH-1-i];
        end
    endfunction
    
    // Function to calculate parity
    function parity_calc;
        input [DATA_WIDTH-1:0] data;
        input parity_type;
        integer i;
        begin
            parity_calc = 0;
            for (i = 0; i < DATA_WIDTH; i = i + 1)
                parity_calc = parity_calc ^ data[i];
            if (parity_type)
                parity_calc = ~parity_calc;
        end
    endfunction
    
    // State machine
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
            tx <= 1'b1;           // Idle state is high
            tx_busy <= 1'b0;
            bit_timer <= 0;
            bit_counter <= 0;
            data_reg <= 0;
            parity_bit <= 0;
            stop_bit_counter <= 0;
        end else begin
            // Debug output for tx and state
            $display("[UART TX] time=%0t state=%0d tx=%b bit_counter=%0d bit_timer=%0d stop_bit_counter=%0d", $time, state, tx, bit_counter, bit_timer, stop_bit_counter);
            case (state)
                IDLE: begin
                    tx <= 1'b1;             // Idle state is high
                    bit_timer <= 0;
                    bit_counter <= 0;
                    stop_bit_counter <= 0;
                    
                    if (tx_start) begin
                        tx_busy <= 1'b1;
                        // Store data for LSB-first transmission (no need to reverse since we'll transmit LSB first)
                        data_reg <= data_in;
                        if (PARITY_EN != 0) begin
                            parity_bit <= parity_calc(data_in, PARITY_TYPE);
                        end
                        state <= START;
                    end
                end
                
                START: begin
                    tx <= 1'b0; // Start bit is low
                    if (bit_timer < CLKS_PER_BIT_M1_WIDTH) begin
                        bit_timer <= bit_timer + 1'b1;
                    end else begin
                        bit_timer <= 0;
                        state <= DATA;
                    end
                end
                
                DATA: begin
                    tx <= data_reg[bit_counter];
                    if (bit_timer < CLKS_PER_BIT_M1_WIDTH) begin
                        bit_timer <= bit_timer + 1'b1;
                    end else begin
                        bit_timer <= 0;
                        if (bit_counter < DATA_WIDTH_M1_WIDTH) begin
                            bit_counter <= bit_counter + 1'b1;
                        end else begin
                            bit_counter <= 0; // Reset bit_counter after last data bit
                            if (PARITY_EN != 0) begin
                                state <= PARITY;
                            end else begin
                                stop_bit_counter <= 0;
                                state <= STOP;
                            end
                        end
                    end
                end
                
                PARITY: begin
                    tx <= parity_bit;
                    if (bit_timer < CLKS_PER_BIT_M1_WIDTH) begin
                        bit_timer <= bit_timer + 1'b1;
                    end else begin
                        bit_timer <= 0;
                        stop_bit_counter <= 0;
                        state <= STOP;
                    end
                end
                
                STOP: begin
                    tx <= 1'b1;  // Stop bit is high
                    if (bit_timer < CLKS_PER_BIT_M1_WIDTH) begin
                        bit_timer <= bit_timer + 1'b1;
                    end else begin
                        bit_timer <= 0;
                        /* verilator lint_off UNSIGNED */
                        if (stop_bit_counter < (STOP_BITS - 1)) begin
                            stop_bit_counter <= stop_bit_counter + 1'b1;
                        end else begin
                            stop_bit_counter <= 0;  // Reset stop bit counter
                            state <= IDLE;
                            tx_busy <= 1'b0;
                        end
                        /* verilator lint_on UNSIGNED */
                    end
                end
                
                default: state <= IDLE;
            endcase
        end
    end

endmodule 

