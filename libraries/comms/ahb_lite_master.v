module ahb_lite_master #(
    parameter ADDR_WIDTH = 32,      // Address bus width
    parameter DATA_WIDTH = 32,      // Data bus width
    parameter BURST_SIZE = 4,       // Maximum burst size
    parameter RESET_ACTIVE_LOW = 1  // Reset polarity (1: active low, 0: active high)
)(
    input  wire                    hclk,        // System clock
    input  wire                    hreset,      // System reset
    // AHB Master Signals
    output reg  [ADDR_WIDTH-1:0]   haddr,       // Address bus
    output reg  [2:0]              hburst,      // Burst type
    output reg                      hbusreq,     // Bus request
    output reg  [1:0]              htrans,      // Transfer type
    output reg  [2:0]              hsize,       // Transfer size
    output reg                      hwrite,      // Transfer direction (1: write, 0: read)
    output reg  [DATA_WIDTH-1:0]   hwdata,      // Write data bus
    input  wire [DATA_WIDTH-1:0]   hrdata,      // Read data bus
    input  wire                    hready,      // Transfer done
    input  wire                    hgrant,      // Bus granted
    input  wire [1:0]              hresp,       // Transfer response
    
    // User interface
    input  wire                    start_trans, // Start a new transaction
    input  wire [ADDR_WIDTH-1:0]   trans_addr,  // Transaction address
    input  wire                    trans_write, // Transaction type (1: write, 0: read)
    input  wire [2:0]              trans_size,  // Transaction size
    input  wire [2:0]              trans_burst, // Burst type
    input  wire [DATA_WIDTH-1:0]   write_data,  // Data to write
    output reg  [DATA_WIDTH-1:0]   read_data,   // Data read from bus
    output reg                     trans_done,  // Transaction complete
    output reg  [1:0]              trans_resp   // Transaction response
);

    // AHB-Lite Constants
    localparam TRANS_IDLE    = 2'b00;
    localparam TRANS_NONSEQ  = 2'b10;
    localparam TRANS_SEQ     = 2'b11;
    
    localparam RESP_OKAY     = 2'b00;
    
    localparam BURST_SINGLE  = 3'b000;
    localparam BURST_INCR    = 3'b001;
    localparam BURST_WRAP4   = 3'b010;
    localparam BURST_INCR4   = 3'b011;
    localparam BURST_WRAP8   = 3'b100;
    localparam BURST_INCR8   = 3'b101;
    localparam BURST_WRAP16  = 3'b110;
    localparam BURST_INCR16  = 3'b111;
    
    // State machine states
    localparam IDLE          = 3'b000;
    localparam BUS_REQ       = 3'b001;
    localparam ADDRESS       = 3'b010;
    localparam DATA_PHASE    = 3'b011;
    localparam BURST_CONT    = 3'b100;
    localparam COMPLETE      = 3'b101;
    
    // Registers
    reg [2:0]  state, next_state;
    reg [7:0]  burst_count;
    reg [7:0]  burst_total;
    reg [ADDR_WIDTH-1:0] next_addr;
    wire reset_active;
    
    // Handle reset polarity
    assign reset_active = RESET_ACTIVE_LOW[0] ? ~hreset : hreset;
    
    // FSM state transition logic
    always @(posedge hclk or posedge reset_active) begin
        if (reset_active) begin
            // Reset active
            state <= IDLE;
            haddr <= {ADDR_WIDTH{1'b0}};
            hburst <= BURST_SINGLE;
            hbusreq <= 1'b0;
            htrans <= TRANS_IDLE;
            hsize <= 3'b000;
            hwrite <= 1'b0;
            hwdata <= {DATA_WIDTH{1'b0}};
            read_data <= {DATA_WIDTH{1'b0}};
            trans_done <= 1'b0;
            trans_resp <= RESP_OKAY;
            burst_count <= 8'h0;
            burst_total <= 8'h0;
            next_addr <= {ADDR_WIDTH{1'b0}};
        end else begin
            // Normal operation
            state <= next_state;
            
            case (state)
                IDLE: begin
                    hbusreq <= 1'b0;
                    htrans <= TRANS_IDLE;
                    trans_done <= 1'b0;
                    if (start_trans) begin
                        hbusreq <= 1'b1;
                        // Determine burst length
                        case (trans_burst)
                            BURST_SINGLE: burst_total <= 8'h1;
                            BURST_INCR:   burst_total <= BURST_SIZE[7:0];
                            BURST_INCR4:  burst_total <= 8'h4;
                            BURST_WRAP4:  burst_total <= 8'h4;
                            BURST_INCR8:  burst_total <= 8'h8;
                            BURST_WRAP8:  burst_total <= 8'h8;
                            BURST_INCR16: burst_total <= 8'h10;
                            BURST_WRAP16: burst_total <= 8'h10;
                            default:      burst_total <= 8'h1;
                        endcase
                        burst_count <= 8'h0;
                    end
                end
                
                BUS_REQ: begin
                    // Keep bus request high until granted
                    hbusreq <= 1'b1;
                    
                    if (hgrant) begin
                        // Got bus grant, start transaction
                        haddr <= trans_addr;
                        hburst <= trans_burst;
                        hsize <= trans_size;
                        hwrite <= trans_write;
                        htrans <= TRANS_NONSEQ;
                        next_addr <= trans_addr;
                    end
                end
                
                ADDRESS: begin
                    if (hready) begin
                        if (hwrite) begin
                            // In write phase, place data on the bus
                            hwdata <= write_data;
                        end
                        
                        // Calculate next address for burst
                        if (burst_count < burst_total - 1) begin
                            burst_count <= burst_count + 8'h1;
                            
                            // Handle different burst types
                            case (hburst)
                                BURST_SINGLE: begin
                                    htrans <= TRANS_IDLE;
                                    hbusreq <= 1'b0;
                                end
                                BURST_INCR, BURST_INCR4, BURST_INCR8, BURST_INCR16: begin
                                    // Incremental burst
                                    htrans <= TRANS_SEQ;
                                    next_addr <= next_addr + (1 << hsize);
                                    haddr <= next_addr + (1 << hsize);
                                end
                                BURST_WRAP4, BURST_WRAP8, BURST_WRAP16: begin
                                    // Wrapped burst
                                    htrans <= TRANS_SEQ;
                                    next_addr <= wrap_addr(next_addr, hsize, hburst);
                                    haddr <= wrap_addr(next_addr, hsize, hburst);
                                end
                                default: begin
                                    htrans <= TRANS_IDLE;
                                    hbusreq <= 1'b0;
                                end
                            endcase
                        end else begin
                            // Last transfer in burst
                            htrans <= TRANS_IDLE;
                            hbusreq <= 1'b0;
                        end
                    end
                end
                
                DATA_PHASE: begin
                    if (hready) begin
                        if (!hwrite) begin
                            // In read phase, capture data
                            read_data <= hrdata;
                        end
                        
                        if (burst_count < burst_total - 1) begin
                            // Continue burst
                            state <= BURST_CONT;
                        end else begin
                            // End of transaction
                            trans_done <= 1'b1;
                            trans_resp <= hresp;
                            state <= COMPLETE;
                        end
                    end
                end
                
                BURST_CONT: begin
                    // Continue with next transfer in burst
                    state <= ADDRESS;
                end
                
                COMPLETE: begin
                    trans_done <= 1'b0;
                    state <= IDLE;
                end
                
                default: begin
                    state <= IDLE;
                end
            endcase
        end
    end
    
    // Next state logic
    always @(*) begin
        next_state = state;
        
        case (state)
            IDLE: begin
                if (start_trans) begin
                    next_state = BUS_REQ;
                end
            end
            
            BUS_REQ: begin
                if (hgrant) begin
                    next_state = ADDRESS;
                end
            end
            
            ADDRESS: begin
                if (hready) begin
                    next_state = DATA_PHASE;
                end
            end
            
            DATA_PHASE: begin
                if (hready) begin
                    if (burst_count < burst_total - 1 && htrans == TRANS_SEQ) begin
                        next_state = BURST_CONT;
                    end else begin
                        next_state = COMPLETE;
                    end
                end
            end
            
            BURST_CONT: begin
                next_state = ADDRESS;
            end
            
            COMPLETE: begin
                next_state = IDLE;
            end
            
            default: begin
                next_state = IDLE;
            end
        endcase
    end
    
    // Function to calculate wrapped burst address
    function [ADDR_WIDTH-1:0] wrap_addr;
        input [ADDR_WIDTH-1:0] addr;
        input [2:0] size;
        input [2:0] burst;
        
        reg [ADDR_WIDTH-1:0] mask;
        reg [7:0] boundary;
        reg [31:0] boundary_wide;
    begin
        // Determine boundary based on burst type
        case (burst)
            BURST_WRAP4:  boundary <= 4;
            BURST_WRAP8:  boundary <= 8;
            BURST_WRAP16: boundary <= 16;
            default:      boundary <= 4;
        endcase
        
        // Calculate mask for wrapping
        boundary_wide <= {24'b0, boundary};
        mask <= (boundary_wide << size) - 1;
        
        // Apply wrapping formula: (addr & ~mask) | ((addr + (1 << size)) & mask)
        wrap_addr = (addr & ~mask) | ((addr + (1 << size)) & mask);
    end
    endfunction

endmodule
