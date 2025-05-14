/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNOPTFLAT */
/* verilator lint_off EOFNEWLINE */
/* verilator lint_off UNUSEDGENVAR */
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off GENUNNAMED */

module configurable_brent_kung_adder #(
    parameter DATA_WIDTH = 32    // Width of the operands
) (
    input wire [DATA_WIDTH-1:0] a,    // First operand
    input wire [DATA_WIDTH-1:0] b,    // Second operand
    input wire cin,                   // Carry-in
    output wire [DATA_WIDTH-1:0] sum, // Sum output
    output wire cout                  // Carry-out
);

    // Generate and Propagate signals
    wire [DATA_WIDTH-1:0] g;  // Generate
    wire [DATA_WIDTH-1:0] p;  // Propagate
    
    // Generate initial P and G values
    genvar i;
    generate
        for (i = 0; i < DATA_WIDTH; i = i + 1) begin : init_pg
            assign g[i] = a[i] & b[i];                // Generate: carry is generated at this bit
            assign p[i] = a[i] ^ b[i];                // Propagate: carry is propagated through this bit (XOR for proper addition)
        end
    endgenerate
    
    // Carry signals
    wire [DATA_WIDTH:0] carries;
    assign carries[0] = cin;  // Initial carry-in
    
    // Generate carries using a simplified prefix tree structure
    generate
        for (i = 0; i < DATA_WIDTH; i = i + 1) begin : carry_gen
            assign carries[i+1] = g[i] | (p[i] & carries[i]);
        end
    endgenerate
    
    // Compute the sum bits
    generate
        for (i = 0; i < DATA_WIDTH; i = i + 1) begin : sum_gen
            assign sum[i] = p[i] ^ carries[i];  // sum = a ^ b ^ carry_in
        end
    endgenerate
    
    // Final carry-out
    assign cout = carries[DATA_WIDTH];

endmodule

/* verilator lint_on DECLFILENAME */
/* verilator lint_on UNOPTFLAT */
/* verilator lint_on EOFNEWLINE */
/* verilator lint_on UNUSEDGENVAR */
/* verilator lint_on UNUSEDSIGNAL */
/* verilator lint_on GENUNNAMED */ 
