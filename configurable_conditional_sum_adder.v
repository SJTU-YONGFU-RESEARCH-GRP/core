/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNOPTFLAT */
/* verilator lint_off EOFNEWLINE */
/* verilator lint_off GENUNNAMED */

module configurable_conditional_sum_adder #(
    parameter DATA_WIDTH = 32,    // Width of the operands
    parameter BLOCK_SIZE = 4      // Size of each initial block
) (
    input wire [DATA_WIDTH-1:0] a,    // First operand
    input wire [DATA_WIDTH-1:0] b,    // Second operand
    input wire cin,                   // Carry-in
    output wire [DATA_WIDTH-1:0] sum, // Sum output
    output wire cout                  // Carry-out
);

    // Initial block ripple-carry adders
    genvar i, j;
    
    // Round up the number of blocks
    localparam NUM_BLOCKS = (DATA_WIDTH + BLOCK_SIZE - 1) / BLOCK_SIZE;
    
    // Pre-compute sums and carries for each block for both carry-in 0 and 1
    wire [NUM_BLOCKS-1:0][BLOCK_SIZE-1:0] sum_cin_0;  // Sum when carry-in = 0
    wire [NUM_BLOCKS-1:0][BLOCK_SIZE-1:0] sum_cin_1;  // Sum when carry-in = 1
    wire [NUM_BLOCKS-1:0] cout_cin_0;                 // Carry-out when carry-in = 0
    wire [NUM_BLOCKS-1:0] cout_cin_1;                 // Carry-out when carry-in = 1
    
    // Intermediate carries
    wire [NUM_BLOCKS:0] carry;
    assign carry[0] = cin;
    assign cout = carry[NUM_BLOCKS];
    
    // Generate the ripple-carry adders for each block
    generate
        for (i = 0; i < NUM_BLOCKS; i = i + 1) begin : blocks
            // Calculate the width of this block (handle the case where the last block might be smaller)
            localparam CURRENT_BLOCK_SIZE = ((i+1)*BLOCK_SIZE <= DATA_WIDTH) ? 
                                            BLOCK_SIZE : 
                                            DATA_WIDTH - (i*BLOCK_SIZE);
            
            // Calculate start and end indices for this block
            localparam START_IDX = i * BLOCK_SIZE;
            localparam END_IDX = START_IDX + CURRENT_BLOCK_SIZE - 1;
            
            // Block inputs
            wire [CURRENT_BLOCK_SIZE-1:0] block_a = a[END_IDX:START_IDX];
            wire [CURRENT_BLOCK_SIZE-1:0] block_b = b[END_IDX:START_IDX];
            
            // Compute sum and carry for carry-in = 0
            wire [CURRENT_BLOCK_SIZE-1:0] block_sum_cin_0;
            wire block_cout_cin_0;
            
            cond_sum_rca #(
                .WIDTH(CURRENT_BLOCK_SIZE)
            ) rca_cin_0 (
                .a(block_a),
                .b(block_b),
                .cin(1'b0),
                .sum(block_sum_cin_0),
                .cout(block_cout_cin_0)
            );
            
            // Compute sum and carry for carry-in = 1
            wire [CURRENT_BLOCK_SIZE-1:0] block_sum_cin_1;
            wire block_cout_cin_1;
            
            cond_sum_rca #(
                .WIDTH(CURRENT_BLOCK_SIZE)
            ) rca_cin_1 (
                .a(block_a),
                .b(block_b),
                .cin(1'b1),
                .sum(block_sum_cin_1),
                .cout(block_cout_cin_1)
            );
            
            // Store the results
            if (CURRENT_BLOCK_SIZE == BLOCK_SIZE) begin : full_block
                // This is a full block
                assign sum_cin_0[i] = block_sum_cin_0;
                assign sum_cin_1[i] = block_sum_cin_1;
            end
            else begin : partial_block
                // This is a partial block (last block)
                // We still need to assign all bits for consistency
                for (j = 0; j < BLOCK_SIZE; j = j + 1) begin : pad_bits
                    if (j < CURRENT_BLOCK_SIZE) begin : valid_bit
                        assign sum_cin_0[i][j] = block_sum_cin_0[j];
                        assign sum_cin_1[i][j] = block_sum_cin_1[j];
                    end
                    else begin : padding_bit
                        // Pad with zeros
                        assign sum_cin_0[i][j] = 1'b0;
                        assign sum_cin_1[i][j] = 1'b0;
                    end
                end
            end
            
            assign cout_cin_0[i] = block_cout_cin_0;
            assign cout_cin_1[i] = block_cout_cin_1;
            
            // Select the correct output based on carry
            assign carry[i+1] = carry[i] ? cout_cin_1[i] : cout_cin_0[i];
            
            // Determine which sum to use based on the carry-in to this block
            for (j = 0; j < CURRENT_BLOCK_SIZE; j = j + 1) begin : block_sum_select
                assign sum[START_IDX + j] = carry[i] ? sum_cin_1[i][j] : sum_cin_0[i][j];
            end
        end
    endgenerate

endmodule

// Ripple-carry adder used for computing conditional sums
module cond_sum_rca #(
    parameter WIDTH = 4
) (
    input wire [WIDTH-1:0] a,
    input wire [WIDTH-1:0] b,
    input wire cin,
    output wire [WIDTH-1:0] sum,
    output wire cout
);
    wire [WIDTH:0] carry;
    assign carry[0] = cin;
    assign cout = carry[WIDTH];
    
    genvar i;
    generate
        for (i = 0; i < WIDTH; i = i + 1) begin : full_adders
            assign sum[i] = a[i] ^ b[i] ^ carry[i];
            assign carry[i+1] = (a[i] & b[i]) | (a[i] & carry[i]) | (b[i] & carry[i]);
        end
    endgenerate
endmodule

/* verilator lint_on DECLFILENAME */
/* verilator lint_on UNOPTFLAT */
/* verilator lint_on EOFNEWLINE */
/* verilator lint_on GENUNNAMED */ 
