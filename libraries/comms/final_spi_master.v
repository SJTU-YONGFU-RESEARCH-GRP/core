module final_spi_master (
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
    localparam IDLE = 0;
    localparam ACTIVE = 1;
    localparam DONE = 2;
    
    // Registers
    reg [1:0] state;
    reg [3:0] bit_counter;
    reg [7:0] tx_shift;
    reg [7:0] rx_shift;
    
    // Capture the MISO bits directly in the correct order
    reg [7:0] miso_capture;
    
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
            tx_shift <= 0;
            rx_shift <= 0;
            miso_capture <= 0;
        end else begin
            // Default values
            rx_valid <= 0;
            
            case (state)
                IDLE: begin
                    spi_clk <= 0;
                    spi_cs_n <= 1;
                    tx_ready <= 1;
                    bit_counter <= 0;
                    miso_capture <= 0;
                    
                    if (tx_valid) begin
                        tx_ready <= 0;
                        tx_shift <= tx_data;
                        spi_cs_n <= 0;
                        spi_mosi <= tx_data[7]; // MSB first
                        state <= ACTIVE;
                    end
                end
                
                ACTIVE: begin
                    // Toggle SPI clock
                    spi_clk <= ~spi_clk;
                    
                    if (spi_clk) begin
                        // Falling edge of SPI clock
                        if (bit_counter < 7) begin
                            // Shift out next bit
                            tx_shift <= {tx_shift[6:0], 1'b0};
                            spi_mosi <= tx_shift[6]; // Next bit
                        end
                    end else begin
                        // Rising edge of SPI clock
                        // Sample MISO bit
                        if (bit_counter < 8) begin
                            // Store bit directly in the correct position
                            miso_capture[7-bit_counter] <= spi_miso;
                            bit_counter <= bit_counter + 1;
                        end
                        
                        // Last bit sampled, go to DONE state
                        if (bit_counter == 7) begin
                            state <= DONE;
                        end
                    end
                end
                
                DONE: begin
                    spi_cs_n <= 1;
                    spi_clk <= 0;
                    rx_data <= miso_capture; // Use the directly captured bits
                    rx_valid <= 1;
                    state <= IDLE;
                end
                
                default: state <= IDLE;
            endcase
        end
    end

endmodule 
