module configurable_mult #(
    parameter WIDTH = 8,                     // Width of each input operand
    parameter SIGNED_MODE = 0                // 0 for unsigned, 1 for signed multiplication
) (
    input wire [WIDTH-1:0] a,                // Input operand A
    input wire [WIDTH-1:0] b,                // Input operand B
    input wire sign_mode,                    // Dynamic sign mode control (0=unsigned, 1=signed)
    output reg [2*WIDTH-1:0] product         // Result of multiplication
);

    // Additional wire for handling the sign mode
    wire is_signed = SIGNED_MODE || sign_mode;
    
    // Perform multiplication based on sign mode
    always @(*) begin
        if (is_signed) begin
            // For signed mode, interpret the inputs as signed values
            // and compute the product, keeping only the lower 2*WIDTH bits
            product = $signed(a) * $signed(b);
        end else begin
            // Unsigned multiplication
            product = a * b;
        end
    end

endmodule 
