module johnson_counter #(
    parameter WIDTH = 4
)(
    input wire clk,
    input wire rst_n,
    input wire enable,
    input wire load_en,
    input wire [WIDTH-1:0] load_val,
    output reg [WIDTH-1:0] count
);

    // Johnson counter is a modified ring counter where the inverted output
    // of the last flip-flop is connected to the input of the first flip-flop

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            count <= {WIDTH{1'b0}};
        end
        else if (enable) begin
            if (load_en) begin
                count <= load_val;
            end
            else begin
                // Shift left and connect inverted MSB to LSB
                count <= {count[WIDTH-2:0], ~count[WIDTH-1]};
            end
        end
    end

endmodule 
