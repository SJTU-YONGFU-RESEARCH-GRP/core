module aes_core #(
    parameter KEY_SIZE = 128,  // Key size in bits (128, 192, or 256)
    parameter ROUNDS = (KEY_SIZE == 128) ? 10 : 
                       (KEY_SIZE == 192) ? 12 : 14
)(
    // Global signals
    input  wire                  clk,
    input  wire                  rst_n,
    
    // Control signals
    input  wire                  start,
    input  wire                  encrypt,  // 1 for encrypt, 0 for decrypt
    output reg                   done,
    output reg                   busy,
    
    // Data ports
    input  wire [127:0]          data_in,
    input  wire [KEY_SIZE-1:0]   key,
    output reg  [127:0]          data_out
);

    // AES core logic to be implemented

endmodule 