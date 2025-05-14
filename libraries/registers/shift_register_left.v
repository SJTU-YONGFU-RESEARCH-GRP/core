module shift_register_left #(
    parameter WIDTH = 8
) (
    input wire clk,
    input wire rst_n,
    input wire en,
    input wire load,
    input wire serial_in,
    input wire [WIDTH-1:0] parallel_in,
    output wire serial_out,
    output reg [WIDTH-1:0] parallel_out
);

    // Serial out is the MSB for left shift
    assign serial_out = parallel_out[WIDTH-1];

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            parallel_out <= {WIDTH{1'b0}};
        end
        else if (load) begin
            parallel_out <= parallel_in;
        end
        else if (en) begin
            // Left shift
            parallel_out <= {parallel_out[WIDTH-2:0], serial_in};
        end
    end

endmodule 
