/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNOPTFLAT */
/* verilator lint_off EOFNEWLINE */

module configurable_carry_skip_adder #(
    parameter DATA_WIDTH = 32,    // Width of the operands
    parameter BLOCK_SIZE = 4      // Size of each block
) (
    input wire [DATA_WIDTH-1:0] a,    // First operand
    input wire [DATA_WIDTH-1:0] b,    // Second operand
    input wire cin,                   // Carry-in
    output wire [DATA_WIDTH-1:0] sum, // Sum output
    output wire cout                  // Carry-out
);

    // Calculate the number of blocks needed
    localparam NUM_BLOCKS = (DATA_WIDTH + BLOCK_SIZE - 1) / BLOCK_SIZE;
    
    // Propagate signals for each bit
    wire [DATA_WIDTH-1:0] p;
    
    // Generate propagate signals for each bit
    genvar i;
    generate
        for (i = 0; i < DATA_WIDTH; i = i + 1) begin : gen_propagate
            assign p[i] = a[i] ^ b[i];  // Propagate: when a and b are different
        end
    endgenerate
    
    // Internal carries between blocks
    wire [NUM_BLOCKS:0] block_carry;
    assign block_carry[0] = cin;
    assign cout = block_carry[NUM_BLOCKS];
    
    // Generate the carry-skip blocks
    genvar j;
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
            wire [CURRENT_BLOCK_SIZE-1:0] block_p = p[END_IDX:START_IDX];
            
            // Block sum and carry signals
            wire [CURRENT_BLOCK_SIZE-1:0] block_sum;
            wire [CURRENT_BLOCK_SIZE:0] block_c;
            assign block_c[0] = block_carry[i];
            
            // Ripple Carry Adder for this block
            for (j = 0; j < CURRENT_BLOCK_SIZE; j = j + 1) begin : rca
                assign block_sum[j] = block_p[j] ^ block_c[j];
                assign block_c[j+1] = (block_a[j] & block_b[j]) | 
                                     ((block_a[j] | block_b[j]) & block_c[j]);
            end
            
            // Connect block sum to the main sum
            assign sum[END_IDX:START_IDX] = block_sum;
            
            // Calculate if all bits in this block propagate
            wire block_propagate = &block_p;
            
            // Skip logic: If all bits propagate, we can skip and just forward the carry
            assign block_carry[i+1] = block_propagate ? block_carry[i] : block_c[CURRENT_BLOCK_SIZE];
        end
    endgenerate

endmodule

/* verilator lint_on DECLFILENAME */
/* verilator lint_on UNOPTFLAT */
/* verilator lint_on EOFNEWLINE */ 
