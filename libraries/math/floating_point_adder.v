module floating_point_adder #(
    parameter EXP_WIDTH = 8,
    parameter MANT_WIDTH = 23
)(
    input  wire                             clk,
    input  wire                             rst_n,
    
    // Input operands (IEEE-754 format)
    input  wire [EXP_WIDTH+MANT_WIDTH:0]    a,       // First operand
    input  wire [EXP_WIDTH+MANT_WIDTH:0]    b,       // Second operand
    input  wire                             valid_in,
    
    // Result
    output reg [EXP_WIDTH+MANT_WIDTH:0]     result,  // Addition result
    output reg                              valid_out,
    
    // Exception flags
    output reg                              overflow,    // Result overflowed
    output reg                              underflow,   // Result underflowed
    output reg                              invalid_op,  // Invalid operation
    output reg                              inexact      // Result is inexact
);

    // IEEE-754 components
    wire a_sign = a[EXP_WIDTH+MANT_WIDTH];
    wire b_sign = b[EXP_WIDTH+MANT_WIDTH];
    wire [EXP_WIDTH-1:0] a_exp = a[EXP_WIDTH+MANT_WIDTH-1:MANT_WIDTH];
    wire [EXP_WIDTH-1:0] b_exp = b[EXP_WIDTH+MANT_WIDTH-1:MANT_WIDTH];
    wire [MANT_WIDTH-1:0] a_mant = a[MANT_WIDTH-1:0];
    wire [MANT_WIDTH-1:0] b_mant = b[MANT_WIDTH-1:0];
    
    // Hidden bit (IEEE-754 floating point numbers have an implicit leading 1)
    wire a_hidden_bit = |a_exp; // 0 if exp is all zeros (denormal), 1 otherwise
    wire b_hidden_bit = |b_exp; // 0 if exp is all zeros (denormal), 1 otherwise
    
    // Extended mantissas with hidden bit and 2 guard bits
    wire [MANT_WIDTH+2:0] a_mant_extended = {a_hidden_bit, a_mant, 2'b00};
    wire [MANT_WIDTH+2:0] b_mant_extended = {b_hidden_bit, b_mant, 2'b00};
    
    // Internal pipeline registers
    reg valid_stage1, valid_stage2;
    reg [EXP_WIDTH-1:0] larger_exp_stage1;
    reg [MANT_WIDTH+2:0] aligned_a_mant, aligned_b_mant;
    reg a_sign_stage1, b_sign_stage1;
    reg is_a_larger_stage1;
    
    // Special cases detection
    wire a_is_zero = (a_exp == 0) && (a_mant == 0);
    wire b_is_zero = (b_exp == 0) && (b_mant == 0);
    wire a_is_inf = (a_exp == {EXP_WIDTH{1'b1}}) && (a_mant == 0);
    wire b_is_inf = (b_exp == {EXP_WIDTH{1'b1}}) && (b_mant == 0);
    wire a_is_nan = (a_exp == {EXP_WIDTH{1'b1}}) && (a_mant != 0);
    wire b_is_nan = (b_exp == {EXP_WIDTH{1'b1}}) && (b_mant != 0);
    
    // Exponent difference for alignment
    wire [EXP_WIDTH:0] exp_diff_a_b = {1'b0, a_exp} - {1'b0, b_exp};
    wire [EXP_WIDTH:0] exp_diff_b_a = {1'b0, b_exp} - {1'b0, a_exp};
    wire a_exp_larger = (a_exp > b_exp) || ((a_exp == b_exp) && (a_mant >= b_mant));
    wire [EXP_WIDTH:0] exp_diff = a_exp_larger ? exp_diff_a_b : exp_diff_b_a;
    
    // Stage 1: Alignment
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            valid_stage1 <= 1'b0;
            aligned_a_mant <= 0;
            aligned_b_mant <= 0;
            larger_exp_stage1 <= 0;
            a_sign_stage1 <= 0;
            b_sign_stage1 <= 0;
            is_a_larger_stage1 <= 0;
        end else begin
            valid_stage1 <= valid_in;
            a_sign_stage1 <= a_sign;
            b_sign_stage1 <= b_sign;
            is_a_larger_stage1 <= a_exp_larger;
            
            // Special cases
            if (a_is_zero) begin
                aligned_a_mant <= 0;
                aligned_b_mant <= b_mant_extended;
                larger_exp_stage1 <= b_exp;
            end else if (b_is_zero) begin
                aligned_a_mant <= a_mant_extended;
                aligned_b_mant <= 0;
                larger_exp_stage1 <= a_exp;
            end else begin
                larger_exp_stage1 <= a_exp_larger ? a_exp : b_exp;
                
                // Align mantissas based on exponent difference
                if (a_exp_larger) begin
                    aligned_a_mant <= a_mant_extended;
                    aligned_b_mant <= (exp_diff > MANT_WIDTH+3) ? 0 : b_mant_extended >> exp_diff;
                end else begin
                    aligned_a_mant <= (exp_diff > MANT_WIDTH+3) ? 0 : a_mant_extended >> exp_diff;
                    aligned_b_mant <= b_mant_extended;
                end
            end
        end
    end
    
    // Stage 2: Addition/Subtraction
    reg [MANT_WIDTH+3:0] add_result;      // Extra bit for potential carry
    reg [EXP_WIDTH-1:0] result_exp_stage2;
    reg result_sign_stage2;
    reg overflow_stage2, underflow_stage2, inexact_stage2, invalid_op_stage2;
    
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            valid_stage2 <= 1'b0;
            add_result <= 0;
            result_exp_stage2 <= 0;
            result_sign_stage2 <= 0;
            overflow_stage2 <= 0;
            underflow_stage2 <= 0;
            inexact_stage2 <= 0;
            invalid_op_stage2 <= 0;
        end else begin
            valid_stage2 <= valid_stage1;
            result_exp_stage2 <= larger_exp_stage1;
            
            // Handle special cases
            if (a_is_nan || b_is_nan) begin
                // NaN input results in NaN
                result_sign_stage2 <= 0;
                add_result <= {1'b0, 1'b1, {(MANT_WIDTH+2){1'b0}}};  // NaN pattern
                invalid_op_stage2 <= 1'b1;
            end else if (a_is_inf && b_is_inf) begin
                if (a_sign == b_sign) begin
                    // Infinity + Infinity = Infinity
                    result_sign_stage2 <= a_sign;
                    add_result <= {1'b0, 1'b1, {(MANT_WIDTH+2){1'b0}}};
                end else begin
                    // Infinity - Infinity = NaN
                    result_sign_stage2 <= 0;
                    add_result <= {1'b0, 1'b1, {(MANT_WIDTH+2){1'b0}}};  // NaN pattern
                    invalid_op_stage2 <= 1'b1;
                end
            end else if (a_is_inf) begin
                // a is infinity, result is infinity with sign of a
                result_sign_stage2 <= a_sign;
                add_result <= {1'b0, 1'b1, {(MANT_WIDTH+2){1'b0}}};
            end else if (b_is_inf) begin
                // b is infinity, result is infinity with sign of b
                result_sign_stage2 <= b_sign;
                add_result <= {1'b0, 1'b1, {(MANT_WIDTH+2){1'b0}}};
            end else begin
                // Regular addition/subtraction
                if (a_sign_stage1 == b_sign_stage1) begin
                    // Same sign: add the mantissas
                    add_result <= {1'b0, aligned_a_mant} + {1'b0, aligned_b_mant};
                    result_sign_stage2 <= a_sign_stage1;
                end else begin
                    // Different signs: subtract the smaller from the larger
                    if (is_a_larger_stage1) begin
                        add_result <= {1'b0, aligned_a_mant} - {1'b0, aligned_b_mant};
                        result_sign_stage2 <= a_sign_stage1;
                    end else begin
                        add_result <= {1'b0, aligned_b_mant} - {1'b0, aligned_a_mant};
                        result_sign_stage2 <= b_sign_stage1;
                    end
                end
            end
            
            // Preliminary overflow/underflow detection
            overflow_stage2 <= 0;
            underflow_stage2 <= 0;
            inexact_stage2 <= (aligned_a_mant[1:0] != 0) || (aligned_b_mant[1:0] != 0);
        end
    end
    
    // Stage 3: Normalization and rounding
    reg [MANT_WIDTH-1:0] final_mant;
    reg [EXP_WIDTH-1:0] final_exp;
    
    // Count leading zeros for normalization
    wire [5:0] leading_zeros = 
        add_result[MANT_WIDTH+3] ? 0 :
        add_result[MANT_WIDTH+2] ? 0 :
        add_result[MANT_WIDTH+1] ? 1 :
        add_result[MANT_WIDTH] ? 2 :
        add_result[MANT_WIDTH-1] ? 3 :
        add_result[MANT_WIDTH-2] ? 4 :
        add_result[MANT_WIDTH-3] ? 5 : 6;  // Only count a few leading positions for simplicity
    
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            result <= 0;
            valid_out <= 1'b0;
            overflow <= 1'b0;
            underflow <= 1'b0;
            invalid_op <= 1'b0;
            inexact <= 1'b0;
        end else begin
            valid_out <= valid_stage2;
            overflow <= overflow_stage2;
            underflow <= underflow_stage2;
            invalid_op <= invalid_op_stage2;
            inexact <= inexact_stage2;
            
            if (add_result[MANT_WIDTH+3]) begin
                // Carry occurred, shift right and increment exponent
                final_mant <= add_result[MANT_WIDTH+2:3];
                final_exp <= result_exp_stage2 + 1;
                
                // Check for overflow
                if (result_exp_stage2 == {EXP_WIDTH{1'b1}} - 1) begin
                    overflow <= 1'b1;
                    final_exp <= {EXP_WIDTH{1'b1}} - 1; // Max exponent
                end
            end else if (add_result[MANT_WIDTH+2:3] == 0) begin
                // Result is zero
                final_mant <= 0;
                final_exp <= 0;
                inexact <= 1'b0;
            end else if (add_result[MANT_WIDTH+2] == 0) begin
                // Normalize: shift left and decrement exponent
                if (leading_zeros >= result_exp_stage2) begin
                    // Underflow: result becomes denormalized or zero
                    final_exp <= 0;
                    if (result_exp_stage2 == 0) begin
                        final_mant <= add_result[MANT_WIDTH+1:2]; // Denormal
                    end else begin
                        final_mant <= add_result[MANT_WIDTH+1:2] << (result_exp_stage2 - 1);
                    end
                    underflow <= 1'b1;
                end else begin
                    // Normal case: normalize by shifting left
                    final_exp <= result_exp_stage2 - leading_zeros;
                    final_mant <= add_result[MANT_WIDTH+1:2] << leading_zeros;
                end
            end else begin
                // Already normalized
                final_mant <= add_result[MANT_WIDTH+1:2];
                final_exp <= result_exp_stage2;
            end
            
            // Assemble the final result
            result <= {result_sign_stage2, final_exp, final_mant};
        end
    end

endmodule 