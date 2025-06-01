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

    // FSM state definitions
    localparam IDLE = 3'b000;
    
    // Write states
    localparam W_ADDR = 3'b001;
    localparam W_DATA = 3'b010;
    localparam W_RESP = 3'b011;
    
    // Read states
    localparam R_ADDR = 3'b100;
    localparam R_DATA = 3'b101;
    
    // FSM state registers
    reg [2:0] state_r, next_state;
    
    // Write transaction completion flag
    reg write_done_r;
    assign write_done = write_done_r;
    
    // Read transaction completion flag
    reg read_done_r;
    assign read_done = read_done_r;
    
    // State machine sequential logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state_r <= IDLE;
        end else begin
            state_r <= next_state;
        end
    end
    
    // Next state logic
    always @(*) begin
        next_state = state_r;
        
        case (state_r)
            IDLE: begin
                if (write_req)
                    next_state = W_ADDR;
                else if (read_req)
                    next_state = R_ADDR;
            end
            
            // Write transaction states
            W_ADDR: begin
                if (awready && awvalid)
                    next_state = W_DATA;
            end
            
            W_DATA: begin
                if (wready && wvalid)
                    next_state = W_RESP;
            end
            
            W_RESP: begin
                if (bvalid && bready)
                    next_state = IDLE;
            end
            
            // Read transaction states
            R_ADDR: begin
                if (arready && arvalid)
                    next_state = R_DATA;
            end
            
            R_DATA: begin
                if (rvalid && rready)
                    next_state = IDLE;
            end
            
            // Default case to handle all other possible states
            default: next_state = IDLE;
        endcase
    end
    
    // Control signals for write channels
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            awvalid <= 1'b0;
            awaddr <= {ADDR_WIDTH{1'b0}};
            wvalid <= 1'b0;
            wdata <= {DATA_WIDTH{1'b0}};
            wstrb <= {(DATA_WIDTH/8){1'b0}};
            bready <= 1'b0;
            write_done_r <= 1'b0;
        end else begin
            case (state_r)
                IDLE: begin
                    write_done_r <= 1'b0;
                    if (write_req) begin
                        awvalid <= 1'b1;
                        awaddr <= write_addr;
                        wdata <= write_data;
                        wstrb <= write_strb;
                    end
                end
                
                W_ADDR: begin
                    if (awready && awvalid) begin
                        awvalid <= 1'b0;
                        wvalid <= 1'b1;
                    end
                end
                
                W_DATA: begin
                    if (wready && wvalid) begin
                        wvalid <= 1'b0;
                        bready <= 1'b1;
                    end
                end
                
                W_RESP: begin
                    if (bvalid && bready) begin
                        bready <= 1'b0;
                        write_done_r <= 1'b1;
                    end
                end
                
                // For read states, keep write signals unchanged
                R_ADDR, R_DATA: begin
                    // No change to write signals
                end
                
                // Default case for all other possible states
                default: begin
                    awvalid <= 1'b0;
                    wvalid <= 1'b0;
                    bready <= 1'b0;
                end
            endcase
        end
    end
    
    // Control signals for read channels
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            arvalid <= 1'b0;
            araddr <= {ADDR_WIDTH{1'b0}};
            rready <= 1'b0;
            read_data <= {DATA_WIDTH{1'b0}};
            read_done_r <= 1'b0;
        end else begin
            case (state_r)
                IDLE: begin
                    read_done_r <= 1'b0;
                    if (read_req) begin
                        arvalid <= 1'b1;
                        araddr <= read_addr;
                    end
                end
                
                R_ADDR: begin
                    if (arready && arvalid) begin
                        arvalid <= 1'b0;
                        rready <= 1'b1;
                    end
                end
                
                R_DATA: begin
                    if (rvalid && rready) begin
                        rready <= 1'b0;
                        read_data <= rdata;
                        read_done_r <= 1'b1;
                    end
                end
                
                // For write states, keep read signals unchanged
                W_ADDR, W_DATA, W_RESP: begin
                    // No change to read signals
                end
                
                // Default case for all other possible states
                default: begin
                    arvalid <= 1'b0;
                    rready <= 1'b0;
                end
            endcase
        end
    end

endmodule 