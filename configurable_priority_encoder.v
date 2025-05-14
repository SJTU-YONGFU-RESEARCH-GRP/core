module configurable_priority_encoder #(
    parameter INPUT_WIDTH = 8,                     // Width of the input vector
    parameter OUTPUT_WIDTH = $clog2(INPUT_WIDTH)   // Width of the output (calculated)
) (
    input wire [INPUT_WIDTH-1:0] request,          // Input request vector
    output reg [OUTPUT_WIDTH-1:0] grant_index,     // Binary encoded output
    output reg valid                              // Valid output signal
);

    integer i;
    
    always @(*) begin
        valid = 1'b0;
        grant_index = {OUTPUT_WIDTH{1'b0}};
        
        // Priority encoding logic (MSB has highest priority)
        for (i = INPUT_WIDTH-1; i >= 0; i = i - 1) begin
            if (request[i]) begin
                grant_index = OUTPUT_WIDTH'(i);  // Properly size the integer
                valid = 1'b1;
                // Break out of the loop using a manual approach
                i = -1;  // Force loop exit (simulator-compatible alternative to 'break')
            end
        end
    end
    
    // Alternative implementation without using break (compatible with all simulators)
    /*
    always @(*) begin
        valid = 1'b0;
        grant_index = {OUTPUT_WIDTH{1'b0}};
        
        // Priority encoding logic using casez
        casez (request)
            {INPUT_WIDTH{1'b0}}: begin
                // All zeros case
                valid = 1'b0;
                grant_index = {OUTPUT_WIDTH{1'b0}};
            end
            default: begin
                // Find the highest priority bit (MSB)
                valid = 1'b1;
                
                // Priority encoding logic
                for (i = INPUT_WIDTH-1; i >= 0; i = i - 1) begin
                    if (request[i]) begin
                        grant_index = i[OUTPUT_WIDTH-1:0];
                        i = -1; // Force exit from the loop
                    end
                end
            end
        endcase
    end
    */

endmodule 
