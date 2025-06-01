module performance_counter #(
    parameter COUNTER_WIDTH = 32,
    parameter COUNTER_COUNT = 8
)(
    // Global signals
    input  wire                         clk,
    input  wire                         rst_n,
    
    // Event inputs
    input  wire [COUNTER_COUNT-1:0]     event_inc,  // Increment signals
    
    // Control signals
    input  wire                         enable,
    input  wire                         clear,
    input  wire [COUNTER_COUNT-1:0]     counter_sel,
    
    // Output
    output reg  [COUNTER_WIDTH-1:0]     count_value,
    output wire [COUNTER_COUNT-1:0][COUNTER_WIDTH-1:0] all_counts
);

    // Array of counters
    reg [COUNTER_COUNT-1:0][COUNTER_WIDTH-1:0] counters;
    
    // Register to store previous event_inc for edge detection
    reg [COUNTER_COUNT-1:0] prev_event_inc;
    
    // Counter increment logic
    integer i;
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            // Reset all counters
            for (i = 0; i < COUNTER_COUNT; i = i + 1) begin
                counters[i] <= {COUNTER_WIDTH{1'b0}};
            end
            prev_event_inc <= {COUNTER_COUNT{1'b0}};
        end else if (clear) begin
            // Clear all counters
            for (i = 0; i < COUNTER_COUNT; i = i + 1) begin
                counters[i] <= {COUNTER_WIDTH{1'b0}};
            end
            // Don't reset prev_event_inc on clear
        end else if (enable) begin
            // Update previous event_inc
            prev_event_inc <= event_inc;
            
            // Increment counters based on event_inc signals
            // Only increment on a rising edge of event_inc (0->1)
            for (i = 0; i < COUNTER_COUNT; i = i + 1) begin
                if (event_inc[i] && !prev_event_inc[i]) begin
                    counters[i] <= counters[i] + 1'b1;
                end
            end
        end else begin
            // Just update prev_event_inc when disabled
            prev_event_inc <= event_inc;
        end
    end
    
    // Output multiplexer for selected counter
    always @(*) begin
        count_value = {COUNTER_WIDTH{1'b0}}; // Default value
        for (i = 0; i < COUNTER_COUNT; i = i + 1) begin
            if (counter_sel[i]) begin
                count_value = counters[i];
            end
        end
    end
    
    // Assign all counters to output
    genvar g;
    generate
        for (g = 0; g < COUNTER_COUNT; g = g + 1) begin : gen_counts
            assign all_counts[g] = counters[g];
        end
    endgenerate

endmodule 