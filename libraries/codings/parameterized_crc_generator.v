module parameterized_crc_generator #(
    parameter WIDTH = 8,               // Data width
    parameter CRC_WIDTH = 8,           // CRC width
    parameter [CRC_WIDTH-1:0] POLY = 8'h07,  // CRC polynomial (default: CRC-8 = x^8 + x^2 + x + 1)
    parameter [CRC_WIDTH-1:0] INIT = {CRC_WIDTH{1'b0}},  // Initial value
    parameter INPUT_REFLECTED = 0,     // Reflect input bytes
    parameter RESULT_REFLECTED = 0,    // Reflect output result
    parameter XOR_OUT = {CRC_WIDTH{1'b0}}  // Final XOR value
)(
    input wire clk,                    // Clock
    input wire rst_n,                  // Active low reset
    input wire [WIDTH-1:0] data_in,    // Input data
    input wire data_valid,             // Data valid signal
    input wire crc_init,               // Initialize CRC calculation
    output reg [CRC_WIDTH-1:0] crc_out // CRC output
);

    // Internal register for CRC calculation
    reg [CRC_WIDTH-1:0] crc_reg;
    wire [WIDTH-1:0] data_reflected;
    wire [CRC_WIDTH-1:0] crc_reflected;
    
    // Function to reflect bits in a byte
    function [WIDTH-1:0] reflect_data;
        input [WIDTH-1:0] data;
        integer i;
        begin
            for (i = 0; i < WIDTH; i = i + 1) begin
                reflect_data[i] = data[WIDTH-1-i];
            end
        end
    endfunction
    
    // Function to reflect CRC result
    function [CRC_WIDTH-1:0] reflect_crc;
        input [CRC_WIDTH-1:0] data;
        integer i;
        begin
            for (i = 0; i < CRC_WIDTH; i = i + 1) begin
                reflect_crc[i] = data[CRC_WIDTH-1-i];
            end
        end
    endfunction
    
    // Reflect input if needed
    assign data_reflected = INPUT_REFLECTED ? reflect_data(data_in) : data_in;
    
    // CRC calculation
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            crc_reg <= INIT;
        end else if (crc_init) begin
            crc_reg <= INIT;
        end else if (data_valid) begin
            crc_reg <= next_crc(crc_reg, data_reflected);
        end
    end
    
    // Reflect output if needed and apply final XOR
    assign crc_reflected = RESULT_REFLECTED ? reflect_crc(crc_reg) : crc_reg;
    
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            crc_out <= {CRC_WIDTH{1'b0}};
        end else begin
            crc_out <= crc_reflected ^ XOR_OUT;
        end
    end
    
    // Calculate next CRC value
    // verilator lint_off BLKSEQ
    function [CRC_WIDTH-1:0] next_crc;
        input [CRC_WIDTH-1:0] crc;
        input [WIDTH-1:0] data;
        reg [CRC_WIDTH-1:0] next;
        integer i;
        begin
            next = crc; // Blocking assignment is appropriate in functions
            
            for (i = 0; i < WIDTH; i = i + 1) begin
                next = {next[CRC_WIDTH-2:0], 1'b0} ^ 
                       ((next[CRC_WIDTH-1] ^ data[WIDTH-1-i]) ? POLY : 0);
            end
            
            next_crc = next;
        end
    endfunction
    // verilator lint_on BLKSEQ

endmodule
