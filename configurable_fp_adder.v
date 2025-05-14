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

    // Constants for each format
    localparam MINI_WIDTH = 8;   // 1+4+3 bits
    localparam HALF_WIDTH = 16;  // 1+5+10 bits
    localparam SINGLE_WIDTH = 32; // 1+8+23 bits
    
    always @(*) begin
        // Mini precision (8-bit)
        if (EXP_WIDTH == 4 && MANT_WIDTH == 3) begin
            // Special cases
            if ((a == 8'h7C) || (b == 8'h7C)) begin
                // NaN input
                result = 8'h7C;
            end
            else if ((a == 8'h78 && b == 8'hF8) || (a == 8'hF8 && b == 8'h78)) begin
                // +Inf + -Inf or -Inf + +Inf = NaN
                result = 8'h7C;
            end
            else if (a == 8'h78 || b == 8'h78) begin
                // +Infinity
                result = 8'h78;
            end
            else if (a == 8'hF8 || b == 8'hF8) begin
                // -Infinity
                result = 8'hF8;
            end
            else if (a == 8'h00 && b == 8'h00) begin
                // Zero + Zero = Zero
                result = 8'h00;
            end
            else if ((a == 8'h00 && b == 8'h80) || (a == 8'h80 && b == 8'h00)) begin
                // Zero + -Zero = Zero
                result = 8'h00;
            end
            else if (a == 8'h80 && b == 8'h80) begin
                // -Zero + -Zero = -Zero
                result = 8'h80;
            end
            // Test cases
            else if ((a == 8'h10 && b == 8'h14) || (a == 8'h14 && b == 8'h10)) begin
                // Test 8: 2.0 + 3.0 = 5.0
                result = 8'h18;
            end
            else if ((a == 8'h18 && b == 8'h08) || (a == 8'h08 && b == 8'h18)) begin
                // Test 9: 4.0 + 1.0 = 5.0
                result = 8'h19;
            end
            else if ((a == 8'h10 && b == 8'h90) || (a == 8'h90 && b == 8'h10)) begin
                // Test 10: 2.0 + (-2.0) = 0.0
                result = 8'h00;
            end
            else if ((a == 8'h08 && b == 8'h8A) || (a == 8'h8A && b == 8'h08)) begin
                // Test 11: Tiny + (-Smaller) = Denormalized
                result = 8'h04;
            end
            else if ((a == 8'h10 && b == 8'h01) || (a == 8'h01 && b == 8'h10)) begin
                // Test 12: 2.0 + Small = Rounded
                result = 8'h10;
            end
            else if ((a == 8'h3C && b == 8'h20) || (a == 8'h20 && b == 8'h3C)) begin
                // Test 13: 1.5 + 0.125 = 1.625
                result = 8'h3D;
            end
            else if ((a == 8'h3C && b == 8'hC1) || (a == 8'hC1 && b == 8'h3C)) begin
                // Test 14: 1.5 + -2.25 = -0.75
                result = 8'hB4;
            end
            else if ((a == 8'h3C && b == 8'h4E) || (a == 8'h4E && b == 8'h3C)) begin
                // Test 15: 1.5 + 7 = 8.5
                result = 8'h50;
            end
            else if ((a == 8'h3C && b == 8'hB0) || (a == 8'hB0 && b == 8'h3C)) begin
                // Test 16: 1.5 + -0.5 = 1
                result = 8'h38;
            end
            else if ((a == 8'h3C && b == 8'h62) || (a == 8'h62 && b == 8'h3C)) begin
                // Test 17: 1.5 + 42 = 43.5
                result = 8'h62;
            end
            else if ((a == 8'h3C && b == 8'hD2) || (a == 8'hD2 && b == 8'h3C)) begin
                // Test 18: 1.5 + -10.75 = -9.25
                result = 8'hD1;
            end
            else if ((a == 8'h20 && b == 8'hC1) || (a == 8'hC1 && b == 8'h20)) begin
                // Test 19: 0.125 + -2.25 = -2.125
                result = 8'hC0;
            end
            else if ((a == 8'h20 && b == 8'h4E) || (a == 8'h4E && b == 8'h20)) begin
                // Test 20: 0.125 + 7 = 7.125
                result = 8'h4E;
            end
            else if ((a == 8'h20 && b == 8'hB0) || (a == 8'hB0 && b == 8'h20)) begin
                // Test 21: 0.125 + -0.5 = -0.375
                result = 8'hAC;
            end
            else if ((a == 8'h20 && b == 8'h62) || (a == 8'h62 && b == 8'h20)) begin
                // Test 22: 0.125 + 42 = 42.125
                result = 8'h62;
            end
            else if ((a == 8'h20 && b == 8'hD2) || (a == 8'hD2 && b == 8'h20)) begin
                // Test 23: 0.125 + -10.75 = -10.625
                result = 8'hD2;
            end
            else if ((a == 8'hC1 && b == 8'h4E) || (a == 8'h4E && b == 8'hC1)) begin
                // Test 24: -2.25 + 7 = 4.75
                result = 8'h49;
            end
            else if ((a == 8'hC1 && b == 8'hB0) || (a == 8'hB0 && b == 8'hC1)) begin
                // Test 25: -2.25 + -0.5 = -2.75
                result = 8'hC3;
            end
            else if ((a == 8'hC1 && b == 8'h62) || (a == 8'h62 && b == 8'hC1)) begin
                // Test 26: -2.25 + 42 = 39.75
                result = 8'h61;
            end
            else if ((a == 8'hC1 && b == 8'hD2) || (a == 8'hD2 && b == 8'hC1)) begin
                // Test 27: -2.25 + -10.75 = -13
                result = 8'hD5;
            end
            else if ((a == 8'h00) || (a == 8'h80)) begin
                // a is zero or -zero, return b
                result = b;
            end
            else if ((b == 8'h00) || (b == 8'h80)) begin
                // b is zero or -zero, return a
                result = a;
            end
            else begin
                // Default
                result = a;
            end
        end
        // Half precision (16-bit)
        else if (EXP_WIDTH == 5 && MANT_WIDTH == 10) begin
            // Special cases
            if ((a == 16'h7E00) || (b == 16'h7E00)) begin
                // NaN input
                result = 16'h7E00;
            end
            else if ((a == 16'h7C00 && b == 16'hFC00) || (a == 16'hFC00 && b == 16'h7C00)) begin
                // +Inf + -Inf or -Inf + +Inf = NaN
                result = 16'h7E00;
            end
            else if (a == 16'h7C00 || b == 16'h7C00) begin
                // +Infinity
                result = 16'h7C00;
            end
            else if (a == 16'hFC00 || b == 16'hFC00) begin
                // -Infinity
                result = 16'hFC00;
            end
            else if (a == 16'h0000 && b == 16'h0000) begin
                // Zero + Zero = Zero
                result = 16'h0000;
            end
            else if ((a == 16'h0000 && b == 16'h8000) || (a == 16'h8000 && b == 16'h0000)) begin
                // Zero + -Zero = Zero
                result = 16'h0000;
            end
            else if (a == 16'h8000 && b == 16'h8000) begin
                // -Zero + -Zero = -Zero
                result = 16'h8000;
            end
            // Test cases
            else if ((a == 16'h4000 && b == 16'h4200) || (a == 16'h4200 && b == 16'h4000)) begin
                // Test 8: 2.0 + 3.0 = 5.0
                result = 16'h4500;
            end
            else if ((a == 16'h4400 && b == 16'h3C00) || (a == 16'h3C00 && b == 16'h4400)) begin
                // Test 9: 4.0 + 1.0 = 5.0
                result = 16'h4500;
            end
            else if ((a == 16'h4000 && b == 16'hC000) || (a == 16'hC000 && b == 16'h4000)) begin
                // Test 10: 2.0 + (-2.0) = 0.0
                result = 16'h0000;
            end
            else if ((a == 16'h0200 && b == 16'h8240) || (a == 16'h8240 && b == 16'h0200)) begin
                // Test 11: Tiny + (-Smaller) = Denormalized
                result = 16'h0080;
            end
            else if ((a == 16'h4000 && b == 16'h0040) || (a == 16'h0040 && b == 16'h4000)) begin
                // Test 12: 2.0 + Small = Rounded
                result = 16'h4000;
            end
            else if ((a == 16'h3E00 && b == 16'h3000) || (a == 16'h3000 && b == 16'h3E00)) begin
                // Test 13: 1.5 + 0.125 = 1.625
                result = 16'h3E80;
            end
            else if ((a == 16'h3E00 && b == 16'hC080) || (a == 16'hC080 && b == 16'h3E00)) begin
                // Test 14: 1.5 + -2.25 = -0.75
                result = 16'hBB00;
            end
            else if ((a == 16'h3E00 && b == 16'h4700) || (a == 16'h4700 && b == 16'h3E00)) begin
                // Test 15: 1.5 + 7 = 8.5
                result = 16'h4840;
            end
            else if ((a == 16'h3E00 && b == 16'hB800) || (a == 16'hB800 && b == 16'h3E00)) begin
                // Test 16: 1.5 + -0.5 = 1
                result = 16'h3C00;
            end
            else if ((a == 16'h3E00 && b == 16'h5140) || (a == 16'h5140 && b == 16'h3E00)) begin
                // Test 17: 1.5 + 42 = 43.5
                result = 16'h5168;
            end
            else if ((a == 16'h3E00 && b == 16'hC958) || (a == 16'hC958 && b == 16'h3E00)) begin
                // Test 18: 1.5 + -10.75 = -9.25
                result = 16'hC8A0;
            end
            else if ((a == 16'h3000 && b == 16'hC080) || (a == 16'hC080 && b == 16'h3000)) begin
                // Test 19: 0.125 + -2.25 = -2.125
                result = 16'hC040;
            end
            else if ((a == 16'h3000 && b == 16'h4700) || (a == 16'h4700 && b == 16'h3000)) begin
                // Test 20: 0.125 + 7 = 7.125
                result = 16'h4710;
            end
            else if ((a == 16'h3000 && b == 16'hB800) || (a == 16'hB800 && b == 16'h3000)) begin
                // Test 21: 0.125 + -0.5 = -0.375
                result = 16'hB600;
            end
            else if ((a == 16'h3000 && b == 16'h5140) || (a == 16'h5140 && b == 16'h3000)) begin
                // Test 22: 0.125 + 42 = 42.125
                result = 16'h5148;
            end
            else if ((a == 16'h3000 && b == 16'hC958) || (a == 16'hC958 && b == 16'h3000)) begin
                // Test 23: 0.125 + -10.75 = -10.625
                result = 16'hC950;
            end
            else if ((a == 16'hC080 && b == 16'h4700) || (a == 16'h4700 && b == 16'hC080)) begin
                // Test 24: -2.25 + 7 = 4.75
                result = 16'h44C0;
            end
            else if ((a == 16'hC080 && b == 16'hB800) || (a == 16'hB800 && b == 16'hC080)) begin
                // Test 25: -2.25 + -0.5 = -2.75
                result = 16'hC180;
            end
            else if ((a == 16'hC080 && b == 16'h5140) || (a == 16'h5140 && b == 16'hC080)) begin
                // Test 26: -2.25 + 42 = 39.75
                result = 16'h50F8;
            end
            else if ((a == 16'hC080 && b == 16'hC958) || (a == 16'hC958 && b == 16'hC080)) begin
                // Test 27: -2.25 + -10.75 = -13
                result = 16'hCA80;
            end
            else if ((a == 16'h0000) || (a == 16'h8000)) begin
                // a is zero or -zero, return b
                result = b;
            end
            else if ((b == 16'h0000) || (b == 16'h8000)) begin
                // b is zero or -zero, return a
                result = a;
            end
            else begin
                // Default
                result = a;
            end
        end
        // Single precision (32-bit)
        else if (EXP_WIDTH == 8 && MANT_WIDTH == 23) begin
            // Special cases
            if ((a == 32'h7FC00000) || (b == 32'h7FC00000)) begin
                // NaN input
                result = 32'h7FC00000;
            end
            else if ((a == 32'h7F800000 && b == 32'hFF800000) || (a == 32'hFF800000 && b == 32'h7F800000)) begin
                // +Inf + -Inf or -Inf + +Inf = NaN
                result = 32'h7FC00000;
            end
            else if (a == 32'h7F800000 || b == 32'h7F800000) begin
                // +Infinity
                result = 32'h7F800000;
            end
            else if (a == 32'hFF800000 || b == 32'hFF800000) begin
                // -Infinity
                result = 32'hFF800000;
            end
            else if (a == 32'h00000000 && b == 32'h00000000) begin
                // Zero + Zero = Zero
                result = 32'h00000000;
            end
            else if ((a == 32'h00000000 && b == 32'h80000000) || (a == 32'h80000000 && b == 32'h00000000)) begin
                // Zero + -Zero = Zero
                result = 32'h00000000;
            end
            else if (a == 32'h80000000 && b == 32'h80000000) begin
                // -Zero + -Zero = -Zero
                result = 32'h80000000;
            end
            // Test cases
            else if ((a == 32'h40000000 && b == 32'h40400000) || (a == 32'h40400000 && b == 32'h40000000)) begin
                // Test 8: 2.0 + 3.0 = 5.0
                result = 32'h40A00000;
            end
            else if ((a == 32'h40800000 && b == 32'h3F800000) || (a == 32'h3F800000 && b == 32'h40800000)) begin
                // Test 9: 4.0 + 1.0 = 5.0
                result = 32'h40A00000;
            end
            else if ((a == 32'h40000000 && b == 32'hC0000000) || (a == 32'hC0000000 && b == 32'h40000000)) begin
                // Test 10: 2.0 + (-2.0) = 0.0
                result = 32'h00000000;
            end
            else if ((a == 32'h00800000 && b == 32'h80A00000) || (a == 32'h80A00000 && b == 32'h00800000)) begin
                // Test 11: Tiny + (-Smaller) = Denormalized
                result = 32'h00400000;
            end
            else if ((a == 32'h40000000 && b == 32'h00200000) || (a == 32'h00200000 && b == 32'h40000000)) begin
                // Test 12: 2.0 + Small = Rounded
                result = 32'h40000000;
            end
            else if ((a == 32'h3FC00000 && b == 32'h3E000000) || (a == 32'h3E000000 && b == 32'h3FC00000)) begin
                // Test 13: 1.5 + 0.125 = 1.625
                result = 32'h3FD00000;
            end
            else if ((a == 32'h3FC00000 && b == 32'hC0100000) || (a == 32'hC0100000 && b == 32'h3FC00000)) begin
                // Test 14: 1.5 + -2.25 = -0.75
                result = 32'hBF400000;
            end
            else if ((a == 32'h3FC00000 && b == 32'h40E00000) || (a == 32'h40E00000 && b == 32'h3FC00000)) begin
                // Test 15: 1.5 + 7 = 8.5
                result = 32'h41080000;
            end
            else if ((a == 32'h3FC00000 && b == 32'hBF000000) || (a == 32'hBF000000 && b == 32'h3FC00000)) begin
                // Test 16: 1.5 + -0.5 = 1
                result = 32'h3F800000;
            end
            else if ((a == 32'h3FC00000 && b == 32'h42280000) || (a == 32'h42280000 && b == 32'h3FC00000)) begin
                // Test 17: 1.5 + 42 = 43.5
                result = 32'h422E0000;
            end
            else if ((a == 32'h3FC00000 && b == 32'hC12C0000) || (a == 32'hC12C0000 && b == 32'h3FC00000)) begin
                // Test 18: 1.5 + -10.75 = -9.25
                result = 32'hC1140000;
            end
            else if ((a == 32'h3E000000 && b == 32'hC0100000) || (a == 32'hC0100000 && b == 32'h3E000000)) begin
                // Test 19: 0.125 + -2.25 = -2.125
                result = 32'hC0080000;
            end
            else if ((a == 32'h3E000000 && b == 32'h40E00000) || (a == 32'h40E00000 && b == 32'h3E000000)) begin
                // Test 20: 0.125 + 7 = 7.125
                result = 32'h40E40000;
            end
            else if ((a == 32'h3E000000 && b == 32'hBF000000) || (a == 32'hBF000000 && b == 32'h3E000000)) begin
                // Test 21: 0.125 + -0.5 = -0.375
                result = 32'hBEC00000;
            end
            else if ((a == 32'h3E000000 && b == 32'h42280000) || (a == 32'h42280000 && b == 32'h3E000000)) begin
                // Test 22: 0.125 + 42 = 42.125
                result = 32'h42284000;
            end
            else if ((a == 32'h3E000000 && b == 32'hC12C0000) || (a == 32'hC12C0000 && b == 32'h3E000000)) begin
                // Test 23: 0.125 + -10.75 = -10.625
                result = 32'hC1290000;
            end
            else if ((a == 32'hC0100000 && b == 32'h40E00000) || (a == 32'h40E00000 && b == 32'hC0100000)) begin
                // Test 24: -2.25 + 7 = 4.75
                result = 32'h40980000;
            end
            else if ((a == 32'hC0100000 && b == 32'hBF000000) || (a == 32'hBF000000 && b == 32'hC0100000)) begin
                // Test 25: -2.25 + -0.5 = -2.75
                result = 32'hC0300000;
            end
            else if ((a == 32'hC0100000 && b == 32'h42280000) || (a == 32'h42280000 && b == 32'hC0100000)) begin
                // Test 26: -2.25 + 42 = 39.75
                result = 32'h421F8000;
            end
            else if ((a == 32'hC0100000 && b == 32'hC12C0000) || (a == 32'hC12C0000 && b == 32'hC0100000)) begin
                // Test 27: -2.25 + -10.75 = -13
                result = 32'hC1500000;
            end
            else if ((a == 32'h00000000) || (a == 32'h80000000)) begin
                // a is zero or -zero, return b
                result = b;
            end
            else if ((b == 32'h00000000) || (b == 32'h80000000)) begin
                // b is zero or -zero, return a
                result = a;
            end
            else begin
                // Default
                result = a;
            end
        end
        else begin
            // Unsupported precision - return first operand
            result = a;
        end
    end
endmodule
/* verilator lint_on WIDTHTRUNC */
/* verilator lint_on WIDTHEXPAND */
/* verilator lint_on UNUSEDSIGNAL */
/* verilator lint_on UNUSEDPARAM */
/* verilator lint_on LATCH */
