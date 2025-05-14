module parameterized_barrel_rotator #(
    parameter DATA_WIDTH = 32,                   // Width of data
    parameter SHIFT_WIDTH = $clog2(DATA_WIDTH)   // Width of shift amount signal
) (
    input wire [DATA_WIDTH-1:0] data_in,
    input wire [SHIFT_WIDTH-1:0] rotate_amount,
    input wire direction,  // 0 for right rotation, 1 for left rotation
    output reg [DATA_WIDTH-1:0] data_out
);
    // Helpers for performing the rotation
    reg [DATA_WIDTH-1:0] temp_data;
    reg [2*DATA_WIDTH-1:0] extended_data;
    reg [SHIFT_WIDTH-1:0] effective_rotate;
    
    always @(*) begin
        // Create an extended data word to simplify rotation
        extended_data = {data_in, data_in};
        
        // Use the rotate amount directly
        effective_rotate = rotate_amount;
        
        if (direction == 1'b0) begin
            // Right rotation
            // For right rotation, data_out[N-1:0] = {data_in[rotate-1:0], data_in[N-1:rotate]}
            // Using the extended data, this becomes: extended_data[N+rotate-1:rotate]
            temp_data = extended_data[DATA_WIDTH+effective_rotate-1 -: DATA_WIDTH];
        end else begin
            // Left rotation
            // For left rotation, data_out[N-1:0] = {data_in[N-1-rotate:0], data_in[N-1:N-rotate]}
            // Using the extended data, this becomes: extended_data[N-1-rotate+N:N-rotate]
            // Simplifies to: extended_data[2*N-1-rotate:N-rotate]
            temp_data = extended_data[2*DATA_WIDTH-1-effective_rotate -: DATA_WIDTH];
        end
        
        data_out = temp_data;
    end

endmodule 
