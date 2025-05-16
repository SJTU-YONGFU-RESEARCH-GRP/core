module scan_register #(
    parameter WIDTH = 8
)(
    input wire clk,
    input wire rst_n,
    
    // Normal operation
    input wire [WIDTH-1:0] data_in,
    output reg [WIDTH-1:0] data_out,
    
    // Scan chain operation
    input wire scan_en,      // Scan enable (1: scan mode, 0: normal mode)
    input wire scan_in,      // Scan input
    output wire scan_out     // Scan output
);

    // Internal scan chain registers
    reg [WIDTH-1:0] scan_reg;
    
    // Scan output is the last bit of the scan register
    assign scan_out = scan_reg[WIDTH-1];
    
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            scan_reg <= {WIDTH{1'b0}};
            data_out <= {WIDTH{1'b0}};
        end
        else begin
            if (scan_en) begin
                // Scan mode: shift scan chain
                scan_reg <= {scan_reg[WIDTH-2:0], scan_in};
                // Also update data_out to reflect current scan register
                data_out <= {scan_reg[WIDTH-2:0], scan_in};
            end
            else begin
                // Normal mode: load data
                scan_reg <= data_in;
                data_out <= scan_reg;
            end
        end
    end

endmodule 
