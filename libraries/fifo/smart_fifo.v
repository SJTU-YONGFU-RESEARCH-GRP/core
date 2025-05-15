module smart_fifo #(
    parameter DATA_WIDTH = 32,           // Width of data bus
    parameter ADDR_WIDTH = 4,            // Address width (FIFO depth = 2^ADDR_WIDTH)
    parameter ALMOST_FULL_THRESHOLD = 2, // Almost full threshold
    parameter ALMOST_EMPTY_THRESHOLD = 2, // Almost empty threshold
    parameter DROP_ON_OVERFLOW = 0,      // 0: Block when full, 1: Drop new data when full
    parameter RETURN_LAST_ON_UNDERFLOW = 1 // 0: Return zeros on underflow, 1: Return last valid data
) (
    // Clock and reset
    input  wire                      clk,
    input  wire                      rst_n,
    
    // Write interface
    input  wire                      wr_en,
    input  wire [DATA_WIDTH-1:0]     wr_data,
    output wire                      wr_ready,
    output wire                      overflow_detected,
    
    // Read interface
    input  wire                      rd_en,
    output wire [DATA_WIDTH-1:0]     rd_data,
    output wire                      rd_valid,
    output wire                      underflow_detected,
    
    // Status
    output wire                      full,
    output wire                      almost_full,
    output wire                      empty,
    output wire                      almost_empty,
    output wire [ADDR_WIDTH:0]       data_count,
    
    // Error handling
    input  wire                      clear_errors,  // Clear error flags
    output reg                       error_detected, // Indicates if an error occurred
    output reg [15:0]                error_count     // Total number of errors detected
);

    // Memory array for data storage
    reg [DATA_WIDTH-1:0] mem [(1<<ADDR_WIDTH)-1:0];
    
    // FIFO pointers and control signals
    reg [ADDR_WIDTH:0] wr_ptr;
    reg [ADDR_WIDTH:0] rd_ptr;
    
    // Last valid data for underflow protection
    reg [DATA_WIDTH-1:0] last_valid_data;
    reg last_valid_data_available;
    
    // Error detection flags
    reg overflow_flag;
    reg underflow_flag;
    
    // FIFO status signals
    wire [ADDR_WIDTH:0] fifo_count = wr_ptr - rd_ptr;
    assign data_count = fifo_count;
    
    assign full = (fifo_count == (1<<ADDR_WIDTH));
    assign empty = (fifo_count == 0);
    assign almost_full = (fifo_count >= ((1<<ADDR_WIDTH) - ALMOST_FULL_THRESHOLD));
    assign almost_empty = (fifo_count <= ALMOST_EMPTY_THRESHOLD) && !empty;
    
    // Protect against overflow based on parameter
    assign wr_ready = DROP_ON_OVERFLOW ? 1'b1 : !full;
    assign overflow_detected = wr_en && full;
    
    // Protect against underflow
    assign rd_valid = !empty;
    assign underflow_detected = rd_en && empty;
    
    // Data output selection based on underflow protection parameter
    assign rd_data = empty ? 
                    (RETURN_LAST_ON_UNDERFLOW && last_valid_data_available ? 
                     last_valid_data : {DATA_WIDTH{1'b0}}) : 
                    mem[rd_ptr[ADDR_WIDTH-1:0]];
    
    // Write operation
    always @(posedge clk) begin
        if (wr_en && (DROP_ON_OVERFLOW ? !full : 1'b1)) begin
            mem[wr_ptr[ADDR_WIDTH-1:0]] <= wr_data;
        end
    end
    
    // FIFO state management
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            wr_ptr <= 0;
            rd_ptr <= 0;
            overflow_flag <= 0;
            underflow_flag <= 0;
            error_count <= 0;
            error_detected <= 0;
            last_valid_data <= {DATA_WIDTH{1'b0}};
            last_valid_data_available <= 0;
        end else begin
            // Clear error flags if requested
            if (clear_errors) begin
                overflow_flag <= 0;
                underflow_flag <= 0;
                error_detected <= 0;
            end
            
            // Handle write pointer update
            if (wr_en && (!full || DROP_ON_OVERFLOW)) begin
                // Only increment pointer if not full or if we're configured to drop data
                if (!full) begin
                    wr_ptr <= wr_ptr + 1'b1;
                end else if (DROP_ON_OVERFLOW) begin
                    // Detected overflow condition but dropping data
                    overflow_flag <= 1;
                    error_detected <= 1;
                    error_count <= error_count + 1;
                end
            end
            
            // Handle read pointer update
            if (rd_en && !empty) begin
                // Store last valid data for underflow protection
                if (RETURN_LAST_ON_UNDERFLOW) begin
                    last_valid_data <= mem[rd_ptr[ADDR_WIDTH-1:0]];
                    last_valid_data_available <= 1;
                end
                
                rd_ptr <= rd_ptr + 1'b1;
            end else if (rd_en && empty) begin
                // Detected underflow condition
                underflow_flag <= 1;
                error_detected <= 1;
                error_count <= error_count + 1;
            end
        end
    end
    
    // Debug information (useful for waveform viewing)
    // synthesis translate_off
    reg [ADDR_WIDTH:0] debug_num_entries;
    always @(*) begin
        debug_num_entries = wr_ptr - rd_ptr;
    end
    // synthesis translate_on
    
endmodule 