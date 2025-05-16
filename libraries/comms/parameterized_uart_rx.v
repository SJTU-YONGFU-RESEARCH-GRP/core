module parameterized_uart_rx #(
    parameter CLK_FREQ = 50000,     // Clock frequency in Hz (reduced for simulation)
    parameter BAUD_RATE = 1000,     // Baud rate in bits per second (reduced for simulation)
    parameter DATA_WIDTH = 8,        // Data width (5-9 bits)
    parameter PARITY_EN = 0,         // Parity enable (0=disabled, 1=enabled)
    parameter PARITY_TYPE = 0,       // Parity type (0=even, 1=odd)
    parameter STOP_BITS = 1          // Number of stop bits (1 or 2)
) (
    input wire clk,                  // System clock
    input wire rst_n,                // Active low reset
    input wire rx,                   // UART RX line
    output reg [DATA_WIDTH-1:0] data_out, // Received data
    output reg data_valid,           // Data valid pulse
    output reg parity_error,         // Parity error flag
    output reg frame_error           // Frame error flag
);

    // Derived parameters
    localparam [31:0] CLKS_PER_BIT = CLK_FREQ / BAUD_RATE;
    localparam [31:0] CLKS_PER_HALF_BIT = CLKS_PER_BIT / 2;
    
    // State definitions
    localparam IDLE = 3'd0;
    localparam START_BIT = 3'd1;
    localparam DATA_BITS = 3'd2;
    localparam PARITY_BIT = 3'd3;
    localparam STOP_BIT = 3'd4;
    localparam CLEANUP = 3'd5;
    
    // Registers
    reg [2:0] state;
    reg [31:0] clk_counter;
    reg [$clog2(DATA_WIDTH)-1:0] bit_index;
    reg [DATA_WIDTH-1:0] rx_data;
    reg rx_parity;
    reg rx_sync, rx_meta; // 2FF synchronizer
    
    // Debug signals
    // synthesis translate_off
    initial begin
        $display("UART RX Parameters: CLK_FREQ=%0d, BAUD_RATE=%0d, CLKS_PER_BIT=%0d", 
                 CLK_FREQ, BAUD_RATE, CLKS_PER_BIT);
    end
    // synthesis translate_on
    
    // Synchronize the RX input to prevent metastability
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rx_meta <= 1'b1;
            rx_sync <= 1'b1;
        end else begin
            rx_meta <= rx;
            rx_sync <= rx_meta;
        end
    end
    
    // Main UART RX state machine
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
            clk_counter <= 0;
            bit_index <= 0;
            rx_data <= 0;
            rx_parity <= 0;
            data_out <= 0;
            data_valid <= 0;
            parity_error <= 0;
            frame_error <= 0;
        end else begin
            // Default assignment
            data_valid <= 0;
            
            case (state)
                IDLE: begin
                    // Reset counters
                    clk_counter <= 0;
                    bit_index <= 0;
                    parity_error <= 0;
                    frame_error <= 0;
                    
                    // Wait for start bit (low signal)
                    if (rx_sync == 1'b0) begin
                        // synthesis translate_off
                        $display("UART RX: Start bit detected");
                        // synthesis translate_on
                        state <= START_BIT;
                    end
                end
                
                START_BIT: begin
                    // Sample in the middle of the start bit
                    if (clk_counter == CLKS_PER_HALF_BIT) begin
                        // Verify it's still low
                        if (rx_sync == 1'b0) begin
                            // synthesis translate_off
                            $display("UART RX: Valid start bit confirmed");
                            // synthesis translate_on
                            clk_counter <= 0;
                            state <= DATA_BITS;
                            bit_index <= 0;
                            rx_parity <= PARITY_TYPE; // Initialize parity
                        end else begin
                            // False start bit
                            // synthesis translate_off
                            $display("UART RX: False start bit detected");
                            // synthesis translate_on
                            state <= IDLE;
                        end
                    end else begin
                        clk_counter <= clk_counter + 1;
                    end
                end
                
                DATA_BITS: begin
                    // Sample in the middle of each data bit
                    if (clk_counter == CLKS_PER_BIT) begin
                        clk_counter <= 0;
                        // synthesis translate_off
                        $display("UART RX: Received data bit %0d = %0b", bit_index, rx_sync);
                        // synthesis translate_on
                        rx_data[bit_index] <= rx_sync;
                        
                        // Update parity calculation
                        if (PARITY_EN) begin
                            rx_parity <= rx_parity ^ rx_sync;
                        end
                        
                        // Use a zero-extended version of bit_index for comparison
                        if ({1'b0, bit_index} < (DATA_WIDTH - 1)) begin
                            bit_index <= bit_index + 1;
                        end else begin
                            bit_index <= 0;
                            state <= PARITY_EN ? PARITY_BIT : STOP_BIT;
                            // synthesis translate_off
                            if (!PARITY_EN) $display("UART RX: All data bits received, moving to stop bit");
                            else $display("UART RX: All data bits received, moving to parity bit");
                            // synthesis translate_on
                        end
                    end else begin
                        clk_counter <= clk_counter + 1;
                    end
                end
                
                PARITY_BIT: begin
                    // Sample in the middle of the parity bit
                    if (clk_counter == CLKS_PER_BIT) begin
                        // synthesis translate_off
                        $display("UART RX: Received parity bit = %0b, calculated parity = %0b", rx_sync, rx_parity);
                        // synthesis translate_on
                        clk_counter <= 0;
                        state <= STOP_BIT;
                        
                        // Check parity
                        if (rx_sync != rx_parity) begin
                            parity_error <= 1'b1;
                            // synthesis translate_off
                            $display("UART RX: Parity error detected!");
                            // synthesis translate_on
                        end
                    end else begin
                        clk_counter <= clk_counter + 1;
                    end
                end
                
                STOP_BIT: begin
                    // Sample in the middle of the stop bit(s)
                    if (clk_counter == CLKS_PER_BIT) begin
                        clk_counter <= 0;
                        
                        // Check for frame error (stop bit should be high)
                        if (rx_sync != 1'b1) begin
                            frame_error <= 1'b1;
                            // synthesis translate_off
                            $display("UART RX: Frame error detected! Stop bit is %0b", rx_sync);
                            // synthesis translate_on
                        end
                        
                        if (STOP_BITS > 1 && bit_index == 0) begin
                            // For multiple stop bits
                            bit_index <= 1;
                            // synthesis translate_off
                            $display("UART RX: First stop bit received, waiting for second stop bit");
                            // synthesis translate_on
                        end else begin
                            state <= CLEANUP;
                            // Output the received data regardless of stop bit value
                            data_out <= rx_data;
                            data_valid <= 1'b1;
                            // synthesis translate_off
                            $display("UART RX: Successfully received byte 0x%h", rx_data);
                            // synthesis translate_on
                        end
                    end else begin
                        clk_counter <= clk_counter + 1;
                    end
                end
                
                CLEANUP: begin
                    // Wait one bit time to ensure proper spacing between bytes
                    if (clk_counter == CLKS_PER_BIT / 4) begin  // Reduced to 1/4 bit time
                        state <= IDLE;
                        clk_counter <= 0;
                        // synthesis translate_off
                        $display("UART RX: Returning to IDLE state");
                        // synthesis translate_on
                    end else begin
                        clk_counter <= clk_counter + 1;
                    end
                end
                
                default: begin
                    state <= IDLE;
                end
            endcase
        end
    end

endmodule 

 