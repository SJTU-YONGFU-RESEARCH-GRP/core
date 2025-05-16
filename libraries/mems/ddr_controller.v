module ddr_controller #(
    parameter DDR_TYPE = "DDR3",        // "DDR3", "DDR4", "DDR5"
    parameter ADDR_WIDTH = 28,          // Row + Bank + Column address
    parameter DATA_WIDTH = 64,          // Data width
    parameter BURST_LENGTH = 8,
    parameter CAS_LATENCY = 11,
    parameter ROW_WIDTH = 14,
    parameter COL_WIDTH = 10,
    parameter BANK_WIDTH = 3,
    parameter BANK_GROUP_WIDTH = 2      // For DDR4/DDR5
)(
    // Global signals
    input  wire                       clk,
    input  wire                       rst_n,
    input  wire                       phy_clk,        // Clock from PHY
    
    // User interface
    input  wire                       cmd_valid,
    output wire                       cmd_ready,
    input  wire                       cmd_write,      // 1=write, 0=read
    input  wire [ADDR_WIDTH-1:0]      cmd_addr,
    input  wire [3:0]                 cmd_burst_len,  // Burst length (0 to 15 + 1)
    
    input  wire [DATA_WIDTH-1:0]      wr_data,
    input  wire [DATA_WIDTH/8-1:0]    wr_mask,       // Byte write mask, 1=inactive
    input  wire                       wr_valid,
    output wire                       wr_ready,
    
    output wire [DATA_WIDTH-1:0]      rd_data,
    output wire                       rd_valid,
    input  wire                       rd_ready,
    
    // DDR PHY interface
    output wire                       phy_reset_n,
    output wire [ROW_WIDTH-1:0]       phy_addr,       // Address (row/column multiplexed)
    output wire [BANK_WIDTH-1:0]      phy_bank,       // Bank address
    output wire [BANK_GROUP_WIDTH-1:0] phy_bank_group, // Bank group (DDR4/5)
    output wire                       phy_cs_n,       // Chip select
    output wire                       phy_ras_n,      // Row address strobe
    output wire                       phy_cas_n,      // Column address strobe
    output wire                       phy_we_n,       // Write enable
    output wire                       phy_cke,        // Clock enable
    output wire                       phy_odt,        // On-die termination
    
    inout  wire [DATA_WIDTH-1:0]      phy_dq,         // Data bus
    inout  wire [DATA_WIDTH/8-1:0]    phy_dqs_p,      // Data strobe positive
    inout  wire [DATA_WIDTH/8-1:0]    phy_dqs_n,      // Data strobe negative
    output wire [DATA_WIDTH/8-1:0]    phy_dm,         // Data mask
    
    // Status signals
    output wire                       init_done,      // Initialization complete
    output wire [1:0]                 state           // Current controller state
);

    // State machine states
    localparam INIT      = 2'b00;
    localparam IDLE      = 2'b01;
    localparam ACTIVE    = 2'b10;
    localparam READ_WRITE = 2'b11;
    
    // Command encoding (RAS, CAS, WE)
    localparam CMD_MRS   = 3'b000;  // Mode Register Set
    localparam CMD_REF   = 3'b001;  // Refresh
    localparam CMD_PRE   = 3'b010;  // Precharge
    localparam CMD_ACT   = 3'b011;  // Activate
    localparam CMD_WR    = 3'b100;  // Write
    localparam CMD_RD    = 3'b101;  // Read
    localparam CMD_NOP   = 3'b111;  // No Operation
    
    // Timing parameters (in clock cycles)
    localparam tRCD      = 5;       // ACT to READ/WRITE delay
    localparam tRP       = 5;       // PRE to ACT delay
    localparam tRC       = 15;      // ACT to ACT (same bank) delay
    localparam tRAS      = 15;      // ACT to PRE delay
    localparam tREFI     = 1950;    // Refresh interval
    
    // Controller state
    reg [1:0] curr_state;
    reg [1:0] next_state;
    
    // Timing counters
    reg [15:0] timer;
    reg [15:0] refresh_counter;
    
    // Command registers
    reg [2:0] cmd_reg;              // {RAS, CAS, WE}
    reg cmd_reg_valid;
    reg [ROW_WIDTH-1:0] addr_reg;
    reg [BANK_WIDTH-1:0] bank_reg;
    reg [BANK_GROUP_WIDTH-1:0] bank_group_reg;
    
    // Data path registers
    reg [DATA_WIDTH-1:0] rd_data_reg;
    reg rd_valid_reg;
    reg wr_ready_reg;
    reg [3:0] burst_counter;
    
    // Bank state tracking
    reg [ROW_WIDTH-1:0] active_row [0:(2**BANK_WIDTH)-1];
    reg [(2**BANK_WIDTH)-1:0] bank_active;
    
    // Initialization state
    reg init_done_reg;
    reg [3:0] init_state;
    
    // Address extraction
    wire [ROW_WIDTH-1:0] row_addr;
    wire [COL_WIDTH-1:0] col_addr;
    wire [BANK_WIDTH-1:0] bank_addr;
    wire [BANK_GROUP_WIDTH-1:0] bank_group_addr;
    
    // Extract address components
    assign row_addr = cmd_addr[ADDR_WIDTH-1:ADDR_WIDTH-ROW_WIDTH];
    assign col_addr = cmd_addr[COL_WIDTH-1:0];
    assign bank_addr = cmd_addr[ADDR_WIDTH-ROW_WIDTH-1:ADDR_WIDTH-ROW_WIDTH-BANK_WIDTH];
    
    generate
        if (DDR_TYPE == "DDR4" || DDR_TYPE == "DDR5") begin
            assign bank_group_addr = cmd_addr[ADDR_WIDTH-ROW_WIDTH-BANK_WIDTH-1:ADDR_WIDTH-ROW_WIDTH-BANK_WIDTH-BANK_GROUP_WIDTH];
        end else begin
            assign bank_group_addr = {BANK_GROUP_WIDTH{1'b0}};
        end
    endgenerate
    
    // State machine
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            curr_state <= INIT;
            init_state <= 4'h0;
            init_done_reg <= 1'b0;
            cmd_reg <= CMD_NOP;
            cmd_reg_valid <= 1'b0;
            addr_reg <= {ROW_WIDTH{1'b0}};
            bank_reg <= {BANK_WIDTH{1'b0}};
            bank_group_reg <= {BANK_GROUP_WIDTH{1'b0}};
            timer <= 16'h0;
            refresh_counter <= 16'h0;
            bank_active <= {(2**BANK_WIDTH){1'b0}};
            burst_counter <= 4'h0;
            rd_valid_reg <= 1'b0;
            wr_ready_reg <= 1'b0;
        end else begin
            // Default values
            cmd_reg <= CMD_NOP;
            cmd_reg_valid <= 1'b1;
            rd_valid_reg <= 1'b0;
            wr_ready_reg <= 1'b0;
            
            // Refresh counter
            if (refresh_counter < tREFI)
                refresh_counter <= refresh_counter + 1;
                
            // Timer for state transitions
            if (timer > 0)
                timer <= timer - 1;
                
            case (curr_state)
                INIT: begin
                    // DDR initialization sequence
                    case (init_state)
                        4'h0: begin
                            // Wait for power-on delay
                            if (timer == 0) begin
                                timer <= 16'd100;
                                init_state <= 4'h1;
                            end
                        end
                        4'h1: begin
                            // Issue reset
                            if (timer == 0) begin
                                timer <= 16'd200;
                                init_state <= 4'h2;
                            end
                        end
                        4'h2: begin
                            // CKE high
                            if (timer == 0) begin
                                timer <= 16'd10;
                                init_state <= 4'h3;
                            end
                        end
                        4'h3: begin
                            // Issue MRS commands
                            if (timer == 0) begin
                                cmd_reg <= CMD_MRS;
                                addr_reg <= 16'h0923;  // Example MRS value for DDR3
                                bank_reg <= 3'b010;    // MR2
                                timer <= 16'd10;
                                init_state <= 4'h4;
                            end
                        end
                        4'h4: begin
                            // More MRS commands
                            if (timer == 0) begin
                                cmd_reg <= CMD_MRS;
                                addr_reg <= 16'h0004;  // Example MRS value
                                bank_reg <= 3'b001;    // MR1
                                timer <= 16'd10;
                                init_state <= 4'h5;
                            end
                        end
                        4'h5: begin
                            // Final MRS command
                            if (timer == 0) begin
                                cmd_reg <= CMD_MRS;
                                addr_reg <= 16'h0B50;  // Example MRS value with CAS latency
                                bank_reg <= 3'b000;    // MR0
                                timer <= 16'd10;
                                init_state <= 4'h6;
                            end
                        end
                        4'h6: begin
                            // ZQ calibration
                            if (timer == 0) begin
                                timer <= 16'd200;
                                init_state <= 4'h7;
                            end
                        end
                        4'h7: begin
                            // Initialization complete
                            if (timer == 0) begin
                                init_done_reg <= 1'b1;
                                curr_state <= IDLE;
                                refresh_counter <= 16'h0;
                            end
                        end
                    endcase
                end
                
                IDLE: begin
                    // Check if refresh is needed
                    if (refresh_counter >= tREFI) begin
                        cmd_reg <= CMD_REF;
                        refresh_counter <= 16'h0;
                        timer <= 16'd20;  // tRFC delay
                    end
                    // Process new command
                    else if (cmd_valid && timer == 0) begin
                        if (cmd_write || !cmd_write) begin  // Read or Write
                            // Check if row is already active
                            if (bank_active[bank_addr] && active_row[bank_addr] == row_addr) begin
                                // Row already active, go directly to READ/WRITE
                                curr_state <= READ_WRITE;
                                cmd_reg <= cmd_write ? CMD_WR : CMD_RD;
                                addr_reg <= {{(ROW_WIDTH-COL_WIDTH){1'b0}}, col_addr};
                                bank_reg <= bank_addr;
                                bank_group_reg <= bank_group_addr;
                                burst_counter <= cmd_burst_len;
                                timer <= cmd_write ? 16'd1 : CAS_LATENCY;
                                wr_ready_reg <= cmd_write;
                            end else begin
                                // Need to activate row first
                                curr_state <= ACTIVE;
                                cmd_reg <= CMD_ACT;
                                addr_reg <= row_addr;
                                bank_reg <= bank_addr;
                                bank_group_reg <= bank_group_addr;
                                timer <= tRCD;
                            end
                        end
                    end
                end
                
                ACTIVE: begin
                    if (timer == 0) begin
                        // Row is now active
                        bank_active[bank_reg] <= 1'b1;
                        active_row[bank_reg] <= addr_reg;
                        
                        // Issue READ or WRITE
                        curr_state <= READ_WRITE;
                        cmd_reg <= cmd_write ? CMD_WR : CMD_RD;
                        addr_reg <= {{(ROW_WIDTH-COL_WIDTH){1'b0}}, col_addr};
                        burst_counter <= cmd_burst_len;
                        timer <= cmd_write ? 16'd1 : CAS_LATENCY;
                        wr_ready_reg <= cmd_write;
                    end
                end
                
                READ_WRITE: begin
                    if (timer == 0) begin
                        if (burst_counter > 0) begin
                            // Continue burst
                            burst_counter <= burst_counter - 1;
                            if (cmd_reg == CMD_RD)
                                rd_valid_reg <= 1'b1;
                            else if (cmd_reg == CMD_WR)
                                wr_ready_reg <= 1'b1;
                        end else begin
                            // Burst complete, auto-precharge and return to IDLE
                            cmd_reg <= CMD_PRE;
                            addr_reg <= {ROW_WIDTH{1'b1}}; // All banks
                            bank_active <= {(2**BANK_WIDTH){1'b0}};
                            timer <= tRP;
                            curr_state <= IDLE;
                        end
                    end else if (cmd_reg == CMD_RD && timer <= CAS_LATENCY && timer > 1) begin
                        // Countdown to read data valid
                        timer <= timer - 1;
                    end else if (cmd_reg == CMD_WR && wr_valid) begin
                        // Write data accepted
                        wr_ready_reg <= 1'b0;
                        if (burst_counter > 0)
                            timer <= 16'd1;
                        else
                            timer <= 16'd0;
                    end else if (cmd_reg == CMD_RD && rd_valid_reg && rd_ready) begin
                        // Read data accepted
                        rd_valid_reg <= 1'b0;
                        if (burst_counter > 0)
                            timer <= 16'd1;
                        else
                            timer <= 16'd0;
                    end
                end
            endcase
        end
    end
    
    // Data path for reads (simplified)
    always @(posedge phy_clk) begin
        if (curr_state == READ_WRITE && cmd_reg == CMD_RD)
            rd_data_reg <= phy_dq;
    end
    
    // Output assignments
    assign cmd_ready = (curr_state == IDLE) && (timer == 0) && (refresh_counter < tREFI);
    assign wr_ready = wr_ready_reg;
    assign rd_data = rd_data_reg;
    assign rd_valid = rd_valid_reg;
    
    // PHY interface
    assign phy_reset_n = rst_n && (init_state > 4'h1);
    assign phy_addr = addr_reg;
    assign phy_bank = bank_reg;
    assign phy_bank_group = bank_group_reg;
    assign phy_cs_n = !cmd_reg_valid;
    assign phy_ras_n = cmd_reg[2];
    assign phy_cas_n = cmd_reg[1];
    assign phy_we_n = cmd_reg[0];
    assign phy_cke = 1'b1;
    assign phy_odt = 1'b1;
    
    // Bidirectional data bus control (simplified)
    assign phy_dq = (curr_state == READ_WRITE && cmd_reg == CMD_WR) ? wr_data : {DATA_WIDTH{1'bz}};
    assign phy_dm = (curr_state == READ_WRITE && cmd_reg == CMD_WR) ? wr_mask : {(DATA_WIDTH/8){1'bz}};
    
    // Data strobe signals (simplified)
    assign phy_dqs_p = (curr_state == READ_WRITE && cmd_reg == CMD_WR) ? {(DATA_WIDTH/8){1'b1}} : {(DATA_WIDTH/8){1'bz}};
    assign phy_dqs_n = (curr_state == READ_WRITE && cmd_reg == CMD_WR) ? {(DATA_WIDTH/8){1'b0}} : {(DATA_WIDTH/8){1'bz}};
    
    // Status outputs
    assign init_done = init_done_reg;
    assign state = curr_state;

endmodule 