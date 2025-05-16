module memory_mapped_fifo #(
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 4,  // FIFO depth = 2^ADDR_WIDTH
    parameter ALMOST_FULL_THRESHOLD = 2,
    parameter ALMOST_EMPTY_THRESHOLD = 2
) (
    input  wire                      clk,
    input  wire                      rst_n,
    
    // Memory-mapped interface
    input  wire                      mem_valid,
    input  wire                      mem_write,
    input  wire [3:0]                mem_addr,
    input  wire [DATA_WIDTH-1:0]     mem_wdata,
    output reg                       mem_ready,
    output reg  [DATA_WIDTH-1:0]     mem_rdata,
    
    // Optional external interface
    output wire                      ext_empty,
    output wire                      ext_full,
    input  wire                      ext_rd_en,
    output wire [DATA_WIDTH-1:0]     ext_rd_data,
    input  wire                      ext_wr_en,
    input  wire [DATA_WIDTH-1:0]     ext_wr_data
);

    // Register map
    localparam FIFO_DATA_REG     = 4'h0;  // Read: pop data, Write: push data
    localparam FIFO_STATUS_REG   = 4'h4;  // Read: FIFO status
    localparam FIFO_CONTROL_REG  = 4'h8;  // Write: control operations
    localparam FIFO_COUNT_REG    = 4'hC;  // Read: number of entries
    
    // Control register bits
    localparam CTRL_RESET_BIT    = 0;     // Reset FIFO
    localparam CTRL_FLUSH_BIT    = 1;     // Flush FIFO
    
    // Status register bits
    localparam STATUS_EMPTY_BIT      = 0;
    localparam STATUS_FULL_BIT       = 1;
    localparam STATUS_ALMOST_EMPTY_BIT = 2;
    localparam STATUS_ALMOST_FULL_BIT = 3;
    
    // Memory array for data storage
    reg [DATA_WIDTH-1:0] mem [(1<<ADDR_WIDTH)-1:0];
    
    // FIFO pointers
    reg [ADDR_WIDTH:0] wr_ptr;
    reg [ADDR_WIDTH:0] rd_ptr;
    
    // Internal control signals
    wire fifo_wr_en = (mem_valid && mem_write && mem_addr == FIFO_DATA_REG) || ext_wr_en;
    wire fifo_rd_en = (mem_valid && !mem_write && mem_addr == FIFO_DATA_REG) || ext_rd_en;
    wire fifo_flush = mem_valid && mem_write && mem_addr == FIFO_CONTROL_REG && mem_wdata[CTRL_FLUSH_BIT];
    wire fifo_reset = mem_valid && mem_write && mem_addr == FIFO_CONTROL_REG && mem_wdata[CTRL_RESET_BIT];
    
    // FIFO count and status
    wire [ADDR_WIDTH:0] fifo_count = wr_ptr - rd_ptr;
    wire fifo_empty = (fifo_count == 0);
    wire fifo_full = (fifo_count == (1<<ADDR_WIDTH));
    wire fifo_almost_empty = (fifo_count <= ALMOST_EMPTY_THRESHOLD) && !fifo_empty;
    wire fifo_almost_full = (fifo_count >= ((1<<ADDR_WIDTH) - ALMOST_FULL_THRESHOLD));
    
    // Status register
    wire [DATA_WIDTH-1:0] status_reg = {
        {(DATA_WIDTH-4){1'b0}},
        fifo_almost_full,
        fifo_almost_empty,
        fifo_full,
        fifo_empty
    };
    
    // Write pointer logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            wr_ptr <= 0;
        end else if (fifo_reset || fifo_flush) begin
            wr_ptr <= 0;
        end else if (fifo_wr_en && !fifo_full) begin
            wr_ptr <= wr_ptr + 1'b1;
            mem[wr_ptr[ADDR_WIDTH-1:0]] <= mem_valid ? mem_wdata : ext_wr_data;
        end
    end
    
    // Read pointer logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rd_ptr <= 0;
        end else if (fifo_reset || fifo_flush) begin
            rd_ptr <= 0;
        end else if (fifo_rd_en && !fifo_empty) begin
            rd_ptr <= rd_ptr + 1'b1;
        end
    end
    
    // Memory-mapped read logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            mem_rdata <= 0;
            mem_ready <= 0;
        end else begin
            mem_ready <= mem_valid;  // Respond in the next cycle
            
            if (mem_valid && !mem_write) begin
                case (mem_addr)
                    FIFO_DATA_REG: begin
                        mem_rdata <= fifo_empty ? {DATA_WIDTH{1'b0}} : mem[rd_ptr[ADDR_WIDTH-1:0]];
                    end
                    FIFO_STATUS_REG: begin
                        mem_rdata <= status_reg;
                    end
                    FIFO_COUNT_REG: begin
                        mem_rdata <= {{(DATA_WIDTH-ADDR_WIDTH-1){1'b0}}, fifo_count};
                    end
                    default: begin
                        mem_rdata <= {DATA_WIDTH{1'b0}};
                    end
                endcase
            end
        end
    end
    
    // External interface signals
    assign ext_empty = fifo_empty;
    assign ext_full = fifo_full;
    assign ext_rd_data = fifo_empty ? {DATA_WIDTH{1'b0}} : mem[rd_ptr[ADDR_WIDTH-1:0]];
    
endmodule 