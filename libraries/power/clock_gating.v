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
        if (USE_LATCH) begin
            // Latch-based clock gating
            reg latch_out;
            
            always @(*) begin
                if (!clk_in)
                    latch_out <= enable | test_enable;
            end
            
            assign clk_out = clk_in & latch_out;
        end
        else begin
            // Simple AND gate-based clock gating
            assign clk_out = clk_in & (enable | test_enable);
        end
    endgenerate

endmodule 