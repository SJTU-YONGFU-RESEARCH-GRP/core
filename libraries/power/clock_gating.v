module clock_gating #(
    parameter USE_LATCH = 1   // Use latch-based implementation
)(
    input  wire   clk_in,
    input  wire   enable,
    input  wire   test_enable,
    output wire   clk_out
);

    // Integrated clock gating cell
    generate
        if (USE_LATCH) begin : gen_latch
            // Latch-based clock gating
            reg latch_out;
            
            /* verilator lint_off COMBDLY */
            /* verilator lint_off LATCH */
            always @(*) begin
                if (!clk_in)
                    latch_out <= enable | test_enable;
            end
            /* verilator lint_on LATCH */
            /* verilator lint_on COMBDLY */
            
            assign clk_out = clk_in & latch_out;
        end
        else begin : gen_and
            // Simple AND gate-based clock gating
            assign clk_out = clk_in & (enable | test_enable);
        end
    endgenerate

endmodule 