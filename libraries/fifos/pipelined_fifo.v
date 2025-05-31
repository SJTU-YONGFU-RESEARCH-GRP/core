// Disable multi-driven warning for pipeline registers
/* verilator lint_off MULTIDRIVEN */
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
    
    // Declare loop variable for Verilog compatibility
    integer i;
    
    // Write pipeline registers
    reg [ADDR_WIDTH:0] wr_ptr;       // Main write pointer
    reg [ADDR_WIDTH:0] wr_ptr_pipe [PIPELINE_STAGES-1:0]; // Pipelined pointers
    reg [DATA_WIDTH-1:0] wr_data_pipe [PIPELINE_STAGES-1:0]; // Pipelined write data
    reg [PIPELINE_STAGES-1:0] wr_en_pipe;  // Pipelined write enable
    
    // Read pipeline registers
    reg [ADDR_WIDTH:0] rd_ptr;       // Main read pointer
    reg [ADDR_WIDTH:0] rd_ptr_pipe [PIPELINE_STAGES-1:0]; // Pipelined pointers
    reg [DATA_WIDTH-1:0] rd_data_pipe [PIPELINE_STAGES-1:0]; // Pipelined read data
    reg [PIPELINE_STAGES-1:0] rd_en_pipe;  // Pipelined read enable
    reg [PIPELINE_STAGES-1:0] rd_data_valid; // Valid flags for read data
    
    // Count of valid data in pipeline stages
    reg [ADDR_WIDTH:0] pipeline_count;
    
    // Calculate effective pointers for status flags
    wire [ADDR_WIDTH:0] wr_ptr_effective = wr_ptr + pipeline_count;
    wire [ADDR_WIDTH:0] rd_ptr_effective = rd_ptr;
    
    // FIFO count and status
    wire [ADDR_WIDTH:0] raw_count = wr_ptr - rd_ptr;
    assign data_count = raw_count + pipeline_count;
    
    // Status flags with pipeline compensation
    assign full = (raw_count >= ((1<<ADDR_WIDTH) - PIPELINE_STAGES));
    assign empty = (raw_count == 0) && (pipeline_count == 0);
    assign almost_full = (raw_count >= ((1<<ADDR_WIDTH) - ALMOST_FULL_THRESHOLD));
    assign almost_empty = (raw_count <= ALMOST_EMPTY_THRESHOLD) && (pipeline_count <= 1);
    
    // Write pipeline logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            wr_ptr <= 0;
            for (i = 0; i < PIPELINE_STAGES; i = i + 1) begin
                wr_ptr_pipe[i] <= 0;
                wr_data_pipe[i] <= 0;
                wr_en_pipe[i] <= 0;
            end
        end else begin
            // First stage of write pipeline
            wr_en_pipe[0] <= wr_en && !full;
            wr_ptr_pipe[0] <= wr_ptr;
            wr_data_pipe[0] <= wr_data;
            
            // Propagate through write pipeline stages
            for (i = 1; i < PIPELINE_STAGES; i = i + 1) begin
                wr_en_pipe[i] <= wr_en_pipe[i-1];
                wr_ptr_pipe[i] <= wr_ptr_pipe[i-1];
                wr_data_pipe[i] <= wr_data_pipe[i-1];
            end
            
            // Update main write pointer
            if (wr_en && !full) begin
                wr_ptr <= wr_ptr + 1'b1;
            end
        end
    end
    
    // Read pipeline logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rd_ptr <= 0;
            for (i = 0; i < PIPELINE_STAGES; i = i + 1) begin
                rd_ptr_pipe[i] <= 0;
                rd_data_pipe[i] <= 0;
                rd_en_pipe[i] <= 0;
                rd_data_valid[i] <= 0;
            end
        end else begin
            // First stage of read pipeline
            rd_en_pipe[0] <= rd_en && !empty;
            rd_ptr_pipe[0] <= rd_ptr;
            
            // Propagate through read pipeline stages
            for (i = 1; i < PIPELINE_STAGES; i = i + 1) begin
                rd_en_pipe[i] <= rd_en_pipe[i-1];
                rd_ptr_pipe[i] <= rd_ptr_pipe[i-1];
                rd_data_valid[i] <= rd_data_valid[i-1];
            end
            
            // Update main read pointer and first stage valid flag
            if (rd_en && !empty) begin
                rd_ptr <= rd_ptr + 1'b1;
                rd_data_valid[0] <= 1'b1;
            end else begin
                rd_data_valid[0] <= rd_en_pipe[PIPELINE_STAGES-1];
            end
        end
    end
    
    // Memory write operation - at the end of the pipeline
    always @(posedge clk) begin
        if (wr_en_pipe[PIPELINE_STAGES-1]) begin
            mem[wr_ptr_pipe[PIPELINE_STAGES-1][ADDR_WIDTH-1:0]] <= wr_data_pipe[PIPELINE_STAGES-1];
        end
    end
    
    // Pipelined read operation
    always @(posedge clk) begin
        if (rd_en_pipe[0]) begin
            // First stage reads from memory
            rd_data_pipe[0] <= mem[rd_ptr_pipe[0][ADDR_WIDTH-1:0]];
            
            // Propagate through pipeline stages
            for (i = 1; i < PIPELINE_STAGES; i = i + 1) begin
                rd_data_pipe[i] <= rd_data_pipe[i-1];
            end
        end
    end
    
    // Track number of valid entries in pipeline
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            pipeline_count <= 0;
        end else begin
            // Count writes entering and reads leaving pipeline
            if (wr_en_pipe[PIPELINE_STAGES-1] && !rd_en_pipe[0]) begin
                pipeline_count <= pipeline_count + 1'b1;
            end else if (!wr_en_pipe[PIPELINE_STAGES-1] && rd_en_pipe[0]) begin
                pipeline_count <= pipeline_count - 1'b1;
            end
        end
    end
    
    // Output the last stage of the pipeline
    assign rd_data = rd_data_valid[PIPELINE_STAGES-1] ? rd_data_pipe[PIPELINE_STAGES-1] : {DATA_WIDTH{1'b0}};
    
endmodule
/* verilator lint_on MULTIDRIVEN */ 