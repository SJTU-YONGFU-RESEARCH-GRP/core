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
    output wire [DATA_WIDTH-1:0]    m_tdata,
    output wire                     m_tvalid,
    input  wire                     m_tready,
    output wire                     m_tlast,
    output wire [DATA_WIDTH/8-1:0]  m_tstrb,
    output wire [DATA_WIDTH/8-1:0]  m_tkeep,
    output wire [USER_WIDTH-1:0]    m_tuser,
    output wire [DEST_WIDTH-1:0]    m_tdest,
    output wire [ID_WIDTH-1:0]      m_tid,
    
    // Slave interface (input)
    input  wire [DATA_WIDTH-1:0]    s_tdata,
    input  wire                     s_tvalid,
    output wire                     s_tready,
    input  wire                     s_tlast,
    input  wire [DATA_WIDTH/8-1:0]  s_tstrb,
    input  wire [DATA_WIDTH/8-1:0]  s_tkeep,
    input  wire [USER_WIDTH-1:0]    s_tuser,
    input  wire [DEST_WIDTH-1:0]    s_tdest,
    input  wire [ID_WIDTH-1:0]      s_tid
);

    // Simple pass-through interface - directly connect signals
    assign m_tdata = s_tdata;
    assign m_tvalid = s_tvalid;
    assign s_tready = m_tready;
    assign m_tlast = s_tlast;
    assign m_tstrb = s_tstrb;
    assign m_tkeep = s_tkeep;
    assign m_tuser = s_tuser;
    assign m_tdest = s_tdest;
    assign m_tid = s_tid;

endmodule 