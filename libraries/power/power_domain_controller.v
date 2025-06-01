module power_domain_controller #(
    parameter DOMAIN_COUNT = 4
)(
    // Global signals
    input  wire                       clk,
    input  wire                       rst_n,
    
    // Power domain control
    input  wire [DOMAIN_COUNT-1:0]    domain_enable,
    input  wire [DOMAIN_COUNT-1:0]    domain_isolate,
    output reg  [DOMAIN_COUNT-1:0]    domain_power_on,
    output reg  [DOMAIN_COUNT-1:0]    domain_isolation_on,
    output reg  [DOMAIN_COUNT-1:0]    domain_reset_n,
    output reg  [DOMAIN_COUNT-1:0]    domain_clock_on,
    
    // Status signals
    output reg  [DOMAIN_COUNT-1:0]    domain_status,        // 1=powered on, 0=powered off
    output reg  [DOMAIN_COUNT-1:0]    domain_transition,    // 1=in transition, 0=stable
    
    // Control signals
    input  wire                       start_transition,
    output reg                        transition_done
);

    // Power domain controller states
    localparam [2:0] IDLE            = 3'b000;
    localparam [2:0] ISOLATE         = 3'b001;
    localparam [2:0] TOGGLE_POWER    = 3'b010;
    localparam [2:0] TOGGLE_RESET    = 3'b011;
    localparam [2:0] TOGGLE_CLOCK    = 3'b100;
    localparam [2:0] REMOVE_ISOLATE  = 3'b101;
    localparam [2:0] DONE            = 3'b110;
    
    // Delay counters and constants
    localparam POWER_DELAY = 10;  // Cycles to wait for power stabilization
    localparam RESET_DELAY = 5;   // Cycles to hold reset
    localparam CLOCK_DELAY = 3;   // Cycles to wait for clock stabilization
    localparam ISO_DELAY = 2;     // Cycles to wait for isolation
    
    reg [2:0] state;
    reg [3:0] delay_counter;
    reg [DOMAIN_COUNT-1:0] target_status; // Target power state for each domain
    
    // Determine which domains need transitions
    wire [DOMAIN_COUNT-1:0] domains_to_change = domain_enable ^ domain_status;
    wire any_domains_to_change = |domains_to_change;
    
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
            delay_counter <= 0;
            domain_power_on <= 0;
            domain_isolation_on <= {DOMAIN_COUNT{1'b1}}; // All domains isolated by default
            domain_reset_n <= 0;
            domain_clock_on <= 0;
            domain_status <= 0;
            domain_transition <= 0;
            target_status <= 0;
            transition_done <= 1;
        end else begin
            case (state)
                IDLE: begin
                    // Wait for start_transition signal
                    if (start_transition && any_domains_to_change) begin
                        state <= ISOLATE;
                        delay_counter <= ISO_DELAY;
                        target_status <= domain_enable;
                        domain_transition <= domains_to_change;
                        transition_done <= 0;
                    end else begin
                        transition_done <= 1;
                    end
                end
                
                ISOLATE: begin
                    // Apply isolation to domains that are powering down
                    domain_isolation_on <= domain_isolation_on | (domain_transition & ~target_status) | domain_isolate;
                    
                    if (delay_counter == 0) begin
                        state <= TOGGLE_POWER;
                        delay_counter <= POWER_DELAY;
                    end else begin
                        delay_counter <= delay_counter - 1;
                    end
                end
                
                TOGGLE_POWER: begin
                    // Toggle power according to target_status
                    domain_power_on <= (domain_power_on & ~domain_transition) | (target_status & domain_transition);
                    
                    if (delay_counter == 0) begin
                        state <= TOGGLE_RESET;
                        delay_counter <= RESET_DELAY;
                    end else begin
                        delay_counter <= delay_counter - 1;
                    end
                end
                
                TOGGLE_RESET: begin
                    // Handle reset based on domain state
                    // Release reset for domains powering up, assert reset for domains powering down
                    domain_reset_n <= (domain_reset_n & ~(domain_transition & ~target_status)) | 
                                     (domain_transition & target_status & (delay_counter == 0 ? {DOMAIN_COUNT{1'b1}} : 0));
                    
                    if (delay_counter == 0) begin
                        state <= TOGGLE_CLOCK;
                        delay_counter <= CLOCK_DELAY;
                    end else begin
                        delay_counter <= delay_counter - 1;
                    end
                end
                
                TOGGLE_CLOCK: begin
                    // Enable/disable clocks according to target_status
                    domain_clock_on <= (domain_clock_on & ~domain_transition) | (target_status & domain_transition);
                    
                    if (delay_counter == 0) begin
                        state <= REMOVE_ISOLATE;
                        delay_counter <= ISO_DELAY;
                    end else begin
                        delay_counter <= delay_counter - 1;
                    end
                end
                
                REMOVE_ISOLATE: begin
                    // Remove isolation for domains that are powering up (unless explicitly isolated)
                    domain_isolation_on <= (domain_isolation_on & ~(domain_transition & target_status)) | domain_isolate;
                    
                    if (delay_counter == 0) begin
                        state <= DONE;
                    end else begin
                        delay_counter <= delay_counter - 1;
                    end
                end
                
                DONE: begin
                    // Update status and transition flags
                    domain_status <= (domain_status & ~domain_transition) | (target_status & domain_transition);
                    domain_transition <= 0;
                    transition_done <= 1;
                    state <= IDLE;
                end
                
                default: state <= IDLE;
            endcase
        end
    end

endmodule 