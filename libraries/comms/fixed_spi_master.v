module fixed_spi_master (
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

    // FSM states
    localparam IDLE = 2'b00;
    localparam TRANSMIT = 2'b01;
    localparam DONE = 2'b10;
    
    // Registers
    reg [1:0] state;
    reg [3:0] bit_counter; // 4 bits to count 0-8
    reg [7:0] tx_shift_reg;
    reg [7:0] rx_shift_reg;
    
    // Main state machine
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
            bit_counter <= 0;
            spi_clk <= 0;
            spi_mosi <= 0;
            spi_cs_n <= 1;
            tx_ready <= 1;
            rx_valid <= 0;
            rx_data <= 0;
            tx_shift_reg <= 0;
            rx_shift_reg <= 0;
        end else begin
            // Default value for rx_valid (only high for one cycle)
            rx_valid <= 0;
            
            case (state)
                IDLE: begin
                    // Idle state - SPI bus inactive
                    spi_clk <= 0;
                    spi_cs_n <= 1;
                    tx_ready <= 1;
                    bit_counter <= 0;
                    
                    if (tx_valid) begin
                        // Start of transmission
                        tx_ready <= 0;
                        tx_shift_reg <= tx_data;
                        spi_cs_n <= 0;
                        spi_mosi <= tx_data[7]; // Send MSB first
                        state <= TRANSMIT;
                    end
                end
                
                TRANSMIT: begin
                    // Toggle SPI clock
                    spi_clk <= ~spi_clk;
                    
                    if (spi_clk == 1) begin
                        // Falling edge of SPI clock
                        if (bit_counter < 7) begin
                            // Shift tx data and set next bit
                            bit_counter <= bit_counter + 1;
                            tx_shift_reg <= {tx_shift_reg[6:0], 1'b0};
                            spi_mosi <= tx_shift_reg[6]; // Next bit
                        end else if (bit_counter == 7) begin
                            // Last bit already sent, prepare to finish
                            bit_counter <= bit_counter + 1;
                        end else begin
                            // Transmission complete
                            state <= DONE;
                        end
                    end else begin
                        // Rising edge of SPI clock - sample MISO
                        if (bit_counter <= 7) begin
                            // Sample bit from slave (MSB first into LSB)
                            // This correctly handles the bit ordering
                            rx_shift_reg[7-bit_counter] <= spi_miso;
                        end
                    end
                end
                
                DONE: begin
                    // Complete the transmission
                    spi_cs_n <= 1;
                    spi_clk <= 0;
                    rx_data <= rx_shift_reg;
                    rx_valid <= 1;
                    state <= IDLE;
                end
                
                default: state <= IDLE;
            endcase
        end
    end

endmodule 
