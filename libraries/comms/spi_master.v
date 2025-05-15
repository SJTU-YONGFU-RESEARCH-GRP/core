module spi_master (
    input wire clk,
    input wire rst_n,
    input wire [7:0] tx_data,
    input wire tx_valid,
    output reg tx_ready,
    output reg [7:0] rx_data,
    output reg rx_valid,
    
    output reg spi_clk,
    output reg spi_mosi,
    input wire spi_miso,
    output reg spi_cs_n
);

    // State definitions
    localparam IDLE = 2'b00;
    localparam ACTIVE = 2'b01;
    localparam DONE = 2'b10;
    
    // Registers
    /* verilator lint_off UNUSEDSIGNAL */
    reg [1:0] state;
    reg [3:0] bit_count;
    reg [7:0] tx_shift;
    reg [7:0] rx_shift;
    /* verilator lint_on UNUSEDSIGNAL */
    
    // Debug register to store MISO samples
    reg [7:0] debug_miso_samples;
    
    // Main state machine
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
            bit_count <= 0;
            spi_clk <= 0;
            spi_mosi <= 0;
            spi_cs_n <= 1;
            tx_ready <= 1;
            rx_valid <= 0;
            rx_data <= 0;
            tx_shift <= 0;
            rx_shift <= 0;
            debug_miso_samples <= 0;
        end else begin
            case (state)
                IDLE: begin
                    spi_clk <= 0;
                    spi_cs_n <= 1;
                    tx_ready <= 1;
                    rx_valid <= 0;
                    debug_miso_samples <= 0;
                    
                    if (tx_valid) begin
                        tx_ready <= 0;
                        tx_shift <= tx_data;
                        bit_count <= 0;
                        spi_cs_n <= 0;
                        spi_mosi <= tx_data[7]; // MSB first
                        state <= ACTIVE;
                    end
                end
                
                ACTIVE: begin
                    // Toggle SPI clock
                    spi_clk <= ~spi_clk;
                    
                    if (spi_clk == 1) begin
                        // On falling edge (next cycle)
                        if (bit_count < 7) begin
                            // Prepare next bit to transmit
                            spi_mosi <= tx_shift[6]; // Next bit
                            tx_shift <= {tx_shift[6:0], 1'b0}; // Shift left
                        end
                    end else begin
                        // On rising edge
                        // Sample MISO
                        debug_miso_samples[7-bit_count] <= spi_miso; // Store in debug register
                        rx_shift <= {rx_shift[6:0], spi_miso};
                        
                        bit_count <= bit_count + 1;
                        if (bit_count == 7) begin
                            state <= DONE;
                        end
                    end
                end
                
                DONE: begin
                    spi_cs_n <= 1;
                    spi_clk <= 0;
                    rx_data <= debug_miso_samples; // Use debug register to ensure correct bit order
                    rx_valid <= 1;
                    state <= IDLE;
                end
                
                default: state <= IDLE;
            endcase
        end
    end
    
endmodule 
