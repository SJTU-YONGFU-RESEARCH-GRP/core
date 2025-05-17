module logic_analyzer #(
    parameter CHANNEL_COUNT = 32,
    parameter SAMPLE_DEPTH = 1024,
    parameter SAMPLE_WIDTH = 1,        // Bits per channel
    parameter TRIGGER_WIDTH = 8
)(
    // Global signals
    input  wire                             clk,
    input  wire                             rst_n,
    
    // Probe inputs
    input  wire [CHANNEL_COUNT-1:0][SAMPLE_WIDTH-1:0] probe_in,
    
    // Control interface
    input  wire                             arm,            // Arm the trigger
    input  wire                             force_trigger,  // Force a trigger event
    input  wire [CHANNEL_COUNT-1:0]         channel_mask,   // Channels to monitor
    input  wire [TRIGGER_WIDTH-1:0]         trigger_value,  // Value to trigger on
    input  wire [TRIGGER_WIDTH-1:0]         trigger_mask,   // Bits to check for trigger
    input  wire [1:0]                       trigger_mode,   // 0=equal, 1=not equal, 2=rising, 3=falling
    input  wire [CHANNEL_COUNT-1:0]         trigger_channel,// Channel(s) to trigger on
    
    // Status signals
    output reg                              triggered,      // Trigger detected
    output reg                              capturing,      // Actively capturing
    output reg                              buffer_full,    // Capture buffer is full
    
    // Readback interface
    input  wire                             read_en,
    input  wire [$clog2(SAMPLE_DEPTH)-1:0]  read_addr,
    output reg  [CHANNEL_COUNT-1:0][SAMPLE_WIDTH-1:0] read_data
);

    // Internal signals
    reg [CHANNEL_COUNT-1:0][SAMPLE_WIDTH-1:0] sample_buffer [0:SAMPLE_DEPTH-1];
    reg [$clog2(SAMPLE_DEPTH)-1:0] write_ptr;
    reg [CHANNEL_COUNT-1:0][SAMPLE_WIDTH-1:0] probe_in_prev; // Previous sample for edge detection
    
    // State definitions
    localparam IDLE     = 2'b00;
    localparam ARMED    = 2'b01;
    localparam CAPTURE  = 2'b10;
    localparam COMPLETE = 2'b11;
    
    reg [1:0] state;
    
    // Trigger logic
    reg [TRIGGER_WIDTH-1:0] masked_probe;
    reg [TRIGGER_WIDTH-1:0] prev_masked_probe;
    reg trigger_match;
    reg trigger_occurred;
    
    // Extract the trigger bits from the masked channel
    // This extracts bits safely, ensures we don't try to extract more bits than available
    integer i;
    always @(*) begin
        masked_probe = {TRIGGER_WIDTH{1'b0}};
        for (i = 0; i < CHANNEL_COUNT; i = i + 1) begin
            if (trigger_channel[i] && channel_mask[i]) begin
                // Only extract as many bits as available, pad with zeros if needed
                if (SAMPLE_WIDTH >= TRIGGER_WIDTH) begin
                    /* verilator lint_off SELRANGE */
                    masked_probe = probe_in[i][TRIGGER_WIDTH-1:0];
                    /* verilator lint_on SELRANGE */
                end else begin
                    masked_probe[SAMPLE_WIDTH-1:0] = probe_in[i];
                end
            end
        end
    end
    
    // Extract previous value of trigger channel
    always @(*) begin
        prev_masked_probe = {TRIGGER_WIDTH{1'b0}};
        for (i = 0; i < CHANNEL_COUNT; i = i + 1) begin
            if (trigger_channel[i] && channel_mask[i]) begin
                // Only extract as many bits as available, pad with zeros if needed
                if (SAMPLE_WIDTH >= TRIGGER_WIDTH) begin
                    /* verilator lint_off SELRANGE */
                    prev_masked_probe = probe_in_prev[i][TRIGGER_WIDTH-1:0];
                    /* verilator lint_on SELRANGE */
                end else begin
                    prev_masked_probe[SAMPLE_WIDTH-1:0] = probe_in_prev[i];
                end
            end
        end
    end
    
    // Trigger condition detection
    wire equal_match = ((masked_probe & trigger_mask) == (trigger_value & trigger_mask));
    wire rising_edge = ((masked_probe & trigger_mask) > (prev_masked_probe & trigger_mask));
    wire falling_edge = ((masked_probe & trigger_mask) < (prev_masked_probe & trigger_mask));
    
    // Trigger condition based on mode
    always @(*) begin
        case (trigger_mode)
            2'b00: trigger_match = equal_match;                   // Equal
            2'b01: trigger_match = !equal_match;                  // Not Equal
            2'b10: trigger_match = rising_edge;                   // Rising edge
            2'b11: trigger_match = falling_edge;                  // Falling edge
            default: trigger_match = 1'b0;
        endcase
    end
    
    // Main state machine
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
            triggered <= 1'b0;
            capturing <= 1'b0;
            buffer_full <= 1'b0;
            write_ptr <= 0;
            trigger_occurred <= 1'b0;
            
            for (i = 0; i < CHANNEL_COUNT; i = i + 1) begin
                probe_in_prev[i] <= 0;
            end
        end else begin
            // Store previous sample for edge detection
            probe_in_prev <= probe_in;
            
            case (state)
                IDLE: begin
                    if (arm) begin
                        state <= ARMED;
                        capturing <= 1'b0;
                        triggered <= 1'b0;
                        buffer_full <= 1'b0;
                        write_ptr <= 0;
                        trigger_occurred <= 1'b0;
                    end
                end
                
                ARMED: begin
                    capturing <= 1'b1;
                    // Check for trigger condition
                    if (trigger_match || force_trigger) begin
                        triggered <= 1'b1;
                        trigger_occurred <= 1'b1;
                        state <= CAPTURE;
                    end else begin
                        // Store pre-trigger samples
                        sample_buffer[write_ptr] <= probe_in;
                        write_ptr <= write_ptr + 1;
                        if (write_ptr == SAMPLE_DEPTH - 1) begin
                            write_ptr <= 0; // Circular buffer
                        end
                    end
                end
                
                CAPTURE: begin
                    // Continue capturing post-trigger
                    sample_buffer[write_ptr] <= probe_in;
                    write_ptr <= write_ptr + 1;
                    
                    if (write_ptr == SAMPLE_DEPTH - 1) begin
                        state <= COMPLETE;
                        capturing <= 1'b0;
                        buffer_full <= 1'b1;
                    end
                end
                
                COMPLETE: begin
                    // Stay in this state until rearmed
                    if (arm) begin
                        state <= ARMED;
                        capturing <= 1'b0;
                        triggered <= 1'b0;
                        buffer_full <= 1'b0;
                        write_ptr <= 0;
                        trigger_occurred <= 1'b0;
                    end
                end
                
                default: state <= IDLE;
            endcase
        end
    end
    
    // Read interface
    always @(posedge clk) begin
        if (read_en) begin
            read_data <= sample_buffer[read_addr];
        end
    end

endmodule 