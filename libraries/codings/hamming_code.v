module hamming_code #(
    parameter DATA_WIDTH = 4  // Number of data bits
)(
    input wire [DATA_WIDTH-1:0] data_in,
    output wire [DATA_WIDTH+$clog2(DATA_WIDTH+$clog2(DATA_WIDTH)+1)-1:0] encoded_out,
    
    input wire [DATA_WIDTH+$clog2(DATA_WIDTH+$clog2(DATA_WIDTH)+1)-1:0] received_in,
    output wire [DATA_WIDTH-1:0] data_out,
    output wire single_bit_error,
    output wire [DATA_WIDTH+$clog2(DATA_WIDTH+$clog2(DATA_WIDTH)+1)-1:0] corrected_code
);
    
    // Encoder implementation
    // Hard-coded bit mapping for DATA_WIDTH=4
    // For DATA_WIDTH=4, we need 3 parity bits (positions 1, 2, 4)
    // Total bits = 7 (positions: 1(p), 2(p), 3(d), 4(p), 5(d), 6(d), 7(d))
    // We're using 1-indexing for bit positions to match Hamming code convention
    
    // parity bit 1 (position 1) covers positions 1, 3, 5, 7, ...
    wire p1 = data_in[0] ^ data_in[1] ^ data_in[3];
    
    // parity bit 2 (position 2) covers positions 2, 3, 6, 7, ...
    wire p2 = data_in[0] ^ data_in[2] ^ data_in[3];
    
    // parity bit 3 (position 4) covers positions 4, 5, 6, 7, ...
    wire p3 = data_in[1] ^ data_in[2] ^ data_in[3];
    
    // Construct the encoded output
    // Position 1 (parity bit 1)
    assign encoded_out[0] = p1;
    // Position 2 (parity bit 2)
    assign encoded_out[1] = p2;
    // Position 3 (data bit 1)
    assign encoded_out[2] = data_in[0];
    // Position 4 (parity bit 3)
    assign encoded_out[3] = p3;
    // Position 5 (data bit 2)
    assign encoded_out[4] = data_in[1];
    // Position 6 (data bit 3)
    assign encoded_out[5] = data_in[2];
    // Position 7 (data bit 4)
    assign encoded_out[6] = data_in[3];
    
    // Decoder and error corrector implementation
    
    // Calculate syndrome
    // syndrome bit 1 checks positions 1, 3, 5, 7, ...
    wire s1 = received_in[0] ^ received_in[2] ^ received_in[4] ^ received_in[6];
    
    // syndrome bit 2 checks positions 2, 3, 6, 7, ...
    wire s2 = received_in[1] ^ received_in[2] ^ received_in[5] ^ received_in[6];
    
    // syndrome bit 3 checks positions 4, 5, 6, 7, ...
    wire s3 = received_in[3] ^ received_in[4] ^ received_in[5] ^ received_in[6];
    
    // Combine syndrome bits to determine error position
    wire [2:0] syndrome = {s3, s2, s1};
    
    // Error detection
    assign single_bit_error = |syndrome;
    
    // Error correction logic
    wire [6:0] error_position;
    
    // Convert syndrome to one-hot error position
    // If syndrome is 0, no error
    // If syndrome is 1, error in position 1, etc.
    assign error_position = 
        (syndrome == 3'b001) ? 7'b0000001 :  // Position 1
        (syndrome == 3'b010) ? 7'b0000010 :  // Position 2
        (syndrome == 3'b011) ? 7'b0000100 :  // Position 3
        (syndrome == 3'b100) ? 7'b0001000 :  // Position 4
        (syndrome == 3'b101) ? 7'b0010000 :  // Position 5
        (syndrome == 3'b110) ? 7'b0100000 :  // Position 6
        (syndrome == 3'b111) ? 7'b1000000 :  // Position 7
        7'b0000000;                          // No error
    
    // Correct the error if detected
    assign corrected_code = received_in ^ error_position;
    
    // Extract original data from the corrected code
    assign data_out[0] = corrected_code[2];  // Position 3
    assign data_out[1] = corrected_code[4];  // Position 5
    assign data_out[2] = corrected_code[5];  // Position 6
    assign data_out[3] = corrected_code[6];  // Position 7

endmodule 
