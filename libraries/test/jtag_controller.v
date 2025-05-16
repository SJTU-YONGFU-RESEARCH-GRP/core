module jtag_controller #(
    parameter IR_WIDTH = 5,      // Instruction register width
    parameter DR_WIDTH = 32      // Data register width
)(
    // JTAG port signals
    input  wire                 tck,       // Test Clock
    input  wire                 tms,       // Test Mode Select
    input  wire                 tdi,       // Test Data In
    output wire                 tdo,       // Test Data Out
    input  wire                 trst_n,    // Test Reset (optional)
    
    // System interface
    input  wire                 clk,       // System clock
    input  wire                 rst_n,     // System reset
    
    // Register access
    output wire [IR_WIDTH-1:0]  instruction,  // Current instruction
    output wire [DR_WIDTH-1:0]  dr_out,       // Data from TAP to system
    input  wire [DR_WIDTH-1:0]  dr_in,        // Data from system to TAP
    output wire                 dr_shift_en,  // DR shift enable
    output wire                 update_dr     // Update DR
);

    // TAP controller states (IEEE 1149.1)
    localparam TEST_LOGIC_RESET = 4'h0;
    localparam RUN_TEST_IDLE    = 4'h1;
    localparam SELECT_DR_SCAN   = 4'h2;
    localparam CAPTURE_DR       = 4'h3;
    localparam SHIFT_DR         = 4'h4;
    localparam EXIT1_DR         = 4'h5;
    localparam PAUSE_DR         = 4'h6;
    localparam EXIT2_DR         = 4'h7;
    localparam UPDATE_DR        = 4'h8;
    localparam SELECT_IR_SCAN   = 4'h9;
    localparam CAPTURE_IR       = 4'hA;
    localparam SHIFT_IR         = 4'hB;
    localparam EXIT1_IR         = 4'hC;
    localparam PAUSE_IR         = 4'hD;
    localparam EXIT2_IR         = 4'hE;
    localparam UPDATE_IR        = 4'hF;

    // JTAG instructions
    localparam BYPASS        = 5'b11111;
    localparam IDCODE        = 5'b00001;
    localparam SAMPLE_PRELOAD = 5'b00010;
    localparam EXTEST        = 5'b00011;
    localparam INTEST        = 5'b00100;

    // TAP controller state register
    reg [3:0] tap_state;
    reg [3:0] next_tap_state;
    
    // Instruction and data registers
    reg [IR_WIDTH-1:0] ir_shift_reg;
    reg [IR_WIDTH-1:0] ir_reg;
    reg [DR_WIDTH-1:0] dr_shift_reg;
    reg [DR_WIDTH-1:0] dr_reg;
    
    // Control signals
    wire shift_ir;
    wire shift_dr;
    wire capture_dr;
    wire update_ir;
    
    // State machine transitions
    always @(*) begin
        case (tap_state)
            TEST_LOGIC_RESET: next_tap_state = tms ? TEST_LOGIC_RESET : RUN_TEST_IDLE;
            RUN_TEST_IDLE:    next_tap_state = tms ? SELECT_DR_SCAN : RUN_TEST_IDLE;
            SELECT_DR_SCAN:   next_tap_state = tms ? SELECT_IR_SCAN : CAPTURE_DR;
            CAPTURE_DR:       next_tap_state = tms ? EXIT1_DR : SHIFT_DR;
            SHIFT_DR:         next_tap_state = tms ? EXIT1_DR : SHIFT_DR;
            EXIT1_DR:         next_tap_state = tms ? UPDATE_DR : PAUSE_DR;
            PAUSE_DR:         next_tap_state = tms ? EXIT2_DR : PAUSE_DR;
            EXIT2_DR:         next_tap_state = tms ? UPDATE_DR : SHIFT_DR;
            UPDATE_DR:        next_tap_state = tms ? SELECT_DR_SCAN : RUN_TEST_IDLE;
            SELECT_IR_SCAN:   next_tap_state = tms ? TEST_LOGIC_RESET : CAPTURE_IR;
            CAPTURE_IR:       next_tap_state = tms ? EXIT1_IR : SHIFT_IR;
            SHIFT_IR:         next_tap_state = tms ? EXIT1_IR : SHIFT_IR;
            EXIT1_IR:         next_tap_state = tms ? UPDATE_IR : PAUSE_IR;
            PAUSE_IR:         next_tap_state = tms ? EXIT2_IR : PAUSE_IR;
            EXIT2_IR:         next_tap_state = tms ? UPDATE_IR : SHIFT_IR;
            UPDATE_IR:        next_tap_state = tms ? SELECT_DR_SCAN : RUN_TEST_IDLE;
            default:          next_tap_state = TEST_LOGIC_RESET;
        endcase
    end
    
    // TAP state register update
    always @(posedge tck or negedge trst_n) begin
        if (!trst_n)
            tap_state <= TEST_LOGIC_RESET;
        else
            tap_state <= next_tap_state;
    end
    
    // Control signals generation
    assign shift_ir = (tap_state == SHIFT_IR);
    assign shift_dr = (tap_state == SHIFT_DR);
    assign capture_dr = (tap_state == CAPTURE_DR);
    assign update_ir = (tap_state == UPDATE_IR);
    assign update_dr = (tap_state == UPDATE_DR);
    assign dr_shift_en = shift_dr;
    
    // Instruction register shift logic
    always @(posedge tck or negedge trst_n) begin
        if (!trst_n) begin
            ir_shift_reg <= IDCODE; // Default to IDCODE after reset
        end else if (tap_state == CAPTURE_IR) begin
            ir_shift_reg <= {1'b0, {(IR_WIDTH-1){1'b1}}}; // Capture per IEEE standard: 01..1
        end else if (shift_ir) begin
            ir_shift_reg <= {tdi, ir_shift_reg[IR_WIDTH-1:1]};
        end
    end
    
    // Instruction register update logic
    always @(negedge tck or negedge trst_n) begin
        if (!trst_n) begin
            ir_reg <= IDCODE; // Default to IDCODE after reset
        end else if (update_ir) begin
            ir_reg <= ir_shift_reg;
        end
    end
    
    // Direct connection for data register tests - for simplicity
    always @(posedge tck or negedge trst_n) begin
        if (!trst_n) begin
            dr_shift_reg <= {DR_WIDTH{1'b0}};
        end else if (capture_dr) begin
            // Capture data directly without synchronization for testbench
            dr_shift_reg <= dr_in;
        end else if (shift_dr) begin
            dr_shift_reg <= {tdi, dr_shift_reg[DR_WIDTH-1:1]};
        end
    end
    
    // Data register update logic - update on falling edge per standard
    always @(negedge tck or negedge trst_n) begin
        if (!trst_n) begin
            dr_reg <= {DR_WIDTH{1'b0}};
        end else if (update_dr) begin
            dr_reg <= dr_shift_reg;
        end
    end
    
    // TDO multiplexer - TDO changes on negative edge
    reg tdo_mux;
    always @(negedge tck or negedge trst_n) begin
        if (!trst_n)
            tdo_mux <= 1'b0;
        else if (shift_dr)
            tdo_mux <= dr_shift_reg[0];
        else if (shift_ir)
            tdo_mux <= ir_shift_reg[0];
        else
            tdo_mux <= 1'b0;
    end
    
    // Output assignments
    assign tdo = tdo_mux;
    assign instruction = ir_reg;
    assign dr_out = dr_reg;
    
endmodule 