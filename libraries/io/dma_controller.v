module dma_controller #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter CHANNEL_COUNT = 4,
    parameter MAX_BURST_LENGTH = 16
)(
    // Global signals
    input  wire                       clk,
    input  wire                       rst_n,
    
    // Per-channel memory interfaces
    // Source memory interfaces - flattened signals for Verilator compatibility
    output reg  [CHANNEL_COUNT*ADDR_WIDTH-1:0] src_addr,
    output reg  [CHANNEL_COUNT-1:0]            src_read,
    input  wire [CHANNEL_COUNT*DATA_WIDTH-1:0] src_rdata,
    input  wire [CHANNEL_COUNT-1:0]            src_rvalid,
    output reg  [CHANNEL_COUNT-1:0]            src_rready,
    
    // Destination memory interfaces - flattened signals for Verilator compatibility
    output reg  [CHANNEL_COUNT*ADDR_WIDTH-1:0] dst_addr,
    output reg  [CHANNEL_COUNT-1:0]            dst_write,
    output reg  [CHANNEL_COUNT*DATA_WIDTH-1:0] dst_wdata,
    output reg  [CHANNEL_COUNT*(DATA_WIDTH/8)-1:0] dst_wstrb,
    input  wire [CHANNEL_COUNT-1:0]            dst_wready,
    
    // Channel configuration
    input  wire [CHANNEL_COUNT-1:0]   channel_enable,
    input  wire [CHANNEL_COUNT*ADDR_WIDTH-1:0] channel_src_addr,
    input  wire [CHANNEL_COUNT*ADDR_WIDTH-1:0] channel_dst_addr,
    input  wire [CHANNEL_COUNT*32-1:0]         channel_length,
    input  wire [CHANNEL_COUNT*2-1:0]          channel_mode,    // 0=mem2mem, 1=mem2io, 2=io2mem
    
    // Status and control
    output reg  [CHANNEL_COUNT-1:0]   channel_done,
    output reg  [CHANNEL_COUNT-1:0]   channel_error,
    input  wire [CHANNEL_COUNT-1:0]   channel_start,
    output reg  [CHANNEL_COUNT-1:0]   channel_busy,

    // Debug signals
    output reg  [3:0]                 debug_active_channels,
    output reg                        debug_has_active_channels,
    output reg  [CHANNEL_COUNT*3-1:0] debug_channel_state,
    output reg  [CHANNEL_COUNT*32-1:0] debug_transfer_count
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
    
    // Helper function to get/set values from flattened arrays
    function [ADDR_WIDTH-1:0] get_addr;
        input [CHANNEL_COUNT*ADDR_WIDTH-1:0] addr_array;
        input integer index;
        begin
            get_addr = addr_array[index*ADDR_WIDTH +: ADDR_WIDTH];
        end
    endfunction
    
    function [DATA_WIDTH-1:0] get_data;
        input [CHANNEL_COUNT*DATA_WIDTH-1:0] data_array;
        input integer index;
        begin
            get_data = data_array[index*DATA_WIDTH +: DATA_WIDTH];
        end
    endfunction
    
    function [31:0] get_length;
        input [CHANNEL_COUNT*32-1:0] length_array;
        input integer index;
        begin
            get_length = length_array[index*32 +: 32];
        end
    endfunction
    
    function [1:0] get_mode;
        input [CHANNEL_COUNT*2-1:0] mode_array;
        input integer index;
        begin
            get_mode = mode_array[index*2 +: 2];
        end
    endfunction
    
    function [DATA_WIDTH/8-1:0] get_strb;
        input [CHANNEL_COUNT*(DATA_WIDTH/8)-1:0] strb_array;
        input integer index;
        begin
            get_strb = strb_array[index*(DATA_WIDTH/8) +: (DATA_WIDTH/8)];
        end
    endfunction
    
    // Helper for setting values in flattened arrays
    task set_addr;
        inout [CHANNEL_COUNT*ADDR_WIDTH-1:0] addr_array;
        input integer index;
        input [ADDR_WIDTH-1:0] value;
        begin
            addr_array[index*ADDR_WIDTH +: ADDR_WIDTH] = value;
        end
    endtask
    
    task set_data;
        inout [CHANNEL_COUNT*DATA_WIDTH-1:0] data_array;
        input integer index;
        input [DATA_WIDTH-1:0] value;
        begin
            data_array[index*DATA_WIDTH +: DATA_WIDTH] = value;
        end
    endtask
    
    task set_strb;
        inout [CHANNEL_COUNT*(DATA_WIDTH/8)-1:0] strb_array;
        input integer index;
        input [DATA_WIDTH/8-1:0] value;
        begin
            strb_array[index*(DATA_WIDTH/8) +: (DATA_WIDTH/8)] = value;
        end
    endtask
    
    task set_debug_state;
        inout [CHANNEL_COUNT*3-1:0] state_array;
        input integer index;
        input [2:0] value;
        begin
            state_array[index*3 +: 3] = value;
        end
    endtask
    
    task set_debug_count;
        inout [CHANNEL_COUNT*32-1:0] count_array;
        input integer index;
        input [31:0] value;
        begin
            count_array[index*32 +: 32] = value;
        end
    endtask
    
    // Improved round-robin arbitration logic
    reg [3:0] active_channel_count;
    reg [CHANNEL_COUNT-1:0] channel_active;
    reg [2:0] round_robin_ptr; // Pointer to the next channel to service
    
    // Helper function to find next active channel
    /* verilator lint_off BLKSEQ */
    function [2:0] next_active_channel;
        input [2:0] current_ptr;
        reg [7:0] i;
        reg found;
        begin
            found = 1'b0;
            next_active_channel = current_ptr;
            
            // Check each channel starting from current_ptr+1
            for (i = 1; i <= CHANNEL_COUNT; i = i + 1) begin
                // Calculate the next channel index with wraparound
                if (!found && channel_enable[((current_ptr + i) % CHANNEL_COUNT)] && 
                    channel_busy[((current_ptr + i) % CHANNEL_COUNT)] && 
                    (channel_state[((current_ptr + i) % CHANNEL_COUNT)] != DONE) &&
                    (channel_state[((current_ptr + i) % CHANNEL_COUNT)] != ERROR)) begin
                    next_active_channel = ((current_ptr + i) % CHANNEL_COUNT);
                    found = 1'b1;
                end
            end
        end
    endfunction
    /* verilator lint_on BLKSEQ */
    
    // Update debug signals to track channel states
    always @(*) begin
        for (i = 0; i < CHANNEL_COUNT; i = i + 1) begin
            set_debug_state(debug_channel_state, i, channel_state[i]);
            set_debug_count(debug_transfer_count, i, transfer_count[i]);
        end
    end
    
    // Count active channels and update round-robin pointer
    integer i, j;
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            active_channel_count <= 0;
            channel_active <= {CHANNEL_COUNT{1'b0}};
            round_robin_ptr <= 0;
            debug_active_channels <= 0;
            debug_has_active_channels <= 0;
        end else begin
            // Count active channels
            active_channel_count <= 0;
            channel_active <= {CHANNEL_COUNT{1'b0}};
            
            for (i = 0; i < CHANNEL_COUNT; i = i + 1) begin
                if (channel_enable[i] && channel_busy[i] && 
                    (channel_state[i] != DONE) && (channel_state[i] != ERROR)) begin
                    channel_active[i] <= 1'b1;
                    active_channel_count <= active_channel_count + 1;
                end else begin
                    channel_active[i] <= 1'b0;
                end
            end
            
            // Update round-robin pointer if needed
            if (|channel_active) begin
                round_robin_ptr <= next_active_channel(round_robin_ptr);
            end
            
            // Update debug signals
            debug_active_channels <= active_channel_count;
            debug_has_active_channels <= (active_channel_count > 0);
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
                
                // Reset per-channel interfaces
                set_addr(src_addr, i, 0);
                src_read[i] <= 0;
                src_rready[i] <= 0;
                
                set_addr(dst_addr, i, 0);
                dst_write[i] <= 0;
                set_data(dst_wdata, i, 0);
                set_strb(dst_wstrb, i, {(DATA_WIDTH/8){1'b0}});
            end
            
            channel_done <= {CHANNEL_COUNT{1'b0}};
            channel_error <= {CHANNEL_COUNT{1'b0}};
            channel_busy <= {CHANNEL_COUNT{1'b0}};
        end else begin
            // Process channel start signals (handle all channels independently)
            for (i = 0; i < CHANNEL_COUNT; i = i + 1) begin
                // Default values
                src_read[i] <= 1'b0;
                
                // Keep rready and write signals active if in appropriate states
                if (channel_state[i] != WAIT_R) src_rready[i] <= 1'b0;
                if (channel_state[i] != WAIT_W) dst_write[i] <= 1'b0;
                
                // Handle channel start signal
                if (channel_start[i] && (channel_state[i] == IDLE) && channel_enable[i]) begin
                    channel_state[i] <= READ;
                    channel_busy[i] <= 1'b1;
                    channel_done[i] <= 1'b0;
                    channel_error[i] <= 1'b0;
                    transfer_count[i] <= 0;
                    current_src_addr[i] <= get_addr(channel_src_addr, i);
                    current_dst_addr[i] <= get_addr(channel_dst_addr, i);
                end
                
                // Process state machine for each channel
                case (channel_state[i])
                    IDLE: begin
                        // Nothing to do in IDLE state
                    end
                    
                    READ: begin
                        // Setup read from source
                        set_addr(src_addr, i, current_src_addr[i]);
                        src_read[i] <= 1'b1;
                        src_rready[i] <= 1'b1;
                        channel_state[i] <= WAIT_R;
                    end
                    
                    WAIT_R: begin
                        // Keep read ready active
                        src_rready[i] <= 1'b1;
                        
                        // Wait for valid read data
                        if (src_rvalid[i]) begin
                            data_buffer[i] <= get_data(src_rdata, i);
                            channel_state[i] <= WRITE;
                            src_rready[i] <= 1'b0;
                        end
                    end
                    
                    WRITE: begin
                        // Setup write to destination
                        set_addr(dst_addr, i, current_dst_addr[i]);
                        dst_write[i] <= 1'b1;
                        set_data(dst_wdata, i, data_buffer[i]);
                        set_strb(dst_wstrb, i, {(DATA_WIDTH/8){1'b1}}); // All bytes enabled
                        channel_state[i] <= WAIT_W;
                    end
                    
                    WAIT_W: begin
                        // Keep write active
                        dst_write[i] <= 1'b1;
                        
                        // Wait for write to complete
                        if (dst_wready[i]) begin
                            // Update transfer state
                            transfer_count[i] <= transfer_count[i] + 1;
                            
                            // Update addresses based on mode
                            case (get_mode(channel_mode, i))
                                MEM2MEM, MEM2IO: begin
                                    current_src_addr[i] <= current_src_addr[i] + (DATA_WIDTH/8);
                                end
                                default: begin
                                    // IO2MEM - source address might stay the same if reading from a fixed I/O port
                                end
                            endcase
                            
                            case (get_mode(channel_mode, i))
                                MEM2MEM, IO2MEM: begin
                                    current_dst_addr[i] <= current_dst_addr[i] + (DATA_WIDTH/8);
                                end
                                default: begin
                                    // MEM2IO - destination address might stay the same if writing to a fixed I/O port
                                end
                            endcase
                            
                            // Check if transfer is complete
                            if (transfer_count[i] + 1 >= get_length(channel_length, i)) begin
                                channel_state[i] <= DONE;
                                channel_done[i] <= 1'b1;
                                channel_busy[i] <= 1'b0;
                            end else begin
                                channel_state[i] <= READ;
                            end
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

endmodule 
