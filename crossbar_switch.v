module crossbar_switch #(
    parameter NUM_INPUTS = 4,
    parameter NUM_OUTPUTS = 4,
    parameter DATA_WIDTH = 8
)(
    input wire clk,
    input wire rst_n,
    
    // Input data ports (flattened for Verilator compatibility)
    input wire [(NUM_INPUTS*DATA_WIDTH)-1:0] data_in,
    
    // Selection matrix: each output selects which input to connect to
    input wire [(NUM_OUTPUTS*$clog2(NUM_INPUTS))-1:0] select,
    
    // Output data ports (flattened for Verilator compatibility)
    output reg [(NUM_OUTPUTS*DATA_WIDTH)-1:0] data_out
);

    // Implement the crossbar switching logic
    integer i;
    reg [$clog2(NUM_INPUTS)-1:0] sel_idx;
    reg [DATA_WIDTH-1:0] selected_data;
    
    /* verilator lint_off BLKSEQ */
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            // Reset all outputs to 0
            for (i = 0; i < NUM_OUTPUTS; i = i + 1) begin
                data_out[(i*DATA_WIDTH) +: DATA_WIDTH] <= {DATA_WIDTH{1'b0}};
            end
        end else begin
            // Route each input to the selected output
            for (i = 0; i < NUM_OUTPUTS; i = i + 1) begin
                // Extract the selection for this output
                sel_idx = select[(i*$clog2(NUM_INPUTS)) +: $clog2(NUM_INPUTS)];
                
                // Get the selected input data
                selected_data = data_in[(sel_idx*DATA_WIDTH) +: DATA_WIDTH];
                
                // Assign to output
                data_out[(i*DATA_WIDTH) +: DATA_WIDTH] <= selected_data;
            end
        end
    end
    /* verilator lint_on BLKSEQ */

endmodule 
