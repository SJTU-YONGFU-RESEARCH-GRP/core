/* verilator lint_off EOFNEWLINE */
/* verilator lint_off WIDTHEXPAND */
module cordic #(
    parameter WIDTH = 16,               // Data width
    parameter ITERATIONS = 12,          // Number of iterations (can be up to WIDTH)
    parameter MODE = 0                  // 0: Rotation mode, 1: Vector mode
)(
    input wire clk,
    input wire rst_n,
    input wire start,                   // Start the computation
    input wire [WIDTH-1:0] x_in,        // Initial x value
    input wire [WIDTH-1:0] y_in,        // Initial y value
    input wire [WIDTH-1:0] z_in,        // Initial angle (in radians, scaled to the full range)
    output reg done,                    // Computation completed
    output reg [WIDTH-1:0] x_out,       // Result x
    output reg [WIDTH-1:0] y_out,       // Result y
    output reg [WIDTH-1:0] z_out        // Result angle
);
                             
    // Define the arctangent look-up table
    // Pre-calculated values are: atan(2^-i) in the same scale as z_in
    reg [WIDTH-1:0] atan_table [0:ITERATIONS-1];
    
    // State machine states
    localparam IDLE = 2'd0;
    localparam SETUP = 2'd1;
    localparam ITERATE = 2'd2;
    localparam DONE = 2'd3;
    
    reg [1:0] state, next_state;
    reg [WIDTH-1:0] x, y, z;
    reg [WIDTH-1:0] x_next, y_next, z_next;
    reg [$clog2(ITERATIONS)-1:0] iteration;
    
    // Initialize the arctangent table
    initial begin
        // For 16-bit values, the angle is scaled so that 2*pi = 2^16
        atan_table[0] = 16'd8192;   // atan(2^0) = pi/4
        atan_table[1] = 16'd4836;   // atan(2^-1)
        atan_table[2] = 16'd2555;   // atan(2^-2)
        atan_table[3] = 16'd1297;   // atan(2^-3)
        atan_table[4] = 16'd651;    // atan(2^-4)
        atan_table[5] = 16'd326;    // atan(2^-5)
        atan_table[6] = 16'd163;    // atan(2^-6)
        atan_table[7] = 16'd81;     // atan(2^-7)
        atan_table[8] = 16'd41;     // atan(2^-8)
        atan_table[9] = 16'd20;     // atan(2^-9)
        atan_table[10] = 16'd10;    // atan(2^-10)
        atan_table[11] = 16'd5;     // atan(2^-11)
    end
    
    // State machine
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
            x <= 0;
            y <= 0;
            z <= 0;
            iteration <= 0;
            done <= 1'b0;
            x_out <= 0;
            y_out <= 0;
            z_out <= 0;
        end else begin
            state <= next_state;
            
            case (state)
                IDLE: begin
                    done <= 1'b0;
                end
                
                SETUP: begin
                    // Initialize values based on input
                    x <= x_in;
                    y <= y_in;
                    z <= z_in;
                    iteration <= 0;
                end
                
                ITERATE: begin
                    x <= x_next;
                    y <= y_next;
                    z <= z_next;
                    iteration <= iteration + 1;
                end
                
                DONE: begin
                    done <= 1'b1;
                    // Output the final results
                    x_out <= x;
                    y_out <= y;
                    z_out <= z;
                end
            endcase
        end
    end
    
    // State machine transitions
    always @(*) begin
        next_state = state;
        
        case (state)
            IDLE: begin
                if (start) begin
                    next_state = SETUP;
                end
            end
            
            SETUP: begin
                next_state = ITERATE;
            end
            
            ITERATE: begin
                if (iteration == ITERATIONS - 1) begin
                    next_state = DONE;
                end
            end
            
            DONE: begin
                next_state = IDLE;
            end
        endcase
    end
    
    // CORDIC algorithm implementation
    wire [WIDTH-1:0] shift_x = x >>> iteration;
    wire [WIDTH-1:0] shift_y = y >>> iteration;
    
    always @(*) begin
        // Default assignments
        x_next = x;
        y_next = y;
        z_next = z;
        
        if (state == ITERATE) begin
            if (MODE == 0) begin
                // Rotation mode: we rotate the vector (x,y) by the angle z
                if (z[WIDTH-1] == 1'b0) begin  // z is positive, rotate counter-clockwise
                    x_next = x - shift_y;
                    y_next = y + shift_x;
                    z_next = z - atan_table[iteration];
                end else begin  // z is negative, rotate clockwise
                    x_next = x + shift_y;
                    y_next = y - shift_x;
                    z_next = z + atan_table[iteration];
                end
            end else begin
                // Vector mode: rotate the vector until y is close to 0
                if (y[WIDTH-1] == 1'b0) begin  // y is positive, rotate clockwise
                    x_next = x + shift_y;
                    y_next = y - shift_x;
                    z_next = z + atan_table[iteration];
                end else begin  // y is negative, rotate counter-clockwise
                    x_next = x - shift_y;
                    y_next = y + shift_x;
                    z_next = z - atan_table[iteration];
                end
            end
        end
    end
    
endmodule
/* verilator lint_on EOFNEWLINE */
/* verilator lint_on WIDTHEXPAND */ 
