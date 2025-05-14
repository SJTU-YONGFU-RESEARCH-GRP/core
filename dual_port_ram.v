module dual_port_ram #(
    parameter DATA_WIDTH = 8,
    parameter ADDR_WIDTH = 4,
    parameter DEPTH = (1 << ADDR_WIDTH)
)(
    input wire clk,
    // Port A
    input wire [ADDR_WIDTH-1:0] addr_a,
    input wire [DATA_WIDTH-1:0] data_a,
    input wire we_a,
    output reg [DATA_WIDTH-1:0] q_a,
    // Port B
    input wire [ADDR_WIDTH-1:0] addr_b,
    input wire [DATA_WIDTH-1:0] data_b,
    input wire we_b,
    output reg [DATA_WIDTH-1:0] q_b
);

    // Memory array
    reg [DATA_WIDTH-1:0] ram [0:DEPTH-1];

    // Port A
    always @(posedge clk) begin
        if (we_a) begin
            ram[addr_a] <= data_a;
        end
        q_a <= ram[addr_a];
    end

    // Port B
    always @(posedge clk) begin
        if (we_b) begin
            ram[addr_b] <= data_b;
        end
        q_b <= ram[addr_b];
    end

endmodule 
