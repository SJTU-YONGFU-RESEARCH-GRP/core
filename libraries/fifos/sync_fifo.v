module sync_fifo #(
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
    output wire [ADDR_WIDTH:0]       wr_count,
    
    // Read interface
    input  wire                      rd_en,
    output wire [DATA_WIDTH-1:0]     rd_data,
    output wire                      empty,
    output wire                      almost_empty,
    output wire [ADDR_WIDTH:0]       rd_count
);

    // Memory array for data storage
    reg [DATA_WIDTH-1:0] mem [(1<<ADDR_WIDTH)-1:0];
    
    // FIFO pointers
    reg [ADDR_WIDTH:0] wr_ptr;
    reg [ADDR_WIDTH:0] rd_ptr;
    
    // Read data output register
    reg [DATA_WIDTH-1:0] rd_data_reg;
    reg rd_valid;
    
    // Calculate FIFO count
    wire [ADDR_WIDTH:0] fifo_count = wr_ptr - rd_ptr;
    
    // Status flags
    assign full = (fifo_count == (1<<ADDR_WIDTH));
    assign empty = (fifo_count == 0);
    assign almost_full = (fifo_count >= ((1<<ADDR_WIDTH) - ALMOST_FULL_THRESHOLD));
    assign almost_empty = (fifo_count <= ALMOST_EMPTY_THRESHOLD);
    
    // Output assignments
    assign wr_count = fifo_count;
    assign rd_count = fifo_count;
    assign rd_data = rd_valid ? rd_data_reg : {DATA_WIDTH{1'b0}};
    
    // Write operation
    always @(posedge clk) begin
        if (wr_en && !full) begin
            mem[wr_ptr[ADDR_WIDTH-1:0]] <= wr_data;
        end
    end
    
    // Write pointer update
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            wr_ptr <= 0;
        end else if (wr_en && !full) begin
            wr_ptr <= wr_ptr + 1'b1;
        end
    end
    
    // Read operation and pointer update
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rd_ptr <= 0;
            rd_data_reg <= {DATA_WIDTH{1'b0}};
            rd_valid <= 1'b0;
        end else begin
            if (rd_en && !empty) begin
                rd_data_reg <= mem[rd_ptr[ADDR_WIDTH-1:0]];
                rd_ptr <= rd_ptr + 1'b1;
                rd_valid <= 1'b1;
            end else begin
                rd_valid <= 1'b0;
            end
        end
    end

endmodule 