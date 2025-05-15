module configurable_comparator #(
    parameter WIDTH = 8,           // Bit width of inputs
    parameter SIGNED_COMPARE = 0   // 0 for unsigned, 1 for signed comparison
)(
    input wire [WIDTH-1:0] a,
    input wire [WIDTH-1:0] b,
    input wire [2:0] op_sel,       // Operation selector
    output reg result              // Single bit result
);

    // Operation codes
    localparam EQUAL = 3'b000;        // Equal
    localparam NOT_EQUAL = 3'b001;    // Not equal
    localparam LESS_THAN = 3'b010;    // Less than
    localparam LESS_EQUAL = 3'b011;   // Less than or equal
    localparam GREATER_THAN = 3'b100; // Greater than
    localparam GREATER_EQUAL = 3'b101;// Greater than or equal

    always @(*) begin
        case (op_sel)
            EQUAL:          result = (a == b);
            NOT_EQUAL:      result = (a != b);
            LESS_THAN:      result = (SIGNED_COMPARE != 0) ? $signed(a) < $signed(b) : a < b;
            LESS_EQUAL:     result = (SIGNED_COMPARE != 0) ? $signed(a) <= $signed(b) : a <= b;
            GREATER_THAN:   result = (SIGNED_COMPARE != 0) ? $signed(a) > $signed(b) : a > b;
            GREATER_EQUAL:  result = (SIGNED_COMPARE != 0) ? $signed(a) >= $signed(b) : a >= b;
            default:        result = 1'b0;
        endcase
    end

endmodule
