module majority_voter #(
    parameter INPUT_WIDTH = 8,     // Width of each input
    parameter NUM_INPUTS = 3,      // Number of input vectors
    parameter MAJORITY_LEVEL = (NUM_INPUTS/2 + 1) // Default majority level (>50%)
) (
    input wire [INPUT_WIDTH*NUM_INPUTS-1:0] inputs_flat, // Flattened array of input vectors
    output reg [INPUT_WIDTH-1:0] majority_out,           // Output with majority value
    output reg valid                                     // Valid signal when majority exists
);

    integer i, j;
    integer count;
    reg [INPUT_WIDTH-1:0] current_value;
    reg majority_found;
    reg [INPUT_WIDTH-1:0] inputs [0:NUM_INPUTS-1]; // Internal unpacked array for easier access

    always @(*) begin
        // Unpack the flat input vector into an array for easier processing
        for (i = 0; i < NUM_INPUTS; i = i + 1) begin
            inputs[i] = inputs_flat[(i+1)*INPUT_WIDTH-1 -: INPUT_WIDTH];
        end

        valid = 0;
        majority_out = 0;
        majority_found = 0;

        // Check each input value to see if it appears at least MAJORITY_LEVEL times
        for (i = 0; i < NUM_INPUTS; i = i + 1) begin
            if (!majority_found) begin
                current_value = inputs[i];
                count = 0;
                for (j = 0; j < NUM_INPUTS; j = j + 1) begin
                    if (inputs[j] == current_value) begin
                        count = count + 1;
                    end
                end
                if (count >= MAJORITY_LEVEL) begin
                    majority_out = current_value;
                    valid = 1;
                    majority_found = 1;
                end
            end
        end
    end
endmodule 
