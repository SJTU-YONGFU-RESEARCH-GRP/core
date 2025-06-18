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
    reg [1:0] found;
    reg [1:0] granted;
    reg [1:0] ptr;
    reg [1:0] check_idx;
    integer i;
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            grant <= {NUM_PORTS{1'b0}};
            priority_ptr <= NUM_PORTS-1;  // Initialize to highest port
        end else begin
            grant <= {NUM_PORTS{1'b0}};
            if (|request) begin
                if (PRIORITY_SCHEME == 0) begin
                    // Fixed priority scheme (higher index has higher priority)
                    /* verilator lint_off BLKSEQ */
                    found = 0;
                    if (request[3] && !found) begin grant[3] <= 1'b1; found = 1; end
                    if (request[2] && !found) begin grant[2] <= 1'b1; found = 1; end
                    if (request[1] && !found) begin grant[1] <= 1'b1; found = 1; end
                    if (request[0] && !found) begin grant[0] <= 1'b1; found = 1; end
                    /* verilator lint_on BLKSEQ */
                end else begin
                    // Round-robin priority scheme for 4 ports
                    /* verilator lint_off BLKSEQ */
                    granted = 0;
                    
                    // Start from current pointer and cycle downward
                    for (i = 0; i < NUM_PORTS; i = i + 1) begin
                        check_idx = (priority_ptr - i + NUM_PORTS) % NUM_PORTS;
                        if (request[check_idx] && !granted) begin 
                            grant[check_idx] <= 1'b1; 
                            granted = 1; 
                            priority_ptr <= (check_idx - 1 + NUM_PORTS) % NUM_PORTS; 
                        end
                    end
                    /* verilator lint_on BLKSEQ */
                end
            end
        end
    end

endmodule 
