module shift_register #(
    parameter WIDTH = 8,
    parameter SHIFT_DIR = 0  // 0: right shift, 1: left shift
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

    // Serial out depends on shift direction
    assign serial_out = (SHIFT_DIR == 0) ? parallel_out[0] : parallel_out[WIDTH-1];

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            parallel_out <= {WIDTH{1'b0}};
        end
        else if (load) begin
            parallel_out <= parallel_in;
        end
        else if (en) begin
            if (SHIFT_DIR == 0) begin
                // Right shift
                parallel_out <= {serial_in, parallel_out[WIDTH-1:1]};
            end
            else begin
                // Left shift
                parallel_out <= {parallel_out[WIDTH-2:0], serial_in};
            end
        end
    end

endmodule
