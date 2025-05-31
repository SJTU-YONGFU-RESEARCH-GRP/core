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
    reg  [PACKET_WIDTH-1:0] input_fifo [0:NUM_PORTS-1][0:FIFO_DEPTH-1];
    reg  [$clog2(FIFO_DEPTH)+1:0] fifo_count [0:NUM_PORTS-1];
    reg  [$clog2(FIFO_DEPTH)-1:0] read_ptr [0:NUM_PORTS-1];
    reg  [$clog2(FIFO_DEPTH)-1:0] write_ptr [0:NUM_PORTS-1];
    
    // FIFO status signals
    wire [NUM_PORTS-1:0] fifo_empty;
    wire [NUM_PORTS-1:0] fifo_full;
    
    // Output arbitration
    reg  [NUM_PORTS-1:0] output_grant [0:NUM_PORTS-1];
    wire [NUM_PORTS-1:0] output_request [0:NUM_PORTS-1];
    reg  [$clog2(NUM_PORTS)-1:0] arb_ptr [0:NUM_PORTS-1];
    
    // Packet data at FIFO heads
    wire [PACKET_WIDTH-1:0] fifo_head [0:NUM_PORTS-1];
    wire [ADDR_WIDTH-1:0] dest_addr [0:NUM_PORTS-1];
    wire [DATA_WIDTH-1:0] payload [0:NUM_PORTS-1];
    
    // Route computation results (changed from wire to reg)
    reg [2:0] route_port [0:NUM_PORTS-1];
    
    // Output data registers (changed from wire to reg)
    reg [NUM_PORTS-1:0] valid_o;
    reg [DATA_WIDTH-1:0] data_o [0:NUM_PORTS-1];
    reg [ADDR_WIDTH-1:0] addr_o [0:NUM_PORTS-1];
    
    // Loop variables for output data assignment
    integer j;
    integer k;
    
    // genvar for all generate loops
    genvar i;
    
    // Extract destination addresses from head of each FIFO
    generate
        for (i = 0; i < NUM_PORTS; i = i + 1) begin : gen_fifo_heads
            assign fifo_head[i] = input_fifo[i][read_ptr[i]];
            assign dest_addr[i] = fifo_head[i][PACKET_WIDTH-1:DATA_WIDTH];
            assign payload[i] = fifo_head[i][DATA_WIDTH-1:0];
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
    
    assign north_data_o = data_o[NORTH];
    assign east_data_o  = data_o[EAST];
    assign south_data_o = data_o[SOUTH];
    assign west_data_o  = data_o[WEST];
    assign local_data_o = data_o[LOCAL];
    
    assign north_addr_o = addr_o[NORTH];
    assign east_addr_o  = addr_o[EAST];
    assign south_addr_o = addr_o[SOUTH];
    assign west_addr_o  = addr_o[WEST];
    assign local_addr_o = addr_o[LOCAL];
    
    assign ready_i[NORTH] = north_ready_i;
    assign ready_i[EAST]  = east_ready_i;
    assign ready_i[SOUTH] = south_ready_i;
    assign ready_i[WEST]  = west_ready_i;
    assign ready_i[LOCAL] = local_ready_i;
    
    // FIFO status
    generate
        for (i = 0; i < NUM_PORTS; i = i + 1) begin : gen_fifo_status
            assign fifo_empty[i] = (fifo_count[i] == 0);
            assign fifo_full[i] = (fifo_count[i] == FIFO_DEPTH);
            assign ready_o[i] = ~fifo_full[i];
        end
    endgenerate
    
    // Route computation using XY routing
    generate
        for (i = 0; i < NUM_PORTS; i = i + 1) begin : gen_route_comp
            // Extract X and Y coordinates from the address
            // Fixed format to ensure correct bit extraction
            wire [X_ADDR_WIDTH-1:0] dest_x;
            wire [Y_ADDR_WIDTH-1:0] dest_y;
            
            assign dest_x = dest_addr[i][ADDR_WIDTH-1:ADDR_WIDTH-X_ADDR_WIDTH];
            assign dest_y = dest_addr[i][ADDR_WIDTH-X_ADDR_WIDTH-1:ADDR_WIDTH-X_ADDR_WIDTH-Y_ADDR_WIDTH];
            
            // XY routing logic (fixed to use blocking assignments in always @*)
            always @(*) begin
                if (dest_x == local_x_addr && dest_y == local_y_addr) begin
                    // Packet reached destination
                    route_port[i] = LOCAL;
                end else if (dest_x > local_x_addr) begin
                    // Route East first
                    route_port[i] = EAST;
                end else if (dest_x < local_x_addr) begin
                    // Route West first
                    route_port[i] = WEST;
                end else if (dest_y > local_y_addr) begin
                    // If X is done, route South
                    route_port[i] = SOUTH;
                end else begin
                    // Route North
                    route_port[i] = NORTH;
                end
            end
            
            // Request generation
            assign output_request[i] = fifo_empty[i] ? 5'b00000 : (1 << route_port[i]);
        end
    endgenerate
    
    // Round-robin arbitration for each output port
    generate
        for (i = 0; i < NUM_PORTS; i = i + 1) begin : gen_rr_arb
            always @(posedge clk or negedge rst_n) begin
                if (!rst_n) begin
                    arb_ptr[i] <= 0;
                end else begin
                    // Move arbitration pointer if a grant was given
                    if (|output_grant[i]) begin
                        arb_ptr[i] <= arb_ptr[i] + 1;
                        if (arb_ptr[i] == NUM_PORTS-1) begin
                            arb_ptr[i] <= 0;
                        end
                    end
                end
            end
            
            // Arbitration logic
            always @(*) begin
                output_grant[i] = 5'b00000;
                
                // Round-robin priority (fixed integer width)
                for (k = 0; k < NUM_PORTS; k = k + 1) begin
                    // Fix width expansion issue by matching types
                    reg [$clog2(NUM_PORTS)-1:0] idx;
                    idx = (arb_ptr[i] + k) % NUM_PORTS;
                    if (output_request[idx][i]) begin
                        output_grant[i][idx] = 1'b1;
                        break;
                    end
                end
            end
        end
    endgenerate
    
    // FIFO read/write control and data transfer
    generate
        for (i = 0; i < NUM_PORTS; i = i + 1) begin : gen_fifo_ctrl
            // FIFO write on valid input and not full
            always @(posedge clk or negedge rst_n) begin
                if (!rst_n) begin
                    fifo_count[i] <= 0;
                    read_ptr[i] <= 0;
                    write_ptr[i] <= 0;
                    
                    // Initialize FIFOs to prevent X propagation
                    for (j = 0; j < FIFO_DEPTH; j = j + 1) begin
                        input_fifo[i][j] <= 0;
                    end
                end else begin
                    // Write to FIFO - only change write_ptr and fifo_count if actually writing
                    if (valid_i[i] && !fifo_full[i]) begin
                        input_fifo[i][write_ptr[i]] <= packet_i[i];
                        // Fixed width comparison for FIFO_DEPTH-1
                        if (write_ptr[i] == (FIFO_DEPTH-1)[$clog2(FIFO_DEPTH)-1:0]) begin
                            write_ptr[i] <= 0;
                        end else begin
                            write_ptr[i] <= write_ptr[i] + 1;
                        end
                        fifo_count[i] <= fifo_count[i] + 1;
                    end
                    
                    // Read from FIFO if granted and output is ready
                    // Only change read_ptr and fifo_count if actually reading
                    if (|{output_grant[0][i], output_grant[1][i], output_grant[2][i], 
                          output_grant[3][i], output_grant[4][i]} && !fifo_empty[i] && 
                          ready_i[route_port[i]]) begin
                        // Fixed width comparison for FIFO_DEPTH-1
                        if (read_ptr[i] == (FIFO_DEPTH-1)[$clog2(FIFO_DEPTH)-1:0]) begin
                            read_ptr[i] <= 0;
                        end else begin
                            read_ptr[i] <= read_ptr[i] + 1;
                        end
                        fifo_count[i] <= fifo_count[i] - 1;
                    end
                end
            end
        end
    endgenerate
    
    // Output data assignment - fixed to properly drive outputs when a grant is given
    always @(*) begin
        for (j = 0; j < NUM_PORTS; j = j + 1) begin
            valid_o[j] = 1'b0;
            data_o[j] = {DATA_WIDTH{1'b0}};
            addr_o[j] = {ADDR_WIDTH{1'b0}};
            
            for (k = 0; k < NUM_PORTS; k = k + 1) begin
                if (output_grant[j][k] && !fifo_empty[k] && ready_i[j]) begin
                    valid_o[j] = 1'b1;
                    data_o[j] = payload[k];
                    addr_o[j] = dest_addr[k];
                end
            end
        end
    end

endmodule 

