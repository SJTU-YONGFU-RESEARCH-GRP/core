module loadable_updown_counter #(
    parameter WIDTH = 8
)(
    input wire clk,
    input wire rst_n,
    input wire enable,
    input wire up_down,   // 0: count down, 1: count up
    input wire load_en,
    input wire [WIDTH-1:0] load_val,
    output reg [WIDTH-1:0] count,
    output wire overflow,
    output wire underflow
);

    // Overflow and underflow detection
    assign overflow = (count == {WIDTH{1'b1}} && up_down == 1'b1 && enable && !load_en);
    assign underflow = (count == {WIDTH{1'b0}} && up_down == 1'b0 && enable && !load_en);

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            count <= {WIDTH{1'b0}};
        end
        else if (enable) begin
            if (load_en) begin
                count <= load_val;
            end
            else if (up_down) begin
                // Count up
                count <= count + 1'b1;
            end
            else begin
                // Count down
                count <= count - 1'b1;
            end
        end
    end

endmodule 
