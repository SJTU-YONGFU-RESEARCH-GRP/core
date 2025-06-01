module configurable_comparator #(
    parameter WIDTH = 16           // Bit width of inputs
)(
    input wire [WIDTH-1:0] a,
    input wire [WIDTH-1:0] b,
    input wire [2:0] op_sel,       // Operation selector
    input wire signed_mode,        // 0 for unsigned, 1 for signed comparison
    output reg result              // Single bit result
);

    // Operation codes
    localparam EQUAL = 3'b000;        // Equal
    localparam NOT_EQUAL = 3'b001;    // Not equal
    localparam LESS_THAN = 3'b010;    // Less than
    localparam LESS_EQUAL = 3'b011;   // Less than or equal
    localparam GREATER_THAN = 3'b100; // Greater than
    localparam GREATER_EQUAL = 3'b101;// Greater than or equal

    // Internal signals for signed comparison
    wire signed [WIDTH-1:0] a_signed;
    wire signed [WIDTH-1:0] b_signed;
    
    // Convert inputs to signed when in signed mode
    assign a_signed = $signed(a);
    assign b_signed = $signed(b);

    // Comparison results based on mode
    wire lt_result = signed_mode ? (a_signed < b_signed) : (a < b);
    wire gt_result = signed_mode ? (a_signed > b_signed) : (a > b);

    always @(*) begin
        case (op_sel)
            EQUAL:          result = (a == b);
            NOT_EQUAL:      result = (a != b);
            LESS_THAN:      result = lt_result;
            LESS_EQUAL:     result = lt_result || (a == b);
            GREATER_THAN:   result = gt_result;
            GREATER_EQUAL:  result = gt_result || (a == b);
            default:        result = 1'b0;
        endcase
    end

endmodule
