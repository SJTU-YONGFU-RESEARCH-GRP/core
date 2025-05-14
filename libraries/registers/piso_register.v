module piso_register #(
    parameter WIDTH = 8
)(
    input wire clk,
    input wire rst_n,
    input wire load,          // Load parallel data when high
    input wire [WIDTH-1:0] parallel_in,
    output wire serial_out
);

    // Internal shift register
    reg [WIDTH-1:0] shift_reg;

    // Update shift register on clock edge
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            shift_reg <= {WIDTH{1'b0}};
        end else if (load) begin
            shift_reg <= parallel_in;
        end else begin
            // Shift right, shifting in 0 from the left
            shift_reg <= {1'b0, shift_reg[WIDTH-1:1]};
        end
    end

    // Serial output is the LSB of the shift register
    assign serial_out = shift_reg[0];

endmodule 
