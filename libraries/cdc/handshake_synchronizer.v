module handshake_synchronizer #(
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
    output wire [DATA_WIDTH-1:0]  dst_data,
    output wire                   dst_valid,
    input  wire                   dst_ready
);

    // Control signals
    reg src_req;
    wire src_ack;
    reg [DATA_WIDTH-1:0] data_reg;
    
    // Synchronizers for request and acknowledge
    wire dst_req;
    reg dst_ack;
    
    // Multi-flop synchronizer for request signal (src -> dst)
    reg [SYNC_STAGES-1:0] req_sync;
    always @(posedge dst_clk or negedge dst_rst_n) begin
        if (!dst_rst_n)
            req_sync <= {SYNC_STAGES{1'b0}};
        else
            req_sync <= {req_sync[SYNC_STAGES-2:0], src_req};
    end
    assign dst_req = req_sync[SYNC_STAGES-1];
    
    // Multi-flop synchronizer for acknowledge signal (dst -> src)
    reg [SYNC_STAGES-1:0] ack_sync;
    always @(posedge src_clk or negedge src_rst_n) begin
        if (!src_rst_n)
            ack_sync <= {SYNC_STAGES{1'b0}};
        else
            ack_sync <= {ack_sync[SYNC_STAGES-2:0], dst_ack};
    end
    assign src_ack = ack_sync[SYNC_STAGES-1];
    
    // Source domain control
    always @(posedge src_clk or negedge src_rst_n) begin
        if (!src_rst_n) begin
            src_req <= 1'b0;
            data_reg <= {DATA_WIDTH{1'b0}};
        end else begin
            if (src_valid && src_ready) begin
                src_req <= ~src_req;  // Toggle request on handshake
                data_reg <= src_data;
            end
        end
    end
    
    // Source is ready when request and acknowledge are equal (handshake complete)
    assign src_ready = (src_req == src_ack);
    
    // Destination domain control
    reg dst_valid_reg;
    reg [DATA_WIDTH-1:0] dst_data_reg;
    
    always @(posedge dst_clk or negedge dst_rst_n) begin
        if (!dst_rst_n) begin
            dst_ack <= 1'b0;
            dst_valid_reg <= 1'b0;
            dst_data_reg <= {DATA_WIDTH{1'b0}};
        end else begin
            // When request changes and we haven't acknowledged yet
            if (dst_req != dst_ack && !dst_valid_reg) begin
                dst_valid_reg <= 1'b1;
                dst_data_reg <= data_reg;
            end else if (dst_valid_reg && dst_ready) begin
                // When data is consumed, acknowledge and clear valid
                dst_ack <= dst_req;
                dst_valid_reg <= 1'b0;
            end
        end
    end
    
    // Outputs
    assign dst_valid = dst_valid_reg;
    assign dst_data = dst_data_reg;

endmodule 