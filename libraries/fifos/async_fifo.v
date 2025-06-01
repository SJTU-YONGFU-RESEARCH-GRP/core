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
    output wire [ADDR_WIDTH:0]       rd_count,
    
    // Add debug and error detection signals
    output wire sync_error_flag,
    output wire pointer_wraparound_flag
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
    reg [ADDR_WIDTH:0] wr_ptr_gray_sync1, wr_ptr_gray_sync2;
    reg [ADDR_WIDTH:0] rd_ptr_gray_sync1, rd_ptr_gray_sync2;
    
    // Binary to gray code conversion function
    function [ADDR_WIDTH:0] bin_to_gray(input [ADDR_WIDTH:0] bin);
        /* verilator lint_off BLKSEQ */
        begin
            bin_to_gray = bin ^ (bin >> 1);
        end
        /* verilator lint_on BLKSEQ */
    endfunction
    
    // Gray to binary code conversion function
    function [ADDR_WIDTH:0] gray_to_bin(input [ADDR_WIDTH:0] gray);
        /* verilator lint_off BLKSEQ */
        reg [ADDR_WIDTH:0] bin;
        integer i;
        begin
            bin = gray;
            for (i = ADDR_WIDTH; i > 0; i = i - 1) begin
                bin[i-1] = bin[i-1] ^ bin[i];
            end
            gray_to_bin = bin;
        end
        /* verilator lint_on BLKSEQ */
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
    reg [ADDR_WIDTH:0] wr_ptr_sync;
    always @(posedge rd_clk or negedge rd_rst_n) begin
        if (!rd_rst_n) begin
            wr_ptr_gray_sync1 <= 0;
            wr_ptr_gray_sync2 <= 0;
            wr_ptr_sync <= 0;
        end else begin
            wr_ptr_gray_sync1 <= wr_ptr_gray;
            wr_ptr_gray_sync2 <= wr_ptr_gray_sync1;
            wr_ptr_sync <= gray_to_bin(wr_ptr_gray_sync2);
        end
    end
    
    // Synchronize read pointer to write clock domain
    reg [ADDR_WIDTH:0] rd_ptr_sync;
    always @(posedge wr_clk or negedge wr_rst_n) begin
        if (!wr_rst_n) begin
            rd_ptr_gray_sync1 <= 0;
            rd_ptr_gray_sync2 <= 0;
            rd_ptr_sync <= 0;
        end else begin
            rd_ptr_gray_sync1 <= rd_ptr_gray;
            rd_ptr_gray_sync2 <= rd_ptr_gray_sync1;
            rd_ptr_sync <= gray_to_bin(rd_ptr_gray_sync2);
        end
    end
    
    // Improved FIFO status signals
    wire full_condition = (wr_ptr_bin[ADDR_WIDTH-1:0] == rd_ptr_sync[ADDR_WIDTH-1:0]) &&
                          (wr_ptr_bin[ADDR_WIDTH] != rd_ptr_sync[ADDR_WIDTH]);
    
    wire empty_condition = (rd_ptr_bin == wr_ptr_sync);
    
    // More robust pointer wraparound error detection
    always @(posedge wr_clk or negedge wr_rst_n) begin
        if (!wr_rst_n) begin
            pointer_wraparound_error <= 0;
        end else begin
            // Detect unexpected pointer behavior with more precise conditions
            pointer_wraparound_error <= 
                (wr_ptr_bin[ADDR_WIDTH] != wr_ptr_bin[ADDR_WIDTH-1]) && 
                (wr_ptr_bin[ADDR_WIDTH-1:0] == {ADDR_WIDTH{1'b0}}) &&
                // Additional check to ensure it's a true wraparound
                (rd_ptr_sync[ADDR_WIDTH-1:0] != {ADDR_WIDTH{1'b0}});
        end
    end
    
    // Registered status signals with more stable logic
    reg full_reg, empty_reg;
    always @(posedge wr_clk or negedge wr_rst_n) begin
        if (!wr_rst_n) begin
            full_reg <= 0;
        end else begin
            // More conservative full condition
            full_reg <= (wr_ptr_bin[ADDR_WIDTH-1:0] == rd_ptr_sync[ADDR_WIDTH-1:0]) &&
                        (wr_ptr_bin[ADDR_WIDTH] != rd_ptr_sync[ADDR_WIDTH]);
        end
    end
    
    always @(posedge rd_clk or negedge rd_rst_n) begin
        if (!rd_rst_n) begin
            empty_reg <= 1;
        end else begin
            // More conservative empty condition
            empty_reg <= (rd_ptr_bin == wr_ptr_sync);
        end
    end
    
    // FIFO counts with improved wraparound handling and safety
    wire [ADDR_WIDTH:0] wr_count_val = (wr_ptr_bin >= rd_ptr_sync) ? 
                                       (wr_ptr_bin - rd_ptr_sync) : 
                                       ((1 << (ADDR_WIDTH+1)) - rd_ptr_sync + wr_ptr_bin);
    
    wire [ADDR_WIDTH:0] rd_count_val = (wr_ptr_sync >= rd_ptr_bin) ? 
                                       (wr_ptr_sync - rd_ptr_bin) : 
                                       ((1 << (ADDR_WIDTH+1)) - rd_ptr_bin + wr_ptr_sync);
    
    // Memory write operation with additional safety
    always @(posedge wr_clk) begin
        if (wr_en && !full_reg) begin
            mem[wr_ptr_bin[ADDR_WIDTH-1:0]] <= wr_data;
        end
    end
    
    // FIFO status signals
    assign full = full_reg;
    assign empty = empty_reg;
    assign almost_full = (wr_count_val >= ((1<<ADDR_WIDTH) - ALMOST_FULL_THRESHOLD));
    assign almost_empty = (rd_count_val <= ALMOST_EMPTY_THRESHOLD);
    assign wr_count = wr_count_val;
    assign rd_count = rd_count_val;
    
    // Read data output with additional safety
    reg [DATA_WIDTH-1:0] rd_data_reg;
    always @(posedge rd_clk or negedge rd_rst_n) begin
        if (!rd_rst_n) begin
            rd_data_reg <= {DATA_WIDTH{1'b0}};
        end else if (rd_en && !empty) begin
            rd_data_reg <= mem[rd_ptr_bin[ADDR_WIDTH-1:0]];
        end
    end
    
    assign rd_data = rd_data_reg;

    // Add debug and error detection signals
    reg sync_error;
    reg pointer_wraparound_error;
    
    // Enhanced synchronization error detection
    always @(posedge rd_clk or negedge rd_rst_n) begin
        if (!rd_rst_n) begin
            sync_error <= 0;
        end else begin
            // Check for potential synchronization issues
            sync_error <= (wr_ptr_gray_sync1 === 'x) || (wr_ptr_gray_sync2 === 'x);
        end
    end
    
    // Expose error signals
    assign sync_error_flag = sync_error;
    assign pointer_wraparound_flag = pointer_wraparound_error;

endmodule