module mesh_router #(
    parameter DATA_WIDTH = 32,
    parameter VC_COUNT = 2,       // Virtual channel count
    parameter X_COORD = 0,        // Router X coordinate
    parameter Y_COORD = 0,        // Router Y coordinate
    parameter MESH_SIZE_X = 4,    // Mesh size in X dimension
    parameter MESH_SIZE_Y = 4     // Mesh size in Y dimension
)(
    // Global signals
    input  wire                     clk,
    input  wire                     rst_n,
    
    // North port
    input  wire [DATA_WIDTH-1:0]    north_in_data,
    input  wire                     north_in_valid,
    output wire                     north_in_ready,
    output wire [DATA_WIDTH-1:0]    north_out_data,
    output wire                     north_out_valid,
    input  wire                     north_out_ready,
    
    // East port
    input  wire [DATA_WIDTH-1:0]    east_in_data,
    input  wire                     east_in_valid,
    output wire                     east_in_ready,
    output wire [DATA_WIDTH-1:0]    east_out_data,
    output wire                     east_out_valid,
    input  wire                     east_out_ready,
    
    // South port
    input  wire [DATA_WIDTH-1:0]    south_in_data,
    input  wire                     south_in_valid,
    output wire                     south_in_ready,
    output wire [DATA_WIDTH-1:0]    south_out_data,
    output wire                     south_out_valid,
    input  wire                     south_out_ready,
    
    // West port
    input  wire [DATA_WIDTH-1:0]    west_in_data,
    input  wire                     west_in_valid,
    output wire                     west_in_ready,
    output wire [DATA_WIDTH-1:0]    west_out_data,
    output wire                     west_out_valid,
    input  wire                     west_out_ready,
    
    // Local port (to/from processing element)
    input  wire [DATA_WIDTH-1:0]    local_in_data,
    input  wire                     local_in_valid,
    output wire                     local_in_ready,
    output wire [DATA_WIDTH-1:0]    local_out_data,
    output wire                     local_out_valid,
    input  wire                     local_out_ready
);

    // Router implementation to be added

endmodule 