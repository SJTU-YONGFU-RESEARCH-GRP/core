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
    
    // Cache storage
    reg [DATA_WIDTH-1:0] cache_data [0:CACHE_SIZE-1];
    reg [TAG_WIDTH-1:0]  cache_tags [0:CACHE_SIZE-1];
    reg [CACHE_SIZE-1:0] cache_valid;
    reg [$clog2(CACHE_SIZE)-1:0] lru_counters [0:CACHE_SIZE-1];
    reg [$clog2(CACHE_SIZE)-1:0] fifo_replacement_ptr;  // For FIFO replacement policy
    
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
    
    // Function to find index of least recently used cache entry
    function [$clog2(CACHE_SIZE)-1:0] find_lru_index;
        input [$clog2(CACHE_SIZE)-1:0] counters [0:CACHE_SIZE-1];
        reg [$clog2(CACHE_SIZE)-1:0] min_idx;
        reg [$clog2(CACHE_SIZE)-1:0] min_counter;
        begin
            min_idx = 0;
            min_counter = counters[0];
            
            for (integer i = 1; i < CACHE_SIZE; i = i + 1) begin
                if (counters[i] < min_counter) begin
                    min_counter = counters[i];
                    min_idx = i;
                end
            end
            
            find_lru_index = min_idx;
        end
    endfunction
    
    // Function to find index of first available cache entry or victim for replacement
    function [$clog2(CACHE_SIZE)-1:0] find_cache_index;
        input [CACHE_SIZE-1:0] valid;
        input [$clog2(CACHE_SIZE)-1:0] counters [0:CACHE_SIZE-1];
        input [$clog2(CACHE_SIZE)-1:0] fifo_ptr;
        reg [$clog2(CACHE_SIZE)-1:0] idx;
        reg found_empty;
        begin
            found_empty = 0;
            idx = 0;
            
            // First, look for an invalid entry
            for (integer i = 0; i < CACHE_SIZE; i = i + 1) begin
                if (!valid[i]) begin
                    idx = i;
                    found_empty = 1;
                    i = CACHE_SIZE; // Break the loop
                end
            end
            
            // If no invalid entry, use replacement policy
            if (!found_empty) begin
                if (LRU_POLICY) begin
                    // LRU replacement - find entry with highest counter value
                    idx = find_lru_index(counters);
                end else begin
                    // FIFO replacement - use round-robin pointer
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
        reg [$clog2(CACHE_SIZE)-1:0] cache_idx;
        reg [CACHE_SIZE-1:0] matched_tag;
        reg [$clog2(CACHE_SIZE)-1:0] hit_index;
        
        if (!rst_n) begin
            wr_ptr <= 0;
            rd_ptr <= 0;
            rd_hit <= 0;
            rd_valid_reg <= 0;
            cache_hits <= 0;
            cache_misses <= 0;
            fifo_replacement_ptr <= 0;
            
            // Initialize cache
            for (i = 0; i < CACHE_SIZE; i = i + 1) begin
                cache_valid[i] <= 0;
                lru_counters[i] <= i[$clog2(CACHE_SIZE)-1:0];
                cache_data[i] <= 0;
                cache_tags[i] <= 0;
            end
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
                wr_ptr <= wr_ptr + 1'b1;
            end
            
            // Handle read operation
            if (rd_en) begin
                // Initialize variables for tag matching
                matched_tag = 0;
                hit_index = 0;
                rd_hit <= 0;
                
                // Check for tag match in cache
                for (i = 0; i < CACHE_SIZE; i = i + 1) begin
                    if (cache_valid[i] && cache_tags[i] == rd_tag) begin
                        matched_tag[i] = 1;
                        hit_index = i[$clog2(CACHE_SIZE)-1:0];
                    end
                end
                
                // Process cache hit
                if (|matched_tag) begin
                    rd_data <= cache_data[hit_index];
                    rd_hit <= 1;
                    cache_hits <= cache_hits + 1;
                    
                    // Update LRU counters
                    if (LRU_POLICY) begin
                        for (i = 0; i < CACHE_SIZE; i = i + 1) begin
                            if (i[$clog2(CACHE_SIZE)-1:0] == hit_index) begin
                                lru_counters[i] <= {$clog2(CACHE_SIZE){1'b1}}; // Most recently used
                            end else if (lru_counters[i] > 0) begin
                                lru_counters[i] <= lru_counters[i] - 1'b1;
                            end
                        end
                    end
                end else begin
                    // Cache miss - associative read from memory
                    // Find memory index for this tag
                    search_idx = 0;
                    for (k = 0; k < (1<<ADDR_WIDTH); k = k + 1) begin
                        if (tag_mem[k] == rd_tag) begin
                            search_idx = k;
                        end
                    end
                    rd_data <= mem[search_idx];
                    cache_misses <= cache_misses + 1;
                    
                    // Add to cache
                    cache_idx = find_cache_index(cache_valid, lru_counters, fifo_replacement_ptr);
                    cache_valid[cache_idx] <= 1;
                    cache_tags[cache_idx] <= rd_tag;
                    cache_data[cache_idx] <= mem[search_idx];
                    
                    // Update replacement policy state
                    if (LRU_POLICY) begin
                        for (i = 0; i < CACHE_SIZE; i = i + 1) begin
                            if (i[$clog2(CACHE_SIZE)-1:0] == cache_idx) begin
                                lru_counters[i] <= {$clog2(CACHE_SIZE){1'b1}}; // Most recently used
                            end else if (lru_counters[i] > 0) begin
                                lru_counters[i] <= lru_counters[i] - 1'b1;
                            end
                        end
                    end else begin
                        // Update FIFO replacement pointer
                        fifo_replacement_ptr <= fifo_replacement_ptr + 1'b1;
                        if (fifo_replacement_ptr == CACHE_SIZE-1) begin
                            fifo_replacement_ptr <= 0;
                        end
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