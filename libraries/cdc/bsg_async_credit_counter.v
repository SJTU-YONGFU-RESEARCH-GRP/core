// MBT 7/25/2014
// async credit counter
//
// In this design, there are two clock domains. The first
// clock domain (w_) receives incoming credits. The second
// clock domain (r_) spends the credits. The first clock domain
// never needs to know how many credits are spent; it just
// accumulates how many have been received. This accumulated
// value is passed as a gray-coded pointer across to the _r clock domain.
// The _r clock domain records how many credits have been spent. It starts
// with a negative value. There will be lag from the w_ domain to
// the r_ domain because of the synchronizers. So imagine, after reset,
// we start sending packets, decrementing the credit counter, but no
// credits are received. The _r pointer will advance until it reaches the w_
// pointer, and then avail will go low, and transmits will stop. Then the
// credits start arriving and the w_ is advanced. After a few cycles delay,
// the _r side will observe this change and start spending credits again.
//
// label all signals in this module accordingly:
//
// w_: signals in "receive credits" clock domain
// r_: signals in "spend credits" clock domain
//

// TOKENS vs. CREDITS. We support a feature here, which is the idea of a token.
// A token is worth multiple credits. We pass tokens through the fifo (so that
// the gray-coded values are still consecutive). The number of credits must
// be a power-of-two multiple of the number of tokens. The log of this value is set 
// by lg_credit_to_token_decimation_p. Using tokens can be used to reduce
// the toggle rate of the w_clk_i signal, for example, if it is being run
// over a pin exterior to the chip.
//
// RESET: both resets must be asserted and w_ clock most be posedge (negedge) toggled
// at least once; and the r_ clock posedge toggled at least four times after that.
// This will be a sufficient number of clocks to pass through the synchronizers.
// This will need to be done explicitly for the credit clock.
//
// ASYNC RESET PROCEDURE:
// Step 1: Assert r_ reset.
// Step 2: w_ reset must be posedge/negedge toggled (0->1->0) at least once.
//         w_ clock cannot toggle during this step.
// Step 3: r_ clock posedge toggled at least four times after that.
// Step 4: Deassert r_ reset.
//

// MARGIN: when credit counters are used to count outgoing packets, it is sometimes
// helpful to include extra bits of precision in case the latency is longer than
// expected and the downstream module needs more buffer space than originally planned.
// The downstream module can give back tokens right after reset before anything is sent,
// increasing the amount of margin the upstream module thinks it have. Of course, you
// need to have the flexibility of being able to change the downstream's buffer space
// to take advantage of this feature, but this is the case if the downstream module
// is an FPGA. The parameter extra_margin_p is the number of additional bits in the
// credit counter that should be added to accomodate this behaviour. So for example,
// extra_margin_p of 2 increases the credit capacity by 2X.

// The parameter count_negedge_p determines whether we count
// on negedge edge or positive edge of the clock.

// BSG Async Credit Counter - Combined Module
// Contains:
// 1. bsg_async_credit_counter - Main credit counter module
// 2. bsg_async_ptr_gray - Gray code pointer for clock domain crossing
// 3. bsg_gray_to_binary - Gray to binary converter utility

/* verilator lint_off DECLFILENAME */
/* verilator lint_off PINCONNECTEMPTY */
/* verilator lint_off MULTITOP */

// Gray code to binary converter
module bsg_gray_to_binary #(
    parameter width_p = 4
) (
    input wire [width_p-1:0] gray_i,
    output wire [width_p-1:0] binary_o
);
    // Gray to Binary conversion
    genvar i;
    generate
        for (i = 0; i < width_p; i = i + 1) begin: g2b
            assign binary_o[i] = ^(gray_i >> i);
        end
    endgenerate
endmodule

