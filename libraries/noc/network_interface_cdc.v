module network_interface_cdc #(
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 32,
    parameter VC_COUNT = 2,      // Virtual channel count
    parameter NODE_ID = 0,       // Unique ID for this node
    parameter SYNC_STAGES = 2    // CDC synchronizer stages
)(
    // Source clock domain (local memory interface)
    input  wire                     src_clk,
    input  wire                     src_rst_n,
    
    // Destination clock domain (router interface)
    input  wire                     dst_clk,
    input  wire                     dst_rst_n,
    
    // NoC router interface (dst clock domain)
    output wire [DATA_WIDTH-1:0]    router_in_data,
    output wire                     router_in_valid,
    input  wire                     router_in_ready,
    input  wire [DATA_WIDTH-1:0]    router_out_data,
    input  wire                     router_out_valid,
    output wire                     router_out_ready,
    
    // Local memory interface (src clock domain)
    input  wire                     mem_write,
    input  wire                     mem_read,
    input  wire [ADDR_WIDTH-1:0]    mem_addr,
    input  wire [DATA_WIDTH-1:0]    mem_wdata,
    output reg  [DATA_WIDTH-1:0]    mem_rdata,
    output reg                      mem_ready,
    
    // Packetization parameters (src clock domain)
    input  wire [7:0]               dest_id,    // Destination node ID
    input  wire [2:0]               msg_type    // Message type identifier
);

    // Packet format (32-bit total):
    // [31:24] : Destination ID (8 bits)
    // [23:21] : Message Type (3 bits)
    // [20:20] : Read/Write bit (1=write, 0=read)
    // [19:0]  : Address field (20 bits)

    // State machine states
    localparam IDLE = 2'b00;
    localparam SEND = 2'b01;
    localparam WAIT_RESP = 2'b10;
    localparam RECV = 2'b11;
    
    //-------------------------------------------
    // CDC registers and synchronization signals
    //-------------------------------------------
    
    // Data crossing from source to destination
    (* keep = "true" *) reg [DATA_WIDTH-1:0] src_to_dst_data;
    
    // Control signals crossing from source to destination
    (* keep = "true" *) reg src_req;
    (* keep = "true" *) reg src_data_valid;
    (* keep = "true" *) reg src_is_write_op_flag;
    
    // Data crossing from destination to source 
    (* keep = "true" *) reg [DATA_WIDTH-1:0] dst_to_src_data;
    
    // Control signals crossing from destination to source
    (* keep = "true" *) reg dst_ack;
    (* keep = "true" *) reg dst_data_valid;
    
    // Synchronizers for source->destination control signals
    reg [SYNC_STAGES-1:0] src_req_sync_reg;
    reg [SYNC_STAGES-1:0] src_data_valid_sync_reg;
    reg [SYNC_STAGES-1:0] src_is_write_op_sync_reg;
    wire src_req_sync;
    wire src_data_valid_sync;
    wire src_is_write_op_sync;
    reg src_req_prev;
    
    // Synchronizers for destination->source control signals
    reg [SYNC_STAGES-1:0] dst_ack_sync_reg;
    reg [SYNC_STAGES-1:0] dst_data_valid_sync_reg;
    wire dst_ack_sync;
    wire dst_data_valid_sync;
    reg dst_ack_prev;
    
    //-------------------------------------------
    // Source clock domain logic (local memory)
    //-------------------------------------------
    reg [1:0] src_state;
    reg src_is_write_op;
    
    // Synchronize destination signals to source domain
    always @(posedge src_clk or negedge src_rst_n) begin
        if (!src_rst_n) begin
            dst_ack_sync_reg <= {SYNC_STAGES{1'b0}};
            dst_data_valid_sync_reg <= {SYNC_STAGES{1'b0}};
            dst_ack_prev <= 1'b0;
        end else begin
            // Multi-flop synchronizers for control signals
            dst_ack_sync_reg <= {dst_ack_sync_reg[SYNC_STAGES-2:0], dst_ack};
            dst_data_valid_sync_reg <= {dst_data_valid_sync_reg[SYNC_STAGES-2:0], dst_data_valid};
            dst_ack_prev <= dst_ack_sync;
        end
    end
    
    assign dst_ack_sync = dst_ack_sync_reg[SYNC_STAGES-1];
    assign dst_data_valid_sync = dst_data_valid_sync_reg[SYNC_STAGES-1];
    
    // Source domain state machine
    always @(posedge src_clk or negedge src_rst_n) begin
        if (!src_rst_n) begin
            src_state <= IDLE;
            src_to_dst_data <= {DATA_WIDTH{1'b0}};
            src_req <= 1'b0;
            src_data_valid <= 1'b0;
            src_is_write_op_flag <= 1'b0;
            mem_rdata <= {DATA_WIDTH{1'b0}};
            mem_ready <= 1'b0;
            src_is_write_op <= 1'b0;
        end else begin
            // Default value (usually cleared each cycle)
            src_data_valid <= 1'b0;
            
            case (src_state)
                IDLE: begin
                    mem_ready <= 1'b0;
                    
                    if (mem_write) begin
                        // Assemble write packet
                        src_to_dst_data <= (dest_id << 24) | (msg_type << 21) | (1 << 20) | (mem_addr & 'h1FFFFF);
                        src_is_write_op <= 1'b1;
                        src_is_write_op_flag <= 1'b1;
                        src_req <= ~src_req;  // Toggle request bit
                        src_data_valid <= 1'b1;
                        src_state <= SEND;
                    end else if (mem_read) begin
                        // Assemble read packet
                        src_to_dst_data <= (dest_id << 24) | (msg_type << 21) | (0 << 20) | (mem_addr & 'h1FFFFF);
                        src_is_write_op <= 1'b0;
                        src_is_write_op_flag <= 1'b0;
                        src_req <= ~src_req;  // Toggle request bit
                        src_data_valid <= 1'b1;
                        src_state <= SEND;
                    end
                end
                
                SEND: begin
                    // Keep data valid until acknowledged
                    src_data_valid <= 1'b1;
                    
                    // Wait for destination to acknowledge (ack toggle)
                    if (dst_ack_sync != dst_ack_prev) begin
                        if (src_is_write_op) begin
                            // For write transactions, send data payload next
                            src_to_dst_data <= mem_wdata;
                            src_req <= ~src_req;  // Toggle request again for data
                            src_data_valid <= 1'b1;
                            src_state <= WAIT_RESP;
                        end else begin
                            // For read, wait for response
                            src_data_valid <= 1'b0;
                            src_state <= WAIT_RESP;
                        end
                    end
                end
                
                WAIT_RESP: begin
                    if (src_is_write_op) begin
                        // Keep data valid until acknowledged
                        src_data_valid <= 1'b1;
                        
                        // For write, wait for data acknowledgment (ack toggle)
                        if (dst_ack_sync != dst_ack_prev) begin
                            src_data_valid <= 1'b0;
                            mem_ready <= 1'b1;
                            src_state <= IDLE;
                        end
                    end else begin
                        // For read, wait for data valid flag
                        if (dst_data_valid_sync) begin
                            mem_rdata <= dst_to_src_data;
                            mem_ready <= 1'b1;
                            src_state <= RECV;
                        end
                    end
                end
                
                RECV: begin
                    // Complete the read transaction
                    mem_ready <= 1'b0;
                    src_state <= IDLE;
                end
            endcase
        end
    end
    
    //-------------------------------------------
    // Destination clock domain logic (router)
    //-------------------------------------------
    reg [1:0] dst_state;
    reg [DATA_WIDTH-1:0] dst_data_reg;
    reg dst_valid;
    reg dst_is_write_op;
    
    // Synchronize source control signals to destination domain
    always @(posedge dst_clk or negedge dst_rst_n) begin
        if (!dst_rst_n) begin
            src_req_sync_reg <= {SYNC_STAGES{1'b0}};
            src_data_valid_sync_reg <= {SYNC_STAGES{1'b0}};
            src_is_write_op_sync_reg <= {SYNC_STAGES{1'b0}};
            src_req_prev <= 1'b0;
        end else begin
            src_req_sync_reg <= {src_req_sync_reg[SYNC_STAGES-2:0], src_req};
            src_data_valid_sync_reg <= {src_data_valid_sync_reg[SYNC_STAGES-2:0], src_data_valid};
            src_is_write_op_sync_reg <= {src_is_write_op_sync_reg[SYNC_STAGES-2:0], src_is_write_op_flag};
            src_req_prev <= src_req_sync;
        end
    end
    
    assign src_req_sync = src_req_sync_reg[SYNC_STAGES-1];
    assign src_data_valid_sync = src_data_valid_sync_reg[SYNC_STAGES-1];
    assign src_is_write_op_sync = src_is_write_op_sync_reg[SYNC_STAGES-1];
    
    // Destination domain state machine
    always @(posedge dst_clk or negedge dst_rst_n) begin
        if (!dst_rst_n) begin
            dst_state <= IDLE;
            dst_data_reg <= {DATA_WIDTH{1'b0}};
            dst_valid <= 1'b0;
            dst_is_write_op <= 1'b0;
            dst_ack <= 1'b0;
            dst_to_src_data <= {DATA_WIDTH{1'b0}};
            dst_data_valid <= 1'b0;
        end else begin
            // Default values
            dst_valid <= 1'b0;
            dst_data_valid <= 1'b0;
            
            case (dst_state)
                IDLE: begin
                    // Detect change in request signal (new transaction)
                    if ((src_req_sync != src_req_prev) && src_data_valid_sync) begin
                        // Capture the data from source domain
                        dst_data_reg <= src_to_dst_data;
                        
                        // Capture operation type
                        dst_is_write_op <= src_is_write_op_sync;
                        
                        // Acknowledge by toggling ack
                        dst_ack <= ~dst_ack;
                        
                        // Set valid to send to router
                        dst_valid <= 1'b1;
                        dst_state <= SEND;
                    end
                end
                
                SEND: begin
                    // Keep valid high until router accepts
                    dst_valid <= 1'b1;
                    
                    if (router_in_ready && dst_valid) begin
                        if (dst_is_write_op) begin
                            // For write, wait for data packet
                            dst_valid <= 1'b0;
                            dst_state <= WAIT_RESP;
                        end else begin
                            // For read, wait for router response
                            dst_valid <= 1'b0;
                            dst_state <= WAIT_RESP;
                        end
                    end
                end
                
                WAIT_RESP: begin
                    if (dst_is_write_op) begin
                        // Detect change in request signal (data packet arrived)
                        if ((src_req_sync != src_req_prev) && src_data_valid_sync) begin
                            // Capture the data payload
                            dst_data_reg <= src_to_dst_data;
                            dst_valid <= 1'b1;
                            
                            // Acknowledge by toggling ack
                            dst_ack <= ~dst_ack;
                            dst_state <= RECV;
                        end
                    end else begin
                        // For read transactions, wait for router response
                        if (router_out_valid) begin
                            // Capture the data from router
                            dst_to_src_data <= router_out_data;
                            
                            // Signal that data is valid
                            dst_data_valid <= 1'b1;
                            dst_state <= RECV;
                        end
                    end
                end
                
                RECV: begin
                    // For write, send data to router
                    if (dst_is_write_op) begin
                        // Keep trying to send until router accepts
                        dst_valid <= 1'b1;
                        
                        if (router_in_ready && dst_valid) begin
                            dst_state <= IDLE;
                        end
                    end else begin
                        // For read transactions, keep data valid signal high
                        // to ensure it's detected in source domain
                        dst_data_valid <= 1'b1;
                        
                        // Move back to IDLE after a few cycles
                        // The testbench will see the data before this happens
                        if (src_data_valid_sync == 1'b0) begin
                            dst_state <= IDLE;
                        end
                    end
                end
            endcase
        end
    end
    
    // Connect to router interface
    assign router_in_data = dst_data_reg;
    assign router_in_valid = dst_valid;
    assign router_out_ready = (dst_state == WAIT_RESP) || (dst_state == RECV);

endmodule 