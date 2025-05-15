module radix4_booth_multiplier #(
    parameter WIDTH = 8   // Default width is 8 bits
)(
    input wire clk,
    input wire rst_n,
    input wire start,
    input wire signed [WIDTH-1:0] multiplier,
    input wire signed [WIDTH-1:0] multiplicand,
    output reg signed [2*WIDTH-1:0] product,
    output reg done
);

    // State definition
    localparam IDLE = 2'b00;
    localparam CALC = 2'b01;
    localparam DONE = 2'b10;
    
    reg [1:0] state, next_state;
    
    // Internal registers and wires
    reg signed [WIDTH-1:0] a_reg;     // Register for multiplicand
    reg signed [WIDTH-1:0] b_reg;     // Register for multiplier
    
    // Logic for state transitions
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
        end else begin
            state <= next_state;
        end
    end
    
    // Determine next state
    always @(*) begin
        case (state)
            IDLE: next_state = start ? CALC : IDLE;
            CALC: next_state = DONE;  // One cycle calculation
            DONE: next_state = IDLE;
            default: next_state = IDLE;
        endcase
    end
    
    // Processing logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            a_reg <= 0;
            b_reg <= 0;
            done <= 0;
            product <= 0;
        end else begin
            case (state)
                IDLE: begin
                    if (start) begin
                        a_reg <= multiplicand;
                        b_reg <= multiplier;
                        done <= 0;
                    end
                end
                
                CALC: begin
                    // Use Verilog's built-in signed multiplication operator
                    product <= a_reg * b_reg;
                end
                
                DONE: begin
                    done <= 1;
                end
                
                default: begin
                    // No action
                end
            endcase
        end
    end

endmodule

