module elastic_buffer #(
    parameter DATA_WIDTH = 8,
    parameter DEPTH = 4,        // Must be a power of 2
    parameter ALMOST_FULL_THRESHOLD = 2,
    parameter ALMOST_EMPTY_THRESHOLD = 2
) (
    // Write domain
    input  wire                      wr_clk,
    input  wire                      wr_rst_n,
    input  wire                      wr_en,
    input  wire [DATA_WIDTH-1:0]     wr_data,
    output wire                      wr_full,
    output wire                      wr_almost_full,
    output wire [$clog2(DEPTH+1)-1:0] wr_count,
    
    // Read domain
    input  wire                      rd_clk,
    input  wire                      rd_rst_n,
    input  wire                      rd_en,
    output wire [DATA_WIDTH-1:0]     rd_data,
    output wire                      rd_empty,
    output wire                      rd_almost_empty,
    output wire [$clog2(DEPTH+1)-1:0] rd_count
);

    // Local parameters
    localparam ADDR_WIDTH = $clog2(DEPTH);
    
    // Memory array
    reg [DATA_WIDTH-1:0] mem [0:DEPTH-1];
    
    // Write domain registers
    reg [ADDR_WIDTH:0] wr_ptr_bin;
    reg [ADDR_WIDTH:0] wr_ptr_gray;
    reg [ADDR_WIDTH:0] rd_ptr_gray_sync1;
    reg [ADDR_WIDTH:0] rd_ptr_gray_sync2;
    
    // Read domain registers
    reg [ADDR_WIDTH:0] rd_ptr_bin;
    reg [ADDR_WIDTH:0] rd_ptr_gray;
    reg [ADDR_WIDTH:0] wr_ptr_gray_sync1;
    reg [ADDR_WIDTH:0] wr_ptr_gray_sync2;
    reg [DATA_WIDTH-1:0] rd_data_reg;
    
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
    
    // Write pointer logic
    always @(posedge wr_clk or negedge wr_rst_n) begin
        if (!wr_rst_n) begin
            wr_ptr_bin <= 0;
            wr_ptr_gray <= 0;
        end else if (wr_en && !wr_full) begin
            wr_ptr_bin <= wr_ptr_bin + 1'b1;
            wr_ptr_gray <= bin_to_gray(wr_ptr_bin + 1'b1);
        end
    end
    
    // Read pointer logic
    always @(posedge rd_clk or negedge rd_rst_n) begin
        if (!rd_rst_n) begin
            rd_ptr_bin <= 0;
            rd_ptr_gray <= 0;
        end else if (rd_en && !rd_empty) begin
            rd_ptr_bin <= rd_ptr_bin + 1'b1;
            rd_ptr_gray <= bin_to_gray(rd_ptr_bin + 1'b1);
        end
    end
    
    // Memory write
    always @(posedge wr_clk) begin
        if (wr_en && !wr_full) begin
            mem[wr_ptr_bin[ADDR_WIDTH-1:0]] <= wr_data;
        end
    end
    
    // Memory read
    always @(posedge rd_clk or negedge rd_rst_n) begin
        if (!rd_rst_n) begin
            rd_data_reg <= {DATA_WIDTH{1'b0}};
        end else if (rd_en && !rd_empty) begin
            rd_data_reg <= mem[rd_ptr_bin[ADDR_WIDTH-1:0]];
        end
    end
    
    // Convert synchronized gray pointers to binary for flag generation
    wire [ADDR_WIDTH:0] wr_ptr_bin_sync = gray_to_bin(wr_ptr_gray_sync2);
    wire [ADDR_WIDTH:0] rd_ptr_bin_sync = gray_to_bin(rd_ptr_gray_sync2);
    
    // Write domain status signals
    wire [ADDR_WIDTH:0] wr_count_internal = wr_ptr_bin - rd_ptr_bin_sync;
    assign wr_count = wr_count_internal[$clog2(DEPTH+1)-1:0];
    assign wr_full = (wr_ptr_gray[ADDR_WIDTH] != rd_ptr_gray_sync2[ADDR_WIDTH]) &&
                     (wr_ptr_gray[ADDR_WIDTH-1:0] == rd_ptr_gray_sync2[ADDR_WIDTH-1:0]);
    assign wr_almost_full = (wr_count_internal >= (DEPTH - ALMOST_FULL_THRESHOLD));
    
    // Read domain status signals
    wire [ADDR_WIDTH:0] rd_count_internal = wr_ptr_bin_sync - rd_ptr_bin;
    assign rd_count = rd_count_internal[$clog2(DEPTH+1)-1:0];
    assign rd_empty = (rd_ptr_gray == wr_ptr_gray_sync2);
    assign rd_almost_empty = (rd_count_internal <= ALMOST_EMPTY_THRESHOLD);
    assign rd_data = rd_data_reg;
    
    // Elastic buffering rate control logic
    // This is the key feature of an elastic buffer - it can adapt to different rates
    // between producer and consumer by monitoring fill levels and providing
    // status signals that can be used for flow control
    
    // Additional signals could be added here for more sophisticated rate control,
    // such as dynamic throttling based on buffer occupancy

endmodule 
