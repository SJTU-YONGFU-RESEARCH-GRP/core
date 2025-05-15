module sync_fifo #(
    parameter DATA_WIDTH = 8,
    parameter NUM_STAGES = 2    // Number of synchronization stages (at least 2 recommended)
) (
    // Source domain
    input  wire                  src_clk,
    input  wire                  src_rst_n,
    input  wire                  src_valid,
    input  wire [DATA_WIDTH-1:0] src_data,
    output wire                  src_ready,
    
    // Destination domain
    input  wire                  dst_clk,
    input  wire                  dst_rst_n,
    output wire                  dst_valid,
    output wire [DATA_WIDTH-1:0] dst_data,
    input  wire                  dst_ready
);

    // Internal signals
    reg [DATA_WIDTH-1:0] transfer_data;     // Data being transferred
    reg                  src_data_pending;  // Source has data pending
    reg                  dst_data_available; // Data is available at destination
    
    // Synchronization logic for handshaking signals
    reg  src_data_sent;           // Source domain: data has been sent
    reg  dst_data_received;       // Destination domain: data has been received
    
    // Source to destination sync chain
    reg  [NUM_STAGES-1:0] src_to_dst_sync;
    
    // Destination to source sync chain
    reg  [NUM_STAGES-1:0] dst_to_src_sync;
    
    // Source domain logic
    always @(posedge src_clk or negedge src_rst_n) begin
        if (!src_rst_n) begin
            transfer_data <= {DATA_WIDTH{1'b0}};
            src_data_pending <= 1'b0;
            src_data_sent <= 1'b0;
        end else begin
            // Accept new data when source is ready and there's valid data
            if (src_ready && src_valid) begin
                transfer_data <= src_data;
                src_data_pending <= 1'b1;
                src_data_sent <= 1'b1;
            end
            
            // Clear pending flag when destination has received data
            if (dst_to_src_sync[NUM_STAGES-1]) begin
                src_data_pending <= 1'b0;
                src_data_sent <= 1'b0;
            end
        end
    end
    
    // Source ready signal - accept new data when not pending
    assign src_ready = !src_data_pending;
    
    // Source to destination synchronization
    always @(posedge dst_clk or negedge dst_rst_n) begin
        if (!dst_rst_n) begin
            src_to_dst_sync <= {NUM_STAGES{1'b0}};
        end else begin
            src_to_dst_sync <= {src_to_dst_sync[NUM_STAGES-2:0], src_data_sent};
        end
    end
    
    // Destination to source synchronization
    always @(posedge src_clk or negedge src_rst_n) begin
        if (!src_rst_n) begin
            dst_to_src_sync <= {NUM_STAGES{1'b0}};
        end else begin
            dst_to_src_sync <= {dst_to_src_sync[NUM_STAGES-2:0], dst_data_received};
        end
    end
    
    // Destination domain logic
    always @(posedge dst_clk or negedge dst_rst_n) begin
        if (!dst_rst_n) begin
            dst_data_available <= 1'b0;
            dst_data_received <= 1'b0;
        end else begin
            // Set data available when source signals data sent
            if (src_to_dst_sync[NUM_STAGES-1] && !dst_data_available) begin
                dst_data_available <= 1'b1;
            end
            
            // Clear data available and acknowledge when destination consumes data
            if (dst_valid && dst_ready) begin
                dst_data_available <= 1'b0;
                dst_data_received <= 1'b1;
            end
            
            // Reset acknowledge when transfer completes
            if (!src_to_dst_sync[NUM_STAGES-1]) begin
                dst_data_received <= 1'b0;
            end
        end
    end
    
    // Destination output signals
    assign dst_valid = dst_data_available;
    assign dst_data = transfer_data;
    
endmodule 