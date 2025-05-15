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

    // States
    localparam IDLE = 2'b00;
    localparam CALC = 2'b01;
    localparam DONE = 2'b10;
    
    reg [1:0] state, next_state;
    
    // Registers for computation
    reg signed [WIDTH:0] A;                 // Extended multiplier
    reg signed [2*WIDTH+1:0] P;             // Product accumulator with extra bits
    reg [3:0] count;                        // Counter for iterations
    reg [2:0] booth_code;                   // Booth encoding bits
    reg prev_bit;                           // Previous bit for booth encoding
    
    // Sign-extended multiplicand (for booth calculations)
    wire signed [WIDTH:0] extended_multiplicand = {multiplicand[WIDTH-1], multiplicand};
    
    // State machine
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
        end else begin
            state <= next_state;
        end
    end
    
    // Next state logic
    always @(*) begin
        case (state)
            IDLE: next_state = start ? CALC : IDLE;
            CALC: next_state = (count == 4'd4) ? DONE : CALC; // Half of WIDTH for radix-4
            DONE: next_state = IDLE;
            default: next_state = IDLE;
        endcase
    end
    
    // Main processing logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            P <= 0;
            A <= 0;
            count <= 0;
            done <= 0;
            product <= 0;
            booth_code <= 0;
            prev_bit <= 0;
        end else begin
            case (state)
                IDLE: begin
                    if (start) begin
                        // Initialize for computation
                        P <= 0;  // Clear the product
                        A <= {extended_multiplicand};  // Store the sign-extended multiplicand
                        count <= 0;
                        done <= 0;
                        prev_bit <= 0;  // Initialize previous bit
                        
                        // Pre-compute the first booth encoding
                        booth_code <= {multiplier[1:0], 1'b0};
                    end
                end
                
                CALC: begin
                    // Determine the Booth encoding
                    if (count == 0) begin
                        booth_code <= {multiplier[1:0], 1'b0};
                    end else begin
                        booth_code <= {multiplier[count*2+1:count*2], prev_bit};
                    end
                    
                    // Update previous bit for next iteration
                    prev_bit <= multiplier[count*2+1];
                    
                    // Apply Booth algorithm based on encoding
                    case (booth_code)
                        3'b000, 3'b111: begin
                            // No operation (add 0)
                            P <= P;
                        end
                        3'b001, 3'b010: begin
                            // Add A (multiplicand)
                            P <= P + {{(WIDTH){A[WIDTH]}}, A};
                        end
                        3'b011: begin
                            // Add 2A
                            P <= P + {{(WIDTH-1){A[WIDTH]}}, A, 1'b0};
                        end
                        3'b100: begin
                            // Subtract 2A
                            P <= P - {{(WIDTH-1){A[WIDTH]}}, A, 1'b0};
                        end
                        3'b101, 3'b110: begin
                            // Subtract A
                            P <= P - {{(WIDTH){A[WIDTH]}}, A};
                        end
                    endcase
                    
                    // Shift result left by 2 bits (equivalent to multiplier shift right)
                    P <= P << 2;
                    
                    // Increment counter
                    count <= count + 1;
                end
                
                DONE: begin
                    // Final result
                    product <= P[2*WIDTH-1:0];  // Extract the final product
                    done <= 1;
                end
                
                default: begin
                    // Do nothing
                end
            endcase
        end
    end

endmodule

