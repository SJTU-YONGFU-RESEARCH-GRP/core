// Dual-edge triggered register using two registers and a mux for synthesis compatibility
module dual_edge_register #(
    parameter WIDTH = 8
)(
    input wire clk,                     // Clock input
    input wire rst_n,                   // Active low reset
    input wire enable,                  // Enable signal
    input wire [WIDTH-1:0] data_in,     // Data input
    output wire [WIDTH-1:0] data_out    // Data output
);
    reg [WIDTH-1:0] posedge_reg, negedge_reg;

    // Sample on posedge
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            posedge_reg <= {WIDTH{1'b0}};
        else if (enable)
            posedge_reg <= data_in;
    end

    // Sample on negedge
    always @(negedge clk or negedge rst_n) begin
        if (!rst_n)
            negedge_reg <= {WIDTH{1'b0}};
        else if (enable)
            negedge_reg <= data_in;
    end

    // Output is zero when rst_n is low, otherwise mux between posedge and negedge reg
    assign data_out = (!rst_n) ? {WIDTH{1'b0}} : (clk ? posedge_reg : negedge_reg);
endmodule 
