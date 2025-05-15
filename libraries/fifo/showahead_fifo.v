module showahead_fifo #(
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
    
    // Read interface (showahead style)
    input  wire                      rd_en,      // Dequeue data
    input  wire                      peek_en,    // Peek without dequeuing
    output wire [DATA_WIDTH-1:0]     rd_data,    // Current head of FIFO
    output wire                      valid,      // Data valid flag
    output wire                      empty,
    output wire                      almost_empty,
    
    // Status
    output wire [ADDR_WIDTH:0]       data_count
);

    // Memory array for data storage
    reg [DATA_WIDTH-1:0] mem [(1<<ADDR_WIDTH)-1:0];
    
    // Pointers
    reg [ADDR_WIDTH:0] wr_ptr;       // Write pointer
    reg [ADDR_WIDTH:0] rd_ptr;       // Read pointer
    
    // FIFO count and status
    assign data_count = wr_ptr - rd_ptr;
    assign empty = (data_count == 0);
    assign full = (data_count == (1<<ADDR_WIDTH));
    assign almost_full = (data_count >= ((1<<ADDR_WIDTH) - ALMOST_FULL_THRESHOLD));
    assign almost_empty = (data_count <= ALMOST_EMPTY_THRESHOLD) && !empty;
    assign valid = !empty;  // Data is valid when FIFO is not empty
    
    // Write pointer logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            wr_ptr <= 0;
        end else if (wr_en && !full) begin
            wr_ptr <= wr_ptr + 1'b1;
        end
    end
    
    // Read pointer logic - only advance on rd_en, not on peek_en
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rd_ptr <= 0;
        end else if (rd_en && !empty) begin
            rd_ptr <= rd_ptr + 1'b1;
        end
    end
    
    // Memory write operation
    always @(posedge clk) begin
        if (wr_en && !full) begin
            mem[wr_ptr[ADDR_WIDTH-1:0]] <= wr_data;
        end
    end
    
    // Show-ahead read data output - continuously display current value
    assign rd_data = empty ? {DATA_WIDTH{1'b0}} : mem[rd_ptr[ADDR_WIDTH-1:0]];
    
endmodule 