module shift_register_right #(
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

    // Serial out is the LSB for right shift
    assign serial_out = parallel_out[0];

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            parallel_out <= {WIDTH{1'b0}};
        end
        else if (load) begin
            parallel_out <= parallel_in;
        end
        else if (en) begin
            // Right shift
            parallel_out <= {serial_in, parallel_out[WIDTH-1:1]};
        end
    end

endmodule
