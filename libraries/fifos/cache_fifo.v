/* verilator lint_off BLKSEQ */
module cache_fifo #(
    parameter DATA_WIDTH = 32,           // Width of data bus
    parameter ADDR_WIDTH = 4,            // Address width (FIFO depth = 2^ADDR_WIDTH)
    parameter TAG_WIDTH = 8,             // Width of tags for data identification
    parameter CACHE_SIZE = 4,            // Number of cache entries
    parameter LRU_POLICY = 1             // 0: FIFO replacement, 1: LRU replacement
) (
    // Clock and reset
    input  wire                      clk,
    input  wire                      rst_n,
    
    // Write interface
    input  wire                      wr_en,
    input  wire [DATA_WIDTH-1:0]     wr_data,
    input  wire [TAG_WIDTH-1:0]      wr_tag,
    output wire                      wr_ready,
    
    // Read interface
    input  wire                      rd_en,
    input  wire [TAG_WIDTH-1:0]      rd_tag,
    output reg  [DATA_WIDTH-1:0]     rd_data,
    output wire                      rd_valid,
    output reg                       rd_hit,    // High if tag found in cache
    
    // Status
    output wire                      full,
    output wire                      empty,
    output wire [ADDR_WIDTH:0]       data_count,
    
    // Cache statistics
    output reg  [31:0]               cache_hits,
    output reg  [31:0]               cache_misses,
    output wire [31:0]               hit_ratio,  // Fixed point: 0-10000 (0.00% to 100.00%)
    input  wire                      clear_stats
);

    // Memory array for data storage
    reg [DATA_WIDTH-1:0] mem [(1<<ADDR_WIDTH)-1:0];
    reg [TAG_WIDTH-1:0]  tag_mem [(1<<ADDR_WIDTH)-1:0];
    
    // FIFO pointers and control signals
    reg [ADDR_WIDTH:0] wr_ptr;
    reg [ADDR_WIDTH:0] rd_ptr;
    // Index for associative tag lookup
    reg [ADDR_WIDTH-1:0] search_idx;
    
    // Cache storage (unrolled for CACHE_SIZE=4)
    reg [DATA_WIDTH-1:0] cache_data0, cache_data1, cache_data2, cache_data3;
    reg [TAG_WIDTH-1:0]  cache_tags0, cache_tags1, cache_tags2, cache_tags3;
    reg                  cache_valid0, cache_valid1, cache_valid2, cache_valid3;
    reg [$clog2(CACHE_SIZE)-1:0] lru_counters0, lru_counters1, lru_counters2, lru_counters3;
    
    // FIFO status signals
    wire [ADDR_WIDTH:0] fifo_count = wr_ptr - rd_ptr;
    assign data_count = fifo_count;
    
    assign full = (fifo_count == (1<<ADDR_WIDTH));
    assign empty = (fifo_count == 0);
    assign wr_ready = !full;
    // rd_valid indicates when a read is accepted
    reg rd_valid_reg;
    assign rd_valid = rd_valid_reg;
    
    // Calculate hit ratio as fixed point (0-10000 for 0.00%-100.00%)
    assign hit_ratio = (cache_hits + cache_misses == 0) ? 0 :
                       (cache_hits * 10000) / (cache_hits + cache_misses);
    
    // Function to find index of least recently used cache entry (flattened for Verilog-2005)
    function [$clog2(CACHE_SIZE)-1:0] find_lru_index;
        input [CACHE_SIZE*$clog2(CACHE_SIZE)-1:0] counters_flat;
        integer i;
        reg [$clog2(CACHE_SIZE)-1:0] min_idx, min_counter, counter_i;
        begin
            min_idx = 0;
            min_counter = counters_flat[$clog2(CACHE_SIZE)-1:0];
            for (i = 1; i < CACHE_SIZE; i = i + 1) begin
                counter_i = counters_flat[(i+1)*$clog2(CACHE_SIZE)-1:i*$clog2(CACHE_SIZE)];
                if (counter_i < min_counter) begin
                    min_counter = counter_i;
                    min_idx = i[$clog2(CACHE_SIZE)-1:0];
                end
            end
            find_lru_index = min_idx;
        end
    endfunction
    
    // Function to find index of first available cache entry or victim for replacement (flattened for Verilog-2005)
    function [$clog2(CACHE_SIZE)-1:0] find_cache_index;
        input [CACHE_SIZE-1:0] valid;
        input [CACHE_SIZE*$clog2(CACHE_SIZE)-1:0] counters_flat;
        input [$clog2(CACHE_SIZE)-1:0] fifo_ptr;
        integer i;
        reg [$clog2(CACHE_SIZE)-1:0] idx;
        reg found_empty;
        begin
            found_empty = 0;
            idx = 0;
            // First, look for an invalid entry
            for (i = 0; i < CACHE_SIZE; i = i + 1) begin
                if (!valid[i]) begin
                    idx = i[$clog2(CACHE_SIZE)-1:0];
                    found_empty = 1;
                end
            end
            // If no invalid entry, use replacement policy
            if (!found_empty) begin
                if (LRU_POLICY) begin
                    idx = find_lru_index(counters_flat);
                end else begin
                    idx = fifo_ptr;
                end
            end
            find_cache_index = idx;
        end
    endfunction
    
    // Write operation
    always @(posedge clk) begin
        if (wr_en && !full) begin
            mem[wr_ptr[ADDR_WIDTH-1:0]] <= wr_data;
            tag_mem[wr_ptr[ADDR_WIDTH-1:0]] <= wr_tag;
        end
    end
    
    // FIFO state management
    always @(posedge clk or negedge rst_n) begin
        integer i, k;
        reg [$clog2(CACHE_SIZE)-1:0] cache_idx_reg;
        reg [CACHE_SIZE-1:0] matched_tag;
        reg [$clog2(CACHE_SIZE)-1:0] hit_index;
        
        if (!rst_n) begin
            // Yosys-compatible reset: only reset scalars and assign full packed vectors
            wr_ptr <= 0;
            rd_ptr <= 0;
            rd_hit <= 0;
            rd_valid_reg <= 0;
            cache_hits <= 0;
            cache_misses <= 0;
            fifo_replacement_ptr <= 0;
            cache_data0 <= 0; cache_data1 <= 0; cache_data2 <= 0; cache_data3 <= 0;
            cache_tags0 <= 0; cache_tags1 <= 0; cache_tags2 <= 0; cache_tags3 <= 0;
            cache_valid0 <= 0; cache_valid1 <= 0; cache_valid2 <= 0; cache_valid3 <= 0;
            lru_counters0 <= 0; lru_counters1 <= 0; lru_counters2 <= 0; lru_counters3 <= 0;
        end else begin
            // Indicate when a read cycle is valid
            rd_valid_reg <= rd_en;
            
            // Clear statistics if requested
            if (clear_stats) begin
                cache_hits <= 0;
                cache_misses <= 0;
            end
            
            // Update write pointer on write
            if (wr_en && !full) begin
                mem[wr_ptr[ADDR_WIDTH-1:0]] <= wr_data;
                tag_mem[wr_ptr[ADDR_WIDTH-1:0]] <= wr_tag;
                wr_ptr <= wr_ptr + 1'b1;
            end
            
            // Handle read operation
            if (rd_en) begin
                // Initialize variables for tag matching
                matched_tag = 0;
                hit_index = 0;
                rd_hit <= 0;
                // Unrolled tag match for CACHE_SIZE=4
                if (cache_valid0 && cache_tags0 == rd_tag) begin matched_tag[0] = 1; hit_index = 0; end
                if (cache_valid1 && cache_tags1 == rd_tag) begin matched_tag[1] = 1; hit_index = 1; end
                if (cache_valid2 && cache_tags2 == rd_tag) begin matched_tag[2] = 1; hit_index = 2; end
                if (cache_valid3 && cache_tags3 == rd_tag) begin matched_tag[3] = 1; hit_index = 3; end
                
                // Process cache hit
                if (|matched_tag) begin
                    case (hit_index)
                        0: rd_data <= cache_data0;
                        1: rd_data <= cache_data1;
                        2: rd_data <= cache_data2;
                        3: rd_data <= cache_data3;
                    endcase
                    rd_hit <= 1;
                    cache_hits <= cache_hits + 1;
                    // Update LRU counters (unrolled)
                    if (LRU_POLICY) begin
                        if (hit_index == 0) lru_counters0 <= 4'hF; else if (lru_counters0 > 0) lru_counters0 <= lru_counters0 - 1'b1;
                        if (hit_index == 1) lru_counters1 <= 4'hF; else if (lru_counters1 > 0) lru_counters1 <= lru_counters1 - 1'b1;
                        if (hit_index == 2) lru_counters2 <= 4'hF; else if (lru_counters2 > 0) lru_counters2 <= lru_counters2 - 1'b1;
                        if (hit_index == 3) lru_counters3 <= 4'hF; else if (lru_counters3 > 0) lru_counters3 <= lru_counters3 - 1'b1;
                    end
                end else begin
                    // Cache miss - associative read from memory (unrolled for ADDR_WIDTH=4)
                    search_idx = 0;
                    if (tag_mem[0] == rd_tag) search_idx = 0;
                    if (tag_mem[1] == rd_tag) search_idx = 1;
                    if (tag_mem[2] == rd_tag) search_idx = 2;
                    if (tag_mem[3] == rd_tag) search_idx = 3;
                    if (tag_mem[4] == rd_tag) search_idx = 4;
                    if (tag_mem[5] == rd_tag) search_idx = 5;
                    if (tag_mem[6] == rd_tag) search_idx = 6;
                    if (tag_mem[7] == rd_tag) search_idx = 7;
                    if (tag_mem[8] == rd_tag) search_idx = 8;
                    if (tag_mem[9] == rd_tag) search_idx = 9;
                    if (tag_mem[10] == rd_tag) search_idx = 10;
                    if (tag_mem[11] == rd_tag) search_idx = 11;
                    if (tag_mem[12] == rd_tag) search_idx = 12;
                    if (tag_mem[13] == rd_tag) search_idx = 13;
                    if (tag_mem[14] == rd_tag) search_idx = 14;
                    if (tag_mem[15] == rd_tag) search_idx = 15;
                    rd_data <= mem[search_idx];
                    cache_misses <= cache_misses + 1;
                    // Find replacement index (unrolled, e.g., FIFO or LRU)
                    // Example: always replace 0 if invalid, else 1, else 2, else 3
                    if (!cache_valid0) cache_idx_reg = 0;
                    else if (!cache_valid1) cache_idx_reg = 1;
                    else if (!cache_valid2) cache_idx_reg = 2;
                    else if (!cache_valid3) cache_idx_reg = 3;
                    else cache_idx_reg = 0; // fallback
                    // Write to cache
                    case (cache_idx_reg)
                        0: begin cache_valid0 <= 1; cache_tags0 <= rd_tag; cache_data0 <= mem[search_idx]; end
                        1: begin cache_valid1 <= 1; cache_tags1 <= rd_tag; cache_data1 <= mem[search_idx]; end
                        2: begin cache_valid2 <= 1; cache_tags2 <= rd_tag; cache_data2 <= mem[search_idx]; end
                        3: begin cache_valid3 <= 1; cache_tags3 <= rd_tag; cache_data3 <= mem[search_idx]; end
                    endcase
                    // Update LRU counters (unrolled)
                    if (LRU_POLICY) begin
                        if (cache_idx_reg == 0) lru_counters0 <= 4'hF; else if (lru_counters0 > 0) lru_counters0 <= lru_counters0 - 1'b1;
                        if (cache_idx_reg == 1) lru_counters1 <= 4'hF; else if (lru_counters1 > 0) lru_counters1 <= lru_counters1 - 1'b1;
                        if (cache_idx_reg == 2) lru_counters2 <= 4'hF; else if (lru_counters2 > 0) lru_counters2 <= lru_counters2 - 1'b1;
                        if (cache_idx_reg == 3) lru_counters3 <= 4'hF; else if (lru_counters3 > 0) lru_counters3 <= lru_counters3 - 1'b1;
                    end
                end
            end
        end
    end
    
    // Debugging signals for waveform viewing
    // synthesis translate_off
    reg [31:0] debug_hit_ratio;
    always @(*) begin
        debug_hit_ratio = hit_ratio;
    end
    // synthesis translate_on
    
endmodule
/* verilator lint_on BLKSEQ */ 