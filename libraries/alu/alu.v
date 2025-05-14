module alu #(
    parameter DATA_WIDTH = 8,
    parameter OP_WIDTH = 3
) (
    input wire clk,
    input wire rst_n,
    input wire [DATA_WIDTH-1:0] a,
    input wire [DATA_WIDTH-1:0] b,
    input wire [OP_WIDTH-1:0] op_code,
    output reg [DATA_WIDTH-1:0] result,
    output reg zero_flag,
    output reg overflow_flag
);

    // Operation codes
    localparam ADD = 3'b000;
    localparam SUB = 3'b001;
    localparam AND = 3'b010;
    localparam OR  = 3'b011;
    localparam XOR = 3'b100;
    localparam SHL = 3'b101;
    localparam SHR = 3'b110;
    localparam CMP = 3'b111;

    // Temporary wires for calculating results
    wire [DATA_WIDTH-1:0] add_result = a + b;
    wire [DATA_WIDTH-1:0] sub_result = a - b;
    wire [DATA_WIDTH-1:0] and_result = a & b;
    wire [DATA_WIDTH-1:0] or_result = a | b;
    wire [DATA_WIDTH-1:0] xor_result = a ^ b;
    wire [DATA_WIDTH-1:0] shl_result = a << b[2:0];
    wire [DATA_WIDTH-1:0] shr_result = a >> b[2:0];
    wire [DATA_WIDTH-1:0] cmp_result = (a == b) ? 1 : 0;

    // For overflow detection in addition
    wire [DATA_WIDTH:0] add_temp = {1'b0, a} + {1'b0, b};
    wire add_overflow = add_temp[DATA_WIDTH]; // Carry out indicates overflow
    
    // For overflow detection in subtraction
    wire sub_overflow = (a[DATA_WIDTH-1] != b[DATA_WIDTH-1]) && 
                       (sub_result[DATA_WIDTH-1] != a[DATA_WIDTH-1]);

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            result <= 0;
            zero_flag <= 0;
            overflow_flag <= 0;
        end else begin
            case (op_code)
                ADD: begin
                    result <= add_result;
                    overflow_flag <= add_overflow;
                end
                SUB: begin
                    result <= sub_result;
                    overflow_flag <= sub_overflow;
                end
                AND: begin
                    result <= and_result;
                    overflow_flag <= 0;
                end
                OR: begin
                    result <= or_result;
                    overflow_flag <= 0;
                end
                XOR: begin
                    result <= xor_result;
                    overflow_flag <= 0;
                end
                SHL: begin
                    result <= shl_result;
                    overflow_flag <= 0;
                end
                SHR: begin
                    result <= shr_result;
                    overflow_flag <= 0;
                end
                CMP: begin
                    result <= cmp_result;
                    overflow_flag <= 0;
                end
                default: begin
                    result <= 0;
                    overflow_flag <= 0;
                end
            endcase
            
            // Update zero flag based on the new result
            zero_flag <= (op_code == ADD && add_result == 0) ||
                        (op_code == SUB && sub_result == 0) ||
                        (op_code == AND && and_result == 0) ||
                        (op_code == OR && or_result == 0) ||
                        (op_code == XOR && xor_result == 0) ||
                        (op_code == SHL && shl_result == 0) ||
                        (op_code == SHR && shr_result == 0) ||
                        (op_code == CMP && cmp_result == 0);
        end
    end

endmodule 
