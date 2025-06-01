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
    always @(posedge clk or negedge rst_n) begin
        found = 0;
        granted = 0;
        ptr = 0;
        check_idx = 0;
        if (!rst_n) begin
            grant <= {NUM_PORTS{1'b0}};
            priority_ptr <= NUM_PORTS-1;  // Initialize to highest port
        end else begin
            grant <= {NUM_PORTS{1'b0}};
            if (|request) begin
                if (PRIORITY_SCHEME == 0) begin
                    // Fixed priority scheme (higher index has higher priority)
                    found = 0;
                    if (request[3] && !found) begin grant[3] <= 1'b1; found = 1; end
                    if (request[2] && !found) begin grant[2] <= 1'b1; found = 1; end
                    if (request[1] && !found) begin grant[1] <= 1'b1; found = 1; end
                    if (request[0] && !found) begin grant[0] <= 1'b1; found = 1; end
                end else begin
                    // Round-robin priority scheme for 4 ports
                    granted = 0;
                    ptr = priority_ptr;
                    check_idx = (ptr - 0 + 4) % 4;
                    if (request[check_idx] && !granted) begin grant[check_idx] <= 1'b1; granted = 1; priority_ptr <= (check_idx - 1 + 4) % 4; end
                    check_idx = (ptr - 1 + 4) % 4;
                    if (request[check_idx] && !granted) begin grant[check_idx] <= 1'b1; granted = 1; priority_ptr <= (check_idx - 1 + 4) % 4; end
                    check_idx = (ptr - 2 + 4) % 4;
                    if (request[check_idx] && !granted) begin grant[check_idx] <= 1'b1; granted = 1; priority_ptr <= (check_idx - 1 + 4) % 4; end
                    check_idx = (ptr - 3 + 4) % 4;
                    if (request[check_idx] && !granted) begin grant[check_idx] <= 1'b1; granted = 1; priority_ptr <= (check_idx - 1 + 4) % 4; end
                end
            end
        end
    end

endmodule 
