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
    
    output wire [DATA_WIDTH-1:0] rd_data,  // Read data
    output wire empty,                     // FIFO empty flag
    output wire full,                      // FIFO full flag
    output wire almost_empty,              // Almost empty flag (optional)
    output wire almost_full                // Almost full flag (optional)
);

    // Internal registers for FIFO storage
    reg [DATA_WIDTH-1:0] mem [0:FIFO_DEPTH-1];
    reg [ADDR_WIDTH:0] wr_ptr;             // Extra bit for full/empty detection
    reg [ADDR_WIDTH:0] rd_ptr;             // Extra bit for full/empty detection
    reg [DATA_WIDTH-1:0] rd_data_reg;      // Register for read data
    reg rd_valid;                          // Register to track if read data is valid
    
    // Calculate pointers for internal memory access
    wire [ADDR_WIDTH-1:0] wr_addr = wr_ptr[ADDR_WIDTH-1:0];
    wire [ADDR_WIDTH-1:0] rd_addr = rd_ptr[ADDR_WIDTH-1:0];
    
    // Calculate current fill level
    wire [ADDR_WIDTH:0] fifo_count = wr_ptr - rd_ptr;
    
    // Empty and full flags using combinational logic
    assign empty = (wr_ptr == rd_ptr);
    assign full = (wr_ptr[ADDR_WIDTH-1:0] == rd_ptr[ADDR_WIDTH-1:0]) && 
                 (wr_ptr[ADDR_WIDTH] != rd_ptr[ADDR_WIDTH]);
    
    // Almost empty and full flags with hysteresis
    reg almost_empty_reg, almost_full_reg;
    
    generate
        if (ENABLE_ALMOST_FLAGS) begin : gen_almost_flags
            always @(posedge clk or negedge rst_n) begin
                if (!rst_n) begin
                    almost_empty_reg <= 1'b1;
                    almost_full_reg <= 1'b0;
                end else begin
                    // Almost empty with hysteresis
                    if (empty) begin
                        almost_empty_reg <= 1'b1;
                    end else if (fifo_count <= ALMOST_EMPTY_THRESHOLD) begin
                        almost_empty_reg <= 1'b1;
                    end else if (fifo_count > ALMOST_EMPTY_THRESHOLD + 1) begin
                        almost_empty_reg <= 1'b0;
                    end
                    
                    // Almost full with hysteresis
                    if (full) begin
                        almost_full_reg <= 1'b1;
                    end else if (fifo_count >= ALMOST_FULL_THRESHOLD) begin
                        almost_full_reg <= 1'b1;
                    end else if (fifo_count < ALMOST_FULL_THRESHOLD - 1) begin
                        almost_full_reg <= 1'b0;
                    end
                end
            end
            
            assign almost_empty = almost_empty_reg;
            assign almost_full = almost_full_reg;
        end else begin : gen_no_almost_flags
            assign almost_empty = 1'b0;
            assign almost_full = 1'b0;
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
    
    // Read operation and pointer update
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rd_data_reg <= {DATA_WIDTH{1'b0}};
            rd_ptr <= {(ADDR_WIDTH+1){1'b0}};
            rd_valid <= 1'b0;
        end else begin
            if (rd_en && !empty) begin
                rd_data_reg <= mem[rd_addr];
                rd_ptr <= rd_ptr + 1'b1;
                rd_valid <= 1'b1;
            end else begin
                rd_valid <= 1'b0;
            end
        end
    end
    
    // Output read data only when valid
    assign rd_data = rd_valid ? rd_data_reg : {DATA_WIDTH{1'b0}};

endmodule 
