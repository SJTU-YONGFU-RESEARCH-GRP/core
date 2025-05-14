/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNUSEDPARAM */
/* verilator lint_off LATCH */
module configurable_fp_adder #(
    parameter EXP_WIDTH = 8,                  // Exponent width
    parameter MANT_WIDTH = 23                 // Mantissa width
) (
    input wire [EXP_WIDTH+MANT_WIDTH:0] a,    // Input operand A (sign + exponent + mantissa)
    input wire [EXP_WIDTH+MANT_WIDTH:0] b,    // Input operand B (sign + exponent + mantissa)
    output reg [EXP_WIDTH+MANT_WIDTH:0] result // Result of addition
);

    // Extract fields
    wire a_sign = a[EXP_WIDTH+MANT_WIDTH];
    wire b_sign = b[EXP_WIDTH+MANT_WIDTH];
    wire [EXP_WIDTH-1:0] a_exp = a[EXP_WIDTH+MANT_WIDTH-1:MANT_WIDTH];
    wire [EXP_WIDTH-1:0] b_exp = b[EXP_WIDTH+MANT_WIDTH-1:MANT_WIDTH];
    wire [MANT_WIDTH-1:0] a_mant = a[MANT_WIDTH-1:0];
    wire [MANT_WIDTH-1:0] b_mant = b[MANT_WIDTH-1:0];

    // Special case handling
    wire a_is_nan = (a_exp == {EXP_WIDTH{1'b1}}) && (a_mant != 0);
    wire b_is_nan = (b_exp == {EXP_WIDTH{1'b1}}) && (b_mant != 0);
    wire a_is_inf = (a_exp == {EXP_WIDTH{1'b1}}) && (a_mant == 0);
    wire b_is_inf = (b_exp == {EXP_WIDTH{1'b1}}) && (b_mant == 0);
    wire a_is_zero = (a_exp == 0) && (a_mant == 0);
    wire b_is_zero = (b_exp == 0) && (b_mant == 0);
    
    // Result selection for special cases
    wire special_case = a_is_nan || b_is_nan || a_is_inf || b_is_inf || a_is_zero || b_is_zero;
    
    // NaN handling
    wire result_is_nan = a_is_nan || b_is_nan || (a_is_inf && b_is_inf && (a_sign != b_sign));
    
    // Infinity handling
    wire result_is_inf = (a_is_inf || b_is_inf) && !result_is_nan;
    wire result_inf_sign = (a_is_inf && b_is_inf) ? (a_sign & b_sign) : 
                          (a_is_inf ? a_sign : b_sign);
    
    // Zero handling
    wire result_is_zero = (a_is_zero && b_is_zero) || 
                         (!a_is_nan && !b_is_nan && !a_is_inf && !b_is_inf && 
                          (a_exp == b_exp) && (a_mant == b_mant) && (a_sign != b_sign));
    wire result_zero_sign = (a_is_zero && b_is_zero) ? (a_sign & b_sign) : 
                           (a_is_zero ? b_sign : a_sign);

    // Internal signals for addition
    wire [MANT_WIDTH:0] a_mant_with_hidden = {1'b1, a_mant};
    wire [MANT_WIDTH:0] b_mant_with_hidden = {1'b1, b_mant};
    wire [EXP_WIDTH:0] exp_diff = a_exp - b_exp;
    wire [MANT_WIDTH:0] aligned_a_mant = (exp_diff[EXP_WIDTH] || exp_diff == 0) ? a_mant_with_hidden : 
                                        (a_mant_with_hidden >> (-exp_diff));
    wire [MANT_WIDTH:0] aligned_b_mant = (exp_diff[EXP_WIDTH] || exp_diff == 0) ? 
                                        (b_mant_with_hidden >> exp_diff) : b_mant_with_hidden;
    
    // Sum calculation
    wire [MANT_WIDTH+1:0] sum_mant;
    wire sum_sign;
    wire sum_overflow;
    
    assign {sum_overflow, sum_mant} = (a_sign == b_sign) ? 
        {1'b0, aligned_a_mant} + {1'b0, aligned_b_mant} :
        (aligned_a_mant >= aligned_b_mant) ? 
            {1'b0, aligned_a_mant - aligned_b_mant} :
            {1'b0, aligned_b_mant - aligned_a_mant};
    
    assign sum_sign = (a_sign == b_sign) ? a_sign :
                     (aligned_a_mant >= aligned_b_mant) ? a_sign : b_sign;
    
    // Normalization (replace always block with function)
    function [EXP_WIDTH-1:0] leading_zero_count;
        input [MANT_WIDTH:0] value;
        integer k;
        begin
            leading_zero_count = 0;
            for (k = MANT_WIDTH; k >= 0; k = k - 1) begin
                if (value[k] == 1'b0)
                    leading_zero_count = leading_zero_count + 1;
                else
                    k = -1; // break
            end
        end
    endfunction

    wire [EXP_WIDTH-1:0] norm_shift = (!sum_overflow) ? leading_zero_count(sum_mant[MANT_WIDTH:0]) : 0;
    wire [MANT_WIDTH:0] norm_mant = sum_overflow ? sum_mant[MANT_WIDTH+1:1] : (sum_mant[MANT_WIDTH:0] << norm_shift);
    wire [EXP_WIDTH-1:0] norm_exp = sum_overflow ? ((a_exp > b_exp ? a_exp : b_exp) + 1) : ((a_exp > b_exp ? a_exp : b_exp) - norm_shift);

    // Rounding (round to nearest even)
    wire guard = norm_mant[0];
    wire round = (MANT_WIDTH > 0) ? norm_mant[1] : 1'b0;
    wire sticky = (MANT_WIDTH > 1) ? |norm_mant[0] : 1'b0;
    wire round_increment = guard & (round | sticky);
    wire [MANT_WIDTH-1:0] mant_pre_round = norm_mant[MANT_WIDTH:1];
    wire [MANT_WIDTH-1:0] mant_rounded = mant_pre_round + round_increment;
    wire mant_round_carry = (mant_rounded == 0) && round_increment;
    wire [EXP_WIDTH-1:0] exp_rounded = norm_exp + mant_round_carry;
    wire [MANT_WIDTH-1:0] final_mant = mant_rounded;
    wire [EXP_WIDTH-1:0] final_exp = exp_rounded;
    wire final_sign = sum_sign;

    // Special case values
    wire [EXP_WIDTH+MANT_WIDTH:0] nan = {{1'b0}, {EXP_WIDTH{1'b1}}, {1'b1}, {MANT_WIDTH-1{1'b0}}};
    wire [EXP_WIDTH+MANT_WIDTH:0] pos_inf = {{1'b0}, {EXP_WIDTH{1'b1}}, {MANT_WIDTH{1'b0}}};
    wire [EXP_WIDTH+MANT_WIDTH:0] neg_inf = {{1'b1}, {EXP_WIDTH{1'b1}}, {MANT_WIDTH{1'b0}}};
    wire [EXP_WIDTH+MANT_WIDTH:0] pos_zero = {{1'b0}, {EXP_WIDTH{1'b0}}, {MANT_WIDTH{1'b0}}};
    wire [EXP_WIDTH+MANT_WIDTH:0] neg_zero = {{1'b1}, {EXP_WIDTH{1'b0}}, {MANT_WIDTH{1'b0}}};

    // Select result based on special cases
    wire [EXP_WIDTH-1:0] result_exp = result_is_nan ? {EXP_WIDTH{1'b1}} :
                                     result_is_inf ? {EXP_WIDTH{1'b1}} :
                                     result_is_zero ? 0 :
                                     final_exp;
    wire [MANT_WIDTH-1:0] result_mant = result_is_nan ? {1'b1, {MANT_WIDTH-1{1'b0}}} :
                                       result_is_inf ? 0 :
                                       result_is_zero ? 0 :
                                       final_mant;
    wire result_sign = result_is_nan ? 1'b0 :
                      result_is_inf ? result_inf_sign :
                      result_is_zero ? result_zero_sign :
                      final_sign;

    always @(*) begin
        if (special_case) begin
            result = result_is_nan ? nan :
                     result_is_inf ? (result_inf_sign ? neg_inf : pos_inf) :
                     result_is_zero ? (result_zero_sign ? neg_zero : pos_zero) : nan;
        end else begin
            result = {result_sign, result_exp, result_mant};
        end
    end
endmodule
/* verilator lint_on WIDTHTRUNC */
/* verilator lint_on WIDTHEXPAND */
/* verilator lint_on UNUSEDSIGNAL */
/* verilator lint_on UNUSEDPARAM */
/* verilator lint_on LATCH */
