module async_fifo #(
    parameter DATA_WIDTH = 8,
    parameter ADDR_WIDTH = 4,  // FIFO depth = 2^ADDR_WIDTH
    parameter ALMOST_FULL_THRESHOLD = 2,
    parameter ALMOST_EMPTY_THRESHOLD = 2
) (
    // Write domain
    input  wire                      wr_clk,
    input  wire                      wr_rst_n,
    input  wire                      wr_en,
    input  wire [DATA_WIDTH-1:0]     wr_data,
    output wire                      full,
    output wire                      almost_full,
    output wire [ADDR_WIDTH:0]       wr_count,
    
    // Read domain
    input  wire                      rd_clk,
    input  wire                      rd_rst_n,
    input  wire                      rd_en,
    output wire [DATA_WIDTH-1:0]     rd_data,
    output wire                      empty,
    output wire                      almost_empty,
    output wire [ADDR_WIDTH:0]       rd_count
);

    // Memory array for data storage
    reg [DATA_WIDTH-1:0] mem [(1<<ADDR_WIDTH)-1:0];
    
    // Write pointer (binary and gray-coded)
    reg [ADDR_WIDTH:0] wr_ptr_bin;
    reg [ADDR_WIDTH:0] wr_ptr_gray;
    
    // Read pointer (binary and gray-coded)
    reg [ADDR_WIDTH:0] rd_ptr_bin;
    reg [ADDR_WIDTH:0] rd_ptr_gray;
    
    // Synchronization registers for crossing clock domains
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
    
    // Write pointer logic
    always @(posedge wr_clk or negedge wr_rst_n) begin
        if (!wr_rst_n) begin
            wr_ptr_bin <= 0;
            wr_ptr_gray <= 0;
        end else if (wr_en && !full) begin
            wr_ptr_bin <= wr_ptr_bin + 1'b1;
            wr_ptr_gray <= bin_to_gray(wr_ptr_bin + 1'b1);
        end
    end
    
    // Read pointer logic
    always @(posedge rd_clk or negedge rd_rst_n) begin
        if (!rd_rst_n) begin
            rd_ptr_bin <= 0;
            rd_ptr_gray <= 0;
        end else if (rd_en && !empty) begin
            rd_ptr_bin <= rd_ptr_bin + 1'b1;
            rd_ptr_gray <= bin_to_gray(rd_ptr_bin + 1'b1);
        end
    end
    
    // Synchronize write pointer to read clock domain
    always @(posedge rd_clk or negedge rd_rst_n) begin
        if (!rd_rst_n) begin
            wr_ptr_gray_sync1 <= 0;
            wr_ptr_gray_sync2 <= 0;
        end else begin
            wr_ptr_gray_sync1 <= wr_ptr_gray;
            wr_ptr_gray_sync2 <= wr_ptr_gray_sync1;
        end
    end
    
    // Synchronize read pointer to write clock domain
    always @(posedge wr_clk or negedge wr_rst_n) begin
        if (!wr_rst_n) begin
            rd_ptr_gray_sync1 <= 0;
            rd_ptr_gray_sync2 <= 0;
        end else begin
            rd_ptr_gray_sync1 <= rd_ptr_gray;
            rd_ptr_gray_sync2 <= rd_ptr_gray_sync1;
        end
    end
    
    // Memory write operation
    always @(posedge wr_clk) begin
        if (wr_en && !full) begin
            mem[wr_ptr_bin[ADDR_WIDTH-1:0]] <= wr_data;
        end
    end
    
    // Convert synchronized gray pointers to binary for comparison
    wire [ADDR_WIDTH:0] wr_ptr_sync_bin = gray_to_bin(wr_ptr_gray_sync2);
    wire [ADDR_WIDTH:0] rd_ptr_sync_bin = gray_to_bin(rd_ptr_gray_sync2);
    
    // Calculate FIFO counts
    wire [ADDR_WIDTH:0] wr_count_val = wr_ptr_bin - rd_ptr_sync_bin;
    wire [ADDR_WIDTH:0] rd_count_val = wr_ptr_sync_bin - rd_ptr_bin;
    
    // FIFO status signals
    assign full = (wr_ptr_bin[ADDR_WIDTH-1:0] == rd_ptr_sync_bin[ADDR_WIDTH-1:0]) &&
                 (wr_ptr_bin[ADDR_WIDTH] != rd_ptr_sync_bin[ADDR_WIDTH]);
                 
    assign empty = (rd_ptr_bin == wr_ptr_sync_bin);
    
    // Almost full/empty flags with hysteresis
    reg almost_full_reg, almost_empty_reg;
    
    always @(posedge wr_clk or negedge wr_rst_n) begin
        if (!wr_rst_n) begin
            almost_full_reg <= 0;
        end else begin
            if (wr_count_val >= ((1<<ADDR_WIDTH) - ALMOST_FULL_THRESHOLD)) begin
                almost_full_reg <= 1;
            end else if (wr_count_val < ((1<<ADDR_WIDTH) - ALMOST_FULL_THRESHOLD - 1)) begin
                almost_full_reg <= 0;
            end
        end
    end
    
    always @(posedge rd_clk or negedge rd_rst_n) begin
        if (!rd_rst_n) begin
            almost_empty_reg <= 1;
        end else begin
            if (rd_count_val <= ALMOST_EMPTY_THRESHOLD) begin
                almost_empty_reg <= 1;
            end else if (rd_count_val > ALMOST_EMPTY_THRESHOLD + 1) begin
                almost_empty_reg <= 0;
            end
        end
    end
    
    // Output assignments
    assign almost_full = almost_full_reg;
    assign almost_empty = almost_empty_reg;
    assign wr_count = wr_count_val;
    assign rd_count = rd_count_val;
    
    // Read data output
    reg [DATA_WIDTH-1:0] rd_data_reg;
    always @(posedge rd_clk or negedge rd_rst_n) begin
        if (!rd_rst_n) begin
            rd_data_reg <= {DATA_WIDTH{1'b0}};
        end else if (rd_en && !empty) begin
            rd_data_reg <= mem[rd_ptr_bin[ADDR_WIDTH-1:0]];
        end
    end
    
    assign rd_data = rd_data_reg;

endmodule