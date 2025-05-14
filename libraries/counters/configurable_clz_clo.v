module configurable_clz_clo #(
    parameter DATA_WIDTH = 32,                    // Width of input data
    parameter COUNT_WIDTH = $clog2(DATA_WIDTH+1)  // Width of count output
) (
    input wire [DATA_WIDTH-1:0] data_in,
    input wire count_ones,                       // 0 for count leading zeros, 1 for count leading ones
    output reg [COUNT_WIDTH-1:0] count_out,
    output reg all_zeros,                        // Indicates if data_in is all zeros
    output reg all_ones                          // Indicates if data_in is all ones
);

    integer i;

    always @(*) begin
        // Set default values
        count_out = COUNT_WIDTH'(DATA_WIDTH);
        all_zeros = (data_in == {DATA_WIDTH{1'b0}});
        all_ones = (data_in == {DATA_WIDTH{1'b1}});
        
        // For count leading zeros
        if (count_ones == 1'b0) begin
            if (all_zeros) begin
                count_out = COUNT_WIDTH'(DATA_WIDTH);
            end else begin
                for (i = DATA_WIDTH-1; i >= 0; i = i - 1) begin
                    if (data_in[i] == 1'b1) begin
                        count_out = COUNT_WIDTH'(DATA_WIDTH - 1 - i);
                        break;
                    end
                end
            end
        end
        // For count leading ones
        else begin
            if (all_ones) begin
                count_out = COUNT_WIDTH'(DATA_WIDTH);
            end else begin
                for (i = DATA_WIDTH-1; i >= 0; i = i - 1) begin
                    if (data_in[i] == 1'b0) begin
                        count_out = COUNT_WIDTH'(DATA_WIDTH - 1 - i);
                        break;
                    end
                end
            end
        end
    end

endmodule 
