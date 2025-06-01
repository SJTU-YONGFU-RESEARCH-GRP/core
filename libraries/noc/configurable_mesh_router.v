// Configurable Mesh Network-on-Chip Router
// Supports parameterized data width and address width
// Implements XY routing algorithm for 2D mesh topology
// Has four directional ports (North, East, South, West) and one local port

module configurable_mesh_router #(
    parameter DATA_WIDTH = 32,     // Width of data
    parameter ADDR_WIDTH = 8,      // Width of address
    parameter X_ADDR_WIDTH = 4,    // Width of X coordinate in address
    parameter Y_ADDR_WIDTH = 4,    // Width of Y coordinate in address
    parameter FIFO_DEPTH = 4       // Depth of input FIFOs
) (
    input  wire                       clk,
    input  wire                       rst_n,
    
    // Router coordinates
    input  wire [X_ADDR_WIDTH-1:0]    local_x_addr,
    input  wire [Y_ADDR_WIDTH-1:0]    local_y_addr,
    
    // North port
    input  wire                       north_valid_i,
    input  wire [DATA_WIDTH-1:0]      north_data_i,
    input  wire [ADDR_WIDTH-1:0]      north_addr_i,
    output wire                       north_ready_o,
    output wire                       north_valid_o,
    output wire [DATA_WIDTH-1:0]      north_data_o,
    output wire [ADDR_WIDTH-1:0]      north_addr_o,
    input  wire                       north_ready_i,
    
    // East port
    input  wire                       east_valid_i,
    input  wire [DATA_WIDTH-1:0]      east_data_i,
    input  wire [ADDR_WIDTH-1:0]      east_addr_i,
    output wire                       east_ready_o,
    output wire                       east_valid_o,
    output wire [DATA_WIDTH-1:0]      east_data_o,
    output wire [ADDR_WIDTH-1:0]      east_addr_o,
    input  wire                       east_ready_i,
    
    // South port
    input  wire                       south_valid_i,
    input  wire [DATA_WIDTH-1:0]      south_data_i,
    input  wire [ADDR_WIDTH-1:0]      south_addr_i,
    output wire                       south_ready_o,
    output wire                       south_valid_o,
    output wire [DATA_WIDTH-1:0]      south_data_o,
    output wire [ADDR_WIDTH-1:0]      south_addr_o,
    input  wire                       south_ready_i,
    
    // West port
    input  wire                       west_valid_i,
    input  wire [DATA_WIDTH-1:0]      west_data_i,
    input  wire [ADDR_WIDTH-1:0]      west_addr_i,
    output wire                       west_ready_o,
    output wire                       west_valid_o,
    output wire [DATA_WIDTH-1:0]      west_data_o,
    output wire [ADDR_WIDTH-1:0]      west_addr_o,
    input  wire                       west_ready_i,
    
    // Local port
    input  wire                       local_valid_i,
    input  wire [DATA_WIDTH-1:0]      local_data_i,
    input  wire [ADDR_WIDTH-1:0]      local_addr_i,
    output wire                       local_ready_o,
    output wire                       local_valid_o,
    output wire [DATA_WIDTH-1:0]      local_data_o,
    output wire [ADDR_WIDTH-1:0]      local_addr_o,
    input  wire                       local_ready_i
);

    // Define port indices
    localparam NORTH = 0;
    localparam EAST  = 1;
    localparam SOUTH = 2;
    localparam WEST  = 3;
    localparam LOCAL = 4;
    localparam NUM_PORTS = 5;
    
    // Packet format: {dest_addr, data}
    localparam PACKET_WIDTH = DATA_WIDTH + ADDR_WIDTH;
    
    // Input FIFOs
    reg  [PACKET_WIDTH-1:0] input_fifo_0 [0:FIFO_DEPTH-1];
    reg  [PACKET_WIDTH-1:0] input_fifo_1 [0:FIFO_DEPTH-1];
    reg  [PACKET_WIDTH-1:0] input_fifo_2 [0:FIFO_DEPTH-1];
    reg  [PACKET_WIDTH-1:0] input_fifo_3 [0:FIFO_DEPTH-1];
    reg  [PACKET_WIDTH-1:0] input_fifo_4 [0:FIFO_DEPTH-1];
    reg  [$clog2(FIFO_DEPTH)+1:0] fifo_count_0;
    reg  [$clog2(FIFO_DEPTH)+1:0] fifo_count_1;
    reg  [$clog2(FIFO_DEPTH)+1:0] fifo_count_2;
    reg  [$clog2(FIFO_DEPTH)+1:0] fifo_count_3;
    reg  [$clog2(FIFO_DEPTH)+1:0] fifo_count_4;
    reg  [$clog2(FIFO_DEPTH)-1:0] read_ptr_0;
    reg  [$clog2(FIFO_DEPTH)-1:0] read_ptr_1;
    reg  [$clog2(FIFO_DEPTH)-1:0] read_ptr_2;
    reg  [$clog2(FIFO_DEPTH)-1:0] read_ptr_3;
    reg  [$clog2(FIFO_DEPTH)-1:0] read_ptr_4;
    reg  [$clog2(FIFO_DEPTH)-1:0] write_ptr_0;
    reg  [$clog2(FIFO_DEPTH)-1:0] write_ptr_1;
    reg  [$clog2(FIFO_DEPTH)-1:0] write_ptr_2;
    reg  [$clog2(FIFO_DEPTH)-1:0] write_ptr_3;
    reg  [$clog2(FIFO_DEPTH)-1:0] write_ptr_4;
    
    // FIFO status signals
    wire [NUM_PORTS-1:0] fifo_empty;
    wire [NUM_PORTS-1:0] fifo_full;
    
    // Output arbitration
    reg  [NUM_PORTS-1:0] output_grant_0;
    reg  [NUM_PORTS-1:0] output_grant_1;
    reg  [NUM_PORTS-1:0] output_grant_2;
    reg  [NUM_PORTS-1:0] output_grant_3;
    reg  [NUM_PORTS-1:0] output_grant_4;
    wire [NUM_PORTS-1:0] output_request_0;
    wire [NUM_PORTS-1:0] output_request_1;
    wire [NUM_PORTS-1:0] output_request_2;
    wire [NUM_PORTS-1:0] output_request_3;
    wire [NUM_PORTS-1:0] output_request_4;
    reg  [$clog2(NUM_PORTS)-1:0] arb_ptr_0;
    reg  [$clog2(NUM_PORTS)-1:0] arb_ptr_1;
    reg  [$clog2(NUM_PORTS)-1:0] arb_ptr_2;
    reg  [$clog2(NUM_PORTS)-1:0] arb_ptr_3;
    reg  [$clog2(NUM_PORTS)-1:0] arb_ptr_4;
    
    // Arbitration flags
    reg found_grant_0;
    reg found_grant_1;
    reg found_grant_2;
    reg found_grant_3;
    reg found_grant_4;
    
    // Arbitration indices
    reg [$clog2(NUM_PORTS)-1:0] arb_idx_0;
    reg [$clog2(NUM_PORTS)-1:0] arb_idx_1;
    reg [$clog2(NUM_PORTS)-1:0] arb_idx_2;
    reg [$clog2(NUM_PORTS)-1:0] arb_idx_3;
    reg [$clog2(NUM_PORTS)-1:0] arb_idx_4;
    
    // Packet data at FIFO heads
    wire [PACKET_WIDTH-1:0] fifo_head_0;
    wire [PACKET_WIDTH-1:0] fifo_head_1;
    wire [PACKET_WIDTH-1:0] fifo_head_2;
    wire [PACKET_WIDTH-1:0] fifo_head_3;
    wire [PACKET_WIDTH-1:0] fifo_head_4;
    wire [ADDR_WIDTH-1:0] dest_addr_0;
    wire [ADDR_WIDTH-1:0] dest_addr_1;
    wire [ADDR_WIDTH-1:0] dest_addr_2;
    wire [ADDR_WIDTH-1:0] dest_addr_3;
    wire [ADDR_WIDTH-1:0] dest_addr_4;
    wire [DATA_WIDTH-1:0] payload_0;
    wire [DATA_WIDTH-1:0] payload_1;
    wire [DATA_WIDTH-1:0] payload_2;
    wire [DATA_WIDTH-1:0] payload_3;
    wire [DATA_WIDTH-1:0] payload_4;
    
    // Route computation results
    reg [2:0] route_port_0;
    reg [2:0] route_port_1;
    reg [2:0] route_port_2;
    reg [2:0] route_port_3;
    reg [2:0] route_port_4;
    
    // Output data registers
    reg [NUM_PORTS-1:0] valid_o;
    reg [DATA_WIDTH-1:0] data_o_0;
    reg [DATA_WIDTH-1:0] data_o_1;
    reg [DATA_WIDTH-1:0] data_o_2;
    reg [DATA_WIDTH-1:0] data_o_3;
    reg [DATA_WIDTH-1:0] data_o_4;
    reg [ADDR_WIDTH-1:0] addr_o_0;
    reg [ADDR_WIDTH-1:0] addr_o_1;
    reg [ADDR_WIDTH-1:0] addr_o_2;
    reg [ADDR_WIDTH-1:0] addr_o_3;
    reg [ADDR_WIDTH-1:0] addr_o_4;
    
    // Loop variables for output data assignment
    integer j;
    integer k;
    
    // genvar for all generate loops
    genvar i;
    
    // Extract destination addresses from head of each FIFO
    generate
        for (i = 0; i < NUM_PORTS; i = i + 1) begin : gen_fifo_heads
            assign fifo_head_0 = input_fifo_0[read_ptr_0];
            assign fifo_head_1 = input_fifo_1[read_ptr_1];
            assign fifo_head_2 = input_fifo_2[read_ptr_2];
            assign fifo_head_3 = input_fifo_3[read_ptr_3];
            assign fifo_head_4 = input_fifo_4[read_ptr_4];
            assign dest_addr_0 = fifo_head_0[PACKET_WIDTH-1:DATA_WIDTH];
            assign dest_addr_1 = fifo_head_1[PACKET_WIDTH-1:DATA_WIDTH];
            assign dest_addr_2 = fifo_head_2[PACKET_WIDTH-1:DATA_WIDTH];
            assign dest_addr_3 = fifo_head_3[PACKET_WIDTH-1:DATA_WIDTH];
            assign dest_addr_4 = fifo_head_4[PACKET_WIDTH-1:DATA_WIDTH];
            assign payload_0 = fifo_head_0[DATA_WIDTH-1:0];
            assign payload_1 = fifo_head_1[DATA_WIDTH-1:0];
            assign payload_2 = fifo_head_2[DATA_WIDTH-1:0];
            assign payload_3 = fifo_head_3[DATA_WIDTH-1:0];
            assign payload_4 = fifo_head_4[DATA_WIDTH-1:0];
        end
    endgenerate
    
    // Input port to FIFO mapping
    wire [NUM_PORTS-1:0] valid_i;
    wire [PACKET_WIDTH-1:0] packet_i [0:NUM_PORTS-1];
    wire [NUM_PORTS-1:0] ready_o;
    
    assign valid_i[NORTH] = north_valid_i;
    assign valid_i[EAST]  = east_valid_i;
    assign valid_i[SOUTH] = south_valid_i;
    assign valid_i[WEST]  = west_valid_i;
    assign valid_i[LOCAL] = local_valid_i;
    
    assign packet_i[NORTH] = {north_addr_i, north_data_i};
    assign packet_i[EAST]  = {east_addr_i, east_data_i};
    assign packet_i[SOUTH] = {south_addr_i, south_data_i};
    assign packet_i[WEST]  = {west_addr_i, west_data_i};
    assign packet_i[LOCAL] = {local_addr_i, local_data_i};
    
    assign north_ready_o = ready_o[NORTH];
    assign east_ready_o  = ready_o[EAST];
    assign south_ready_o = ready_o[SOUTH];
    assign west_ready_o  = ready_o[WEST];
    assign local_ready_o = ready_o[LOCAL];
    
    // Output port mapping
    wire [NUM_PORTS-1:0] ready_i;
    
    assign north_valid_o = valid_o[NORTH];
    assign east_valid_o  = valid_o[EAST];
    assign south_valid_o = valid_o[SOUTH];
    assign west_valid_o  = valid_o[WEST];
    assign local_valid_o = valid_o[LOCAL];
    
    assign north_data_o = data_o_0;
    assign east_data_o  = data_o_1;
    assign south_data_o = data_o_2;
    assign west_data_o  = data_o_3;
    assign local_data_o = data_o_4;
    
    assign north_addr_o = addr_o_0;
    assign east_addr_o  = addr_o_1;
    assign south_addr_o = addr_o_2;
    assign west_addr_o  = addr_o_3;
    assign local_addr_o = addr_o_4;
    
    assign ready_i[NORTH] = north_ready_i;
    assign ready_i[EAST]  = east_ready_i;
    assign ready_i[SOUTH] = south_ready_i;
    assign ready_i[WEST]  = west_ready_i;
    assign ready_i[LOCAL] = local_ready_i;
    
    // FIFO status
    assign fifo_empty[0] = (fifo_count_0 == 0);
    assign fifo_empty[1] = (fifo_count_1 == 0);
    assign fifo_empty[2] = (fifo_count_2 == 0);
    assign fifo_empty[3] = (fifo_count_3 == 0);
    assign fifo_empty[4] = (fifo_count_4 == 0);
    
    assign fifo_full[0] = (fifo_count_0 == FIFO_DEPTH);
    assign fifo_full[1] = (fifo_count_1 == FIFO_DEPTH);
    assign fifo_full[2] = (fifo_count_2 == FIFO_DEPTH);
    assign fifo_full[3] = (fifo_count_3 == FIFO_DEPTH);
    assign fifo_full[4] = (fifo_count_4 == FIFO_DEPTH);
    
    assign ready_o[0] = ~fifo_full[0];
    assign ready_o[1] = ~fifo_full[1];
    assign ready_o[2] = ~fifo_full[2];
    assign ready_o[3] = ~fifo_full[3];
    assign ready_o[4] = ~fifo_full[4];
    
    // Route computation for each port
    // Port 0 (North)
    wire [X_ADDR_WIDTH-1:0] dest_x_0;
    wire [Y_ADDR_WIDTH-1:0] dest_y_0;
    assign dest_x_0 = dest_addr_0[ADDR_WIDTH-1:ADDR_WIDTH-X_ADDR_WIDTH];
    assign dest_y_0 = dest_addr_0[ADDR_WIDTH-X_ADDR_WIDTH-1:ADDR_WIDTH-X_ADDR_WIDTH-Y_ADDR_WIDTH];
    
    always @(*) begin
        if (dest_x_0 == local_x_addr && dest_y_0 == local_y_addr) begin
            route_port_0 = LOCAL;
        end else if (dest_x_0 > local_x_addr) begin
            route_port_0 = EAST;
        end else if (dest_x_0 < local_x_addr) begin
            route_port_0 = WEST;
        end else if (dest_y_0 > local_y_addr) begin
            route_port_0 = SOUTH;
        end else begin
            route_port_0 = NORTH;
        end
    end
    assign output_request_0 = fifo_empty[0] ? 5'b00000 : (1 << route_port_0);
    
    // Port 1 (East)
    wire [X_ADDR_WIDTH-1:0] dest_x_1;
    wire [Y_ADDR_WIDTH-1:0] dest_y_1;
    assign dest_x_1 = dest_addr_1[ADDR_WIDTH-1:ADDR_WIDTH-X_ADDR_WIDTH];
    assign dest_y_1 = dest_addr_1[ADDR_WIDTH-X_ADDR_WIDTH-1:ADDR_WIDTH-X_ADDR_WIDTH-Y_ADDR_WIDTH];
    
    always @(*) begin
        if (dest_x_1 == local_x_addr && dest_y_1 == local_y_addr) begin
            route_port_1 = LOCAL;
        end else if (dest_x_1 > local_x_addr) begin
            route_port_1 = EAST;
        end else if (dest_x_1 < local_x_addr) begin
            route_port_1 = WEST;
        end else if (dest_y_1 > local_y_addr) begin
            route_port_1 = SOUTH;
        end else begin
            route_port_1 = NORTH;
        end
    end
    assign output_request_1 = fifo_empty[1] ? 5'b00000 : (1 << route_port_1);
    
    // Port 2 (South)
    wire [X_ADDR_WIDTH-1:0] dest_x_2;
    wire [Y_ADDR_WIDTH-1:0] dest_y_2;
    assign dest_x_2 = dest_addr_2[ADDR_WIDTH-1:ADDR_WIDTH-X_ADDR_WIDTH];
    assign dest_y_2 = dest_addr_2[ADDR_WIDTH-X_ADDR_WIDTH-1:ADDR_WIDTH-X_ADDR_WIDTH-Y_ADDR_WIDTH];
    
    always @(*) begin
        if (dest_x_2 == local_x_addr && dest_y_2 == local_y_addr) begin
            route_port_2 = LOCAL;
        end else if (dest_x_2 > local_x_addr) begin
            route_port_2 = EAST;
        end else if (dest_x_2 < local_x_addr) begin
            route_port_2 = WEST;
        end else if (dest_y_2 > local_y_addr) begin
            route_port_2 = SOUTH;
        end else begin
            route_port_2 = NORTH;
        end
    end
    assign output_request_2 = fifo_empty[2] ? 5'b00000 : (1 << route_port_2);
    
    // Port 3 (West)
    wire [X_ADDR_WIDTH-1:0] dest_x_3;
    wire [Y_ADDR_WIDTH-1:0] dest_y_3;
    assign dest_x_3 = dest_addr_3[ADDR_WIDTH-1:ADDR_WIDTH-X_ADDR_WIDTH];
    assign dest_y_3 = dest_addr_3[ADDR_WIDTH-X_ADDR_WIDTH-1:ADDR_WIDTH-X_ADDR_WIDTH-Y_ADDR_WIDTH];
    
    always @(*) begin
        if (dest_x_3 == local_x_addr && dest_y_3 == local_y_addr) begin
            route_port_3 = LOCAL;
        end else if (dest_x_3 > local_x_addr) begin
            route_port_3 = EAST;
        end else if (dest_x_3 < local_x_addr) begin
            route_port_3 = WEST;
        end else if (dest_y_3 > local_y_addr) begin
            route_port_3 = SOUTH;
        end else begin
            route_port_3 = NORTH;
        end
    end
    assign output_request_3 = fifo_empty[3] ? 5'b00000 : (1 << route_port_3);
    
    // Port 4 (Local)
    wire [X_ADDR_WIDTH-1:0] dest_x_4;
    wire [Y_ADDR_WIDTH-1:0] dest_y_4;
    assign dest_x_4 = dest_addr_4[ADDR_WIDTH-1:ADDR_WIDTH-X_ADDR_WIDTH];
    assign dest_y_4 = dest_addr_4[ADDR_WIDTH-X_ADDR_WIDTH-1:ADDR_WIDTH-X_ADDR_WIDTH-Y_ADDR_WIDTH];
    
    always @(*) begin
        if (dest_x_4 == local_x_addr && dest_y_4 == local_y_addr) begin
            route_port_4 = LOCAL;
        end else if (dest_x_4 > local_x_addr) begin
            route_port_4 = EAST;
        end else if (dest_x_4 < local_x_addr) begin
            route_port_4 = WEST;
        end else if (dest_y_4 > local_y_addr) begin
            route_port_4 = SOUTH;
        end else begin
            route_port_4 = NORTH;
        end
    end
    assign output_request_4 = fifo_empty[4] ? 5'b00000 : (1 << route_port_4);
    
    // Round-robin arbitration for each output port
    // Port 0 (North)
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            arb_ptr_0 <= 0;
        end else begin
            if (|output_grant_0) begin
                arb_ptr_0 <= arb_ptr_0 + 1;
                if (arb_ptr_0 == NUM_PORTS-1) begin
                    arb_ptr_0 <= 0;
                end
            end
        end
    end
    
    always @(*) begin
        output_grant_0 = 5'b00000;
        found_grant_0 = 1'b0;
        for (k = 0; k < NUM_PORTS; k = k + 1) begin
            arb_idx_0 = (arb_ptr_0 + k) % NUM_PORTS;
            if (!found_grant_0 && output_request_0[arb_idx_0]) begin
                output_grant_0[arb_idx_0] = 1'b1;
                found_grant_0 = 1'b1;
            end
        end
    end
    
    // Port 1 (East)
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            arb_ptr_1 <= 0;
        end else begin
            if (|output_grant_1) begin
                arb_ptr_1 <= arb_ptr_1 + 1;
                if (arb_ptr_1 == NUM_PORTS-1) begin
                    arb_ptr_1 <= 0;
                end
            end
        end
    end
    
    always @(*) begin
        output_grant_1 = 5'b00000;
        found_grant_1 = 1'b0;
        for (k = 0; k < NUM_PORTS; k = k + 1) begin
            arb_idx_1 = (arb_ptr_1 + k) % NUM_PORTS;
            if (!found_grant_1 && output_request_1[arb_idx_1]) begin
                output_grant_1[arb_idx_1] = 1'b1;
                found_grant_1 = 1'b1;
            end
        end
    end
    
    // Port 2 (South)
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            arb_ptr_2 <= 0;
        end else begin
            if (|output_grant_2) begin
                arb_ptr_2 <= arb_ptr_2 + 1;
                if (arb_ptr_2 == NUM_PORTS-1) begin
                    arb_ptr_2 <= 0;
                end
            end
        end
    end
    
    always @(*) begin
        output_grant_2 = 5'b00000;
        found_grant_2 = 1'b0;
        for (k = 0; k < NUM_PORTS; k = k + 1) begin
            arb_idx_2 = (arb_ptr_2 + k) % NUM_PORTS;
            if (!found_grant_2 && output_request_2[arb_idx_2]) begin
                output_grant_2[arb_idx_2] = 1'b1;
                found_grant_2 = 1'b1;
            end
        end
    end
    
    // Port 3 (West)
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            arb_ptr_3 <= 0;
        end else begin
            if (|output_grant_3) begin
                arb_ptr_3 <= arb_ptr_3 + 1;
                if (arb_ptr_3 == NUM_PORTS-1) begin
                    arb_ptr_3 <= 0;
                end
            end
        end
    end
    
    always @(*) begin
        output_grant_3 = 5'b00000;
        found_grant_3 = 1'b0;
        for (k = 0; k < NUM_PORTS; k = k + 1) begin
            arb_idx_3 = (arb_ptr_3 + k) % NUM_PORTS;
            if (!found_grant_3 && output_request_3[arb_idx_3]) begin
                output_grant_3[arb_idx_3] = 1'b1;
                found_grant_3 = 1'b1;
            end
        end
    end
    
    // Port 4 (Local)
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            arb_ptr_4 <= 0;
        end else begin
            if (|output_grant_4) begin
                arb_ptr_4 <= arb_ptr_4 + 1;
                if (arb_ptr_4 == NUM_PORTS-1) begin
                    arb_ptr_4 <= 0;
                end
            end
        end
    end
    
    always @(*) begin
        output_grant_4 = 5'b00000;
        found_grant_4 = 1'b0;
        for (k = 0; k < NUM_PORTS; k = k + 1) begin
            arb_idx_4 = (arb_ptr_4 + k) % NUM_PORTS;
            if (!found_grant_4 && output_request_4[arb_idx_4]) begin
                output_grant_4[arb_idx_4] = 1'b1;
                found_grant_4 = 1'b1;
            end
        end
    end
    
    // FIFO control for each port
    // Port 0 (North)
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            fifo_count_0 <= 0;
            read_ptr_0 <= 0;
            write_ptr_0 <= 0;
            for (j = 0; j < FIFO_DEPTH; j = j + 1) begin
                input_fifo_0[j] <= 0;
            end
        end else begin
            if (valid_i[0] && !fifo_full[0]) begin
                input_fifo_0[write_ptr_0] <= packet_i[0];
                if (write_ptr_0 == (FIFO_DEPTH-1)) begin
                    write_ptr_0 <= 0;
                end else begin
                    write_ptr_0 <= write_ptr_0 + 1;
                end
                fifo_count_0 <= fifo_count_0 + 1;
            end
            
            if (|{output_grant_0[0], output_grant_1[0], output_grant_2[0], 
                 output_grant_3[0], output_grant_4[0]} && !fifo_empty[0] && 
                 ready_i[route_port_0]) begin
                if (read_ptr_0 == (FIFO_DEPTH-1)) begin
                    read_ptr_0 <= 0;
                end else begin
                    read_ptr_0 <= read_ptr_0 + 1;
                end
                fifo_count_0 <= fifo_count_0 - 1;
            end
        end
    end
    
    // Port 1 (East)
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            fifo_count_1 <= 0;
            read_ptr_1 <= 0;
            write_ptr_1 <= 0;
            for (j = 0; j < FIFO_DEPTH; j = j + 1) begin
                input_fifo_1[j] <= 0;
            end
        end else begin
            if (valid_i[1] && !fifo_full[1]) begin
                input_fifo_1[write_ptr_1] <= packet_i[1];
                if (write_ptr_1 == (FIFO_DEPTH-1)) begin
                    write_ptr_1 <= 0;
                end else begin
                    write_ptr_1 <= write_ptr_1 + 1;
                end
                fifo_count_1 <= fifo_count_1 + 1;
            end
            
            if (|{output_grant_0[1], output_grant_1[1], output_grant_2[1], 
                 output_grant_3[1], output_grant_4[1]} && !fifo_empty[1] && 
                 ready_i[route_port_1]) begin
                if (read_ptr_1 == (FIFO_DEPTH-1)) begin
                    read_ptr_1 <= 0;
                end else begin
                    read_ptr_1 <= read_ptr_1 + 1;
                end
                fifo_count_1 <= fifo_count_1 - 1;
            end
        end
    end
    
    // Port 2 (South)
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            fifo_count_2 <= 0;
            read_ptr_2 <= 0;
            write_ptr_2 <= 0;
            for (j = 0; j < FIFO_DEPTH; j = j + 1) begin
                input_fifo_2[j] <= 0;
            end
        end else begin
            if (valid_i[2] && !fifo_full[2]) begin
                input_fifo_2[write_ptr_2] <= packet_i[2];
                if (write_ptr_2 == (FIFO_DEPTH-1)) begin
                    write_ptr_2 <= 0;
                end else begin
                    write_ptr_2 <= write_ptr_2 + 1;
                end
                fifo_count_2 <= fifo_count_2 + 1;
            end
            
            if (|{output_grant_0[2], output_grant_1[2], output_grant_2[2], 
                 output_grant_3[2], output_grant_4[2]} && !fifo_empty[2] && 
                 ready_i[route_port_2]) begin
                if (read_ptr_2 == (FIFO_DEPTH-1)) begin
                    read_ptr_2 <= 0;
                end else begin
                    read_ptr_2 <= read_ptr_2 + 1;
                end
                fifo_count_2 <= fifo_count_2 - 1;
            end
        end
    end
    
    // Port 3 (West)
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            fifo_count_3 <= 0;
            read_ptr_3 <= 0;
            write_ptr_3 <= 0;
            for (j = 0; j < FIFO_DEPTH; j = j + 1) begin
                input_fifo_3[j] <= 0;
            end
        end else begin
            if (valid_i[3] && !fifo_full[3]) begin
                input_fifo_3[write_ptr_3] <= packet_i[3];
                if (write_ptr_3 == (FIFO_DEPTH-1)) begin
                    write_ptr_3 <= 0;
                end else begin
                    write_ptr_3 <= write_ptr_3 + 1;
                end
                fifo_count_3 <= fifo_count_3 + 1;
            end
            
            if (|{output_grant_0[3], output_grant_1[3], output_grant_2[3], 
                 output_grant_3[3], output_grant_4[3]} && !fifo_empty[3] && 
                 ready_i[route_port_3]) begin
                if (read_ptr_3 == (FIFO_DEPTH-1)) begin
                    read_ptr_3 <= 0;
                end else begin
                    read_ptr_3 <= read_ptr_3 + 1;
                end
                fifo_count_3 <= fifo_count_3 - 1;
            end
        end
    end
    
    // Port 4 (Local)
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            fifo_count_4 <= 0;
            read_ptr_4 <= 0;
            write_ptr_4 <= 0;
            for (j = 0; j < FIFO_DEPTH; j = j + 1) begin
                input_fifo_4[j] <= 0;
            end
        end else begin
            if (valid_i[4] && !fifo_full[4]) begin
                input_fifo_4[write_ptr_4] <= packet_i[4];
                if (write_ptr_4 == (FIFO_DEPTH-1)) begin
                    write_ptr_4 <= 0;
                end else begin
                    write_ptr_4 <= write_ptr_4 + 1;
                end
                fifo_count_4 <= fifo_count_4 + 1;
            end
            
            if (|{output_grant_0[4], output_grant_1[4], output_grant_2[4], 
                 output_grant_3[4], output_grant_4[4]} && !fifo_empty[4] && 
                 ready_i[route_port_4]) begin
                if (read_ptr_4 == (FIFO_DEPTH-1)) begin
                    read_ptr_4 <= 0;
                end else begin
                    read_ptr_4 <= read_ptr_4 + 1;
                end
                fifo_count_4 <= fifo_count_4 - 1;
            end
        end
    end
    
    // Output data assignment
    always @(*) begin
        // North port
        valid_o[0] = 1'b0;
        data_o_0 = {DATA_WIDTH{1'b0}};
        addr_o_0 = {ADDR_WIDTH{1'b0}};
        if (output_grant_0[0] && !fifo_empty[0] && ready_i[0]) begin
            valid_o[0] = 1'b1;
            data_o_0 = payload_0;
            addr_o_0 = dest_addr_0;
        end
        if (output_grant_1[0] && !fifo_empty[1] && ready_i[0]) begin
            valid_o[0] = 1'b1;
            data_o_0 = payload_1;
            addr_o_0 = dest_addr_1;
        end
        if (output_grant_2[0] && !fifo_empty[2] && ready_i[0]) begin
            valid_o[0] = 1'b1;
            data_o_0 = payload_2;
            addr_o_0 = dest_addr_2;
        end
        if (output_grant_3[0] && !fifo_empty[3] && ready_i[0]) begin
            valid_o[0] = 1'b1;
            data_o_0 = payload_3;
            addr_o_0 = dest_addr_3;
        end
        if (output_grant_4[0] && !fifo_empty[4] && ready_i[0]) begin
            valid_o[0] = 1'b1;
            data_o_0 = payload_4;
            addr_o_0 = dest_addr_4;
        end
        
        // East port
        valid_o[1] = 1'b0;
        data_o_1 = {DATA_WIDTH{1'b0}};
        addr_o_1 = {ADDR_WIDTH{1'b0}};
        if (output_grant_0[1] && !fifo_empty[0] && ready_i[1]) begin
            valid_o[1] = 1'b1;
            data_o_1 = payload_0;
            addr_o_1 = dest_addr_0;
        end
        if (output_grant_1[1] && !fifo_empty[1] && ready_i[1]) begin
            valid_o[1] = 1'b1;
            data_o_1 = payload_1;
            addr_o_1 = dest_addr_1;
        end
        if (output_grant_2[1] && !fifo_empty[2] && ready_i[1]) begin
            valid_o[1] = 1'b1;
            data_o_1 = payload_2;
            addr_o_1 = dest_addr_2;
        end
        if (output_grant_3[1] && !fifo_empty[3] && ready_i[1]) begin
            valid_o[1] = 1'b1;
            data_o_1 = payload_3;
            addr_o_1 = dest_addr_3;
        end
        if (output_grant_4[1] && !fifo_empty[4] && ready_i[1]) begin
            valid_o[1] = 1'b1;
            data_o_1 = payload_4;
            addr_o_1 = dest_addr_4;
        end
        
        // South port
        valid_o[2] = 1'b0;
        data_o_2 = {DATA_WIDTH{1'b0}};
        addr_o_2 = {ADDR_WIDTH{1'b0}};
        if (output_grant_0[2] && !fifo_empty[0] && ready_i[2]) begin
            valid_o[2] = 1'b1;
            data_o_2 = payload_0;
            addr_o_2 = dest_addr_0;
        end
        if (output_grant_1[2] && !fifo_empty[1] && ready_i[2]) begin
            valid_o[2] = 1'b1;
            data_o_2 = payload_1;
            addr_o_2 = dest_addr_1;
        end
        if (output_grant_2[2] && !fifo_empty[2] && ready_i[2]) begin
            valid_o[2] = 1'b1;
            data_o_2 = payload_2;
            addr_o_2 = dest_addr_2;
        end
        if (output_grant_3[2] && !fifo_empty[3] && ready_i[2]) begin
            valid_o[2] = 1'b1;
            data_o_2 = payload_3;
            addr_o_2 = dest_addr_3;
        end
        if (output_grant_4[2] && !fifo_empty[4] && ready_i[2]) begin
            valid_o[2] = 1'b1;
            data_o_2 = payload_4;
            addr_o_2 = dest_addr_4;
        end
        
        // West port
        valid_o[3] = 1'b0;
        data_o_3 = {DATA_WIDTH{1'b0}};
        addr_o_3 = {ADDR_WIDTH{1'b0}};
        if (output_grant_0[3] && !fifo_empty[0] && ready_i[3]) begin
            valid_o[3] = 1'b1;
            data_o_3 = payload_0;
            addr_o_3 = dest_addr_0;
        end
        if (output_grant_1[3] && !fifo_empty[1] && ready_i[3]) begin
            valid_o[3] = 1'b1;
            data_o_3 = payload_1;
            addr_o_3 = dest_addr_1;
        end
        if (output_grant_2[3] && !fifo_empty[2] && ready_i[3]) begin
            valid_o[3] = 1'b1;
            data_o_3 = payload_2;
            addr_o_3 = dest_addr_2;
        end
        if (output_grant_3[3] && !fifo_empty[3] && ready_i[3]) begin
            valid_o[3] = 1'b1;
            data_o_3 = payload_3;
            addr_o_3 = dest_addr_3;
        end
        if (output_grant_4[3] && !fifo_empty[4] && ready_i[3]) begin
            valid_o[3] = 1'b1;
            data_o_3 = payload_4;
            addr_o_3 = dest_addr_4;
        end
        
        // Local port
        valid_o[4] = 1'b0;
        data_o_4 = {DATA_WIDTH{1'b0}};
        addr_o_4 = {ADDR_WIDTH{1'b0}};
        if (output_grant_0[4] && !fifo_empty[0] && ready_i[4]) begin
            valid_o[4] = 1'b1;
            data_o_4 = payload_0;
            addr_o_4 = dest_addr_0;
        end
        if (output_grant_1[4] && !fifo_empty[1] && ready_i[4]) begin
            valid_o[4] = 1'b1;
            data_o_4 = payload_1;
            addr_o_4 = dest_addr_1;
        end
        if (output_grant_2[4] && !fifo_empty[2] && ready_i[4]) begin
            valid_o[4] = 1'b1;
            data_o_4 = payload_2;
            addr_o_4 = dest_addr_2;
        end
        if (output_grant_3[4] && !fifo_empty[3] && ready_i[4]) begin
            valid_o[4] = 1'b1;
            data_o_4 = payload_3;
            addr_o_4 = dest_addr_3;
        end
        if (output_grant_4[4] && !fifo_empty[4] && ready_i[4]) begin
            valid_o[4] = 1'b1;
            data_o_4 = payload_4;
            addr_o_4 = dest_addr_4;
        end
    end

endmodule 

