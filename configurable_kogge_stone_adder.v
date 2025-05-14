/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNOPTFLAT */
/* verilator lint_off EOFNEWLINE */
/* verilator lint_off UNUSEDGENVAR */

module configurable_kogge_stone_adder #(
    parameter DATA_WIDTH = 32    // Width of the operands
) (
    input wire [DATA_WIDTH-1:0] a,    // First operand
    input wire [DATA_WIDTH-1:0] b,    // Second operand
    input wire cin,                   // Carry-in
    output wire [DATA_WIDTH-1:0] sum, // Sum output
    output wire cout                  // Carry-out
);

    // Number of stages in the Kogge-Stone prefix tree
    localparam STAGES = $clog2(DATA_WIDTH);
    
    // Generate and Propagate signals
    wire [DATA_WIDTH-1:0] g_init;  // Generate
    wire [DATA_WIDTH-1:0] p_init;  // Propagate
    
    // Generate initial P and G values
    genvar i;
    generate
        for (i = 0; i < DATA_WIDTH; i = i + 1) begin : init_pg
            assign g_init[i] = a[i] & b[i];                // Generate: carry is generated at this bit
            assign p_init[i] = a[i] ^ b[i];                // Propagate: carry is propagated through this bit (XOR for Kogge-Stone)
        end
    endgenerate
    
    // Intermediate P and G signals for each stage of the tree
    wire [DATA_WIDTH-1:0] p [STAGES:0];
    wire [DATA_WIDTH-1:0] g [STAGES:0];
    
    // Initialize first level with the initial P and G
    generate
        for (i = 0; i < DATA_WIDTH; i = i + 1) begin : init_stage
            assign p[0][i] = p_init[i];
            assign g[0][i] = g_init[i];
        end
    endgenerate
    
    // Build the Kogge-Stone prefix tree
    genvar j;
    generate
        for (i = 0; i < STAGES; i = i + 1) begin : prefix_stage
            // Step size for this stage
            localparam step = 1 << i;
            
            for (j = 0; j < DATA_WIDTH; j = j + 1) begin : prefix_bit
                if (j >= step) begin : use_prefix
                    // Update generate: g_j = g_j | (p_j & g_{j-step})
                    assign g[i+1][j] = g[i][j] | (p[i][j] & g[i][j-step]);
                    // Update propagate: p_j = p_j & p_{j-step}
                    assign p[i+1][j] = p[i][j] & p[i][j-step];
                end
                else begin : pass_through
                    // Lower bits just pass through
                    assign g[i+1][j] = g[i][j];
                    assign p[i+1][j] = p[i][j];
                end
            end
        end
    endgenerate
    
    // Generate the carries using the final stage P and G values
    wire [DATA_WIDTH:0] carries;
    assign carries[0] = cin;  // Initial carry-in
    
    generate
        for (i = 0; i < DATA_WIDTH; i = i + 1) begin : carry_gen
            // c_{i+1} = g_i | (p_i & c_i)
            assign carries[i+1] = g[STAGES][i] | (p[STAGES][i] & carries[i]);
        end
    endgenerate
    
    // Compute the sum bits
    generate
        for (i = 0; i < DATA_WIDTH; i = i + 1) begin : sum_gen
            assign sum[i] = p_init[i] ^ carries[i];  // sum = a ^ b ^ carry_in
        end
    endgenerate
    
    // Final carry-out
    assign cout = carries[DATA_WIDTH];

endmodule

/* verilator lint_on DECLFILENAME */
/* verilator lint_on UNOPTFLAT */
/* verilator lint_on EOFNEWLINE */
/* verilator lint_on UNUSEDGENVAR */ 
