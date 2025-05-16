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
            if (load) begin
                // Parallel load takes priority
                parallel_out <= parallel_in;
            end
            else begin
                case (direction)
                    2'b00: begin
                        // Hold current value
                        parallel_out <= parallel_out;
                    end
                    2'b01: begin
                        // Shift right - adjust to match expected values
                        // Start from 0xA5, should go to: 0x52, 0x29, 0x94, 0xCA, 0xE5, 0xF2, 0xF9, 0xFC
                        parallel_out <= {serial_in_left, parallel_out[WIDTH-1:1]};
                    end
                    2'b10: begin
                        // Shift left - adjust to match expected values
                        // Start from 0xA5, should go to: 0x4A, 0x94, 0x28, 0x50, 0xA0, 0x40, 0x80, 0x00
                        parallel_out <= {parallel_out[WIDTH-2:0], serial_in_right};
                    end
                    2'b11: begin
                        // Parallel load mode but load is not asserted
                        // Hold the current value
                        parallel_out <= parallel_out;
                    end
                    default: begin
                        // Hold current value for invalid direction
                        parallel_out <= parallel_out;
                    end
                endcase
            end
        end
    end

endmodule 
