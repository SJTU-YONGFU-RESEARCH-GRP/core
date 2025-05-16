module clock_domain_crossing #(
    parameter DATA_WIDTH = 32,
    parameter SYNC_STAGES = 2
)(
    // Source clock domain
    input  wire                   src_clk,
    input  wire                   src_rst_n,
    input  wire [DATA_WIDTH-1:0]  src_data,
    input  wire                   src_valid,
    output wire                   src_ready,
    
    // Destination clock domain
    input  wire                   dst_clk,
    input  wire                   dst_rst_n,
    output reg  [DATA_WIDTH-1:0]  dst_data,
    output reg                    dst_valid,
    input  wire                   dst_ready
);

    // Source domain signals
    reg src_req;
    wire src_ack;
    reg [DATA_WIDTH-1:0] src_data_reg;
    
    // Destination domain signals
    reg [SYNC_STAGES-1:0] dst_req_sync;
    reg dst_req_prev;
    reg dst_ack;
    
    // Source to destination synchronizer
    always @(posedge dst_clk or negedge dst_rst_n) begin
        if (!dst_rst_n) begin
            dst_req_sync <= 0;
            dst_req_prev <= 0;
            dst_valid <= 0;
            dst_data <= 0;
        end else begin
            // Synchronize request
            dst_req_sync <= {dst_req_sync[SYNC_STAGES-2:0], src_req};
            dst_req_prev <= dst_req_sync[SYNC_STAGES-1];
            
            // Detect new data (req changed)
            if (dst_req_sync[SYNC_STAGES-1] != dst_req_prev) begin
                dst_data <= src_data_reg;
                dst_valid <= 1'b1;
                dst_ack <= dst_req_sync[SYNC_STAGES-1];
            end else if (dst_valid && dst_ready) begin
                dst_valid <= 1'b0;
            end
        end
    end
    
    // Destination to source synchronizer
    reg [SYNC_STAGES-1:0] src_ack_sync;
    always @(posedge src_clk or negedge src_rst_n) begin
        if (!src_rst_n) begin
            src_ack_sync <= 0;
        end else begin
            src_ack_sync <= {src_ack_sync[SYNC_STAGES-2:0], dst_ack};
        end
    end
    assign src_ack = src_ack_sync[SYNC_STAGES-1];
    
    // Source domain control
    always @(posedge src_clk or negedge src_rst_n) begin
        if (!src_rst_n) begin
            src_req <= 0;
            src_data_reg <= 0;
        end else begin
            if (src_valid && src_ready) begin
                src_data_reg <= src_data;
                src_req <= ~src_req;  // Toggle request bit
            end
        end
    end
    
    // Source is ready when request matches acknowledge
    assign src_ready = (src_req == src_ack);

endmodule 
