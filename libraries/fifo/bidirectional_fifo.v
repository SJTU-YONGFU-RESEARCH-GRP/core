module bidirectional_fifo #(
    parameter DATA_WIDTH = 8,
    parameter ADDR_WIDTH = 4,  // FIFO depth = 2^ADDR_WIDTH
    parameter ALMOST_FULL_THRESHOLD = 2,
    parameter ALMOST_EMPTY_THRESHOLD = 2
) (
    input  wire                      clk,
    input  wire                      rst_n,
    
    // Port A interface
    input  wire                      a_wr_en,
    input  wire [DATA_WIDTH-1:0]     a_wr_data,
    output wire                      a_full,
    output wire                      a_almost_full,
    input  wire                      a_rd_en,
    output wire [DATA_WIDTH-1:0]     a_rd_data,
    output wire                      a_empty,
    output wire                      a_almost_empty,
    
    // Port B interface
    input  wire                      b_wr_en,
    input  wire [DATA_WIDTH-1:0]     b_wr_data,
    output wire                      b_full,
    output wire                      b_almost_full,
    input  wire                      b_rd_en,
    output wire [DATA_WIDTH-1:0]     b_rd_data,
    output wire                      b_empty,
    output wire                      b_almost_empty,
    
    // Status
    output wire [ADDR_WIDTH:0]       a_to_b_count,  // Data count from A to B
    output wire [ADDR_WIDTH:0]       b_to_a_count   // Data count from B to A
);

    // Memory arrays for bidirectional data flow
    reg [DATA_WIDTH-1:0] a_to_b_mem [(1<<ADDR_WIDTH)-1:0];  // A to B direction
    reg [DATA_WIDTH-1:0] b_to_a_mem [(1<<ADDR_WIDTH)-1:0];  // B to A direction
    
    // Pointers for A to B direction
    reg [ADDR_WIDTH:0] a_wr_ptr;  // Write pointer for A
    reg [ADDR_WIDTH:0] b_rd_ptr;  // Read pointer for B
    
    // Pointers for B to A direction
    reg [ADDR_WIDTH:0] b_wr_ptr;  // Write pointer for B
    reg [ADDR_WIDTH:0] a_rd_ptr;  // Read pointer for A
    
    // Register outputs
    reg [DATA_WIDTH-1:0] a_rd_data_reg;
    reg [DATA_WIDTH-1:0] b_rd_data_reg;
    
    // FIFO counts
    assign a_to_b_count = a_wr_ptr - b_rd_ptr;
    assign b_to_a_count = b_wr_ptr - a_rd_ptr;
    
    // Status flags for A port
    assign a_full = (b_to_a_count == (1<<ADDR_WIDTH));
    assign a_empty = (b_to_a_count == 0);
    assign a_almost_full = (b_to_a_count >= ((1<<ADDR_WIDTH) - ALMOST_FULL_THRESHOLD));
    assign a_almost_empty = (b_to_a_count <= ALMOST_EMPTY_THRESHOLD) && !a_empty;
    
    // Status flags for B port
    assign b_full = (a_to_b_count == (1<<ADDR_WIDTH));
    assign b_empty = (a_to_b_count == 0);
    assign b_almost_full = (a_to_b_count >= ((1<<ADDR_WIDTH) - ALMOST_FULL_THRESHOLD));
    assign b_almost_empty = (a_to_b_count <= ALMOST_EMPTY_THRESHOLD) && !b_empty;
    
    // A port write pointer logic (for A to B direction)
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            a_wr_ptr <= 0;
        end else if (a_wr_en && !b_full) begin
            a_wr_ptr <= a_wr_ptr + 1;
        end
    end
    
    // B port read pointer logic (for A to B direction)
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            b_rd_ptr <= 0;
        end else if (b_rd_en && !b_empty) begin
            b_rd_ptr <= b_rd_ptr + 1;
        end
    end
    
    // B port write pointer logic (for B to A direction)
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            b_wr_ptr <= 0;
        end else if (b_wr_en && !a_full) begin
            b_wr_ptr <= b_wr_ptr + 1;
        end
    end
    
    // A port read pointer logic (for B to A direction)
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            a_rd_ptr <= 0;
        end else if (a_rd_en && !a_empty) begin
            a_rd_ptr <= a_rd_ptr + 1;
        end
    end
    
    // Memory write for A to B direction
    always @(posedge clk) begin
        if (a_wr_en && !b_full) begin
            a_to_b_mem[a_wr_ptr[ADDR_WIDTH-1:0]] <= a_wr_data;
        end
    end
    
    // Memory write for B to A direction
    always @(posedge clk) begin
        if (b_wr_en && !a_full) begin
            b_to_a_mem[b_wr_ptr[ADDR_WIDTH-1:0]] <= b_wr_data;
        end
    end
    
    // Memory read for A port (B to A direction)
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            a_rd_data_reg <= {DATA_WIDTH{1'b0}};
        end else if (a_rd_en && !a_empty) begin
            a_rd_data_reg <= b_to_a_mem[a_rd_ptr[ADDR_WIDTH-1:0]];
        end
    end
    
    // Memory read for B port (A to B direction)
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            b_rd_data_reg <= {DATA_WIDTH{1'b0}};
        end else if (b_rd_en && !b_empty) begin
            b_rd_data_reg <= a_to_b_mem[b_rd_ptr[ADDR_WIDTH-1:0]];
        end
    end
    
    // Output assignments
    assign a_rd_data = a_rd_data_reg;
    assign b_rd_data = b_rd_data_reg;

endmodule
