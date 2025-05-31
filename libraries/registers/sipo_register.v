/* verilator lint_off EOFNEWLINE */
module sipo_register #(
    parameter WIDTH = 8,               // Width of the shift register
    parameter PARITY_ENABLE = 1,       // Enable parity generation (0: disabled, 1: enabled)
    parameter PARITY_TYPE = 0          // Parity type (0: even, 1: odd)
) (
    input wire clk,                    // Clock input
    input wire rst_n,                  // Active low reset
    input wire serial_in,              // Serial data input
    input wire enable,                 // Shift enable
    output wire [WIDTH-1:0] parallel_out, // Parallel data output
    output wire parity_out             // Parity bit output
);

    // Internal shift register
    reg [WIDTH-1:0] shift_reg;
    
    // Parity calculation
    reg parity_bit;
    
    // Temporary register for next shift value (for parity calculation)
    reg [WIDTH-1:0] next_shift_reg;
    
    // Assign outputs
    assign parallel_out = shift_reg;
    assign parity_out = (PARITY_ENABLE) ? parity_bit : 1'b0;
    
    // Shift register logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            shift_reg <= {WIDTH{1'b0}};
        end 
        else if (enable) begin
            // Shift in new bit from serial_in (MSB first)
            shift_reg <= {shift_reg[WIDTH-2:0], serial_in};
        end
    end
    
    // Count the number of 1s in the register
    function integer count_ones;
        input [WIDTH-1:0] data;
        integer i;
        integer count;
        begin
            count = 0;
            for (i = 0; i < WIDTH; i = i + 1) begin
                if (data[i]) count = count + 1;
            end
            count_ones = count;
        end
    endfunction
    
    // Parity generation logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            parity_bit <= 1'b0;
        end 
        else if (PARITY_ENABLE && enable) begin
            // Calculate next shift register value
            next_shift_reg <= {shift_reg[WIDTH-2:0], serial_in};
            
            // Count ones in the next shift register value
            if (count_ones(next_shift_reg) % 2 == 0) begin
                // Even number of 1s
                parity_bit <= (PARITY_TYPE == 0) ? 1'b0 : 1'b1;
            end else begin
                // Odd number of 1s
                parity_bit <= (PARITY_TYPE == 0) ? 1'b1 : 1'b0;
            end
        end
    end

endmodule 
