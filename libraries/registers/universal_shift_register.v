module universal_shift_register #(
    parameter WIDTH = 8,
    parameter DIRECTION_WIDTH = 2
)(
    input wire clk,
    input wire rst_n,
    input wire enable,
    input wire [DIRECTION_WIDTH-1:0] direction,
    input wire serial_in_left,
    input wire serial_in_right,
    input wire [WIDTH-1:0] parallel_in,
    input wire load,
    output reg [WIDTH-1:0] parallel_out
);

    // Direction control:
    // 00: No shift (hold)
    // 01: Shift right
    // 10: Shift left
    // 11: Parallel load

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            parallel_out <= {WIDTH{1'b0}};
        end
        else if (enable) begin
            case (direction)
                2'b00: begin
                    // Hold current value
                    parallel_out <= parallel_out;
                end
                2'b01: begin
                    // Shift right
                    parallel_out <= {serial_in_left, parallel_out[WIDTH-1:1]};
                end
                2'b10: begin
                    // Shift left
                    parallel_out <= {parallel_out[WIDTH-2:0], serial_in_right};
                end
                2'b11: begin
                    // Parallel load
                    if (load) begin
                        parallel_out <= parallel_in;
                    end
                end
                default: begin
                    // Hold current value for invalid direction
                    parallel_out <= parallel_out;
                end
            endcase
        end
    end

endmodule 
