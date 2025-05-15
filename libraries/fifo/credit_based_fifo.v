module credit_based_fifo #(
    parameter DATA_WIDTH = 8,
    parameter FIFO_DEPTH = 16,
    parameter ADDR_WIDTH = $clog2(FIFO_DEPTH),
    parameter INIT_CREDITS = FIFO_DEPTH  // Set initial credits to FIFO depth
) (
    input wire clk,
    input wire rst_n,
    
    // Producer interface
    input wire [DATA_WIDTH-1:0] data_in,
    input wire valid_in,
    output wire ready_out,
    
    // Consumer interface
    output reg [DATA_WIDTH-1:0] data_out,
    output reg valid_out,
    input wire ready_in,
    
    // Credit interface
    input wire credit_return,
    output wire [ADDR_WIDTH:0] credits_available,
    
    // Status outputs
    output wire full,
    output wire empty,
    output wire [ADDR_WIDTH:0] fifo_level
);

    // Memory for FIFO storage
    reg [DATA_WIDTH-1:0] mem [0:FIFO_DEPTH-1];
    
    // Pointers and counters
    reg [ADDR_WIDTH:0] write_ptr;
    reg [ADDR_WIDTH:0] read_ptr;
    reg [ADDR_WIDTH:0] credit_count;
    
    // FIFO status signals
    assign empty = (write_ptr == read_ptr);
    assign full = (fifo_level >= FIFO_DEPTH - 1);
    
    // FIFO level calculation
    assign fifo_level = write_ptr - read_ptr;
    
    // Credit tracking
    assign credits_available = credit_count;
    // Only ready to accept data if credits are available and FIFO is not full
    assign ready_out = (credit_count > 0) && !full;
    
    // Write logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            write_ptr <= 0;
        end else if (valid_in && ready_out) begin
            mem[write_ptr[ADDR_WIDTH-1:0]] <= data_in;
            write_ptr <= write_ptr + 1'b1;
        end
    end
    
    // Read logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            read_ptr <= 0;
            valid_out <= 1'b0;
        end else begin
            if (!empty && (!valid_out || (valid_out && ready_in))) begin
                data_out <= mem[read_ptr[ADDR_WIDTH-1:0]];
                read_ptr <= read_ptr + 1'b1;
                valid_out <= 1'b1;
            end else if (valid_out && ready_in) begin
                valid_out <= 1'b0;
            end
        end
    end
    
    // Credit management
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            credit_count <= INIT_CREDITS;
        end else begin
            case ({valid_in && ready_out, credit_return})
                2'b00: credit_count <= credit_count;
                2'b01: credit_count <= (credit_count < FIFO_DEPTH) ? credit_count + 1'b1 : credit_count;
                2'b10: credit_count <= (credit_count > 0) ? credit_count - 1'b1 : credit_count;
                2'b11: credit_count <= credit_count; // No change when both happen
            endcase
        end
    end

endmodule 
