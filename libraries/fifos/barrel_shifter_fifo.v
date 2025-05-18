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
    output wire [ADDR_WIDTH:0]       data_count,
    
    // Debug signals
    output wire [ADDR_WIDTH-1:0]     debug_wr_ptr,
    output wire [ADDR_WIDTH-1:0]     debug_rd_ptr,
    output wire                      debug_rotation_active
);

    // Storage registers
    reg [DATA_WIDTH-1:0] data_regs [0:DEPTH-1];
    
    // Pointer and count management
    reg [ADDR_WIDTH-1:0] wr_ptr;
    reg [ADDR_WIDTH-1:0] rd_ptr;
    reg [ADDR_WIDTH:0] current_count;
    
    // Debug signals
    reg debug_rotation_active_reg;
    
    // Status signals
    assign full = (current_count == DEPTH);
    assign empty = (current_count == 0);
    assign data_count = current_count;
    
    // Debug signal assignments
    assign debug_wr_ptr = wr_ptr;
    assign debug_rd_ptr = rd_ptr;
    assign debug_rotation_active = debug_rotation_active_reg;
    
    // Read data output with safety mechanism
    assign rd_data = empty ? {DATA_WIDTH{1'b0}} : data_regs[rd_ptr];
    
    // Internal rotation and FIFO management
    integer i;
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            // Reset all state
            wr_ptr <= 0;
            rd_ptr <= 0;
            current_count <= 0;
            debug_rotation_active_reg <= 0;
            
            for (i = 0; i < DEPTH; i = i + 1) begin
                data_regs[i] <= {DATA_WIDTH{1'b0}};
            end
        end else begin
            // Rotation operation (highest priority)
            if (rotate_en && current_count > 0 && rotate_amount > 0 && rotate_amount < current_count) begin
                // Set debug rotation flag
                debug_rotation_active_reg <= 1;
                
                // Perform rotation using direct non-blocking assignments from old data_regs
                if (rotate_direction == 0) begin  // Left rotation
                    // Rotate left by rotate_amount
                    for (i = 0; i < current_count - rotate_amount; i = i + 1) begin
                        data_regs[i] <= data_regs[(rd_ptr + rotate_amount + i) % DEPTH];
                    end
                    for (i = 0; i < rotate_amount; i = i + 1) begin
                        data_regs[current_count - rotate_amount + i] <= data_regs[(rd_ptr + i) % DEPTH];
                    end
                end else begin  // Right rotation
                    // Rotate right by rotate_amount
                    for (i = rotate_amount; i < current_count; i = i + 1) begin
                        data_regs[i] <= data_regs[(rd_ptr + i - rotate_amount) % DEPTH];
                    end
                    for (i = 0; i < rotate_amount; i = i + 1) begin
                        data_regs[i] <= data_regs[(rd_ptr + current_count - rotate_amount + i) % DEPTH];
                    end
                end
                
                // Reset pointers after rotation
                rd_ptr <= 0;
                wr_ptr <= current_count;
            end
            // Write operation
            else if (wr_en && !full) begin
                data_regs[wr_ptr] <= wr_data;
                wr_ptr <= (wr_ptr + 1) % DEPTH;
                current_count <= current_count + 1;
            end
            // Read operation
            else if (rd_en && !empty) begin
                rd_ptr <= (rd_ptr + 1) % DEPTH;
                current_count <= current_count - 1;
            end
        end
    end
    
endmodule 