/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNOPTFLAT */
/* verilator lint_off EOFNEWLINE */

module configurable_carry_select_adder #(
    parameter DATA_WIDTH = 64,        // Width of the operands - increased from 32 to 64
    parameter BLOCK_SIZE = 8          // Size of each carry-select block - increased from 4 to 8
) (
    input wire [DATA_WIDTH-1:0] a,    // First operand
    input wire [DATA_WIDTH-1:0] b,    // Second operand
    input wire cin,                   // Carry-in
    output wire [DATA_WIDTH-1:0] sum, // Sum output
    output wire cout                  // Carry-out
);

    // Calculate the number of blocks needed
    localparam NUM_BLOCKS = (DATA_WIDTH + BLOCK_SIZE - 1) / BLOCK_SIZE;
    
    // Internal wires for block interconnection
    // In carry-select adders, combinatorial feedback is by design
    wire [NUM_BLOCKS:0] block_carry;
    assign block_carry[0] = cin;
    assign cout = block_carry[NUM_BLOCKS];
    
    // Generate the adder blocks
    genvar i;
    generate
        // First block is a regular ripple-carry adder
        wire [BLOCK_SIZE-1:0] first_block_sum;
        csa_ripple_carry_adder #(
            .WIDTH(BLOCK_SIZE)
        ) first_block (
            .a(a[BLOCK_SIZE-1:0]),
            .b(b[BLOCK_SIZE-1:0]),
            .cin(block_carry[0]),
            .sum(first_block_sum),
            .cout(block_carry[1])
        );
        assign sum[BLOCK_SIZE-1:0] = first_block_sum;
        
        // Remaining blocks use carry-select logic
        for (i = 1; i < NUM_BLOCKS; i = i + 1) begin : carry_select_blocks
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
            
            // Two possible results for carry-in 0 and 1
            wire [CURRENT_BLOCK_SIZE-1:0] sum_cin_0, sum_cin_1;
            wire cout_cin_0, cout_cin_1;
            
            // Adder for carry-in = 0 (precompute result)
            csa_ripple_carry_adder #(
                .WIDTH(CURRENT_BLOCK_SIZE)
            ) adder_0 (
                .a(block_a),
                .b(block_b),
                .cin(1'b0),
                .sum(sum_cin_0),
                .cout(cout_cin_0)
            );
            
            // Adder for carry-in = 1 (precompute result)
            csa_ripple_carry_adder #(
                .WIDTH(CURRENT_BLOCK_SIZE)
            ) adder_1 (
                .a(block_a),
                .b(block_b),
                .cin(1'b1),
                .sum(sum_cin_1),
                .cout(cout_cin_1)
            );
            
            // Select the correct output based on carry-in from previous block
            wire select = block_carry[i];
            assign sum[END_IDX:START_IDX] = select ? sum_cin_1 : sum_cin_0;
            assign block_carry[i+1] = select ? cout_cin_1 : cout_cin_0;
        end
    endgenerate

endmodule

// Simple ripple carry adder used as a building block
module csa_ripple_carry_adder #(
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
            csa_full_adder fa (
                .a(a[i]),
                .b(b[i]),
                .cin(carry[i]),
                .sum(sum[i]),
                .cout(carry[i+1])
            );
        end
    endgenerate
endmodule

// Basic full adder
module csa_full_adder (
    input wire a,
    input wire b,
    input wire cin,
    output wire sum,
    output wire cout
);
    assign sum = a ^ b ^ cin;
    assign cout = (a & b) | (a & cin) | (b & cin);
endmodule

/* verilator lint_on DECLFILENAME */
/* verilator lint_on UNOPTFLAT */
/* verilator lint_on EOFNEWLINE */ 
