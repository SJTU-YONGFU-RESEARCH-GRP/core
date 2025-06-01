module booth_multiplier #(
    parameter WIDTH = 8
)(
    input wire clk,
    input wire rst,
    input wire start,
    input wire signed [WIDTH-1:0] multiplicand,
    input wire signed [WIDTH-1:0] multiplier,
    output reg signed [2*WIDTH-1:0] product,
    output reg done
);

    // Two-state FSM
    reg state;
    localparam IDLE = 1'b0;
    localparam RUNNING = 1'b1;
    
    reg start_r; // For edge detection
    
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            done <= 0;
            product <= 0;
            start_r <= 0;
        end else begin
            // Edge detection on start signal
            start_r <= start;
            
            case (state)
                IDLE: begin
                    // On rising edge of start signal
                    if (start && !start_r) begin
                        state <= RUNNING;
                        done <= 0;
                        
                        // Calculate product immediately (signed multiplication)
                        /* verilator lint_off WIDTH */
                        product <= $signed(multiplicand) * $signed(multiplier);
                        /* verilator lint_on WIDTH */
                    end
                end
                
                RUNNING: begin
                    // Set done one cycle after computation
                    done <= 1;
                    
                    // Return to IDLE when done is asserted
                    if (done) begin
                        state <= IDLE;
                    end
                end
            endcase
            
            // Clear done signal when start is deasserted
            if (!start && start_r) begin
                done <= 0;
            end
        end
    end

endmodule


