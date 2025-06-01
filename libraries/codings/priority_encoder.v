module priority_encoder #(
    parameter WIDTH = 8,
    parameter OUT_WIDTH = $clog2(WIDTH)
) (
    input wire [WIDTH-1:0] in,
    output reg [OUT_WIDTH-1:0] out,
    output reg valid
);

    integer i;
    
    always @(*) begin
        valid = 0;
        out = {OUT_WIDTH{1'b0}};
        
        for (i = WIDTH-1; i >= 0; i = i - 1) begin
            if (in[i]) begin
                out = i[OUT_WIDTH-1:0];
                valid = 1;
                // Break the loop by setting i to -1
                i = -1;
            end
        end
    end

endmodule 
