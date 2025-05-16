module network_interface #(
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 32,
    parameter VC_COUNT = 2,      // Virtual channel count
    parameter NODE_ID = 0        // Unique ID for this node
)(
    // Global signals
    input  wire                     clk,
    input  wire                     rst_n,
    
    // NoC router interface
    output wire [DATA_WIDTH-1:0]    router_in_data,
    output wire                     router_in_valid,
    input  wire                     router_in_ready,
    input  wire [DATA_WIDTH-1:0]    router_out_data,
    input  wire                     router_out_valid,
    output wire                     router_out_ready,
    
    // Local memory interface
    input  wire                     mem_write,
    input  wire                     mem_read,
    input  wire [ADDR_WIDTH-1:0]    mem_addr,
    input  wire [DATA_WIDTH-1:0]    mem_wdata,
    output reg  [DATA_WIDTH-1:0]    mem_rdata,
    output reg                      mem_ready,
    
    // Packetization parameters
    input  wire [7:0]               dest_id,    // Destination node ID
    input  wire [2:0]               msg_type    // Message type identifier
);

    // Packet format:
    // [DATA_WIDTH-1:DATA_WIDTH-8] : Destination ID
    // [DATA_WIDTH-9:DATA_WIDTH-11]: Message Type
    // [DATA_WIDTH-12:DATA_WIDTH-19]: Source ID
    // [DATA_WIDTH-20:DATA_WIDTH-20]: Read/Write (1=write, 0=read)
    // [DATA_WIDTH-21:0]: Address/Data payload

    // State machine states
    localparam IDLE = 2'b00;
    localparam SEND = 2'b01;
    localparam WAIT_RESP = 2'b10;
    localparam RECV = 2'b11;
    
    reg [1:0] state;
    reg [DATA_WIDTH-1:0] tx_data;
    reg tx_valid;
    
    // Packet assembly
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
            tx_data <= {DATA_WIDTH{1'b0}};
            tx_valid <= 1'b0;
            mem_rdata <= {DATA_WIDTH{1'b0}};
            mem_ready <= 1'b0;
        end else begin
            case (state)
                IDLE: begin
                    mem_ready <= 1'b0;
                    
                    if (mem_write) begin
                        // Assemble write packet
                        tx_data <= {dest_id, msg_type, NODE_ID[7:0], 1'b1, mem_addr[ADDR_WIDTH-22:0]};
                        tx_valid <= 1'b1;
                        state <= SEND;
                    end else if (mem_read) begin
                        // Assemble read packet
                        tx_data <= {dest_id, msg_type, NODE_ID[7:0], 1'b0, mem_addr[ADDR_WIDTH-22:0]};
                        tx_valid <= 1'b1;
                        state <= SEND;
                    end
                end
                
                SEND: begin
                    if (router_in_ready && tx_valid) begin
                        if (mem_write) begin
                            // For write, send data in next cycle
                            tx_data <= mem_wdata;
                            state <= WAIT_RESP;
                        end else begin
                            // For read, wait for response
                            tx_valid <= 1'b0;
                            state <= WAIT_RESP;
                        end
                    end
                end
                
                WAIT_RESP: begin
                    if (mem_write && router_in_ready && tx_valid) begin
                        // Write data packet sent
                        tx_valid <= 1'b0;
                        mem_ready <= 1'b1;
                        state <= IDLE;
                    end else if (router_out_valid) begin
                        // Received response for read
                        mem_rdata <= router_out_data;
                        mem_ready <= 1'b1;
                        state <= RECV;
                    end
                end
                
                RECV: begin
                    // Complete the read transaction
                    mem_ready <= 1'b0;
                    state <= IDLE;
                end
            endcase
        end
    end
    
    // Connect to router interface
    assign router_in_data = tx_data;
    assign router_in_valid = tx_valid;
    assign router_out_ready = (state == WAIT_RESP) || (state == RECV);

endmodule 