module wishbone_master #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter SELECT_WIDTH = DATA_WIDTH/8,
    parameter TAG_WIDTH = 1
)(
    // Global signals
    input  wire                      clk,
    input  wire                      rst_n,
    
    // Wishbone master interface
    output reg  [ADDR_WIDTH-1:0]     wb_adr_o,
    output reg  [DATA_WIDTH-1:0]     wb_dat_o,
    input  wire [DATA_WIDTH-1:0]     wb_dat_i,
    output reg                       wb_we_o,
    output reg  [SELECT_WIDTH-1:0]   wb_sel_o,
    output reg                       wb_stb_o,
    output reg                       wb_cyc_o,
    input  wire                      wb_ack_i,
    input  wire                      wb_err_i,
    input  wire                      wb_rty_i,
    output reg  [TAG_WIDTH-1:0]      wb_tgd_o,
    input  wire [TAG_WIDTH-1:0]      wb_tgd_i,
    
    // User interface
    input  wire                      write_req,
    input  wire [ADDR_WIDTH-1:0]     write_addr,
    input  wire [DATA_WIDTH-1:0]     write_data,
    input  wire [SELECT_WIDTH-1:0]   write_sel,
    output wire                      write_done,
    output wire                      write_err,
    
    input  wire                      read_req,
    input  wire [ADDR_WIDTH-1:0]     read_addr,
    input  wire [SELECT_WIDTH-1:0]   read_sel,
    output reg  [DATA_WIDTH-1:0]     read_data,
    output wire                      read_done,
    output wire                      read_err
);

    // FSM states and logic to be implemented

endmodule 