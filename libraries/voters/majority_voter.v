module majority_voter #(
    parameter INPUT_WIDTH = 8,     // Width of each input
    parameter NUM_INPUTS = 3,      // Number of input vectors
    parameter MAJORITY_LEVEL = (NUM_INPUTS/2 + 1) // Default majority level (>50%)
) (
    input wire [INPUT_WIDTH-1:0] inputs [NUM_INPUTS-1:0], // Array of input vectors
    output reg [INPUT_WIDTH-1:0] majority_out,            // Output with majority value
    output reg valid                                     // Valid signal when majority exists
);

    // Helper variables for calculation
    integer i, j;
    integer count;
    reg [INPUT_WIDTH-1:0] current_value;
    reg majority_found;

    always @(*) begin
        valid = 0;
        majority_out = 0;
        majority_found = 0;

        // Check each input value to see if it appears at least MAJORITY_LEVEL times
        for (i = 0; i < NUM_INPUTS; i = i + 1) begin
            // Skip if we've already processed this exact input value in a previous iteration
            if (!majority_found) begin
                current_value = inputs[i];
                count = 0;

                // Count occurrences of current_value
                for (j = 0; j < NUM_INPUTS; j = j + 1) begin
                    if (inputs[j] == current_value) begin
                        count = count + 1;
                    end
                end

                // Check if we found a majority
                if (count >= MAJORITY_LEVEL) begin
                    majority_out = current_value;
                    valid = 1;
                    majority_found = 1;
                end
            end
        end
    end
endmodule 