// Gray code pointer for clock domain crossing
module bsg_async_ptr_gray #(
    parameter lg_size_p = 6,
    parameter use_negedge_for_launch_p = 0,
    parameter use_async_reset_p = 0
) (
    input wire w_clk_i,
    input wire w_reset_i,
    input wire w_inc_i,
    input wire r_clk_i,
    output wire [lg_size_p-1:0] w_ptr_binary_r_o,
    output wire [lg_size_p-1:0] w_ptr_gray_r_o,
    output wire [lg_size_p-1:0] w_ptr_gray_r_rsync_o
);
    // Binary counter
    reg [lg_size_p-1:0] w_ptr_r;
    wire [lg_size_p-1:0] w_ptr_n;
    wire [lg_size_p-1:0] w_ptr_gray_n;
    reg [lg_size_p-1:0] w_ptr_gray_r;
    
    // Binary counter logic
    assign w_ptr_n = w_ptr_r + (w_inc_i ? 1'b1 : 1'b0);
    
    // Binary to Gray conversion
    assign w_ptr_gray_n = (w_ptr_n >> 1) ^ w_ptr_n;
    
    // Handle clock edge selection for register updates
    generate
        if (use_negedge_for_launch_p == 0) begin: pos
            // Posedge-triggered registers
            if (use_async_reset_p == 0) begin: sync_reset
                always @(posedge w_clk_i) begin
                    if (w_reset_i) begin
                        w_ptr_r <= '0;
                        w_ptr_gray_r <= '0;
                    end else begin
                        if (w_inc_i) begin
                            w_ptr_r <= w_ptr_n;
                            w_ptr_gray_r <= w_ptr_gray_n;
                        end
                    end
                end
            end else begin: async_reset
                always @(posedge w_clk_i or posedge w_reset_i) begin
                    if (w_reset_i) begin
                        w_ptr_r <= '0;
                        w_ptr_gray_r <= '0;
                    end else begin
                        if (w_inc_i) begin
                            w_ptr_r <= w_ptr_n;
                            w_ptr_gray_r <= w_ptr_gray_n;
                        end
                    end
                end
            end
        end else begin: neg
            // Negedge-triggered registers
            if (use_async_reset_p == 0) begin: sync_reset
                always @(negedge w_clk_i) begin
                    if (w_reset_i) begin
                        w_ptr_r <= '0;
                        w_ptr_gray_r <= '0;
                    end else begin
                        if (w_inc_i) begin
                            w_ptr_r <= w_ptr_n;
                            w_ptr_gray_r <= w_ptr_gray_n;
                        end
                    end
                end
            end else begin: async_reset
                always @(negedge w_clk_i or posedge w_reset_i) begin
                    if (w_reset_i) begin
                        w_ptr_r <= '0;
                        w_ptr_gray_r <= '0;
                    end else begin
                        if (w_inc_i) begin
                            w_ptr_r <= w_ptr_n;
                            w_ptr_gray_r <= w_ptr_gray_n;
                        end
                    end
                end
            end
        end
    endgenerate
    
    // Synchronizer for crossing to read domain
    reg [lg_size_p-1:0] w_ptr_gray_r_rsync_r [1:0];
    
    always @(posedge r_clk_i) begin
        w_ptr_gray_r_rsync_r[0] <= w_ptr_gray_r;
        w_ptr_gray_r_rsync_r[1] <= w_ptr_gray_r_rsync_r[0];
    end
    
    // Assign outputs
    assign w_ptr_binary_r_o = w_ptr_r;
    assign w_ptr_gray_r_o = w_ptr_gray_r;
    assign w_ptr_gray_r_rsync_o = w_ptr_gray_r_rsync_r[1];
endmodule

