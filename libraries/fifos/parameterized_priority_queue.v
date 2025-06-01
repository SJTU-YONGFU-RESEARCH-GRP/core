module parameterized_priority_queue #(
    parameter DATA_WIDTH = 8,           // Width of data
    parameter ADDR_WIDTH = 4,           // Address width (determines queue depth)
    parameter QUEUE_DEPTH = 1 << ADDR_WIDTH, // Queue depth = 2^ADDR_WIDTH
    parameter PRIORITY_WIDTH = 3,       // Width of priority value
    parameter HIGH_PRIORITY_FIRST = 1   // 1: Higher value = higher priority, 0: Lower value = higher priority
)(
    input wire clk,                     // Clock signal
    input wire rst_n,                   // Active-low reset
    
    // Input interface
    input wire [DATA_WIDTH-1:0] i_data,         // Input data
    input wire [PRIORITY_WIDTH-1:0] i_priority, // Input priority
    input wire i_enqueue,                       // Enqueue signal
    output wire o_full,                         // Queue full indicator
    
    // Output interface
    output reg [DATA_WIDTH-1:0] o_data,         // Output data
    output reg [PRIORITY_WIDTH-1:0] o_priority, // Output priority
    input wire i_dequeue,                       // Dequeue signal
    output wire o_empty,                        // Queue empty indicator
    
    // Status
    output reg [ADDR_WIDTH:0] o_count           // Number of items in queue
);
    /* verilator lint_off WIDTHEXPAND */
    /* verilator lint_off WIDTHTRUNC */
    /* verilator lint_off SELRANGE */
    
    // Queue storage - separate arrays for data and priority
    reg [DATA_WIDTH-1:0] queue_data [0:QUEUE_DEPTH-1];
    reg [PRIORITY_WIDTH-1:0] queue_priority [0:QUEUE_DEPTH-1];
    
    // Queue pointers and status flags
    reg [ADDR_WIDTH:0] count;
    
    // Full and empty flags
    assign o_full = (count == QUEUE_DEPTH);
    assign o_empty = (count == 0);
    
    // Internal variables
    integer i;
    reg [ADDR_WIDTH:0] insert_idx;
    
    // Temporary arrays for shifting operations
    reg [DATA_WIDTH-1:0] temp_data [0:QUEUE_DEPTH-1];
    reg [PRIORITY_WIDTH-1:0] temp_priority [0:QUEUE_DEPTH-1];
    
    // Counter update logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            count <= 0;
            o_count <= 0;
        end else begin
            case ({i_enqueue && !o_full, i_dequeue && !o_empty})
                2'b10: count <= count + 1; // Only enqueue
                2'b01: count <= count - 1; // Only dequeue
                2'b11: count <= count;     // Both enqueue and dequeue
                2'b00: count <= count;     // No operation
            endcase
            
            o_count <= count;
        end
    end
    
    // Enqueue and dequeue operations
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            for (i = 0; i < QUEUE_DEPTH; i = i + 1) begin
                queue_data[i] <= 0;
                queue_priority[i] <= 0;
            end
            o_data <= 0;
            o_priority <= 0;
        end else begin
            // Dequeue operation - set output
            if (i_dequeue && !o_empty) begin
                o_data <= queue_data[0];
                o_priority <= queue_priority[0];
            end
            
            // Queue manipulation
            if (i_enqueue || (i_dequeue && !o_empty)) begin
                /* verilator lint_off BLKSEQ */
                // First, copy current queue to temp arrays
                for (i = 0; i < QUEUE_DEPTH; i = i + 1) begin
                    temp_data[i] = queue_data[i];
                    temp_priority[i] = queue_priority[i];
                end
                
                if (i_enqueue && !o_full) begin
                    // Find insertion point based on priority
                    insert_idx = count;
                    for (i = 0; i < QUEUE_DEPTH; i = i + 1) begin
                        if (i < count) begin
                            if (HIGH_PRIORITY_FIRST) begin
                                if (i_priority > queue_priority[i]) begin
                                    insert_idx = i;
                                    i = QUEUE_DEPTH; // break
                                end
                            end else begin
                                if (i_priority < queue_priority[i]) begin
                                    insert_idx = i;
                                    i = QUEUE_DEPTH; // break
                                end
                            end
                        end
                    end
                    
                    // Prepare shift and insert in the temp arrays
                    for (i = 0; i < QUEUE_DEPTH; i = i + 1) begin
                        if (i < insert_idx) begin
                            // Keep elements before insert_idx
                            temp_data[i] = queue_data[i];
                            temp_priority[i] = queue_priority[i];
                        end else if (i == insert_idx) begin
                            // Insert the new entry
                            temp_data[i] = i_data;
                            temp_priority[i] = i_priority;
                        end else if (i <= count) begin
                            // Shift elements to make room for the new entry
                            temp_data[i] = queue_data[i-1];
                            temp_priority[i] = queue_priority[i-1];
                        end
                    end
                end
                
                if (i_dequeue && !o_empty) begin
                    // Shift up for dequeue operation
                    for (i = 0; i < QUEUE_DEPTH-1; i = i + 1) begin
                        if (i < (count - 1)) begin
                            temp_data[i] = queue_data[i+1];
                            temp_priority[i] = queue_priority[i+1];
                        end
                    end
                end
                /* verilator lint_on BLKSEQ */
                
                // Copy temp arrays back to queue
                for (i = 0; i < QUEUE_DEPTH; i = i + 1) begin
                    queue_data[i] <= temp_data[i];
                    queue_priority[i] <= temp_priority[i];
                end
            end
        end
    end
    
    /* verilator lint_on WIDTHTRUNC */
    /* verilator lint_on WIDTHEXPAND */
    /* verilator lint_on SELRANGE */

endmodule 
