// Matrix-based Arbiter with Programmable Priorities
// This arbiter uses a matrix-based priority scheme where each requestor has a
// programmable priority relative to every other requestor.

module matrix_arbiter #(
    parameter NUM_REQUESTORS = 4,  // Number of requestors
    parameter PRIORITY_WIDTH = 2,  // Width of priority values
    parameter RESET_HIGH = 1       // Active high (1) or low (0) reset
)(
    input wire clk,
    input wire rst,
    input wire [NUM_REQUESTORS-1:0] req,             // Request inputs
    input wire [NUM_REQUESTORS*NUM_REQUESTORS*PRIORITY_WIDTH-1:0] priority_matrix, // Priority matrix entries
    output reg [NUM_REQUESTORS-1:0] grant,           // Grant output vector
    output wire grant_valid                          // Indicates if any request was granted
);

    // Determine the effective reset signal based on RESET_HIGH parameter
    wire reset = (RESET_HIGH != 0) ? rst : ~rst;
    
    // Create a register for the previous grant to support fairness
    reg [NUM_REQUESTORS-1:0] prev_grant;
    
    // Grant valid when at least one bit in the grant vector is 1
    assign grant_valid = |grant;
    
    // Function to extract priority from the priority matrix
    // priority_matrix structure: 
    // - For requestor i vs j, priority is at index: (i*NUM_REQUESTORS + j)*PRIORITY_WIDTH
    function [PRIORITY_WIDTH-1:0] get_priority;
        input integer i, j;
        integer base;
        begin
            // Calculate base index for priority lookup
            base = (i*NUM_REQUESTORS + j)*PRIORITY_WIDTH;
            get_priority = priority_matrix[base +: PRIORITY_WIDTH];
        end
    endfunction
    
    // Temporary variables for arbitration logic
    integer i, j;
    reg [NUM_REQUESTORS-1:0] winner;
    
    // Simplified arbitration logic that actually works
    always @(*) begin
        // Initialize winner with the request vector
        winner = req;
        
        // If no requests, then no winner
        if (req == {NUM_REQUESTORS{1'b0}}) begin
            winner = {NUM_REQUESTORS{1'b0}};
        end
        else begin
            // Compare each pair of active requestors
            for (i = 0; i < NUM_REQUESTORS; i = i + 1) begin
                if (req[i]) begin
                    // Compare requestor i with all other requestors j
                    for (j = 0; j < NUM_REQUESTORS; j = j + 1) begin
                        if (i != j && req[j]) begin
                            // Compare their priorities
                            if (get_priority(j, i) > get_priority(i, j)) begin
                                // j has higher priority than i, so i loses
                                winner[i] = 1'b0;
                            end
                        end
                    end
                end
                else begin
                    // If no request from i, it can't win
                    winner[i] = 1'b0;
                end
            end
            
            // If no clear winner (winner is all zeros but there are requests)
            // then use round-robin based on prev_grant
            if (winner == {NUM_REQUESTORS{1'b0}} && req != {NUM_REQUESTORS{1'b0}}) begin
                // Variables for round-robin selection
                reg [31:0] start_idx;
                reg found;
                
                // Initialize these variables to avoid latches
                start_idx = 0;
                found = 1'b0;
                
                // Find the last granted requestor
                for (i = NUM_REQUESTORS-1; i >= 0; i = i - 1) begin
                    if (prev_grant[i]) begin
                        start_idx = (i + 1) % NUM_REQUESTORS;
                        break;
                    end
                end
                
                // Search for the next requestor starting from start_idx
                for (i = 0; i < NUM_REQUESTORS; i = i + 1) begin
                    j = (start_idx + i) % NUM_REQUESTORS;
                    if (req[j]) begin
                        winner[j] = 1'b1;
                        found = 1'b1;
                        break;
                    end
                end
                
                // Fallback if nothing found (should not happen)
                if (found == 1'b0) begin
                    for (i = 0; i < NUM_REQUESTORS; i = i + 1) begin
                        if (req[i]) begin
                            winner[i] = 1'b1;
                            break;
                        end
                    end
                end
            end
        end
    end
    
    // Register the grant outputs and update previous grant
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            grant <= {NUM_REQUESTORS{1'b0}};
            prev_grant <= {NUM_REQUESTORS{1'b0}};
        end
        else begin
            grant <= winner;
            if (|winner) begin
                prev_grant <= winner;
            end
        end
    end

endmodule 