// Main async credit counter module
module bsg_async_credit_counter #(
    parameter max_tokens_p = 4,  // Changed default to avoid zero width
    parameter lg_credit_to_token_decimation_p = 0,
    parameter count_negedge_p = 0,
    parameter extra_margin_p = 0,
    parameter check_excess_credits_p = 1,
    parameter start_full_p = 1,
    parameter use_async_w_reset_p = 0
) (
    input wire w_clk_i,
    input wire w_inc_token_i,
    input wire w_reset_i,
    input wire r_clk_i,
    input wire r_reset_i,
    input wire r_dec_credit_i,
    input wire r_infinite_credits_i,  // basically suppress this module
    output wire r_credits_avail_o
);
    // Calculate width parameters
    localparam r_counter_width_lp = extra_margin_p + $clog2(max_tokens_p+1) + lg_credit_to_token_decimation_p;
    localparam w_counter_width_lp = extra_margin_p + $clog2(max_tokens_p+1);

    // Registers
    reg [r_counter_width_lp-1:0] r_counter_r;
    wire [w_counter_width_lp-1:0] w_counter_gray_r, w_counter_gray_r_rsync;
    wire [w_counter_width_lp-1:0] w_counter_binary_r_rsync;

    // Credit counter update logic
    always @(posedge r_clk_i)
        if (r_reset_i)
            // Initialize counter based on start_full_p
            r_counter_r <= {r_counter_width_lp{1'b0}} - (max_tokens_p * start_full_p) * (1 << lg_credit_to_token_decimation_p);
        else if (r_dec_credit_i)
            r_counter_r <= r_counter_r + 1'b1;

    // Instantiate gray code pointer
    bsg_async_ptr_gray #(
        .lg_size_p(w_counter_width_lp),
        .use_negedge_for_launch_p(count_negedge_p),
        .use_async_reset_p(use_async_w_reset_p)
    ) bapg (
        .w_clk_i(w_clk_i),
        .w_reset_i(w_reset_i),
        .w_inc_i(w_inc_token_i),
        .r_clk_i(r_clk_i),
        .w_ptr_binary_r_o(), // unused
        .w_ptr_gray_r_o(w_counter_gray_r),
        .w_ptr_gray_r_rsync_o(w_counter_gray_r_rsync)
    );

    // Extract high and low bits from r_counter
    wire [w_counter_width_lp-1:0] r_counter_r_hi_bits;
    wire r_counter_r_lo_bits_nonzero;
    
    // Check if low bits are non-zero
    generate
        if (lg_credit_to_token_decimation_p == 0) begin: gen_zero_decimation
            assign r_counter_r_lo_bits_nonzero = 1'b0;
            assign r_counter_r_hi_bits = r_counter_r;
        end else begin: gen_nonzero_decimation
            assign r_counter_r_lo_bits_nonzero = |r_counter_r[0+:lg_credit_to_token_decimation_p];
            assign r_counter_r_hi_bits = r_counter_r[lg_credit_to_token_decimation_p+:w_counter_width_lp];
        end
    endgenerate

    // Convert to gray code for comparison
    wire [w_counter_width_lp-1:0] r_counter_r_hi_bits_gray = (r_counter_r_hi_bits >> 1) ^ r_counter_r_hi_bits;

    // Credits available check
    assign r_credits_avail_o = r_infinite_credits_i | r_counter_r_lo_bits_nonzero | (r_counter_r_hi_bits_gray != w_counter_gray_r_rsync);

    // Debug logic - enabled only in simulation
    `ifdef BSG_SIMULATION
        // Gray to binary conversion for debug
        bsg_gray_to_binary #(.width_p(w_counter_width_lp)) bsg_g2b (
            .gray_i(w_counter_gray_r_rsync),
            .binary_o(w_counter_binary_r_rsync)
        );

        wire [r_counter_width_lp-1:0] w_counter_binary_r_rsync_padded;
        assign w_counter_binary_r_rsync_padded = {w_counter_binary_r_rsync, {lg_credit_to_token_decimation_p{1'b0}}};

        wire [r_counter_width_lp-1:0] r_free_credits;
        assign r_free_credits = w_counter_binary_r_rsync_padded - r_counter_r;

        reg [r_counter_width_lp-1:0] r_free_credits_r;

        always @(posedge r_clk_i)
            r_free_credits_r <= r_free_credits;

        // Assertions for debugging (will be handled by testbench in Verilator)
    `endif

endmodule

/* verilator lint_on DECLFILENAME */
/* verilator lint_on PINCONNECTEMPTY */
/* verilator lint_on MULTITOP */ 