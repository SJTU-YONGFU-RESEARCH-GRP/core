module bidirectional_shift_register #(
    parameter WIDTH = 8
)(
    input wire clk,
    input wire rst_n,
    input wire enable,
    input wire direction,  // 0: right, 1: left
    input wire shift_en,   // Enable shifting
    input wire load_en,    // Enable parallel load
    input wire serial_in,  // Serial input (used for both directions)
    input wire [WIDTH-1:0] parallel_in,
    output reg [WIDTH-1:0] parallel_out
);

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            parallel_out <= {WIDTH{1'b0}};
        end
        else if (enable) begin
            if (load_en) begin
                // Parallel load has priority
                parallel_out <= parallel_in;
            end
            else if (shift_en) begin
                if (direction == 1'b0) begin
                    // Shift right
                    parallel_out <= {serial_in, parallel_out[WIDTH-1:1]};
                end
                else begin
                    // Shift left
                    parallel_out <= {parallel_out[WIDTH-2:0], serial_in};
                end
            end
        end
    end

endmodule 
