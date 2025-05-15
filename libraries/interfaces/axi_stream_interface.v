module axi_stream_interface #(
    parameter DATA_WIDTH = 32,
    parameter USER_WIDTH = 1,
    parameter DEST_WIDTH = 1,
    parameter ID_WIDTH = 1
)(
    // Global signals
    input  wire                     clk,
    input  wire                     rst_n,
    
    // Master interface (output)
    output reg  [DATA_WIDTH-1:0]    m_tdata,
    output reg                      m_tvalid,
    input  wire                     m_tready,
    output reg                      m_tlast,
    output reg  [DATA_WIDTH/8-1:0]  m_tstrb,
    output reg  [DATA_WIDTH/8-1:0]  m_tkeep,
    output reg  [USER_WIDTH-1:0]    m_tuser,
    output reg  [DEST_WIDTH-1:0]    m_tdest,
    output reg  [ID_WIDTH-1:0]      m_tid,
    
    // Slave interface (input)
    input  wire [DATA_WIDTH-1:0]    s_tdata,
    input  wire                     s_tvalid,
    output reg                      s_tready,
    input  wire                     s_tlast,
    input  wire [DATA_WIDTH/8-1:0]  s_tstrb,
    input  wire [DATA_WIDTH/8-1:0]  s_tkeep,
    input  wire [USER_WIDTH-1:0]    s_tuser,
    input  wire [DEST_WIDTH-1:0]    s_tdest,
    input  wire [ID_WIDTH-1:0]      s_tid
);

    // Control logic to be implemented

endmodule 