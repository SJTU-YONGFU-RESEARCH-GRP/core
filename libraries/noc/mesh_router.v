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

    // Number of ports
    localparam PORT_COUNT = 5; // North, East, South, West, Local
    
    // Port indices
    localparam NORTH = 0;
    localparam EAST  = 1;
    localparam SOUTH = 2;
    localparam WEST  = 3;
    localparam LOCAL = 4;
    
    // Packet format: [DATA_WIDTH-1:DATA_WIDTH-8] = Destination ID
    // For simplicity, we'll use XY routing where:
    // Destination ID = (Y * MESH_SIZE_X + X)
    
    // Input buffers for each port (simple 1-deep buffer for this example)
    reg [DATA_WIDTH-1:0] input_buffer [0:PORT_COUNT-1];
    reg [PORT_COUNT-1:0] input_buffer_valid;
    
    // Output assignments
    reg [DATA_WIDTH-1:0] output_data [0:PORT_COUNT-1];
    reg [PORT_COUNT-1:0] output_valid;
    wire [PORT_COUNT-1:0] output_ready;
    
    // Route computation
    wire [7:0] dest_id [0:PORT_COUNT-1];
    wire [3:0] dest_x [0:PORT_COUNT-1];
    wire [3:0] dest_y [0:PORT_COUNT-1];
    
    // Extract destination coordinates for each input port
    genvar i;
    generate
        for (i = 0; i < PORT_COUNT; i = i + 1) begin : dest_extract
            assign dest_id[i] = input_buffer[i][DATA_WIDTH-1:DATA_WIDTH-8];
            assign dest_x[i] = dest_id[i] % MESH_SIZE_X;
            assign dest_y[i] = dest_id[i] / MESH_SIZE_X;
        end
    endgenerate
    
    // Determine output port for each input based on XY routing
    function [2:0] route_xy;
        input [3:0] curr_x;
        input [3:0] curr_y;
        input [3:0] dest_x;
        input [3:0] dest_y;
        begin
            if (curr_x == dest_x && curr_y == dest_y)
                route_xy = LOCAL;
            else if (curr_x < dest_x)
                route_xy = EAST;
            else if (curr_x > dest_x)
                route_xy = WEST;
            else if (curr_y < dest_y)
                route_xy = SOUTH;
            else
                route_xy = NORTH;
        end
    endfunction
    
    // Route computation for each input
    wire [2:0] route [0:PORT_COUNT-1];
    
    generate
        for (i = 0; i < PORT_COUNT; i = i + 1) begin : route_compute
            assign route[i] = route_xy(X_COORD, Y_COORD, dest_x[i], dest_y[i]);
        end
    endgenerate
    
    // Simple round-robin arbitration for each output port
    reg [PORT_COUNT-1:0] arb_winner [0:PORT_COUNT-1];
    reg [PORT_COUNT-1:0] arb_priority [0:PORT_COUNT-1];
    
    // Input buffer control
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            input_buffer_valid <= {PORT_COUNT{1'b0}};
            
            // Initialize arbitration priorities
            arb_priority[NORTH] <= 5'b00001;
            arb_priority[EAST]  <= 5'b00010;
            arb_priority[SOUTH] <= 5'b00100;
            arb_priority[WEST]  <= 5'b01000;
            arb_priority[LOCAL] <= 5'b10000;
        end else begin
            // Store incoming data in input buffers
            if (north_in_valid && !input_buffer_valid[NORTH]) begin
                input_buffer[NORTH] <= north_in_data;
                input_buffer_valid[NORTH] <= 1'b1;
            end else if (input_buffer_valid[NORTH] && arb_winner[route[NORTH]][NORTH] && output_ready[route[NORTH]]) begin
                input_buffer_valid[NORTH] <= 1'b0;
            end
            
            if (east_in_valid && !input_buffer_valid[EAST]) begin
                input_buffer[EAST] <= east_in_data;
                input_buffer_valid[EAST] <= 1'b1;
            end else if (input_buffer_valid[EAST] && arb_winner[route[EAST]][EAST] && output_ready[route[EAST]]) begin
                input_buffer_valid[EAST] <= 1'b0;
            end
            
            if (south_in_valid && !input_buffer_valid[SOUTH]) begin
                input_buffer[SOUTH] <= south_in_data;
                input_buffer_valid[SOUTH] <= 1'b1;
            end else if (input_buffer_valid[SOUTH] && arb_winner[route[SOUTH]][SOUTH] && output_ready[route[SOUTH]]) begin
                input_buffer_valid[SOUTH] <= 1'b0;
            end
            
            if (west_in_valid && !input_buffer_valid[WEST]) begin
                input_buffer[WEST] <= west_in_data;
                input_buffer_valid[WEST] <= 1'b1;
            end else if (input_buffer_valid[WEST] && arb_winner[route[WEST]][WEST] && output_ready[route[WEST]]) begin
                input_buffer_valid[WEST] <= 1'b0;
            end
            
            if (local_in_valid && !input_buffer_valid[LOCAL]) begin
                input_buffer[LOCAL] <= local_in_data;
                input_buffer_valid[LOCAL] <= 1'b1;
            end else if (input_buffer_valid[LOCAL] && arb_winner[route[LOCAL]][LOCAL] && output_ready[route[LOCAL]]) begin
                input_buffer_valid[LOCAL] <= 1'b0;
            end
            
            // Update arbitration priorities (round-robin)
            for (integer j = 0; j < PORT_COUNT; j = j + 1) begin
                if (|arb_winner[j]) begin
                    // Rotate priority
                    arb_priority[j] <= {arb_priority[j][PORT_COUNT-2:0], arb_priority[j][PORT_COUNT-1]};
                end
            end
        end
    end
    
    // Arbitration and switching
    integer p, q;
    always @(*) begin
        // Default values
        for (p = 0; p < PORT_COUNT; p = p + 1) begin
            arb_winner[p] = {PORT_COUNT{1'b0}};
            output_valid[p] = 1'b0;
            output_data[p] = {DATA_WIDTH{1'b0}};
        end
        
        // Arbitrate for each output port
        for (p = 0; p < PORT_COUNT; p = p + 1) begin
            // Find highest priority requester for this output
            for (q = 0; q < PORT_COUNT; q = q + 1) begin
                if (input_buffer_valid[q] && route[q] == p) begin
                    // Check if this input has highest priority
                    if ((arb_priority[p] & (1 << q)) != 0) begin
                        arb_winner[p][q] = 1'b1;
                        output_valid[p] = 1'b1;
                        output_data[p] = input_buffer[q];
                        break;
                    end
                end
            end
        end
    end
    
    // Output port connections
    assign north_out_data = output_data[NORTH];
    assign north_out_valid = output_valid[NORTH];
    assign east_out_data = output_data[EAST];
    assign east_out_valid = output_valid[EAST];
    assign south_out_data = output_data[SOUTH];
    assign south_out_valid = output_valid[SOUTH];
    assign west_out_data = output_data[WEST];
    assign west_out_valid = output_valid[WEST];
    assign local_out_data = output_data[LOCAL];
    assign local_out_valid = output_valid[LOCAL];
    
    // Input ready signals
    assign north_in_ready = !input_buffer_valid[NORTH];
    assign east_in_ready = !input_buffer_valid[EAST];
    assign south_in_ready = !input_buffer_valid[SOUTH];
    assign west_in_ready = !input_buffer_valid[WEST];
    assign local_in_ready = !input_buffer_valid[LOCAL];
    
    // Output ready signals
    assign output_ready[NORTH] = north_out_ready;
    assign output_ready[EAST] = east_out_ready;
    assign output_ready[SOUTH] = south_out_ready;
    assign output_ready[WEST] = west_out_ready;
    assign output_ready[LOCAL] = local_out_ready;

endmodule 