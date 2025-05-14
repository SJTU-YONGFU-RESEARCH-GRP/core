/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNOPTFLAT */
/* verilator lint_off EOFNEWLINE */
/* verilator lint_off GENUNNAMED */

module configurable_carry_lookahead_adder #(
    parameter DATA_WIDTH = 32,    // Width of the operands
    parameter GROUP_SIZE = 4      // Size of each carry-lookahead group
) (
    input wire [DATA_WIDTH-1:0] a,    // First operand
    input wire [DATA_WIDTH-1:0] b,    // Second operand
    input wire cin,                   // Carry-in
    output wire [DATA_WIDTH-1:0] sum, // Sum output
    output wire cout                  // Carry-out
);

    // Calculate the number of groups needed
    localparam NUM_GROUPS = (DATA_WIDTH + GROUP_SIZE - 1) / GROUP_SIZE;
    
    // Generate and Propagate signals for each bit
    wire [DATA_WIDTH-1:0] g;          // Generate
    wire [DATA_WIDTH-1:0] p;          // Propagate
    
    // Carry signals between groups
    wire [NUM_GROUPS:0] group_carry;
    assign group_carry[0] = cin;      // Input carry
    assign cout = group_carry[NUM_GROUPS]; // Output carry
    
    // Generate P and G signals for each bit
    genvar i;
    generate
        for (i = 0; i < DATA_WIDTH; i = i + 1) begin : pg_bit_logic
            assign g[i] = a[i] & b[i];         // Generate: carry is generated at this bit
            assign p[i] = a[i] ^ b[i];         // Propagate: carry is propagated through this bit (XOR for proper addition)
        end
    endgenerate
    
    // Carry signals for each bit
    wire [DATA_WIDTH-1:0] c_internal;
    
    // For each group, implement the carry lookahead logic
    generate
        for (i = 0; i < NUM_GROUPS; i = i + 1) begin : cla_groups
            // Calculate the width of this group (handle the case where the last group might be smaller)
            localparam CURRENT_GROUP_SIZE = ((i+1)*GROUP_SIZE <= DATA_WIDTH) ? 
                                            GROUP_SIZE : 
                                            DATA_WIDTH - (i*GROUP_SIZE);
            
            // Calculate start and end indices for this group
            localparam START_IDX = i * GROUP_SIZE;
            localparam END_IDX = START_IDX + CURRENT_GROUP_SIZE - 1;
            
            // Carry lookahead logic for this group
            cla_group #(
                .GROUP_SIZE(CURRENT_GROUP_SIZE)
            ) cla_group_inst (
                .p(p[END_IDX:START_IDX]),
                .g(g[END_IDX:START_IDX]),
                .cin(group_carry[i]),
                .cout(group_carry[i+1]),
                .c(c_internal[END_IDX:START_IDX])
            );
        end
    endgenerate
    
    // Compute the sum
    generate
        for (i = 0; i < DATA_WIDTH; i = i + 1) begin : sum_logic
            assign sum[i] = p[i] ^ c_internal[i]; // XOR propagate with carry for final sum
        end
    endgenerate

endmodule

// CLA Group module that implements carry lookahead for a group of bits
module cla_group #(
    parameter GROUP_SIZE = 4
) (
    input wire [GROUP_SIZE-1:0] p,     // Propagate signals
    input wire [GROUP_SIZE-1:0] g,     // Generate signals
    input wire cin,                    // Carry-in to this group
    output wire cout,                  // Carry-out from this group
    output wire [GROUP_SIZE-1:0] c     // Carry signals for each bit in the group
);
    
    // Internal carries (c[0] is cin)
    wire [GROUP_SIZE:0] c_internal;
    assign c_internal[0] = cin;
    assign cout = c_internal[GROUP_SIZE];
    
    // Connect the internal carries to the output
    genvar i;
    generate
        for (i = 0; i < GROUP_SIZE; i = i + 1) begin : connect_carries
            assign c[i] = c_internal[i];
        end
    endgenerate
    
    // Calculate all carries using CLA equations
    generate
        for (i = 1; i <= GROUP_SIZE; i = i + 1) begin : cla_logic
            // Each carry is the OR of:
            // 1. Generate at current position
            // 2. Carry-in propagated through all bits
            wire carry_term = g[i-1];
            wire prop_term = p[i-1] & c_internal[i-1];
            
            assign c_internal[i] = carry_term | prop_term;
        end
    endgenerate
endmodule

/* verilator lint_on DECLFILENAME */
/* verilator lint_on UNOPTFLAT */
/* verilator lint_on EOFNEWLINE */
/* verilator lint_on GENUNNAMED */ 
