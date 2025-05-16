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

    // Toggle-based CDC implementation
    
    // Source domain signals
    reg src_toggle_bit;
    reg [DATA_WIDTH-1:0] src_data_reg;
    reg src_busy;
    
    // Destination domain signals
    reg [SYNC_STAGES-1:0] dst_sync_toggle;
    reg dst_toggle_bit_prev;
    reg [DATA_WIDTH-1:0] dst_data_sample;  // Added sampling register
    reg dst_data_valid;                    // Added valid flag for sampled data
    
    // Synchronize toggle bit from source to destination
    always @(posedge dst_clk or negedge dst_rst_n) begin
        if (!dst_rst_n) begin
            dst_sync_toggle <= {SYNC_STAGES{1'b0}};
            dst_toggle_bit_prev <= 1'b0;
            dst_data_sample <= {DATA_WIDTH{1'b0}};  // Reset sample register
            dst_data_valid <= 1'b0;                 // Reset valid flag
        end else begin
            dst_sync_toggle <= {dst_sync_toggle[SYNC_STAGES-2:0], src_toggle_bit};
            dst_toggle_bit_prev <= dst_sync_toggle[SYNC_STAGES-1];
            
            // Sample data when toggle bit changes
            if (dst_sync_toggle[SYNC_STAGES-1] != dst_toggle_bit_prev) begin
                dst_data_sample <= src_data_reg;
                dst_data_valid <= 1'b1;
            end else if (dst_data_valid && dst_valid) begin
                // Clear valid flag once data has been transferred to output
                dst_data_valid <= 1'b0;
            end
        end
    end
    
    // Source domain control
    always @(posedge src_clk or negedge src_rst_n) begin
        if (!src_rst_n) begin
            src_toggle_bit <= 1'b0;
            src_data_reg <= {DATA_WIDTH{1'b0}};
            src_busy <= 1'b0;
        end else begin
            if (src_valid && !src_busy) begin
                // Capture new data and toggle the bit
                src_data_reg <= src_data;
                src_toggle_bit <= ~src_toggle_bit;
                src_busy <= 1'b1;
            end else if (src_busy && src_ready) begin
                // Clear busy when data has been acknowledged
                src_busy <= 1'b0;
            end
        end
    end
    
    // Destination domain output control
    always @(posedge dst_clk or negedge dst_rst_n) begin
        if (!dst_rst_n) begin
            dst_data <= {DATA_WIDTH{1'b0}};
            dst_valid <= 1'b0;
        end else begin
            // Transfer sampled data to output when available
            if (dst_data_valid && !dst_valid) begin
                dst_data <= dst_data_sample;
                dst_valid <= 1'b1;
            end else if (dst_valid && dst_ready) begin
                // Clear valid when data is consumed
                dst_valid <= 1'b0;
            end
        end
    end
    
    // Source is ready when not busy
    assign src_ready = !src_busy;

endmodule 