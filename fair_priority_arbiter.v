module fair_priority_arbiter #(
    parameter NUM_REQUESTERS = 4,
    parameter PRIORITY_WIDTH = 2
)(
    input wire clk,
    input wire rst_n,
    input wire [NUM_REQUESTERS-1:0] request,
    input wire [NUM_REQUESTERS*PRIORITY_WIDTH-1:0] priorities,
    output reg [NUM_REQUESTERS-1:0] grant,
    output reg [$clog2(NUM_REQUESTERS)-1:0] grant_idx,
    output reg valid
);

    // Internal registers
    reg [$clog2(NUM_REQUESTERS)-1:0] last_grant_idx;
    
    // Wires for priority calculation
    wire [PRIORITY_WIDTH-1:0] priority_values [0:NUM_REQUESTERS-1];
    
    // Extract individual priority values from the input vector
    genvar gen_i;
    generate
        for (gen_i = 0; gen_i < NUM_REQUESTERS; gen_i = gen_i + 1) begin : EXTRACT_PRIORITIES
            assign priority_values[gen_i] = priorities[(gen_i+1)*PRIORITY_WIDTH-1:gen_i*PRIORITY_WIDTH];
        end
    endgenerate
    
    // Function to calculate next round-robin index
    function [$clog2(NUM_REQUESTERS)-1:0] next_index;
        input [$clog2(NUM_REQUESTERS)-1:0] current_idx;
        input integer offset;
        begin
            next_index = current_idx;
            // Simple increment logic with wrap-around
            for (integer inc_i = 0; inc_i < offset; inc_i = inc_i + 1) begin
                if (next_index == (NUM_REQUESTERS[$clog2(NUM_REQUESTERS)-1:0] - 1'b1))
                    next_index = {$clog2(NUM_REQUESTERS){1'b0}};
                else
                    next_index = next_index + 1'b1;
            end
        end
    endfunction
    
    // Main arbitration logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            grant <= {NUM_REQUESTERS{1'b0}};
            grant_idx <= {$clog2(NUM_REQUESTERS){1'b0}};
            valid <= 1'b0;
            last_grant_idx <= {$clog2(NUM_REQUESTERS){1'b0}};
        end else begin
            // Default values
            grant <= {NUM_REQUESTERS{1'b0}};
            valid <= 1'b0;
            
            if (|request) begin  // If any request is active
                // Variables to track the highest priority request
                reg [PRIORITY_WIDTH-1:0] highest_priority;
                reg [$clog2(NUM_REQUESTERS)-1:0] highest_idx;
                reg found;
                reg [$clog2(NUM_REQUESTERS)-1:0] current_idx;
                
                // Initialize with minimum priority
                highest_priority = {PRIORITY_WIDTH{1'b0}};
                highest_idx = {$clog2(NUM_REQUESTERS){1'b0}};
                found = 1'b0;
                
                // First pass: look for requests with higher priority starting from position after last granted
                current_idx = next_index(last_grant_idx, 1);
                
                for (integer loop_j = 0; loop_j < NUM_REQUESTERS; loop_j = loop_j + 1) begin
                    if (request[current_idx] && 
                        (priority_values[current_idx] > highest_priority || !found)) begin
                        highest_priority = priority_values[current_idx];
                        highest_idx = current_idx;
                        found = 1'b1;
                    end
                    
                    // Move to next index
                    current_idx = next_index(current_idx, 1);
                end
                
                // Grant the request
                if (found) begin
                    grant[highest_idx] <= 1'b1;
                    grant_idx <= highest_idx;
                    valid <= 1'b1;
                    last_grant_idx <= highest_idx;
                end
            end
        end
    end

endmodule 
