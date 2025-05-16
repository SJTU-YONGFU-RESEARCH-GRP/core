module dual_clock_fifo #(
    parameter DATA_WIDTH = 8,
    parameter ADDR_WIDTH = 4,
    parameter ALMOST_FULL_THRESHOLD = 12,
    parameter ALMOST_EMPTY_THRESHOLD = 4
)(
    // Write domain
    input wire                      wr_clk,
    input wire                      wr_rst_n,
    input wire                      wr_en,
    input wire [DATA_WIDTH-1:0]     wr_data,
    output wire                     full,
    output wire                     almost_full,
    
    // Read domain
    input wire                      rd_clk,
    input wire                      rd_rst_n,
    input wire                      rd_en,
    output wire [DATA_WIDTH-1:0]    rd_data,
    output wire                     empty,
    output wire                     almost_empty,
    
    // Status (synchronous to read clock)
    output wire [ADDR_WIDTH:0]      fifo_count
);

    // Memory array
    reg [DATA_WIDTH-1:0] mem [(1<<ADDR_WIDTH)-1:0];
    
    // Pointers
    reg [ADDR_WIDTH:0] wr_ptr_bin, rd_ptr_bin;
    reg [ADDR_WIDTH:0] wr_ptr_gray, rd_ptr_gray;
    reg [ADDR_WIDTH:0] wr_ptr_gray_rd_sync1, wr_ptr_gray_rd_sync2;
    reg [ADDR_WIDTH:0] rd_ptr_gray_wr_sync1, rd_ptr_gray_wr_sync2;
    
    // Binary to Gray code conversion
    function [ADDR_WIDTH:0] bin_to_gray(input [ADDR_WIDTH:0] bin);
        bin_to_gray = bin ^ (bin >> 1);
    endfunction
    
    // Gray to Binary code conversion
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
    
    // Synchronize write pointer to read clock domain
    always @(posedge rd_clk or negedge rd_rst_n) begin
        if (!rd_rst_n) begin
            wr_ptr_gray_rd_sync1 <= {(ADDR_WIDTH+1){1'b0}};
            wr_ptr_gray_rd_sync2 <= {(ADDR_WIDTH+1){1'b0}};
        end else begin
            wr_ptr_gray_rd_sync1 <= wr_ptr_gray;
            wr_ptr_gray_rd_sync2 <= wr_ptr_gray_rd_sync1;
        end
    end
    
    // Synchronize read pointer to write clock domain
    always @(posedge wr_clk or negedge wr_rst_n) begin
        if (!wr_rst_n) begin
            rd_ptr_gray_wr_sync1 <= {(ADDR_WIDTH+1){1'b0}};
            rd_ptr_gray_wr_sync2 <= {(ADDR_WIDTH+1){1'b0}};
        end else begin
            rd_ptr_gray_wr_sync1 <= rd_ptr_gray;
            rd_ptr_gray_wr_sync2 <= rd_ptr_gray_wr_sync1;
        end
    end
    
    // Write pointer logic
    always @(posedge wr_clk or negedge wr_rst_n) begin
        if (!wr_rst_n) begin
            wr_ptr_bin <= {(ADDR_WIDTH+1){1'b0}};
            wr_ptr_gray <= {(ADDR_WIDTH+1){1'b0}};
        end else if (wr_en && !full) begin
            wr_ptr_bin <= wr_ptr_bin + 1'b1;
            wr_ptr_gray <= bin_to_gray(wr_ptr_bin + 1'b1);
        end
    end
    
    // Read pointer logic
    always @(posedge rd_clk or negedge rd_rst_n) begin
        if (!rd_rst_n) begin
            rd_ptr_bin <= {(ADDR_WIDTH+1){1'b0}};
            rd_ptr_gray <= {(ADDR_WIDTH+1){1'b0}};
        end else if (rd_en && !empty) begin
            rd_ptr_bin <= rd_ptr_bin + 1'b1;
            rd_ptr_gray <= bin_to_gray(rd_ptr_bin + 1'b1);
        end
    end
    
    // Memory write
    always @(posedge wr_clk) begin
        if (wr_en && !full) begin
            mem[wr_ptr_bin[ADDR_WIDTH-1:0]] <= wr_data;
        end
    end
    
    // Memory read
    reg [DATA_WIDTH-1:0] rd_data_reg;
    always @(posedge rd_clk) begin
        if (rd_en && !empty) begin
            rd_data_reg <= mem[rd_ptr_bin[ADDR_WIDTH-1:0]];
        end
    end
    
    // Convert synchronized gray pointers to binary for flag generation
    wire [ADDR_WIDTH:0] wr_ptr_bin_rd_sync;
    wire [ADDR_WIDTH:0] rd_ptr_bin_wr_sync;
    assign wr_ptr_bin_rd_sync = gray_to_bin(wr_ptr_gray_rd_sync2);
    assign rd_ptr_bin_wr_sync = gray_to_bin(rd_ptr_gray_wr_sync2);
    
    // Calculate FIFO count (in read clock domain)
    assign fifo_count = wr_ptr_bin_rd_sync - rd_ptr_bin;
    
    // Generate flags
    assign empty = (rd_ptr_gray == wr_ptr_gray_rd_sync2);
    assign almost_empty = empty || (fifo_count <= ALMOST_EMPTY_THRESHOLD);
    
    wire [ADDR_WIDTH:0] wr_count = wr_ptr_bin - rd_ptr_bin_wr_sync;
    assign full = (wr_ptr_gray[ADDR_WIDTH] != rd_ptr_gray_wr_sync2[ADDR_WIDTH]) &&
                 (wr_ptr_gray[ADDR_WIDTH-1:0] == rd_ptr_gray_wr_sync2[ADDR_WIDTH-1:0]);
    assign almost_full = full || (wr_count >= ((1<<ADDR_WIDTH) - ALMOST_FULL_THRESHOLD));
    
    // Output data
    assign rd_data = rd_data_reg;

endmodule 
