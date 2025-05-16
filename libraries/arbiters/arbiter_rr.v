module arbiter_rr #(
    parameter NUM_PORTS = 4,
    parameter PRIORITY_SCHEME = 1  // 0: Fixed priority, 1: Round-robin
) (
    input wire clk,
    input wire rst_n,
    input wire [NUM_PORTS-1:0] request,
    output reg [NUM_PORTS-1:0] grant,
    output wire active          // Indicates if any request is being serviced
);

    // Internal registers for round-robin scheme
    reg [$clog2(NUM_PORTS)-1:0] priority_ptr;
    
    // Active signal is high when any request is being serviced
    assign active = |grant;
    
    // Main arbitration logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            grant <= {NUM_PORTS{1'b0}};
            priority_ptr <= NUM_PORTS-1;  // Initialize to highest port
        end
        else begin
            // Default: no grants
            grant <= {NUM_PORTS{1'b0}};
            
            if (|request) begin
                if (PRIORITY_SCHEME == 0) begin
                    // Fixed priority scheme (higher index has higher priority)
                    integer i;
                    for (i = NUM_PORTS-1; i >= 0; i = i - 1) begin
                        if (request[i]) begin
                            grant[i] <= 1'b1;
                            // Once highest priority request is granted, break
                            i = -1;
                        end
                    end
                end
                else begin
                    // Round-robin priority scheme using integer variables
                    integer i;
                    integer check_idx;
                    integer ptr;
                    reg granted;
                    
                    granted = 1'b0;
                    
                    /* verilator lint_off WIDTHEXPAND */
                    ptr = priority_ptr;  // Convert to integer
                    /* verilator lint_on WIDTHEXPAND */
                    
                    // Check all ports starting from priority_ptr, going down
                    for (i = 0; i < NUM_PORTS; i = i + 1) begin
                        check_idx = (ptr - i + NUM_PORTS) % NUM_PORTS;
                        
                        if (request[check_idx] && !granted) begin
                            grant[check_idx] <= 1'b1;
                            granted = 1'b1;
                            
                            /* verilator lint_off WIDTHTRUNC */
                            // Update priority pointer for next cycle (move down)
                            priority_ptr <= (check_idx - 1 + NUM_PORTS) % NUM_PORTS;
                            /* verilator lint_on WIDTHTRUNC */
                        end
                    end
                end
            end
        end
    end

endmodule 
