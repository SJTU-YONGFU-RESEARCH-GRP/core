module parameterized_spi_master #(
    /* verilator lint_off UNUSEDPARAM */
    parameter CLK_FREQ = 50000000,   // System clock frequency in Hz
    parameter SPI_FREQ = 1000000,    // SPI clock frequency in Hz
    parameter CPHA = 0,              // Clock phase (0: sample on first edge, 1: sample on second edge)
    /* verilator lint_on UNUSEDPARAM */
    parameter DATA_WIDTH = 8,        // Width of data to transmit
    parameter CPOL = 0               // Clock polarity (0: idle low, 1: idle high)
)(
    input wire clk,                  // System clock
    input wire rst_n,                // Active low reset
    input wire [DATA_WIDTH-1:0] tx_data, // Data to transmit
    input wire tx_valid,             // Signal to start transmission
    output reg tx_ready,             // Ready for new data to transmit
    output reg [DATA_WIDTH-1:0] rx_data, // Received data
    output reg rx_valid,             // Received data is valid
    
    // SPI interface
    output reg spi_clk,              // SPI clock
    output reg spi_mosi,             // Master Out Slave In
    input wire spi_miso,             // Master In Slave Out
    output reg spi_cs_n              // Chip select (active low)
);

    // State definitions
    localparam IDLE = 2'b00;
    localparam ACTIVE = 2'b01;
    localparam DONE = 2'b10;
    
    // Registers
    reg [1:0] state;
    reg [3:0] bit_count;
    reg [DATA_WIDTH-1:0] tx_shift;
    reg [DATA_WIDTH-1:0] rx_shift;
    reg [2:0] clk_divider;
    
    // Main state machine
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
            bit_count <= 0;
            spi_clk <= CPOL;
            spi_mosi <= 1'b0;
            spi_cs_n <= 1'b1;
            tx_ready <= 1'b1;
            rx_valid <= 1'b0;
            rx_data <= 0;
            tx_shift <= 0;
            rx_shift <= 0;
            clk_divider <= 0;
        end else begin
            // Default values
            rx_valid <= 1'b0;
            
            case (state)
                IDLE: begin
                    spi_clk <= CPOL;
                    spi_cs_n <= 1'b1;
                    tx_ready <= 1'b1;
                    clk_divider <= 0;
                    
                    if (tx_valid) begin
                        tx_ready <= 1'b0;
                        tx_shift <= tx_data;
                        bit_count <= 0;
                        spi_cs_n <= 1'b0;
                        spi_mosi <= tx_data[DATA_WIDTH-1]; // MSB first
                        state <= ACTIVE;
                    end
                end
                
                ACTIVE: begin
                    // Simple clock divider - toggle SPI clock every 4 system clocks
                    if (clk_divider == 3) begin
                        clk_divider <= 0;
                        spi_clk <= ~spi_clk;
                        
                        if (spi_clk == 1) begin
                            // On falling edge of SPI clock
                            /* verilator lint_off WIDTHEXPAND */
                            if (bit_count < DATA_WIDTH - 1) begin
                            /* verilator lint_on WIDTHEXPAND */
                                // Prepare next bit to transmit
                                tx_shift <= {tx_shift[DATA_WIDTH-2:0], 1'b0};
                                spi_mosi <= tx_shift[DATA_WIDTH-2];
                                bit_count <= bit_count + 1;
                            /* verilator lint_off WIDTHEXPAND */
                            end else if (bit_count == DATA_WIDTH - 1) begin
                            /* verilator lint_on WIDTHEXPAND */
                                // Last bit already sent, wait for one more clock cycle
                                bit_count <= bit_count + 1;
                            end
                        end else begin
                            // On rising edge of SPI clock
                            // Sample MISO
                            /* verilator lint_off WIDTHEXPAND */
                            rx_shift[DATA_WIDTH-1-bit_count] <= spi_miso;
                            
                            // Check if all bits have been received
                            if (bit_count == DATA_WIDTH) begin
                            /* verilator lint_on WIDTHEXPAND */
                                state <= DONE;
                            end
                        end
                    end else begin
                        clk_divider <= clk_divider + 1;
                    end
                end
                
                DONE: begin
                    spi_cs_n <= 1'b1;
                    spi_clk <= CPOL;
                    rx_data <= rx_shift;
                    rx_valid <= 1'b1;
                    state <= IDLE;
                end
                
                default: state <= IDLE;
            endcase
        end
    end

endmodule 

