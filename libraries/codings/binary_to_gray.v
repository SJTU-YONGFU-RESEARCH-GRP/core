module binary_to_gray #(
    parameter WIDTH = 4
)(
    input wire [WIDTH-1:0] binary_in,
    output wire [WIDTH-1:0] gray_out
);

    // Gray code conversion: gray_out = binary_in ^ (binary_in >> 1)
    assign gray_out[WIDTH-1] = binary_in[WIDTH-1];
    
    genvar i;
    generate
        for (i = 0; i < WIDTH-1; i = i + 1) begin : gen_gray
            assign gray_out[i] = binary_in[i] ^ binary_in[i+1];
        end
    endgenerate

endmodule 
