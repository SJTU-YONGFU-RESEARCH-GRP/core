module multi_flop_synchronizer #(
    parameter WIDTH = 1,              // Width of the signal to synchronize
    parameter NUM_STAGES = 2,         // Number of synchronization stages (minimum 2 recommended)
    parameter RESET_VALUE = {WIDTH{1'b0}}  // Value to reset to
)(
    input  wire             dest_clk,   // Destination clock domain
    input  wire             dest_rst_n, // Active-low reset in destination domain
    input  wire [WIDTH-1:0] async_in,   // Asynchronous input signal
    output wire [WIDTH-1:0] sync_out    // Synchronized output signal
);

    // Synchronization flip-flop chain
    reg [WIDTH-1:0] sync_stages [0:NUM_STAGES-1];
    
    // Generate logic for initialization
    genvar i;
    generate
        for (i = 0; i < NUM_STAGES; i = i + 1) begin : gen_sync_stages
            initial begin
                sync_stages[i] = RESET_VALUE;
            end
        end
    endgenerate
    
    // Multi-stage synchronization
    always @(posedge dest_clk or negedge dest_rst_n) begin
        if (!dest_rst_n) begin
            // Reset all synchronizer stages
            sync_stages[0] <= RESET_VALUE;
            sync_stages[1] <= RESET_VALUE;
            if (NUM_STAGES > 2) begin : reset_additional_stages
                integer j;
                for (j = 2; j < NUM_STAGES; j = j + 1) begin
                    sync_stages[j] <= RESET_VALUE;
                end
            end
        end else begin
            // First stage samples the asynchronous input
            sync_stages[0] <= async_in;
            
            // Subsequent stages form the synchronization chain
            sync_stages[1] <= sync_stages[0];
            if (NUM_STAGES > 2) begin : shift_additional_stages
                integer j;
                for (j = 2; j < NUM_STAGES; j = j + 1) begin
                    sync_stages[j] <= sync_stages[j-1];
                end
            end
        end
    end
    
    // Output is the last stage of the synchronizer
    assign sync_out = sync_stages[NUM_STAGES-1];

endmodule 
