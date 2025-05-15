module fwft_fifo #(
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
    
    // Read interface (FWFT style)
    input  wire                      rd_en,
    output wire [DATA_WIDTH-1:0]     rd_data,
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
    
    // FWFT output registers
    reg [DATA_WIDTH-1:0] output_reg;  // First word register
    reg                  output_valid; // First word valid flag
    
    // Status signals
    wire fifo_empty = (wr_ptr == rd_ptr);
    wire next_empty = (wr_ptr == rd_ptr + 1'b1) && rd_en && !fifo_empty;
    wire raw_empty;  // Standard FIFO empty flag
    
    // FIFO count
    assign data_count = wr_ptr - rd_ptr;
    
    // Status flags
    assign raw_empty = (data_count == 0);
    assign full = (data_count == (1<<ADDR_WIDTH));
    assign almost_full = (data_count >= ((1<<ADDR_WIDTH) - ALMOST_FULL_THRESHOLD));
    assign almost_empty = (data_count <= ALMOST_EMPTY_THRESHOLD) && !raw_empty;
    
    // FWFT empty signal - empty only when output register is invalid
    assign empty = !output_valid;
    
    // Write pointer logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            wr_ptr <= 0;
        end else if (wr_en && !full) begin
            wr_ptr <= wr_ptr + 1'b1;
        end
    end
    
    // Read pointer logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rd_ptr <= 0;
        end else if (rd_en && !raw_empty) begin
            rd_ptr <= rd_ptr + 1'b1;
        end
    end
    
    // Memory write operation
    always @(posedge clk) begin
        if (wr_en && !full) begin
            mem[wr_ptr[ADDR_WIDTH-1:0]] <= wr_data;
        end
    end
    
    // FWFT output register logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            output_valid <= 1'b0;
            output_reg <= {DATA_WIDTH{1'b0}};
        end else begin
            // Case 1: When reading and output register is valid, need to fetch next data
            if (rd_en && output_valid) begin
                if (!raw_empty) begin
                    // If FIFO not empty, fetch next data
                    output_reg <= mem[rd_ptr[ADDR_WIDTH-1:0]];
                    output_valid <= 1'b1;
                end else begin
                    // If FIFO empty, invalidate output register
                    output_valid <= 1'b0;
                end
            end
            // Case 2: When output register is invalid and FIFO is not empty
            else if (!output_valid && !raw_empty) begin
                output_reg <= mem[rd_ptr[ADDR_WIDTH-1:0]];
                output_valid <= 1'b1;
                rd_ptr <= rd_ptr + 1'b1; // Advance read pointer
            end
        end
    end
    
    // Read data output
    assign rd_data = output_reg;
    
endmodule 