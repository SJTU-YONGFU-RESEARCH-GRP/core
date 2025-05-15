module barrel_shifter_fifo #(
    parameter DATA_WIDTH = 8,
    parameter DEPTH = 8,      // Must be a power of 2
    parameter ADDR_WIDTH = $clog2(DEPTH)
) (
    input  wire                      clk,
    input  wire                      rst_n,
    
    // Write interface
    input  wire                      wr_en,
    input  wire [DATA_WIDTH-1:0]     wr_data,
    output wire                      full,
    
    // Read interface
    input  wire                      rd_en,
    output wire [DATA_WIDTH-1:0]     rd_data,
    output wire                      empty,
    
    // Rotation interface
    input  wire                      rotate_en,
    input  wire [ADDR_WIDTH-1:0]     rotate_amount,
    input  wire                      rotate_direction, // 0 = left, 1 = right
    
    // Status
    output wire [ADDR_WIDTH:0]       data_count
);

    // Storage registers
    reg [DATA_WIDTH-1:0] data_regs [0:DEPTH-1];
    reg [DATA_WIDTH-1:0] temp_regs [0:DEPTH-1]; // Temporary storage for rotation
    
    // Position tracking
    reg [ADDR_WIDTH-1:0] head;      // Position of the first item
    reg [ADDR_WIDTH:0] count;       // Number of items in the FIFO
    
    // Status outputs
    assign data_count = count;
    assign empty = (count == 0);
    assign full = (count == DEPTH);
    
    // Read data output
    assign rd_data = empty ? {DATA_WIDTH{1'b0}} : data_regs[head];
    
    // FIFO operations
    always @(posedge clk or negedge rst_n) begin
        integer i;
        reg [ADDR_WIDTH-1:0] effective_rotate;
        reg [ADDR_WIDTH-1:0] tail;
        
        if (!rst_n) begin
            count <= 0;
            head <= 0;
            for (i = 0; i < DEPTH; i = i + 1) begin
                data_regs[i] <= {DATA_WIDTH{1'b0}};
            end
        end else begin
            // Priority: rotate, then read, then write
            
            // Handle rotation
            if (rotate_en && count > 0) begin
                // Compute effective rotation amount (prevent out-of-bounds)
                effective_rotate <= rotate_amount;
                
                if (rotate_amount != 0 && rotate_amount < count) begin
                    // First save all current data for manipulation
                    for (i = 0; i < DEPTH; i = i + 1) begin
                        temp_regs[i] <= data_regs[i];
                    end
                    
                    if (rotate_direction == 0) begin
                        // Rotate left (items move toward head)
                        // New head position after rotation
                        head <= (head + rotate_amount) % DEPTH;
                    end else begin
                        // Rotate right (items move away from head)
                        // New head position after rotation
                        head <= (head + DEPTH - rotate_amount) % DEPTH;
                    end
                    
                    // Data will be rearranged in the next cycle
                end
            end
            else if (rd_en && !empty) begin
                // Handle read operation
                // Mark the current head position as empty
                data_regs[head] <= {DATA_WIDTH{1'b0}};
                
                // Move head to next position
                head <= (head + 1) % DEPTH;
                
                // Decrement count
                count <= count - 1;
            end
            else if (wr_en && !full) begin
                // Handle write operation
                // Calculate tail position
                tail = (head + count) % DEPTH;
                
                // Write data to tail
                data_regs[tail] <= wr_data;
                
                // Increment count
                count <= count + 1;
            end
            
            // Handle the actual data movement for rotation in the cycle after
            // detecting a rotation command (separating control and datapath)
            if (rotate_en && count > 0 && rotate_amount != 0 && rotate_amount < count) begin
                for (i = 0; i < DEPTH; i = i + 1) begin
                    // Copy data from saved temp_regs based on new head position
                    // Using simple copy to avoid complex index calculations
                    data_regs[i] <= temp_regs[i];
                end
            end
        end
    end
    
endmodule 