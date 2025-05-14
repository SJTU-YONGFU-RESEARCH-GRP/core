module leading_zero_counter #(
    parameter DATA_WIDTH = 32,
    parameter COUNT_WIDTH = $clog2(DATA_WIDTH + 1)
) (
    input wire [DATA_WIDTH-1:0] data_in,
    output reg [COUNT_WIDTH-1:0] zero_count,
    output reg valid_input       // Indicates if input is non-zero
);

    integer i;
    
    always @(*) begin
        // Default values
        zero_count = {COUNT_WIDTH{1'b0}};
        valid_input = 1'b0;
        
        // Check if input is non-zero
        if (|data_in) begin
            valid_input = 1'b1;
            
            // Count leading zeros
            for (i = DATA_WIDTH-1; i >= 0; i = i - 1) begin
                if (data_in[i] == 1'b1) begin
                    zero_count = COUNT_WIDTH'(DATA_WIDTH - 1 - i);
                    i = -1; // Break the loop
                end
            end
        end else begin
            // All zeros case
            zero_count = COUNT_WIDTH'(DATA_WIDTH);
            valid_input = 1'b0;
        end
    end

endmodule 
