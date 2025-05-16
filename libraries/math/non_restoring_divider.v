module non_restoring_divider #(
    parameter WIDTH = 8
)(
    input wire clk,
    input wire rst_n,
    input wire start,
    input wire [WIDTH-1:0] dividend,
    input wire [WIDTH-1:0] divisor,
    output reg [WIDTH-1:0] quotient,
    output reg [WIDTH-1:0] remainder,
    output reg valid,
    output reg busy,
    output reg error
);

    // State definitions
    localparam IDLE = 0;
    localparam DIVIDE = 1;
    localparam DONE = 2;
    
    // Define the counter width to accommodate any chosen WIDTH parameter
    localparam COUNTER_WIDTH = $clog2(WIDTH+1);
    
    // Internal registers
    reg [1:0] state;
    reg [WIDTH-1:0] div_reg; // Register to hold divisor
    reg [WIDTH-1:0] quot; // Register to build quotient
    reg [WIDTH-1:0] rem; // Register to hold remainder
    reg [COUNTER_WIDTH-1:0] iter; // Iteration counter sized according to WIDTH
    
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
            busy <= 0;
            valid <= 0;
            error <= 0;
            quotient <= 0;
            remainder <= 0;
            div_reg <= 0;
            quot <= 0;
            rem <= 0;
            iter <= 0;
        end else begin
            case (state)
                IDLE: begin
                    valid <= 0;
                    error <= 0;
                    busy <= 0;
                    
                    if (start) begin
                        if (divisor == 0) begin
                            error <= 1;
                        end else begin
                            busy <= 1;
                            div_reg <= divisor;
                            
                            // Initialize registers for division
                            quot <= 0;
                            rem <= 0;
                            iter <= COUNTER_WIDTH'(WIDTH);  // Explicit width cast
                            
                            state <= DIVIDE;
                        end
                    end
                end
                
                DIVIDE: begin
                    if (iter > 0) begin
                        // Left shift remainder and bring down the next dividend bit
                        rem <= {rem[WIDTH-2:0], dividend[iter-1]};
                        
                        // Update quotient based on comparison
                        if ({rem[WIDTH-2:0], dividend[iter-1]} >= div_reg) begin
                            rem <= {rem[WIDTH-2:0], dividend[iter-1]} - div_reg;
                            quot <= {quot[WIDTH-2:0], 1'b1};
                        end else begin
                            quot <= {quot[WIDTH-2:0], 1'b0};
                        end
                        
                        iter <= iter - 1;
                    end else begin
                        // Division complete
                        quotient <= quot;
                        remainder <= rem;
                        valid <= 1;
                        busy <= 0;
                        state <= DONE;
                    end
                end
                
                DONE: begin
                    // Stay in done until next start
                    if (start) begin
                        valid <= 0;
                        state <= IDLE;
                    end
                end
                
                default: state <= IDLE;
            endcase
        end
    end
endmodule 
