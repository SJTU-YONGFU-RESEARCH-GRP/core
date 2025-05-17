module aes_core (
    // Global signals
    input  wire         clk,
    input  wire         rst_n,  /* verilator lint_off SYNCASYNCNET */
    
    // Control signals
    input  wire         start,
    input  wire         encrypt,  // 1 for encrypt, 0 for decrypt
    output reg          done,
    output reg          busy,
    
    // Data ports
    input  wire [31:0]  data_in[0:3],  // Packed array format for Verilator compatibility
    input  wire [31:0]  key[0:3],      // Key input (128-bit)
    output reg  [31:0]  data_out[0:3]  // Output data (128-bit)
);
    // Constants for AES-128
    localparam ROUNDS = 4'd10;
    
    // State definition
    localparam S_IDLE         = 3'd0;
    localparam S_INIT         = 3'd1;
    localparam S_ROUNDS       = 3'd2;
    localparam S_FINAL_ROUND  = 3'd3;
    localparam S_DONE         = 3'd4;
    
    // State register
    reg [2:0] state, next_state;
    
    // Round counter
    reg [3:0] round_cnt;
    
    // Internal state and key registers
    reg [127:0] state_reg;
    
    // Internal signals
    wire [127:0] formatted_data_in;
    wire [127:0] formatted_key;
    reg [127:0] round_keys[0:10]; // 11 round keys for AES-128
    
    // Convert array of 32-bit words to 128-bit value in correct format for AES processing
    assign formatted_data_in = {data_in[0], data_in[1], data_in[2], data_in[3]};
    assign formatted_key = {key[0], key[1], key[2], key[3]};
    
    // AES S-Box
    reg [7:0] sbox[0:255];
    reg [7:0] inv_sbox[0:255];
    
    // S-box initialization
    initial begin
        // Forward S-box
        sbox[8'h00] = 8'h63; sbox[8'h01] = 8'h7c; sbox[8'h02] = 8'h77; sbox[8'h03] = 8'h7b;
        sbox[8'h04] = 8'hf2; sbox[8'h05] = 8'h6b; sbox[8'h06] = 8'h6f; sbox[8'h07] = 8'hc5;
        sbox[8'h08] = 8'h30; sbox[8'h09] = 8'h01; sbox[8'h0a] = 8'h67; sbox[8'h0b] = 8'h2b;
        sbox[8'h0c] = 8'hfe; sbox[8'h0d] = 8'hd7; sbox[8'h0e] = 8'hab; sbox[8'h0f] = 8'h76;
        sbox[8'h10] = 8'hca; sbox[8'h11] = 8'h82; sbox[8'h12] = 8'hc9; sbox[8'h13] = 8'h7d;
        sbox[8'h14] = 8'hfa; sbox[8'h15] = 8'h59; sbox[8'h16] = 8'h47; sbox[8'h17] = 8'hf0;
        sbox[8'h18] = 8'had; sbox[8'h19] = 8'hd4; sbox[8'h1a] = 8'ha2; sbox[8'h1b] = 8'haf;
        sbox[8'h1c] = 8'h9c; sbox[8'h1d] = 8'ha4; sbox[8'h1e] = 8'h72; sbox[8'h1f] = 8'hc0;
        sbox[8'h20] = 8'hb7; sbox[8'h21] = 8'hfd; sbox[8'h22] = 8'h93; sbox[8'h23] = 8'h26;
        sbox[8'h24] = 8'h36; sbox[8'h25] = 8'h3f; sbox[8'h26] = 8'hf7; sbox[8'h27] = 8'hcc;
        sbox[8'h28] = 8'h34; sbox[8'h29] = 8'ha5; sbox[8'h2a] = 8'he5; sbox[8'h2b] = 8'hf1;
        sbox[8'h2c] = 8'h71; sbox[8'h2d] = 8'hd8; sbox[8'h2e] = 8'h31; sbox[8'h2f] = 8'h15;
        sbox[8'h30] = 8'h04; sbox[8'h31] = 8'hc7; sbox[8'h32] = 8'h23; sbox[8'h33] = 8'hc3;
        sbox[8'h34] = 8'h18; sbox[8'h35] = 8'h96; sbox[8'h36] = 8'h05; sbox[8'h37] = 8'h9a;
        sbox[8'h38] = 8'h07; sbox[8'h39] = 8'h12; sbox[8'h3a] = 8'h80; sbox[8'h3b] = 8'he2;
        sbox[8'h3c] = 8'heb; sbox[8'h3d] = 8'h27; sbox[8'h3e] = 8'hb2; sbox[8'h3f] = 8'h75;
        sbox[8'h40] = 8'h09; sbox[8'h41] = 8'h83; sbox[8'h42] = 8'h2c; sbox[8'h43] = 8'h1a;
        sbox[8'h44] = 8'h1b; sbox[8'h45] = 8'h6e; sbox[8'h46] = 8'h5a; sbox[8'h47] = 8'ha0;
        sbox[8'h48] = 8'h52; sbox[8'h49] = 8'h3b; sbox[8'h4a] = 8'hd6; sbox[8'h4b] = 8'hb3;
        sbox[8'h4c] = 8'h29; sbox[8'h4d] = 8'he3; sbox[8'h4e] = 8'h2f; sbox[8'h4f] = 8'h84;
        sbox[8'h50] = 8'h53; sbox[8'h51] = 8'hd1; sbox[8'h52] = 8'h00; sbox[8'h53] = 8'hed;
        sbox[8'h54] = 8'h20; sbox[8'h55] = 8'hfc; sbox[8'h56] = 8'hb1; sbox[8'h57] = 8'h5b;
        sbox[8'h58] = 8'h6a; sbox[8'h59] = 8'hcb; sbox[8'h5a] = 8'hbe; sbox[8'h5b] = 8'h39;
        sbox[8'h5c] = 8'h4a; sbox[8'h5d] = 8'h4c; sbox[8'h5e] = 8'h58; sbox[8'h5f] = 8'hcf;
        sbox[8'h60] = 8'hd0; sbox[8'h61] = 8'hef; sbox[8'h62] = 8'haa; sbox[8'h63] = 8'hfb;
        sbox[8'h64] = 8'h43; sbox[8'h65] = 8'h4d; sbox[8'h66] = 8'h33; sbox[8'h67] = 8'h85;
        sbox[8'h68] = 8'h45; sbox[8'h69] = 8'hf9; sbox[8'h6a] = 8'h02; sbox[8'h6b] = 8'h7f;
        sbox[8'h6c] = 8'h50; sbox[8'h6d] = 8'h3c; sbox[8'h6e] = 8'h9f; sbox[8'h6f] = 8'ha8;
        sbox[8'h70] = 8'h51; sbox[8'h71] = 8'ha3; sbox[8'h72] = 8'h40; sbox[8'h73] = 8'h8f;
        sbox[8'h74] = 8'h92; sbox[8'h75] = 8'h9d; sbox[8'h76] = 8'h38; sbox[8'h77] = 8'hf5;
        sbox[8'h78] = 8'hbc; sbox[8'h79] = 8'hb6; sbox[8'h7a] = 8'hda; sbox[8'h7b] = 8'h21;
        sbox[8'h7c] = 8'h10; sbox[8'h7d] = 8'hff; sbox[8'h7e] = 8'hf3; sbox[8'h7f] = 8'hd2;
        sbox[8'h80] = 8'hcd; sbox[8'h81] = 8'h0c; sbox[8'h82] = 8'h13; sbox[8'h83] = 8'hec;
        sbox[8'h84] = 8'h5f; sbox[8'h85] = 8'h97; sbox[8'h86] = 8'h44; sbox[8'h87] = 8'h17;
        sbox[8'h88] = 8'hc4; sbox[8'h89] = 8'ha7; sbox[8'h8a] = 8'h7e; sbox[8'h8b] = 8'h3d;
        sbox[8'h8c] = 8'h64; sbox[8'h8d] = 8'h5d; sbox[8'h8e] = 8'h19; sbox[8'h8f] = 8'h73;
        sbox[8'h90] = 8'h60; sbox[8'h91] = 8'h81; sbox[8'h92] = 8'h4f; sbox[8'h93] = 8'hdc;
        sbox[8'h94] = 8'h22; sbox[8'h95] = 8'h2a; sbox[8'h96] = 8'h90; sbox[8'h97] = 8'h88;
        sbox[8'h98] = 8'h46; sbox[8'h99] = 8'hee; sbox[8'h9a] = 8'hb8; sbox[8'h9b] = 8'h14;
        sbox[8'h9c] = 8'hde; sbox[8'h9d] = 8'h5e; sbox[8'h9e] = 8'h0b; sbox[8'h9f] = 8'hdb;
        sbox[8'ha0] = 8'he0; sbox[8'ha1] = 8'h32; sbox[8'ha2] = 8'h3a; sbox[8'ha3] = 8'h0a;
        sbox[8'ha4] = 8'h49; sbox[8'ha5] = 8'h06; sbox[8'ha6] = 8'h24; sbox[8'ha7] = 8'h5c;
        sbox[8'ha8] = 8'hc2; sbox[8'ha9] = 8'hd3; sbox[8'haa] = 8'hac; sbox[8'hab] = 8'h62;
        sbox[8'hac] = 8'h91; sbox[8'had] = 8'h95; sbox[8'hae] = 8'he4; sbox[8'haf] = 8'h79;
        sbox[8'hb0] = 8'he7; sbox[8'hb1] = 8'hc8; sbox[8'hb2] = 8'h37; sbox[8'hb3] = 8'h6d;
        sbox[8'hb4] = 8'h8d; sbox[8'hb5] = 8'hd5; sbox[8'hb6] = 8'h4e; sbox[8'hb7] = 8'ha9;
        sbox[8'hb8] = 8'h6c; sbox[8'hb9] = 8'h56; sbox[8'hba] = 8'hf4; sbox[8'hbb] = 8'hea;
        sbox[8'hbc] = 8'h65; sbox[8'hbd] = 8'h7a; sbox[8'hbe] = 8'hae; sbox[8'hbf] = 8'h08;
        sbox[8'hc0] = 8'hba; sbox[8'hc1] = 8'h78; sbox[8'hc2] = 8'h25; sbox[8'hc3] = 8'h2e;
        sbox[8'hc4] = 8'h1c; sbox[8'hc5] = 8'ha6; sbox[8'hc6] = 8'hb4; sbox[8'hc7] = 8'hc6;
        sbox[8'hc8] = 8'he8; sbox[8'hc9] = 8'hdd; sbox[8'hca] = 8'h74; sbox[8'hcb] = 8'h1f;
        sbox[8'hcc] = 8'h4b; sbox[8'hcd] = 8'hbd; sbox[8'hce] = 8'h8b; sbox[8'hcf] = 8'h8a;
        sbox[8'hd0] = 8'h70; sbox[8'hd1] = 8'h3e; sbox[8'hd2] = 8'hb5; sbox[8'hd3] = 8'h66;
        sbox[8'hd4] = 8'h48; sbox[8'hd5] = 8'h03; sbox[8'hd6] = 8'hf6; sbox[8'hd7] = 8'h0e;
        sbox[8'hd8] = 8'h61; sbox[8'hd9] = 8'h35; sbox[8'hda] = 8'h57; sbox[8'hdb] = 8'hb9;
        sbox[8'hdc] = 8'h86; sbox[8'hdd] = 8'hc1; sbox[8'hde] = 8'h1d; sbox[8'hdf] = 8'h9e;
        sbox[8'he0] = 8'he1; sbox[8'he1] = 8'hf8; sbox[8'he2] = 8'h98; sbox[8'he3] = 8'h11;
        sbox[8'he4] = 8'h69; sbox[8'he5] = 8'hd9; sbox[8'he6] = 8'h8e; sbox[8'he7] = 8'h94;
        sbox[8'he8] = 8'h9b; sbox[8'he9] = 8'h1e; sbox[8'hea] = 8'h87; sbox[8'heb] = 8'he9;
        sbox[8'hec] = 8'hce; sbox[8'hed] = 8'h55; sbox[8'hee] = 8'h28; sbox[8'hef] = 8'hdf;
        sbox[8'hf0] = 8'h8c; sbox[8'hf1] = 8'ha1; sbox[8'hf2] = 8'h89; sbox[8'hf3] = 8'h0d;
        sbox[8'hf4] = 8'hbf; sbox[8'hf5] = 8'he6; sbox[8'hf6] = 8'h42; sbox[8'hf7] = 8'h68;
        sbox[8'hf8] = 8'h41; sbox[8'hf9] = 8'h99; sbox[8'hfa] = 8'h2d; sbox[8'hfb] = 8'h0f;
        sbox[8'hfc] = 8'hb0; sbox[8'hfd] = 8'h54; sbox[8'hfe] = 8'hbb; sbox[8'hff] = 8'h16;
        
        // Inverse S-box
        inv_sbox[8'h00] = 8'h52; inv_sbox[8'h01] = 8'h09; inv_sbox[8'h02] = 8'h6a; inv_sbox[8'h03] = 8'hd5;
        inv_sbox[8'h04] = 8'h30; inv_sbox[8'h05] = 8'h36; inv_sbox[8'h06] = 8'ha5; inv_sbox[8'h07] = 8'h38;
        inv_sbox[8'h08] = 8'hbf; inv_sbox[8'h09] = 8'h40; inv_sbox[8'h0a] = 8'ha3; inv_sbox[8'h0b] = 8'h9e;
        inv_sbox[8'h0c] = 8'h81; inv_sbox[8'h0d] = 8'hf3; inv_sbox[8'h0e] = 8'hd7; inv_sbox[8'h0f] = 8'hfb;
        inv_sbox[8'h10] = 8'h7c; inv_sbox[8'h11] = 8'he3; inv_sbox[8'h12] = 8'h39; inv_sbox[8'h13] = 8'h82;
        inv_sbox[8'h14] = 8'h9b; inv_sbox[8'h15] = 8'h2f; inv_sbox[8'h16] = 8'hff; inv_sbox[8'h17] = 8'h87;
        inv_sbox[8'h18] = 8'h34; inv_sbox[8'h19] = 8'h8e; inv_sbox[8'h1a] = 8'h43; inv_sbox[8'h1b] = 8'h44;
        inv_sbox[8'h1c] = 8'hc4; inv_sbox[8'h1d] = 8'hde; inv_sbox[8'h1e] = 8'he9; inv_sbox[8'h1f] = 8'hcb;
        inv_sbox[8'h20] = 8'h54; inv_sbox[8'h21] = 8'h7b; inv_sbox[8'h22] = 8'h94; inv_sbox[8'h23] = 8'h32;
        inv_sbox[8'h24] = 8'ha6; inv_sbox[8'h25] = 8'hc2; inv_sbox[8'h26] = 8'h23; inv_sbox[8'h27] = 8'h3d;
        inv_sbox[8'h28] = 8'hee; inv_sbox[8'h29] = 8'h4c; inv_sbox[8'h2a] = 8'h95; inv_sbox[8'h2b] = 8'h0b;
        inv_sbox[8'h2c] = 8'h42; inv_sbox[8'h2d] = 8'hfa; inv_sbox[8'h2e] = 8'hc3; inv_sbox[8'h2f] = 8'h4e;
        inv_sbox[8'h30] = 8'h08; inv_sbox[8'h31] = 8'h2e; inv_sbox[8'h32] = 8'ha1; inv_sbox[8'h33] = 8'h66;
        inv_sbox[8'h34] = 8'h28; inv_sbox[8'h35] = 8'hd9; inv_sbox[8'h36] = 8'h24; inv_sbox[8'h37] = 8'hb2;
        inv_sbox[8'h38] = 8'h76; inv_sbox[8'h39] = 8'h5b; inv_sbox[8'h3a] = 8'ha2; inv_sbox[8'h3b] = 8'h49;
        inv_sbox[8'h3c] = 8'h6d; inv_sbox[8'h3d] = 8'h8b; inv_sbox[8'h3e] = 8'hd1; inv_sbox[8'h3f] = 8'h25;
        inv_sbox[8'h40] = 8'h09; inv_sbox[8'h41] = 8'h83; inv_sbox[8'h42] = 8'h2c; inv_sbox[8'h43] = 8'h1a;
        inv_sbox[8'h44] = 8'h1b; inv_sbox[8'h45] = 8'h6e; inv_sbox[8'h46] = 8'h5a; inv_sbox[8'h47] = 8'ha0;
        inv_sbox[8'h48] = 8'h52; inv_sbox[8'h49] = 8'h3b; inv_sbox[8'h4a] = 8'hd6; inv_sbox[8'h4b] = 8'hb3;
        inv_sbox[8'h4c] = 8'h29; inv_sbox[8'h4d] = 8'he3; inv_sbox[8'h4e] = 8'h2f; inv_sbox[8'h4f] = 8'h84;
        inv_sbox[8'h50] = 8'h53; inv_sbox[8'h51] = 8'hd1; inv_sbox[8'h52] = 8'h00; inv_sbox[8'h53] = 8'hed;
        inv_sbox[8'h54] = 8'h20; inv_sbox[8'h55] = 8'hfc; inv_sbox[8'h56] = 8'hb1; inv_sbox[8'h57] = 8'h5b;
        inv_sbox[8'h58] = 8'h6a; inv_sbox[8'h59] = 8'hcb; inv_sbox[8'h5a] = 8'hbe; inv_sbox[8'h5b] = 8'h39;
        inv_sbox[8'h5c] = 8'h4a; inv_sbox[8'h5d] = 8'h4c; inv_sbox[8'h5e] = 8'h58; inv_sbox[8'h5f] = 8'hcf;
        inv_sbox[8'h60] = 8'hd0; inv_sbox[8'h61] = 8'hef; inv_sbox[8'h62] = 8'haa; inv_sbox[8'h63] = 8'hfb;
        inv_sbox[8'h64] = 8'h43; inv_sbox[8'h65] = 8'h4d; inv_sbox[8'h66] = 8'h33; inv_sbox[8'h67] = 8'h85;
        inv_sbox[8'h68] = 8'h45; inv_sbox[8'h69] = 8'hf9; inv_sbox[8'h6a] = 8'h02; inv_sbox[8'h6b] = 8'h7f;
        inv_sbox[8'h6c] = 8'h50; inv_sbox[8'h6d] = 8'h3c; inv_sbox[8'h6e] = 8'h9f; inv_sbox[8'h6f] = 8'ha8;
        inv_sbox[8'h70] = 8'h51; inv_sbox[8'h71] = 8'ha3; inv_sbox[8'h72] = 8'h40; inv_sbox[8'h73] = 8'h8f;
        inv_sbox[8'h74] = 8'h92; inv_sbox[8'h75] = 8'h9d; inv_sbox[8'h76] = 8'h38; inv_sbox[8'h77] = 8'hf5;
        inv_sbox[8'h78] = 8'hbc; inv_sbox[8'h79] = 8'hb6; inv_sbox[8'h7a] = 8'hda; inv_sbox[8'h7b] = 8'h21;
        inv_sbox[8'h7c] = 8'h10; inv_sbox[8'h7d] = 8'hff; inv_sbox[8'h7e] = 8'hf3; inv_sbox[8'h7f] = 8'hd2;
        inv_sbox[8'h80] = 8'hcd; inv_sbox[8'h81] = 8'h0c; inv_sbox[8'h82] = 8'h13; inv_sbox[8'h83] = 8'hec;
        inv_sbox[8'h84] = 8'h5f; inv_sbox[8'h85] = 8'h97; inv_sbox[8'h86] = 8'h44; inv_sbox[8'h87] = 8'h17;
        inv_sbox[8'h88] = 8'hc4; inv_sbox[8'h89] = 8'ha7; inv_sbox[8'h8a] = 8'h7e; inv_sbox[8'h8b] = 8'h3d;
        inv_sbox[8'h8c] = 8'h64; inv_sbox[8'h8d] = 8'h5d; inv_sbox[8'h8e] = 8'h19; inv_sbox[8'h8f] = 8'h73;
        inv_sbox[8'h90] = 8'h60; inv_sbox[8'h91] = 8'h81; inv_sbox[8'h92] = 8'h4f; inv_sbox[8'h93] = 8'hdc;
        inv_sbox[8'h94] = 8'h22; inv_sbox[8'h95] = 8'h2a; inv_sbox[8'h96] = 8'h90; inv_sbox[8'h97] = 8'h88;
        inv_sbox[8'h98] = 8'h46; inv_sbox[8'h99] = 8'hee; inv_sbox[8'h9a] = 8'hb8; inv_sbox[8'h9b] = 8'h14;
        inv_sbox[8'h9c] = 8'hde; inv_sbox[8'h9d] = 8'h5e; inv_sbox[8'h9e] = 8'h0b; inv_sbox[8'h9f] = 8'hdb;
        inv_sbox[8'ha0] = 8'he0; inv_sbox[8'ha1] = 8'h32; inv_sbox[8'ha2] = 8'h3a; inv_sbox[8'ha3] = 8'h0a;
        inv_sbox[8'ha4] = 8'h49; inv_sbox[8'ha5] = 8'h06; inv_sbox[8'ha6] = 8'h24; inv_sbox[8'ha7] = 8'h5c;
        inv_sbox[8'ha8] = 8'hc2; inv_sbox[8'ha9] = 8'hd3; inv_sbox[8'haa] = 8'hac; inv_sbox[8'hab] = 8'h62;
        inv_sbox[8'hac] = 8'h91; inv_sbox[8'had] = 8'h95; inv_sbox[8'hae] = 8'he4; inv_sbox[8'haf] = 8'h79;
        inv_sbox[8'hb0] = 8'he7; inv_sbox[8'hb1] = 8'hc8; inv_sbox[8'hb2] = 8'h37; inv_sbox[8'hb3] = 8'h6d;
        inv_sbox[8'hb4] = 8'h8d; inv_sbox[8'hb5] = 8'hd5; inv_sbox[8'hb6] = 8'h4e; inv_sbox[8'hb7] = 8'ha9;
        inv_sbox[8'hb8] = 8'h6c; inv_sbox[8'hb9] = 8'h56; inv_sbox[8'hba] = 8'hf4; inv_sbox[8'hbb] = 8'hea;
        inv_sbox[8'hbc] = 8'h65; inv_sbox[8'hbd] = 8'h7a; inv_sbox[8'hbe] = 8'hae; inv_sbox[8'hbf] = 8'h08;
        inv_sbox[8'hc0] = 8'hba; inv_sbox[8'hc1] = 8'h78; inv_sbox[8'hc2] = 8'h25; inv_sbox[8'hc3] = 8'h2e;
        inv_sbox[8'hc4] = 8'h1c; inv_sbox[8'hc5] = 8'ha6; inv_sbox[8'hc6] = 8'hb4; inv_sbox[8'hc7] = 8'hc6;
        inv_sbox[8'hc8] = 8'he8; inv_sbox[8'hc9] = 8'hdd; inv_sbox[8'hca] = 8'h74; inv_sbox[8'hcb] = 8'h1f;
        inv_sbox[8'hcc] = 8'h4b; inv_sbox[8'hcd] = 8'hbd; inv_sbox[8'hce] = 8'h8b; inv_sbox[8'hcf] = 8'h8a;
        inv_sbox[8'hd0] = 8'h70; inv_sbox[8'hd1] = 8'h3e; inv_sbox[8'hd2] = 8'hb5; inv_sbox[8'hd3] = 8'h66;
        inv_sbox[8'hd4] = 8'h48; inv_sbox[8'hd5] = 8'h03; inv_sbox[8'hd6] = 8'hf6; inv_sbox[8'hd7] = 8'h0e;
        inv_sbox[8'hd8] = 8'h61; inv_sbox[8'hd9] = 8'h35; inv_sbox[8'hda] = 8'h57; inv_sbox[8'hdb] = 8'hb9;
        inv_sbox[8'hdc] = 8'h86; inv_sbox[8'hdd] = 8'hc1; inv_sbox[8'hde] = 8'h1d; inv_sbox[8'hdf] = 8'h9e;
        inv_sbox[8'he0] = 8'he1; inv_sbox[8'he1] = 8'hf8; inv_sbox[8'he2] = 8'h98; inv_sbox[8'he3] = 8'h11;
        inv_sbox[8'he4] = 8'h69; inv_sbox[8'he5] = 8'hd9; inv_sbox[8'he6] = 8'h8e; inv_sbox[8'he7] = 8'h94;
        inv_sbox[8'he8] = 8'h9b; inv_sbox[8'he9] = 8'h1e; inv_sbox[8'hea] = 8'h87; inv_sbox[8'heb] = 8'he9;
        inv_sbox[8'hec] = 8'hce; inv_sbox[8'hed] = 8'h55; inv_sbox[8'hee] = 8'h28; inv_sbox[8'hef] = 8'hdf;
        inv_sbox[8'hf0] = 8'h8c; inv_sbox[8'hf1] = 8'ha1; inv_sbox[8'hf2] = 8'h89; inv_sbox[8'hf3] = 8'h0d;
        inv_sbox[8'hf4] = 8'hbf; inv_sbox[8'hf5] = 8'he6; inv_sbox[8'hf6] = 8'h42; inv_sbox[8'hf7] = 8'h68;
        inv_sbox[8'hf8] = 8'h41; inv_sbox[8'hf9] = 8'h99; inv_sbox[8'hfa] = 8'h2d; inv_sbox[8'hfb] = 8'h0f;
        inv_sbox[8'hfc] = 8'hb0; inv_sbox[8'hfd] = 8'h54; inv_sbox[8'hfe] = 8'hbb; inv_sbox[8'hff] = 8'h16;
    end
    
    // Key expansion function
    function [127:0] key_expansion;
        input [127:0] prev_key;
        input [7:0] rcon_val;
        reg [31:0] w0, w1, w2, w3, temp;
        begin
            // Extract previous key words
            w0 = prev_key[127:96];
            w1 = prev_key[95:64];
            w2 = prev_key[63:32];
            w3 = prev_key[31:0];
            
            // Apply the key schedule core to the last word
            // 1. Rotate word: [b1,b2,b3,b0] = RotWord(w3)
            temp = {w3[23:0], w3[31:24]};
            
            // 2. Apply S-box to all bytes: SubWord(RotWord(w3))
            temp = {sbox[temp[31:24]], sbox[temp[23:16]], sbox[temp[15:8]], sbox[temp[7:0]]};
            
            // 3. XOR with round constant in the first byte
            temp[31:24] = temp[31:24] ^ rcon_val;
            
            // Generate the new words by XORing with previous words
            w0 = w0 ^ temp;        // w4 = w0 ^ SubWord(RotWord(w3)) ^ Rcon
            w1 = w1 ^ w0;          // w5 = w1 ^ w4
            w2 = w2 ^ w1;          // w6 = w2 ^ w5
            w3 = w3 ^ w2;          // w7 = w3 ^ w6
            
            // Return the new key
            key_expansion = {w0, w1, w2, w3};
        end
    endfunction
    
    // Initialize round keys at startup
    integer i;
    initial begin
        for (i = 0; i <= ROUNDS; i = i + 1) begin
            round_keys[i] = 0;
        end
    end
    
    // SubBytes transformation
    function [127:0] sub_bytes;
        input [127:0] state_in;
        begin
            sub_bytes = {
                sbox[state_in[127:120]], sbox[state_in[119:112]], sbox[state_in[111:104]], sbox[state_in[103:96]],
                sbox[state_in[95:88]], sbox[state_in[87:80]], sbox[state_in[79:72]], sbox[state_in[71:64]],
                sbox[state_in[63:56]], sbox[state_in[55:48]], sbox[state_in[47:40]], sbox[state_in[39:32]],
                sbox[state_in[31:24]], sbox[state_in[23:16]], sbox[state_in[15:8]], sbox[state_in[7:0]]
            };
        end
    endfunction
    
    // Inverse SubBytes transformation
    function [127:0] inv_sub_bytes;
        input [127:0] state_in;
        begin
            inv_sub_bytes = {
                inv_sbox[state_in[127:120]], inv_sbox[state_in[119:112]], inv_sbox[state_in[111:104]], inv_sbox[state_in[103:96]],
                inv_sbox[state_in[95:88]], inv_sbox[state_in[87:80]], inv_sbox[state_in[79:72]], inv_sbox[state_in[71:64]],
                inv_sbox[state_in[63:56]], inv_sbox[state_in[55:48]], inv_sbox[state_in[47:40]], inv_sbox[state_in[39:32]],
                inv_sbox[state_in[31:24]], inv_sbox[state_in[23:16]], inv_sbox[state_in[15:8]], inv_sbox[state_in[7:0]]
            };
        end
    endfunction
    
    // ShiftRows transformation
    function [127:0] shift_rows;
        input [127:0] state_in;
        begin
            // Row 0: no shift
            // Row 1: shift left by 1
            // Row 2: shift left by 2
            // Row 3: shift left by 3
            shift_rows = {
                // Row 0 (no change)
                state_in[127:120], state_in[95:88], state_in[63:56], state_in[31:24],
                // Row 1 (shift by 1)
                state_in[87:80], state_in[55:48], state_in[23:16], state_in[119:112],
                // Row 2 (shift by 2)
                state_in[47:40], state_in[15:8], state_in[111:104], state_in[79:72],
                // Row 3 (shift by 3)
                state_in[7:0], state_in[103:96], state_in[71:64], state_in[39:32]
            };
        end
    endfunction
    
    // Inverse ShiftRows transformation
    function [127:0] inv_shift_rows;
        input [127:0] state_in;
        begin
            // Row 0: no shift
            // Row 1: shift right by 1
            // Row 2: shift right by 2
            // Row 3: shift right by 3
            inv_shift_rows = {
                // Row 0 (no change)
                state_in[127:120], state_in[95:88], state_in[63:56], state_in[31:24],
                // Row 1 (shift by 1)
                state_in[23:16], state_in[119:112], state_in[87:80], state_in[55:48],
                // Row 2 (shift by 2)
                state_in[47:40], state_in[15:8], state_in[111:104], state_in[79:72],
                // Row 3 (shift by 3)
                state_in[71:64], state_in[39:32], state_in[7:0], state_in[103:96]
            };
        end
    endfunction
    
    // GF(2^8) multiplication by 2
    function [7:0] xtime;
        input [7:0] b;
        begin
            xtime = (b & 8'h80) ? ((b << 1) ^ 8'h1b) : (b << 1);
        end
    endfunction
    
    // GF(2^8) multiplication by 3
    function [7:0] mul3;
        input [7:0] b;
        begin
            mul3 = xtime(b) ^ b;
        end
    endfunction
    
    // GF(2^8) multiplication by 9
    function [7:0] mul9;
        input [7:0] b;
        begin
            mul9 = xtime(xtime(xtime(b))) ^ b;
        end
    endfunction
    
    // GF(2^8) multiplication by 11
    function [7:0] mul11;
        input [7:0] b;
        begin
            mul11 = xtime(xtime(xtime(b))) ^ xtime(b) ^ b;
        end
    endfunction
    
    // GF(2^8) multiplication by 13
    function [7:0] mul13;
        input [7:0] b;
        begin
            mul13 = xtime(xtime(xtime(b))) ^ xtime(xtime(b)) ^ b;
        end
    endfunction
    
    // GF(2^8) multiplication by 14
    function [7:0] mul14;
        input [7:0] b;
        begin
            mul14 = xtime(xtime(xtime(b))) ^ xtime(xtime(b)) ^ xtime(b);
        end
    endfunction
    
    // MixColumns transformation
    function [127:0] mix_columns;
        input [127:0] state_in;
        reg [31:0] col0, col1, col2, col3;
        reg [7:0] s0, s1, s2, s3, t0, t1, t2, t3;
        begin
            // Process column 0
            s0 = state_in[127:120];
            s1 = state_in[119:112];
            s2 = state_in[111:104];
            s3 = state_in[103:96];
            
            t0 = xtime(s0) ^ mul3(s1) ^ s2 ^ s3;
            t1 = s0 ^ xtime(s1) ^ mul3(s2) ^ s3;
            t2 = s0 ^ s1 ^ xtime(s2) ^ mul3(s3);
            t3 = mul3(s0) ^ s1 ^ s2 ^ xtime(s3);
            
            col0 = {t0, t1, t2, t3};
            
            // Process column 1
            s0 = state_in[95:88];
            s1 = state_in[87:80];
            s2 = state_in[79:72];
            s3 = state_in[71:64];
            
            t0 = xtime(s0) ^ mul3(s1) ^ s2 ^ s3;
            t1 = s0 ^ xtime(s1) ^ mul3(s2) ^ s3;
            t2 = s0 ^ s1 ^ xtime(s2) ^ mul3(s3);
            t3 = mul3(s0) ^ s1 ^ s2 ^ xtime(s3);
            
            col1 = {t0, t1, t2, t3};
            
            // Process column 2
            s0 = state_in[63:56];
            s1 = state_in[55:48];
            s2 = state_in[47:40];
            s3 = state_in[39:32];
            
            t0 = xtime(s0) ^ mul3(s1) ^ s2 ^ s3;
            t1 = s0 ^ xtime(s1) ^ mul3(s2) ^ s3;
            t2 = s0 ^ s1 ^ xtime(s2) ^ mul3(s3);
            t3 = mul3(s0) ^ s1 ^ s2 ^ xtime(s3);
            
            col2 = {t0, t1, t2, t3};
            
            // Process column 3
            s0 = state_in[31:24];
            s1 = state_in[23:16];
            s2 = state_in[15:8];
            s3 = state_in[7:0];
            
            t0 = xtime(s0) ^ mul3(s1) ^ s2 ^ s3;
            t1 = s0 ^ xtime(s1) ^ mul3(s2) ^ s3;
            t2 = s0 ^ s1 ^ xtime(s2) ^ mul3(s3);
            t3 = mul3(s0) ^ s1 ^ s2 ^ xtime(s3);
            
            col3 = {t0, t1, t2, t3};
            
            mix_columns = {col0, col1, col2, col3};
        end
    endfunction
    
    // Inverse MixColumns transformation
    function [127:0] inv_mix_columns;
        input [127:0] state_in;
        reg [31:0] col0, col1, col2, col3;
        reg [7:0] s0, s1, s2, s3, t0, t1, t2, t3;
        begin
            // Process column 0
            s0 = state_in[127:120];
            s1 = state_in[119:112];
            s2 = state_in[111:104];
            s3 = state_in[103:96];
            
            t0 = mul14(s0) ^ mul11(s1) ^ mul13(s2) ^ mul9(s3);
            t1 = mul9(s0) ^ mul14(s1) ^ mul11(s2) ^ mul13(s3);
            t2 = mul13(s0) ^ mul9(s1) ^ mul14(s2) ^ mul11(s3);
            t3 = mul11(s0) ^ mul13(s1) ^ mul9(s2) ^ mul14(s3);
            
            col0 = {t0, t1, t2, t3};
            
            // Process column 1
            s0 = state_in[95:88];
            s1 = state_in[87:80];
            s2 = state_in[79:72];
            s3 = state_in[71:64];
            
            t0 = mul14(s0) ^ mul11(s1) ^ mul13(s2) ^ mul9(s3);
            t1 = mul9(s0) ^ mul14(s1) ^ mul11(s2) ^ mul13(s3);
            t2 = mul13(s0) ^ mul9(s1) ^ mul14(s2) ^ mul11(s3);
            t3 = mul11(s0) ^ mul13(s1) ^ mul9(s2) ^ mul14(s3);
            
            col1 = {t0, t1, t2, t3};
            
            // Process column 2
            s0 = state_in[63:56];
            s1 = state_in[55:48];
            s2 = state_in[47:40];
            s3 = state_in[39:32];
            
            t0 = mul14(s0) ^ mul11(s1) ^ mul13(s2) ^ mul9(s3);
            t1 = mul9(s0) ^ mul14(s1) ^ mul11(s2) ^ mul13(s3);
            t2 = mul13(s0) ^ mul9(s1) ^ mul14(s2) ^ mul11(s3);
            t3 = mul11(s0) ^ mul13(s1) ^ mul9(s2) ^ mul14(s3);
            
            col2 = {t0, t1, t2, t3};
            
            // Process column 3
            s0 = state_in[31:24];
            s1 = state_in[23:16];
            s2 = state_in[15:8];
            s3 = state_in[7:0];
            
            t0 = mul14(s0) ^ mul11(s1) ^ mul13(s2) ^ mul9(s3);
            t1 = mul9(s0) ^ mul14(s1) ^ mul11(s2) ^ mul13(s3);
            t2 = mul13(s0) ^ mul9(s1) ^ mul14(s2) ^ mul11(s3);
            t3 = mul11(s0) ^ mul13(s1) ^ mul9(s2) ^ mul14(s3);
            
            col3 = {t0, t1, t2, t3};
            
            inv_mix_columns = {col0, col1, col2, col3};
        end
    endfunction
    
    // AddRoundKey transformation
    function [127:0] add_round_key;
        /* verilator lint_off VARHIDDEN */
        input [127:0] data_in;
        /* verilator lint_on VARHIDDEN */
        input [127:0] round_key_in;
        begin
            add_round_key = data_in ^ round_key_in;
        end
    endfunction
    
    // Function to swap byte ordering for proper endianness
    function [127:0] byteswap;
        input [127:0] data_in;
        begin
            // Convert from the byte array layout to the column-major state array used in AES
            // AES state layout:
            // [byte0 byte4 byte8  byte12]
            // [byte1 byte5 byte9  byte13]
            // [byte2 byte6 byte10 byte14]
            // [byte3 byte7 byte11 byte15]
            // Since our input is already arranged in column-major format by the testbench,
            // we don't need to perform any byteswap operation
            byteswap = data_in;
        end
    endfunction
    
    // Round constant lookup table
    reg [7:0] rcon[0:10];
    initial begin
        rcon[0] = 8'h01;
        rcon[1] = 8'h02;
        rcon[2] = 8'h04;
        rcon[3] = 8'h08;
        rcon[4] = 8'h10;
        rcon[5] = 8'h20;
        rcon[6] = 8'h40;
        rcon[7] = 8'h80;
        rcon[8] = 8'h1b;
        rcon[9] = 8'h36;
        rcon[10] = 8'h00;
    end
    
    // Key scheduling
    integer j;  // Use only j for loops
    reg [3:0] key_round;
    
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            // Reset state
            state <= S_IDLE;
            round_cnt <= 0;
            done <= 0;
            busy <= 0;
            
            // Reset keys and state
            for (j = 0; j <= ROUNDS; j = j + 1)
                round_keys[j] <= 0;
            state_reg <= 0;
        end else begin
            // State machine
            state <= next_state;
            
            case (state)
                S_IDLE: begin
                    done <= 0;
                    if (start) begin
                        busy <= 1;
                    end
                end
                
                S_INIT: begin
                    // Initialize the first round key with the input key
                    round_keys[0] <= formatted_key;
                    
                    // Wait one cycle after initializing the first key
                    if (round_keys[0] == formatted_key) begin
                        // Now calculate all round keys in sequential order
                        round_keys[1] <= key_expansion(round_keys[0], rcon[0]);
                        round_keys[2] <= key_expansion(key_expansion(round_keys[0], rcon[0]), rcon[1]);
                        round_keys[3] <= key_expansion(key_expansion(key_expansion(round_keys[0], rcon[0]), rcon[1]), rcon[2]);
                        round_keys[4] <= key_expansion(key_expansion(key_expansion(key_expansion(round_keys[0], rcon[0]), rcon[1]), rcon[2]), rcon[3]);
                        round_keys[5] <= key_expansion(key_expansion(key_expansion(key_expansion(key_expansion(round_keys[0], rcon[0]), rcon[1]), rcon[2]), rcon[3]), rcon[4]);
                        round_keys[6] <= key_expansion(key_expansion(key_expansion(key_expansion(key_expansion(key_expansion(round_keys[0], rcon[0]), rcon[1]), rcon[2]), rcon[3]), rcon[4]), rcon[5]);
                        round_keys[7] <= key_expansion(key_expansion(key_expansion(key_expansion(key_expansion(key_expansion(key_expansion(round_keys[0], rcon[0]), rcon[1]), rcon[2]), rcon[3]), rcon[4]), rcon[5]), rcon[6]);
                        round_keys[8] <= key_expansion(key_expansion(key_expansion(key_expansion(key_expansion(key_expansion(key_expansion(key_expansion(round_keys[0], rcon[0]), rcon[1]), rcon[2]), rcon[3]), rcon[4]), rcon[5]), rcon[6]), rcon[7]);
                        round_keys[9] <= key_expansion(key_expansion(key_expansion(key_expansion(key_expansion(key_expansion(key_expansion(key_expansion(key_expansion(round_keys[0], rcon[0]), rcon[1]), rcon[2]), rcon[3]), rcon[4]), rcon[5]), rcon[6]), rcon[7]), rcon[8]);
                        round_keys[10] <= key_expansion(key_expansion(key_expansion(key_expansion(key_expansion(key_expansion(key_expansion(key_expansion(key_expansion(key_expansion(round_keys[0], rcon[0]), rcon[1]), rcon[2]), rcon[3]), rcon[4]), rcon[5]), rcon[6]), rcon[7]), rcon[8]), rcon[9]);
                        
                        // Initialize state with first/last round key
                        if (encrypt) begin
                            // Encryption starts with round 0 key
                            state_reg <= add_round_key(formatted_data_in, round_keys[0]);
                            round_cnt <= 1;
                        end else begin
                            // Decryption starts with last round key
                            state_reg <= add_round_key(formatted_data_in, round_keys[ROUNDS]);
                            round_cnt <= ROUNDS - 1;
                        end
                    end
                end
                
                S_ROUNDS: begin
                    if (encrypt) begin
                        // Standard round: SubBytes -> ShiftRows -> MixColumns -> AddRoundKey
                        state_reg <= add_round_key(
                            mix_columns(
                                shift_rows(
                                    sub_bytes(state_reg)
                                )
                            ),
                            round_keys[round_cnt]
                        );
                        round_cnt <= round_cnt + 1;
                    end else begin
                        // Standard round: InvShiftRows -> InvSubBytes -> AddRoundKey -> InvMixColumns
                        state_reg <= inv_mix_columns(
                            add_round_key(
                                inv_sub_bytes(
                                    inv_shift_rows(state_reg)
                                ),
                                round_keys[round_cnt]
                            )
                        );
                        round_cnt <= round_cnt - 1;
                    end
                end
                
                S_FINAL_ROUND: begin
                    if (encrypt) begin
                        // Final round: SubBytes -> ShiftRows -> AddRoundKey (no MixColumns)
                        state_reg <= add_round_key(
                            shift_rows(
                                sub_bytes(state_reg)
                            ),
                            round_keys[ROUNDS]
                        );
                    end else begin
                        // Final round: InvShiftRows -> InvSubBytes -> AddRoundKey (no InvMixColumns)
                        state_reg <= add_round_key(
                            inv_sub_bytes(
                                inv_shift_rows(state_reg)
                            ),
                            round_keys[0]
                        );
                    end
                end
                
                S_DONE: begin
                    // Map state to output
                    data_out[0] <= state_reg[127:96];
                    data_out[1] <= state_reg[95:64];
                    data_out[2] <= state_reg[63:32];
                    data_out[3] <= state_reg[31:0];
                    
                    done <= 1;
                    busy <= 0;
                end
            endcase
        end
    end
    
    // Next state logic
    always @(*) begin
        case (state)
            S_IDLE: begin
                if (start)
                    next_state = S_INIT;
                else
                    next_state = S_IDLE;
            end
            
            S_INIT: begin
                next_state = S_ROUNDS;
            end
            
            S_ROUNDS: begin
                if ((encrypt && round_cnt == ROUNDS - 1) || (!encrypt && round_cnt == 0))
                    next_state = S_FINAL_ROUND;
                else
                    next_state = S_ROUNDS;
            end
            
            S_FINAL_ROUND: begin
                next_state = S_DONE;
            end
            
            S_DONE: begin
                if (start)
                    next_state = S_INIT;
                else
                    next_state = S_IDLE;
            end
            
            default: next_state = S_IDLE;
        endcase
    end
/* verilator lint_on SYNCASYNCNET */
endmodule 

