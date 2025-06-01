module basic_spi_master (
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
    localparam TRANSFER = 1;
    localparam DONE = 2;
    
    // Registers
    reg [1:0] state;
    reg [3:0] bit_count;
    reg [7:0] tx_shift_reg;
    reg [7:0] rx_shift_reg;
    reg spi_clk_en;
    
    // Main state machine
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
            bit_count <= 0;
            spi_clk <= 0;
            spi_clk_en <= 0;
            spi_mosi <= 0;
            spi_cs_n <= 1;
            tx_ready <= 1;
            rx_valid <= 0;
            rx_data <= 0;
            tx_shift_reg <= 0;
            rx_shift_reg <= 0;
        end else begin
            // Default values
            rx_valid <= 0;
            
            case (state)
                IDLE: begin
                    // Reset signals in idle state
                    spi_clk <= 0;
                    spi_clk_en <= 0;
                    spi_cs_n <= 1;
                    tx_ready <= 1;
                    bit_count <= 0;
                    
                    if (tx_valid) begin
                        // Start a new transfer
                        tx_ready <= 0;
                        tx_shift_reg <= tx_data;
                        spi_cs_n <= 0;
                        spi_clk_en <= 1;
                        spi_mosi <= tx_data[7]; // MSB first
                        state <= TRANSFER;
                    end
                end
                
                TRANSFER: begin
                    // Toggle SPI clock when enabled
                    if (spi_clk_en) begin
                        spi_clk <= ~spi_clk;
                    end
                    
                    if (spi_clk_en && spi_clk) begin
                        // On falling edge (next cycle)
                        // Shift out next bit
                        tx_shift_reg <= {tx_shift_reg[6:0], 1'b0};
                        
                        // Set next bit for MOSI if not the last bit
                        if (bit_count < 7) begin
                            spi_mosi <= tx_shift_reg[6];
                        end
                    end
                    
                    if (spi_clk_en && !spi_clk) begin
                        // On rising edge
                        // Sample MISO bit into correct position
                        rx_shift_reg[7-bit_count] <= spi_miso;
                        
                        // Increment bit counter
                        bit_count <= bit_count + 1;
                        
                        // Check if transfer is complete
                        if (bit_count == 7) begin
                            state <= DONE;
                            spi_clk_en <= 0;
                        end
                    end
                end
                
                DONE: begin
                    // Transfer complete
                    spi_cs_n <= 1;
                    rx_data <= rx_shift_reg;
                    rx_valid <= 1;
                    state <= IDLE;
                end
                
                default: state <= IDLE;
            endcase
        end
    end

endmodule 
