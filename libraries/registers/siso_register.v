module siso_register #(
    parameter WIDTH = 8,               // Width of the shift register
    parameter SHIFT_RIGHT = 1          // 1: shift right, 0: shift left
)(
    input wire clk,                    // Clock input
    input wire rst_n,                  // Active low reset
    input wire enable,                 // Shift enable
    input wire serial_in,              // Serial data input
    output wire serial_out             // Serial data output
);

    // Internal shift register
    reg [WIDTH-1:0] shift_reg;
    
    // Serial output assignment depends on shift direction
    generate
        if (SHIFT_RIGHT) begin : gen_right_output
            assign serial_out = shift_reg[0];  // LSB for right shift
        end else begin : gen_left_output
            assign serial_out = shift_reg[WIDTH-1];  // MSB for left shift
        end
    endgenerate
    
    // Shift register logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            shift_reg <= {WIDTH{1'b0}}; // Reset to all zeros
        end else if (enable) begin
            if (SHIFT_RIGHT) begin
                // Shift right (MSB to LSB)
                shift_reg <= {serial_in, shift_reg[WIDTH-1:1]};
            end else begin
                // Shift left (LSB to MSB)
                shift_reg <= {shift_reg[WIDTH-2:0], serial_in};
            end
        end
    end

endmodule 
