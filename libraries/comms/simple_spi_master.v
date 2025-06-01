module simple_spi_master #(
    parameter DATA_WIDTH = 8
)(
    input wire clk,
    input wire rst_n,
    input wire [DATA_WIDTH-1:0] tx_data,
    input wire tx_valid,
    output reg tx_ready,
    output reg [DATA_WIDTH-1:0] rx_data,
    output reg rx_valid,
    
    output reg spi_clk,
    output reg spi_mosi,
    input wire spi_miso,
    output reg spi_cs_n
);

    // State machine states
    localparam IDLE = 2'b00;
    localparam TRANSMIT = 2'b01;
    localparam FINISH = 2'b10;
    
    // Internal registers
    reg [1:0] state;
    reg [3:0] bit_count;
    reg [DATA_WIDTH-1:0] tx_shift_reg;
    reg [DATA_WIDTH-1:0] rx_shift_reg;
    
    // Main state machine
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
            bit_count <= 0;
            tx_ready <= 1'b1;
            rx_valid <= 1'b0;
            spi_clk <= 1'b0;
            spi_mosi <= 1'b0;
            spi_cs_n <= 1'b1;
            tx_shift_reg <= 0;
            rx_shift_reg <= 0;
            rx_data <= 0;
        end else begin
            case (state)
                IDLE: begin
                    spi_cs_n <= 1'b1;
                    spi_clk <= 1'b0;
                    tx_ready <= 1'b1;
                    rx_valid <= 1'b0;
                    
                    if (tx_valid) begin
                        tx_ready <= 1'b0;
                        tx_shift_reg <= tx_data;
                        bit_count <= 0;
                        spi_cs_n <= 1'b0;
                        state <= TRANSMIT;
                        // Set the first bit immediately
                        spi_mosi <= tx_data[DATA_WIDTH-1];
                    end
                end
                
                TRANSMIT: begin
                    /* verilator lint_off WIDTHEXPAND */
                    if (bit_count < DATA_WIDTH) begin
                    /* verilator lint_on WIDTHEXPAND */
                        // Toggle SPI clock
                        spi_clk <= ~spi_clk;
                        
                        if (spi_clk) begin
                            // On falling edge of SPI clock
                            // 1. Update the tx_shift_reg
                            // 2. Set up next bit on MOSI
                            tx_shift_reg <= {tx_shift_reg[DATA_WIDTH-2:0], 1'b0};
                            
                            // Check if this is the last bit before incrementing bit_count
                            /* verilator lint_off WIDTHEXPAND */
                            if (bit_count == DATA_WIDTH - 1) begin
                            /* verilator lint_on WIDTHEXPAND */
                                // Don't update MOSI for the last bit
                            end else begin
                                spi_mosi <= tx_shift_reg[DATA_WIDTH-2]; // Next bit
                            end
                        end else begin
                            // On rising edge of SPI clock
                            // 1. Sample MISO into rx_shift_reg
                            // Store MISO bit in the correct position (MSB first)
                            /* verilator lint_off WIDTHEXPAND */
                            rx_shift_reg[DATA_WIDTH-1-bit_count] <= spi_miso;
                            /* verilator lint_on WIDTHEXPAND */
                            
                            // Increment bit counter after sampling
                            bit_count <= bit_count + 1;
                            
                            // Check if this was the last bit
                            /* verilator lint_off WIDTHEXPAND */
                            if (bit_count == DATA_WIDTH - 1) begin
                            /* verilator lint_on WIDTHEXPAND */
                                state <= FINISH;
                            end
                        end
                    end
                end
                
                FINISH: begin
                    spi_cs_n <= 1'b1;
                    spi_clk <= 1'b0;
                    rx_data <= rx_shift_reg;
                    rx_valid <= 1'b1;
                    state <= IDLE;
                end
                
                default: begin
                    state <= IDLE;
                end
            endcase
        end
    end

endmodule 
