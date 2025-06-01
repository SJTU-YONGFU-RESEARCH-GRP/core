module configurable_sync_fifo #(
    parameter DATA_WIDTH = 8,                      // Width of data bus
    parameter DEPTH = 16,                          // FIFO depth (must be power of 2)
    parameter ALMOST_FULL_THRESHOLD = 12,          // Almost full threshold
    parameter ALMOST_EMPTY_THRESHOLD = 4           // Almost empty threshold
) (
    input wire clk,                                // Clock
    input wire rst_n,                              // Active low reset
    input wire wr_en,                              // Write enable
    input wire rd_en,                              // Read enable 
    input wire [DATA_WIDTH-1:0] data_in,           // Data input
    output reg [DATA_WIDTH-1:0] data_out,          // Data output
    output wire full,                              // FIFO full flag
    output wire empty,                             // FIFO empty flag
    output wire almost_full,                       // Almost full flag
    output wire almost_empty,                      // Almost empty flag
    output wire [$clog2(DEPTH):0] fill_level       // Current fill level
);

    // Local parameters
    localparam ADDR_WIDTH = $clog2(DEPTH);
    
    // Memory array
    reg [DATA_WIDTH-1:0] memory [0:DEPTH-1];
    
    // Pointers and counter
    reg [ADDR_WIDTH-1:0] wr_ptr;
    reg [ADDR_WIDTH-1:0] rd_ptr;
    reg [ADDR_WIDTH:0] count;
    
    // Flag assignments
    assign empty = (count == 0);
    assign full = (count == DEPTH);
    assign almost_empty = (count <= ALMOST_EMPTY_THRESHOLD);
    assign almost_full = (count >= ALMOST_FULL_THRESHOLD);
    assign fill_level = count;
    
    // Write operation
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            wr_ptr <= 0;
        end else if (wr_en && !full) begin
            memory[wr_ptr] <= data_in;
            wr_ptr <= (wr_ptr == (DEPTH-1)) ? 0 : wr_ptr + 1;
        end
    end
    
    // Read operation - register output data
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rd_ptr <= 0;
            data_out <= 0;
        end else if (rd_en && !empty) begin
            data_out <= memory[rd_ptr];
            rd_ptr <= (rd_ptr == (DEPTH-1)) ? 0 : rd_ptr + 1;
        end
    end
    
    // FIFO count management
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            count <= 0;
        end else begin
            case ({wr_en && !full, rd_en && !empty})
                2'b01: count <= count - 1;    // Read only
                2'b10: count <= count + 1;    // Write only
                2'b11: count <= count;        // Read and write - no change
                default: count <= count;      // No operation
            endcase
        end
    end

endmodule 
