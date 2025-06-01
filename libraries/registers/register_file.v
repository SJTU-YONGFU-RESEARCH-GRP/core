module register_file #(
    parameter WIDTH = 32,
    parameter DEPTH = 32,
    parameter ADDR_WIDTH = $clog2(DEPTH)
)(
    input wire clk,
    input wire rst_n,
    
    // Write port
    input wire write_en,
    input wire [ADDR_WIDTH-1:0] write_addr,
    input wire [WIDTH-1:0] write_data,
    
    // Read port 1
    input wire read_en1,
    input wire [ADDR_WIDTH-1:0] read_addr1,
    output reg [WIDTH-1:0] read_data1,
    
    // Read port 2
    input wire read_en2,
    input wire [ADDR_WIDTH-1:0] read_addr2,
    output reg [WIDTH-1:0] read_data2
);

    // Register array
    reg [WIDTH-1:0] registers [0:DEPTH-1];
    
    integer i;
    
    // Initialization with reset
    always @(posedge clk) begin
        if (!rst_n) begin
            for (i = 0; i < DEPTH; i = i + 1) begin
                registers[i] <= {WIDTH{1'b0}};
            end
        end
        else if (write_en) begin
            // Write operation
            registers[write_addr] <= write_data;
        end
    end
    
    // Read port 1
    always @(posedge clk) begin
        if (rst_n && read_en1) begin
            read_data1 <= registers[read_addr1];
        end
        else if (!rst_n) begin
            read_data1 <= {WIDTH{1'b0}};
        end
    end
    
    // Read port 2
    always @(posedge clk) begin
        if (rst_n && read_en2) begin
            read_data2 <= registers[read_addr2];
        end
        else if (!rst_n) begin
            read_data2 <= {WIDTH{1'b0}};
        end
    end

endmodule 
