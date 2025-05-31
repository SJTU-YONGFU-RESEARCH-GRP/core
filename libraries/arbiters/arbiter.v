module arbiter #(
    parameter NUM_PORTS = 4,
    parameter PRIORITY_SCHEME = 0  // 0: Fixed priority, 1: Round-robin
) (
    input wire clk,
    input wire rst_n,
    input wire [NUM_PORTS-1:0] request,
    output reg [NUM_PORTS-1:0] grant,
    output wire active          // Indicates if any request is being serviced
);

    // Internal registers for round-robin scheme
    reg [$clog2(NUM_PORTS)-1:0] priority_ptr;
    integer i;
    integer check_idx;
    integer ptr;
    integer granted;
    
    // Active signal is high when any request is being serviced
    assign active = |grant;
    
    // Main arbitration logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            grant <= {NUM_PORTS{1'b0}};
            priority_ptr <= 0;  // Initialize priority pointer to 0
        end
        else begin
            // Default: no grants
            grant <= {NUM_PORTS{1'b0}};
            if (|request) begin
                if (PRIORITY_SCHEME == 0) begin
                    // Fixed priority scheme (higher index has higher priority)
                    if (request[3]) begin
                        grant <= 4'b1000;
                    end else if (request[2]) begin
                        grant <= 4'b0100;
                    end else if (request[1]) begin
                        grant <= 4'b0010;
                    end else if (request[0]) begin
                        grant <= 4'b0001;
                    end else begin
                        grant <= 4'b0000;
                    end
                end else begin
                    // Round-robin priority scheme using integer variables
                    granted = 0;
                    /* verilator lint_off WIDTHEXPAND */
                    ptr = priority_ptr;  // Convert to integer
                    /* verilator lint_on WIDTHEXPAND */
                    // Check all ports starting from priority_ptr
                    for (i = 0; i < NUM_PORTS; i = i + 1) begin
                        check_idx = (ptr + i) % NUM_PORTS;
                        if (request[check_idx] && !granted) begin
                            grant[check_idx] <= 1'b1;
                            granted = 1;
                            /* verilator lint_off WIDTHTRUNC */
                            // Update priority pointer for next cycle
                            priority_ptr <= (check_idx + 1) % NUM_PORTS;
                            /* verilator lint_on WIDTHTRUNC */
                        end
                    end
                end
            end
        end
    end

endmodule 
