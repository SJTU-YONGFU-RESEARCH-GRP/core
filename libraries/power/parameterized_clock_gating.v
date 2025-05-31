module parameterized_clock_gating #(
    parameter STAGES = 2,           // Number of synchronization stages
    parameter LATCH_BASED = 1,      // 1: Use latch-based implementation, 0: Use pure combinational
    parameter ENABLE_ACTIVE_LOW = 0 // 1: Enable is active low, 0: Enable is active high
) (
    input  wire clk_in,             // Input clock
    input  wire enable,             // Enable signal
    input  wire test_mode,          // Test mode (bypasses clock gating)
    output wire clk_out             // Gated clock output
);

    // Internal signals
    wire enable_synced;
    wire enable_final;
    reg  enable_latch;
    
    // Synchronize enable signal if multiple stages are requested
    generate
        if (STAGES <= 1) begin : gen_no_sync
            // No synchronization needed
            assign enable_synced = enable;
        end else begin : gen_sync
            // Multi-stage synchronizer
            reg [STAGES-1:0] enable_sync_reg;
            
            always @(posedge clk_in) begin
                enable_sync_reg <= {enable_sync_reg[STAGES-2:0], enable};
            end
            
            assign enable_synced = enable_sync_reg[STAGES-1];
        end
    endgenerate
    
    // Handle active low configuration
    assign enable_final = ENABLE_ACTIVE_LOW ? ~enable_synced : enable_synced;
    
    generate
        if (LATCH_BASED != 0) begin : gen_latch_based
            // Latch-based clock gating (preferred for ASIC)
            // The latch captures enable_final when clk_in is low
            /* verilator lint_off COMBDLY */
            always @* begin
                if (!clk_in) begin
                    enable_latch = enable_final | test_mode;
                end else begin
                    enable_latch = enable_latch;
                end
            end
            /* verilator lint_on COMBDLY */
            
            // Gate the clock
            assign clk_out = clk_in & enable_latch;
        end else begin : gen_comb_based
            // Pure combinational clock gating (for FPGA)
            assign clk_out = clk_in & (enable_final | test_mode);
        end
    endgenerate

endmodule 
