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
    output reg                       write_done,
    output reg                       write_err,
    
    input  wire                      read_req,
    input  wire [ADDR_WIDTH-1:0]     read_addr,
    input  wire [SELECT_WIDTH-1:0]   read_sel,
    output reg  [DATA_WIDTH-1:0]     read_data,
    output reg                       read_done,
    output reg                       read_err
);

    // FSM states
    localparam IDLE         = 2'b00;
    localparam WRITE_WAIT   = 2'b01;
    localparam READ_WAIT    = 2'b10;
    localparam RETRY        = 2'b11;

    // FSM state register
    reg [1:0] state;
    reg [1:0] next_state;
    
    // Retry counter
    reg [3:0] retry_count;
    localparam MAX_RETRY = 4'd8;
    
    // Combinational next state logic
    always @(*) begin
        next_state = state; // Default: stay in current state
        
        case (state)
            IDLE: begin
                if (write_req)
                    next_state = WRITE_WAIT;
                else if (read_req)
                    next_state = READ_WAIT;
            end
            
            WRITE_WAIT: begin
                if (wb_ack_i)
                    next_state = IDLE;
                else if (wb_err_i)
                    next_state = IDLE;
                else if (wb_rty_i)
                    next_state = RETRY;
            end
            
            READ_WAIT: begin
                if (wb_ack_i)
                    next_state = IDLE;
                else if (wb_err_i)
                    next_state = IDLE;
                else if (wb_rty_i)
                    next_state = RETRY;
            end
            
            RETRY: begin
                if (retry_count >= MAX_RETRY)
                    next_state = IDLE;
                else if (wb_we_o)
                    next_state = WRITE_WAIT;
                else
                    next_state = READ_WAIT;
            end
            
            default:
                next_state = IDLE;
        endcase
    end
    
    // Sequential state and output logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
            retry_count <= 4'b0;
            
            // Reset outputs
            wb_adr_o <= {ADDR_WIDTH{1'b0}};
            wb_dat_o <= {DATA_WIDTH{1'b0}};
            wb_we_o <= 1'b0;
            wb_sel_o <= {SELECT_WIDTH{1'b0}};
            wb_stb_o <= 1'b0;
            wb_cyc_o <= 1'b0;
            wb_tgd_o <= {TAG_WIDTH{1'b0}};
            
            write_done <= 1'b0;
            write_err <= 1'b0;
            read_data <= {DATA_WIDTH{1'b0}};
            read_done <= 1'b0;
            read_err <= 1'b0;
        end else begin
            // Update state
            state <= next_state;
            
            case (state)
                IDLE: begin
                    // Reset bus signals
                    wb_stb_o <= 1'b0;
                    wb_cyc_o <= 1'b0;
                    retry_count <= 4'b0;
                    
                    // Clear status signals when starting a new transaction
                    if (write_req) begin
                        // Setup for write transaction
                        wb_adr_o <= write_addr;
                        wb_dat_o <= write_data;
                        wb_we_o <= 1'b1;
                        wb_sel_o <= write_sel;
                        wb_stb_o <= 1'b1;
                        wb_cyc_o <= 1'b1;
                        // Clear status signals
                        write_done <= 1'b0;
                        write_err <= 1'b0;
                    end else if (read_req) begin
                        // Setup for read transaction
                        wb_adr_o <= read_addr;
                        wb_we_o <= 1'b0;
                        wb_sel_o <= read_sel;
                        wb_stb_o <= 1'b1;
                        wb_cyc_o <= 1'b1;
                        // Clear status signals
                        read_done <= 1'b0;
                        read_err <= 1'b0;
                    end
                end
                
                WRITE_WAIT: begin
                    // Keep bus signals asserted until response
                    wb_stb_o <= 1'b1;
                    wb_cyc_o <= 1'b1;
                    
                    if (wb_ack_i) begin
                        wb_stb_o <= 1'b0;
                        wb_cyc_o <= 1'b0;
                        write_done <= 1'b1;
                    end else if (wb_err_i) begin
                        wb_stb_o <= 1'b0;
                        wb_cyc_o <= 1'b0;
                        write_err <= 1'b1;
                    end else if (wb_rty_i) begin
                        wb_stb_o <= 1'b0;
                        wb_cyc_o <= 1'b0;
                        retry_count <= retry_count + 1'b1;
                    end
                end
                
                READ_WAIT: begin
                    // Keep bus signals asserted until response
                    wb_stb_o <= 1'b1;
                    wb_cyc_o <= 1'b1;
                    
                    if (wb_ack_i) begin
                        // Capture read data on ACK assertion
                        read_data <= wb_dat_i;
                        read_done <= 1'b1;
                        wb_stb_o <= 1'b0;
                        wb_cyc_o <= 1'b0;
                    end else if (wb_err_i) begin
                        wb_stb_o <= 1'b0;
                        wb_cyc_o <= 1'b0;
                        read_err <= 1'b1;
                    end else if (wb_rty_i) begin
                        wb_stb_o <= 1'b0;
                        wb_cyc_o <= 1'b0;
                        retry_count <= retry_count + 1'b1;
                    end
                end
                
                RETRY: begin
                    if (retry_count >= MAX_RETRY) begin
                        // Too many retries, report error
                        if (wb_we_o)
                            write_err <= 1'b1;
                        else
                            read_err <= 1'b1;
                        wb_stb_o <= 1'b0;
                        wb_cyc_o <= 1'b0;
                    end else begin
                        // Retry the transaction
                        wb_stb_o <= 1'b1;
                        wb_cyc_o <= 1'b1;
                    end
                end
            endcase
        end
    end

endmodule 