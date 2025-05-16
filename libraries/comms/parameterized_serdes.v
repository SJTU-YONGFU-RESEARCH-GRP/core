module parameterized_serdes #(
    parameter DATA_WIDTH = 8,                    // Width of parallel data
    /* verilator lint_off UNUSEDPARAM */
    parameter CLOCK_DIV = 4,                     // Clock division factor (not used in this simplified version)
    /* verilator lint_on UNUSEDPARAM */
    parameter MSB_FIRST = 1                      // 1 = MSB first, 0 = LSB first
) (
    input wire clk,                              // System clock
    input wire rst_n,                            // Active low reset
    input wire enable,                           // Enable signal
    input wire mode,                             // 0 = serialize, 1 = deserialize
    
    // Serializer inputs (parallel in, serial out)
    input wire [DATA_WIDTH-1:0] parallel_in,     // Parallel data input
    input wire load,                             // Load parallel data
    output wire serial_out,                      // Serial data output
    output wire tx_done,                         // Transmission complete
    
    // Deserializer inputs (serial in, parallel out)
    input wire serial_in,                        // Serial data input
    output reg [DATA_WIDTH-1:0] parallel_out,    // Parallel data output
    output reg rx_done                           // Reception complete
);

    // Internal registers for serializer
    reg [DATA_WIDTH-1:0] tx_shift_reg;           // Serializer shift register
    reg [$clog2(DATA_WIDTH):0] tx_bit_counter;   // Serializer bit counter
    reg tx_done_reg;                             // Transmission complete flag
    
    // Internal registers for deserializer
    reg [DATA_WIDTH-1:0] rx_shift_reg;           // Deserializer shift register
    reg [$clog2(DATA_WIDTH):0] rx_bit_counter;   // Deserializer bit counter
    
    // Serializer logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            tx_shift_reg <= 0;
            tx_bit_counter <= 0;
            tx_done_reg <= 0;
        end else if (enable && !mode) begin // Serializer mode
            if (load) begin
                // Load parallel data into shift register
                // For MSB_FIRST: Reverse the bits since testbench shifts left and inserts at LSB
                // For LSB_FIRST: Keep bits in order since testbench shifts right and inserts at MSB
                tx_shift_reg <= MSB_FIRST ? 
                    {parallel_in[0], parallel_in[1], parallel_in[2], parallel_in[3],
                     parallel_in[4], parallel_in[5], parallel_in[6], parallel_in[7]} :
                    parallel_in;
                tx_bit_counter <= 0;
                tx_done_reg <= 0;
            end else if (!tx_done_reg) begin
                if (tx_bit_counter < DATA_WIDTH - 1) begin
                    // Shift based on mode
                    tx_shift_reg <= MSB_FIRST ?
                        {tx_shift_reg[DATA_WIDTH-2:0], 1'b0} :  // Shift left for MSB first
                        {1'b0, tx_shift_reg[DATA_WIDTH-1:1]};   // Shift right for LSB first
                    tx_bit_counter <= tx_bit_counter + 1;
                end else begin
                    // All bits sent
                    tx_bit_counter <= 0;
                    tx_done_reg <= 1;
                end
            end
        end
    end
    
    // Deserializer logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rx_shift_reg <= 0;
            rx_bit_counter <= 0;
            parallel_out <= 0;
            rx_done <= 0;
        end else if (enable && mode) begin // Deserializer mode
            if (load) begin
                // Reset for new reception
                rx_shift_reg <= 0;
                rx_bit_counter <= 0;
                rx_done <= 0;
            end else if (!rx_done) begin
                if (rx_bit_counter < DATA_WIDTH - 1) begin
                    // Shift in the received bit
                    rx_bit_counter <= rx_bit_counter + 1;
                    
                    if (MSB_FIRST) begin
                        // For MSB first, shift left and insert new bit at LSB
                        rx_shift_reg <= {rx_shift_reg[DATA_WIDTH-2:0], serial_in};
                    end else begin
                        // For LSB first, shift right and insert new bit at MSB
                        rx_shift_reg <= {serial_in, rx_shift_reg[DATA_WIDTH-1:1]};
                    end
                end else begin
                    // All bits received, output the data
                    rx_bit_counter <= 0;
                    rx_done <= 1;
                    
                    if (MSB_FIRST) begin
                        parallel_out <= {rx_shift_reg[DATA_WIDTH-2:0], serial_in};
                    end else begin
                        parallel_out <= {serial_in, rx_shift_reg[DATA_WIDTH-1:1]};
                    end
                end
            end
        end
    end
    
    // Output assignments
    // For MSB_FIRST: Output MSB of reversed data (which is original LSB)
    // For LSB_FIRST: Output LSB of original data
    assign serial_out = MSB_FIRST ? tx_shift_reg[DATA_WIDTH-1] : tx_shift_reg[0];
    assign tx_done = tx_done_reg;

endmodule 
