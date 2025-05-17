module dma_controller #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter CHANNEL_COUNT = 4,
    parameter MAX_BURST_LENGTH = 16
)(
    // Global signals
    input  wire                       clk,
    input  wire                       rst_n,
    
    // Source memory interface
    output reg  [ADDR_WIDTH-1:0]      src_addr,
    output reg                        src_read,
    input  wire [DATA_WIDTH-1:0]      src_rdata,
    input  wire                       src_rvalid,
    output reg                        src_rready,
    
    // Destination memory interface
    output reg  [ADDR_WIDTH-1:0]      dst_addr,
    output reg                        dst_write,
    output reg  [DATA_WIDTH-1:0]      dst_wdata,
    output reg  [DATA_WIDTH/8-1:0]    dst_wstrb,
    input  wire                       dst_wready,
    
    // Channel configuration
    input  wire [CHANNEL_COUNT-1:0]   channel_enable,
    input  wire [CHANNEL_COUNT-1:0][ADDR_WIDTH-1:0] channel_src_addr,
    input  wire [CHANNEL_COUNT-1:0][ADDR_WIDTH-1:0] channel_dst_addr,
    input  wire [CHANNEL_COUNT-1:0][31:0]           channel_length,
    input  wire [CHANNEL_COUNT-1:0][1:0]            channel_mode,    // 0=mem2mem, 1=mem2io, 2=io2mem
    
    // Status and control
    output reg  [CHANNEL_COUNT-1:0]   channel_done,
    output reg  [CHANNEL_COUNT-1:0]   channel_error,
    input  wire [CHANNEL_COUNT-1:0]   channel_start,
    output reg  [CHANNEL_COUNT-1:0]   channel_busy
);

    // State definitions
    localparam IDLE     = 3'b000;
    localparam READ     = 3'b001;
    localparam WAIT_R   = 3'b010;
    localparam WRITE    = 3'b011;
    localparam WAIT_W   = 3'b100;
    localparam DONE     = 3'b101;
    localparam ERROR    = 3'b110;

    // Transfer modes
    localparam MEM2MEM = 2'b00;
    localparam MEM2IO  = 2'b01;
    localparam IO2MEM  = 2'b10;

    // Per-channel state tracking
    reg [2:0] channel_state [0:CHANNEL_COUNT-1];
    reg [31:0] transfer_count [0:CHANNEL_COUNT-1];
    reg [ADDR_WIDTH-1:0] current_src_addr [0:CHANNEL_COUNT-1];
    reg [ADDR_WIDTH-1:0] current_dst_addr [0:CHANNEL_COUNT-1];
    reg [DATA_WIDTH-1:0] data_buffer [0:CHANNEL_COUNT-1];
    reg [3:0] active_channel; // Which channel is currently active
    reg has_active_channel;
    
    // Arbitration logic
    integer i, j;
    always @(*) begin
        has_active_channel = 1'b0;
        active_channel = 0;
        
        // Round-robin priority for multiple enabled channels
        for (i = 0; i < CHANNEL_COUNT; i = i + 1) begin
            if (channel_enable[i] && channel_busy[i] && 
                (channel_state[i] != DONE) && (channel_state[i] != ERROR)) begin
                has_active_channel = 1'b1;
                active_channel = i[3:0];
                break;
            end
        end
    end
    
    // DMA state machine
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            // Reset all state
            for (i = 0; i < CHANNEL_COUNT; i = i + 1) begin
                channel_state[i] <= IDLE;
                transfer_count[i] <= 0;
                current_src_addr[i] <= 0;
                current_dst_addr[i] <= 0;
                data_buffer[i] <= 0;
            end
            
            channel_done <= {CHANNEL_COUNT{1'b0}};
            channel_error <= {CHANNEL_COUNT{1'b0}};
            channel_busy <= {CHANNEL_COUNT{1'b0}};
            
            src_addr <= 0;
            src_read <= 0;
            src_rready <= 0;
            
            dst_addr <= 0;
            dst_write <= 0;
            dst_wdata <= 0;
            dst_wstrb <= {(DATA_WIDTH/8){1'b0}};
        end else begin
            // Default values
            src_read <= 1'b0;
            src_rready <= 1'b0;
            dst_write <= 1'b0;
            
            // Process each channel
            for (i = 0; i < CHANNEL_COUNT; i = i + 1) begin
                // Handle channel start signal
                if (channel_start[i] && (channel_state[i] == IDLE) && channel_enable[i]) begin
                    channel_state[i] <= READ;
                    channel_busy[i] <= 1'b1;
                    channel_done[i] <= 1'b0;
                    channel_error[i] <= 1'b0;
                    transfer_count[i] <= 0;
                    current_src_addr[i] <= channel_src_addr[i];
                    current_dst_addr[i] <= channel_dst_addr[i];
                end
                
                // Process active channel states
                if (has_active_channel && (i[3:0] == active_channel)) begin
                    case (channel_state[i])
                        IDLE: begin
                            // Nothing to do in IDLE state
                        end
                        
                        READ: begin
                            // Setup read from source
                            src_addr <= current_src_addr[i];
                            src_read <= 1'b1;
                            src_rready <= 1'b1;
                            channel_state[i] <= WAIT_R;
                        end
                        
                        WAIT_R: begin
                            // Wait for valid read data
                            src_rready <= 1'b1;
                            if (src_rvalid) begin
                                data_buffer[i] <= src_rdata;
                                channel_state[i] <= WRITE;
                                src_rready <= 1'b0;
                            end
                        end
                        
                        WRITE: begin
                            // Setup write to destination
                            dst_addr <= current_dst_addr[i];
                            dst_write <= 1'b1;
                            dst_wdata <= data_buffer[i];
                            dst_wstrb <= {(DATA_WIDTH/8){1'b1}}; // All bytes enabled
                            channel_state[i] <= WAIT_W;
                        end
                        
                        WAIT_W: begin
                            // Wait for write to complete
                            if (dst_wready) begin
                                // Update transfer state
                                transfer_count[i] <= transfer_count[i] + 1;
                                
                                // Update addresses based on mode
                                case (channel_mode[i])
                                    MEM2MEM, MEM2IO: begin
                                        current_src_addr[i] <= current_src_addr[i] + (DATA_WIDTH/8);
                                    end
                                    default: begin
                                        // IO2MEM - source address might stay the same if reading from a fixed I/O port
                                    end
                                endcase
                                
                                case (channel_mode[i])
                                    MEM2MEM, IO2MEM: begin
                                        current_dst_addr[i] <= current_dst_addr[i] + (DATA_WIDTH/8);
                                    end
                                    default: begin
                                        // MEM2IO - destination address might stay the same if writing to a fixed I/O port
                                    end
                                endcase
                                
                                // Check if transfer is complete
                                if (transfer_count[i] + 1 >= channel_length[i]) begin
                                    channel_state[i] <= DONE;
                                    channel_done[i] <= 1'b1;
                                    channel_busy[i] <= 1'b0;
                                end else begin
                                    channel_state[i] <= READ;
                                end
                            end else begin
                                // Keep the write signal active
                                dst_write <= 1'b1;
                                dst_wdata <= data_buffer[i];
                                dst_wstrb <= {(DATA_WIDTH/8){1'b1}};
                            end
                        end
                        
                        DONE: begin
                            // Transfer is complete
                            if (!channel_start[i]) begin
                                channel_state[i] <= IDLE;
                                channel_done[i] <= 1'b0;
                            end
                        end
                        
                        ERROR: begin
                            // Error occurred
                            if (!channel_start[i]) begin
                                channel_state[i] <= IDLE;
                                channel_error[i] <= 1'b0;
                            end
                        end
                        
                        default: begin
                            channel_state[i] <= IDLE;
                        end
                    endcase
                end
            end
        end
    end

endmodule 