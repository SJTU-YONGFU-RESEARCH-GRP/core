module barrel_rotator #(
    parameter DATA_WIDTH = 8,
    parameter SHIFT_WIDTH = $clog2(DATA_WIDTH)
) (
    input wire [DATA_WIDTH-1:0] data_in,
    input wire [SHIFT_WIDTH-1:0] rotate_amount,
    input wire direction,  // 0 for right rotation, 1 for left rotation
    output reg [DATA_WIDTH-1:0] data_out
);

    // Implementation using a shift-and-or approach
    always @(*) begin
        data_out = data_in; // Default
        
        if (direction == 1'b0) begin
            // Right rotation
            case (rotate_amount)
                3'd0: data_out = data_in;
                3'd1: data_out = {data_in[0], data_in[DATA_WIDTH-1:1]};
                3'd2: data_out = {data_in[1:0], data_in[DATA_WIDTH-1:2]};
                3'd3: data_out = {data_in[2:0], data_in[DATA_WIDTH-1:3]};
                3'd4: data_out = {data_in[3:0], data_in[DATA_WIDTH-1:4]};
                3'd5: data_out = {data_in[4:0], data_in[DATA_WIDTH-1:5]};
                3'd6: data_out = {data_in[5:0], data_in[DATA_WIDTH-1:6]};
                3'd7: data_out = {data_in[6:0], data_in[DATA_WIDTH-1:7]};
                default: data_out = data_in;
            endcase
        end else begin
            // Left rotation
            case (rotate_amount)
                3'd0: data_out = data_in;
                3'd1: data_out = {data_in[DATA_WIDTH-2:0], data_in[DATA_WIDTH-1]};
                3'd2: data_out = {data_in[DATA_WIDTH-3:0], data_in[DATA_WIDTH-1:DATA_WIDTH-2]};
                3'd3: data_out = {data_in[DATA_WIDTH-4:0], data_in[DATA_WIDTH-1:DATA_WIDTH-3]};
                3'd4: data_out = {data_in[DATA_WIDTH-5:0], data_in[DATA_WIDTH-1:DATA_WIDTH-4]};
                3'd5: data_out = {data_in[DATA_WIDTH-6:0], data_in[DATA_WIDTH-1:DATA_WIDTH-5]};
                3'd6: data_out = {data_in[DATA_WIDTH-7:0], data_in[DATA_WIDTH-1:DATA_WIDTH-6]};
                3'd7: data_out = {data_in[DATA_WIDTH-8:0], data_in[DATA_WIDTH-1:DATA_WIDTH-7]};
                default: data_out = data_in;
            endcase
        end
    end

endmodule 
