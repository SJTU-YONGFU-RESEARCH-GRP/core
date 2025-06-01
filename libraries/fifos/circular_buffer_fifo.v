module circular_buffer_fifo #(
    parameter DATA_WIDTH = 8,
    parameter ADDR_WIDTH = 4,  // FIFO depth = 2^ADDR_WIDTH
    parameter ALMOST_FULL_THRESHOLD = 2,
    parameter ALMOST_EMPTY_THRESHOLD = 2
) (
    input  wire                      clk,
    input  wire                      rst_n,
    
    // Write interface
    input  wire                      wr_en,
    input  wire [DATA_WIDTH-1:0]     wr_data,
    output wire                      full,
    output wire                      almost_full,
    
    // Read interface
    input  wire                      rd_en,
    output reg  [DATA_WIDTH-1:0]     rd_data,
    output wire                      empty,
    output wire                      almost_empty,
    
    // Peek interface (read without removing from FIFO)
    input  wire                      peek_en,
    input  wire [ADDR_WIDTH-1:0]     peek_addr, // Relative address from read pointer
    output wire [DATA_WIDTH-1:0]     peek_data,
    
    // Status
    output wire [ADDR_WIDTH:0]       fifo_count
);

    // Memory array
    reg [DATA_WIDTH-1:0] mem [(1<<ADDR_WIDTH)-1:0];
    
    // Pointers
    reg [ADDR_WIDTH:0] wr_ptr;
    reg [ADDR_WIDTH:0] rd_ptr;
    
    // FIFO count
    assign fifo_count = wr_ptr - rd_ptr;
    
    // Status flags
    assign empty = (fifo_count == 0);
    assign full = (fifo_count == (1<<ADDR_WIDTH));
    assign almost_empty = (fifo_count <= ALMOST_EMPTY_THRESHOLD) && !empty;
    assign almost_full = (fifo_count >= ((1<<ADDR_WIDTH) - ALMOST_FULL_THRESHOLD)) && !full;
    
    // Write pointer logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            wr_ptr <= 0;
        end else if (wr_en && !full) begin
            wr_ptr <= wr_ptr + 1;
        end
    end
    
    // Read pointer logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rd_ptr <= 0;
        end else if (rd_en && !empty) begin
            rd_ptr <= rd_ptr + 1;
        end
    end
    
    // Memory write
    always @(posedge clk) begin
        if (wr_en && !full) begin
            mem[wr_ptr[ADDR_WIDTH-1:0]] <= wr_data;
        end
    end
    
    // Memory read
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rd_data <= 0;
        end else if (rd_en && !empty) begin
            rd_data <= mem[rd_ptr[ADDR_WIDTH-1:0]];
        end
    end
    
    // Peek logic
    wire [ADDR_WIDTH-1:0] peek_actual_addr = (rd_ptr[ADDR_WIDTH-1:0] + peek_addr) & ((1<<ADDR_WIDTH)-1);
    wire peek_valid = peek_en && ({1'b0, peek_addr} < fifo_count);
    
    // Peek data
    assign peek_data = peek_valid ? mem[peek_actual_addr] : {DATA_WIDTH{1'b0}};

endmodule 
