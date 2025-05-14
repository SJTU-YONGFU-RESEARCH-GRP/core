module configurable_param_fifo #(
    parameter DATA_WIDTH = 8,              // Width of data bus
    parameter FIFO_DEPTH = 16,             // Depth of FIFO
    parameter ADDR_WIDTH = $clog2(FIFO_DEPTH),  // Address width derived from depth
    parameter ALMOST_FULL_THRESHOLD = FIFO_DEPTH - 2,  // Threshold for almost full flag
    parameter ALMOST_EMPTY_THRESHOLD = 2,  // Threshold for almost empty flag
    parameter ENABLE_ALMOST_FLAGS = 1      // Enable/disable almost full/empty flags
)(
    input wire clk,                        // Clock input
    input wire rst_n,                      // Active low reset
    input wire wr_en,                      // Write enable
    input wire rd_en,                      // Read enable
    input wire [DATA_WIDTH-1:0] wr_data,   // Write data
    
    output reg [DATA_WIDTH-1:0] rd_data,   // Read data
    output reg empty,                      // FIFO empty flag
    output reg full,                       // FIFO full flag
    output reg almost_empty,               // Almost empty flag (optional)
    output reg almost_full                 // Almost full flag (optional)
);

    // Internal registers for FIFO storage
    reg [DATA_WIDTH-1:0] mem [0:FIFO_DEPTH-1];
    reg [ADDR_WIDTH:0] wr_ptr;             // Extra bit for full/empty detection
    reg [ADDR_WIDTH:0] rd_ptr;             // Extra bit for full/empty detection
    
    // Calculate pointers for internal memory access
    wire [ADDR_WIDTH-1:0] wr_addr = wr_ptr[ADDR_WIDTH-1:0];
    wire [ADDR_WIDTH-1:0] rd_addr = rd_ptr[ADDR_WIDTH-1:0];
    
    // Calculate current fill level
    wire [ADDR_WIDTH:0] fifo_count = wr_ptr - rd_ptr;
    
    // Update empty, full flags
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            empty <= 1'b1;
            full <= 1'b0;
        end else begin
            // Update empty flag - will be empty after the last read
            if ((rd_en && !empty) && (fifo_count == 1)) begin
                empty <= 1'b1;
            end else if (wr_en && empty) begin
                empty <= 1'b0;
            end
            
            // Update full flag - will be full after a write when count is one less than full
            if ((wr_en && !full) && (fifo_count == FIFO_DEPTH-1)) begin
                full <= 1'b1;
            end else if (rd_en && full) begin
                full <= 1'b0;
            end
        end
    end
    
    // Update almost_empty and almost_full flags (if enabled)
    generate
        if (ENABLE_ALMOST_FLAGS) begin : gen_almost_flags
            always @(posedge clk or negedge rst_n) begin
                if (!rst_n) begin
                    almost_empty <= 1'b1;
                    almost_full <= 1'b0;
                end else begin
                    // Update after read/write operations
                    if (wr_en && !full && !rd_en)
                        almost_empty <= (fifo_count + 1'b1) <= ALMOST_EMPTY_THRESHOLD;
                    else if (rd_en && !empty && !wr_en)
                        almost_empty <= (fifo_count - 1'b1) <= ALMOST_EMPTY_THRESHOLD;
                    else
                        almost_empty <= fifo_count <= ALMOST_EMPTY_THRESHOLD;
                    
                    if (wr_en && !full && !rd_en)
                        almost_full <= (fifo_count + 1'b1) >= ALMOST_FULL_THRESHOLD;
                    else if (rd_en && !empty && !wr_en)
                        almost_full <= (fifo_count - 1'b1) >= ALMOST_FULL_THRESHOLD;
                    else
                        almost_full <= fifo_count >= ALMOST_FULL_THRESHOLD;
                end
            end
        end else begin : gen_no_almost_flags
            always @(*) begin
                almost_empty = 1'b0;
                almost_full = 1'b0;
            end
        end
    endgenerate
    
    // Write operation
    always @(posedge clk) begin
        if (wr_en && !full) begin
            mem[wr_addr] <= wr_data;
        end
    end
    
    // Write pointer update
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            wr_ptr <= {(ADDR_WIDTH+1){1'b0}};
        end else if (wr_en && !full) begin
            wr_ptr <= wr_ptr + 1'b1;
        end
    end
    
    // Read operation
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rd_data <= {DATA_WIDTH{1'b0}};
        end else if (rd_en && !empty) begin
            rd_data <= mem[rd_addr];
        end
    end
    
    // Read pointer update
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rd_ptr <= {(ADDR_WIDTH+1){1'b0}};
        end else if (rd_en && !empty) begin
            rd_ptr <= rd_ptr + 1'b1;
        end
    end

endmodule 
