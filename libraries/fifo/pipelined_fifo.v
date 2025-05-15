module pipelined_fifo #(
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 4,  // FIFO depth = 2^ADDR_WIDTH
    parameter PIPELINE_STAGES = 2,  // Number of pipeline stages
    parameter ALMOST_FULL_THRESHOLD = 4,
    parameter ALMOST_EMPTY_THRESHOLD = 4
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
    output wire [DATA_WIDTH-1:0]     rd_data,
    output wire                      empty,
    output wire                      almost_empty,
    
    // Status
    output wire [ADDR_WIDTH:0]       data_count
);

    // Memory array for data storage
    reg [DATA_WIDTH-1:0] mem [(1<<ADDR_WIDTH)-1:0];
    
    // Write pointer and pipeline registers
    reg [ADDR_WIDTH:0] wr_ptr;       // Main write pointer
    reg [ADDR_WIDTH:0] wr_ptr_pipe [PIPELINE_STAGES-1:0]; // Pipelined pointers
    
    // Read pointer and pipeline registers
    reg [ADDR_WIDTH:0] rd_ptr;       // Main read pointer
    reg [ADDR_WIDTH:0] rd_ptr_pipe [PIPELINE_STAGES-1:0]; // Pipelined pointers
    
    // Data pipeline for reads
    reg [DATA_WIDTH-1:0] rd_data_pipe [PIPELINE_STAGES-1:0];
    reg [PIPELINE_STAGES-1:0] rd_data_valid;
    
    // Pipeline control signals
    reg [PIPELINE_STAGES-1:0] wr_en_pipe;
    reg [PIPELINE_STAGES-1:0] rd_en_pipe;
    
    // Effective pointers for full/empty calculation
    wire [ADDR_WIDTH:0] wr_ptr_effective = wr_ptr;
    wire [ADDR_WIDTH:0] rd_ptr_effective = rd_ptr - {{ADDR_WIDTH{1'b0}}, |rd_data_valid};
    
    // FIFO count and status
    assign data_count = wr_ptr_effective - rd_ptr_effective;
    
    // Status flags with margin for pipeline stages
    assign full = (data_count >= ((1<<ADDR_WIDTH) - PIPELINE_STAGES));
    assign empty = (data_count == 0) && ~|rd_data_valid;
    assign almost_full = (data_count >= ((1<<ADDR_WIDTH) - ALMOST_FULL_THRESHOLD));
    assign almost_empty = (data_count <= ALMOST_EMPTY_THRESHOLD) && ~|rd_data_valid;
    
    // Write pointer logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            wr_ptr <= 0;
            for (integer i = 0; i < PIPELINE_STAGES; i = i + 1) begin
                wr_ptr_pipe[i] <= 0;
                wr_en_pipe[i] <= 0;
            end
        end else begin
            // Pipeline the write enable and pointers
            wr_en_pipe[0] <= wr_en && !full;
            wr_ptr_pipe[0] <= wr_ptr;
            
            for (integer i = 1; i < PIPELINE_STAGES; i = i + 1) begin
                wr_en_pipe[i] <= wr_en_pipe[i-1];
                wr_ptr_pipe[i] <= wr_ptr_pipe[i-1];
            end
            
            // Update the main write pointer
            if (wr_en && !full) begin
                wr_ptr <= wr_ptr + 1'b1;
            end
        end
    end
    
    // Read pointer logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rd_ptr <= 0;
            for (integer i = 0; i < PIPELINE_STAGES; i = i + 1) begin
                rd_ptr_pipe[i] <= 0;
                rd_en_pipe[i] <= 0;
                rd_data_valid[i] <= 0;
            end
        end else begin
            // Pipeline the read enable and pointers
            rd_en_pipe[0] <= rd_en && !empty;
            rd_ptr_pipe[0] <= rd_ptr;
            
            for (integer i = 1; i < PIPELINE_STAGES; i = i + 1) begin
                rd_en_pipe[i] <= rd_en_pipe[i-1];
                rd_ptr_pipe[i] <= rd_ptr_pipe[i-1];
                rd_data_valid[i] <= rd_data_valid[i-1];
            end
            
            // Update the main read pointer if read is enabled and FIFO is not empty
            if (rd_en && !empty) begin
                rd_ptr <= rd_ptr + 1'b1;
                rd_data_valid[0] <= 1'b1;
            end else if (rd_en) begin
                rd_data_valid[0] <= 1'b0;
            end
        end
    end
    
    // Memory write operation - at the end of the pipeline
    always @(posedge clk) begin
        if (wr_en_pipe[PIPELINE_STAGES-1]) begin
            mem[wr_ptr_pipe[PIPELINE_STAGES-1][ADDR_WIDTH-1:0]] <= wr_data;
        end
    end
    
    // Pipelined read operation
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            for (integer i = 0; i < PIPELINE_STAGES; i = i + 1) begin
                rd_data_pipe[i] <= {DATA_WIDTH{1'b0}};
            end
        end else begin
            // First stage reads from memory
            if (rd_en_pipe[0]) begin
                rd_data_pipe[0] <= mem[rd_ptr_pipe[0][ADDR_WIDTH-1:0]];
            end
            
            // Subsequent stages pass data through pipeline
            for (integer i = 1; i < PIPELINE_STAGES; i = i + 1) begin
                if (rd_en_pipe[i]) begin
                    rd_data_pipe[i] <= rd_data_pipe[i-1];
                end
            end
        end
    end
    
    // Output the last stage of the pipeline
    assign rd_data = rd_data_pipe[PIPELINE_STAGES-1];
    
endmodule 