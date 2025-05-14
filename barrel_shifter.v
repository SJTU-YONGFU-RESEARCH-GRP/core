module barrel_shifter #(
    parameter DATA_WIDTH = 32,
    parameter SHIFT_WIDTH = $clog2(DATA_WIDTH)
) (
    input wire [DATA_WIDTH-1:0] data_in,
    input wire [SHIFT_WIDTH-1:0] shift_amount,
    input wire shift_direction,  // 0 for right shift, 1 for left shift
    input wire rotate,           // 0 for logical shift, 1 for rotate
    output reg [DATA_WIDTH-1:0] data_out
);

    reg [DATA_WIDTH-1:0] temp_data;
    
    always @(*) begin
        temp_data = data_in;
        
        if (shift_direction) begin
            // Left shift or rotate
            if (rotate) begin
                // Rotate left
                data_out = (temp_data << shift_amount) | (temp_data >> (DATA_WIDTH - shift_amount));
            end else begin
                // Logical left shift
                data_out = temp_data << shift_amount;
            end
        end else begin
            // Right shift or rotate
            if (rotate) begin
                // Rotate right
                data_out = (temp_data >> shift_amount) | (temp_data << (DATA_WIDTH - shift_amount));
            end else begin
                // Logical right shift
                data_out = temp_data >> shift_amount;
            end
        end
    end

endmodule 
