module axi_lite_master #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32
)(
    // Global signals
    input  wire                      clk,
    input  wire                      rst_n,
    
    // Write address channel
    output reg  [ADDR_WIDTH-1:0]     awaddr,
    output reg                       awvalid,
    input  wire                      awready,
    
    // Write data channel
    output reg  [DATA_WIDTH-1:0]     wdata,
    output reg  [DATA_WIDTH/8-1:0]   wstrb,
    output reg                       wvalid,
    input  wire                      wready,
    
    // Write response channel
    input  wire [1:0]                bresp,
    input  wire                      bvalid,
    output reg                       bready,
    
    // Read address channel
    output reg  [ADDR_WIDTH-1:0]     araddr,
    output reg                       arvalid,
    input  wire                      arready,
    
    // Read data channel
    input  wire [DATA_WIDTH-1:0]     rdata,
    input  wire [1:0]                rresp,
    input  wire                      rvalid,
    output reg                       rready,
    
    // User interface
    input  wire                      write_req,
    input  wire [ADDR_WIDTH-1:0]     write_addr,
    input  wire [DATA_WIDTH-1:0]     write_data,
    input  wire [DATA_WIDTH/8-1:0]   write_strb,
    output wire                      write_done,
    
    input  wire                      read_req,
    input  wire [ADDR_WIDTH-1:0]     read_addr,
    output reg  [DATA_WIDTH-1:0]     read_data,
    output wire                      read_done
);

    // FSM states and logic to be implemented

endmodule 