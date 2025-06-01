module clock_domain_crossing_fifo #(
    parameter DATA_WIDTH = 32,           // Width of data bus
    parameter ADDR_WIDTH = 4,            // Address width (FIFO depth = 2^ADDR_WIDTH)
    parameter ALMOST_FULL_THRESHOLD = 2, // Almost full threshold
    parameter ALMOST_EMPTY_THRESHOLD = 2 // Almost empty threshold
) (
    // Write domain
    input  wire                  wr_clk,
    input  wire                  wr_rst_n,
    input  wire                  wr_en,
    input  wire [DATA_WIDTH-1:0] wr_data,
    output wire                  wr_full,
    output wire                  wr_almost_full,
    output wire [ADDR_WIDTH:0]   wr_count,
    
    // Read domain
    input  wire                  rd_clk,
    input  wire                  rd_rst_n,
    input  wire                  rd_en,
    output reg  [DATA_WIDTH-1:0] rd_data,
    output wire                  rd_empty,
    output wire                  rd_almost_empty,
    output wire [ADDR_WIDTH:0]   rd_count
);

    // Memory array for data storage
    reg [DATA_WIDTH-1:0] mem [(1<<ADDR_WIDTH)-1:0];
    
    // Write pointer (binary and gray coded)
    reg [ADDR_WIDTH:0] wr_ptr_bin;
    reg [ADDR_WIDTH:0] wr_ptr_gray;
    
    // Read pointer (binary and gray coded)
    reg [ADDR_WIDTH:0] rd_ptr_bin;
    reg [ADDR_WIDTH:0] rd_ptr_gray;
    
    // Synchronized pointers (crossing clock domains)
    reg [ADDR_WIDTH:0] wr_ptr_gray_sync1;
    reg [ADDR_WIDTH:0] wr_ptr_gray_sync2;
    reg [ADDR_WIDTH:0] rd_ptr_gray_sync1;
    reg [ADDR_WIDTH:0] rd_ptr_gray_sync2;
    
    // Binary to gray code conversion
    function [ADDR_WIDTH:0] bin_to_gray(input [ADDR_WIDTH:0] bin);
        bin_to_gray = bin ^ (bin >> 1);
    endfunction
    
    // Gray to binary code conversion
    function [ADDR_WIDTH:0] gray_to_bin(input [ADDR_WIDTH:0] gray);
        integer i;
        reg [ADDR_WIDTH:0] bin;
        begin
            bin = gray;
            for (i = 1; i <= ADDR_WIDTH; i = i + 1) begin
                bin = bin ^ (gray >> i);
            end
            gray_to_bin = bin;
        end
    endfunction
    
    // Write domain logic
    always @(posedge wr_clk or negedge wr_rst_n) begin
        if (!wr_rst_n) begin
            wr_ptr_bin <= 0;
            wr_ptr_gray <= 0;
        end else if (wr_en && !wr_full) begin
            // Store data in memory
            mem[wr_ptr_bin[ADDR_WIDTH-1:0]] <= wr_data;
            
            // Increment write pointer
            wr_ptr_bin <= wr_ptr_bin + 1'b1;
            wr_ptr_gray <= bin_to_gray(wr_ptr_bin + 1'b1);
        end
    end
    
    // Read domain logic
    always @(posedge rd_clk or negedge rd_rst_n) begin
        if (!rd_rst_n) begin
            rd_ptr_bin <= 0;
            rd_ptr_gray <= 0;
            rd_data <= {DATA_WIDTH{1'b0}};
        end else if (rd_en && !rd_empty) begin
            // Read data from memory
            rd_data <= mem[rd_ptr_bin[ADDR_WIDTH-1:0]];
            
            // Increment read pointer
            rd_ptr_bin <= rd_ptr_bin + 1'b1;
            rd_ptr_gray <= bin_to_gray(rd_ptr_bin + 1'b1);
        end
    end
    
    // Synchronize write pointer to read clock domain (2-stage synchronizer)
    always @(posedge rd_clk or negedge rd_rst_n) begin
        if (!rd_rst_n) begin
            wr_ptr_gray_sync1 <= 0;
            wr_ptr_gray_sync2 <= 0;
        end else begin
            wr_ptr_gray_sync1 <= wr_ptr_gray;
            wr_ptr_gray_sync2 <= wr_ptr_gray_sync1;
        end
    end
    
    // Synchronize read pointer to write clock domain (2-stage synchronizer)
    always @(posedge wr_clk or negedge wr_rst_n) begin
        if (!wr_rst_n) begin
            rd_ptr_gray_sync1 <= 0;
            rd_ptr_gray_sync2 <= 0;
        end else begin
            rd_ptr_gray_sync1 <= rd_ptr_gray;
            rd_ptr_gray_sync2 <= rd_ptr_gray_sync1;
        end
    end
    
    // Calculate synchronized binary pointers for status flags
    wire [ADDR_WIDTH:0] wr_ptr_gray_sync_bin = gray_to_bin(wr_ptr_gray_sync2);
    wire [ADDR_WIDTH:0] rd_ptr_gray_sync_bin = gray_to_bin(rd_ptr_gray_sync2);
    
    // FIFO status signals in write domain
    assign wr_full = ((wr_ptr_bin[ADDR_WIDTH] != rd_ptr_gray_sync_bin[ADDR_WIDTH]) &&
                     (wr_ptr_bin[ADDR_WIDTH-1:0] == rd_ptr_gray_sync_bin[ADDR_WIDTH-1:0]));
    assign wr_count = wr_ptr_bin - rd_ptr_gray_sync_bin;
    assign wr_almost_full = (wr_count >= ((1<<ADDR_WIDTH) - ALMOST_FULL_THRESHOLD));
    
    // FIFO status signals in read domain
    assign rd_empty = (rd_ptr_gray == wr_ptr_gray_sync2);
    assign rd_count = wr_ptr_gray_sync_bin - rd_ptr_bin;
    assign rd_almost_empty = (rd_count <= ALMOST_EMPTY_THRESHOLD) && !rd_empty;
    
endmodule 