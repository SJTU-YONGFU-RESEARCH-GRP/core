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

    // Network interface implementation to be added

endmodule 