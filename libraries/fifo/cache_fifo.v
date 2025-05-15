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
    
    // Cache storage
    reg [DATA_WIDTH-1:0] cache_data [0:CACHE_SIZE-1];
    reg [TAG_WIDTH-1:0]  cache_tags [0:CACHE_SIZE-1];
    reg [CACHE_SIZE-1:0] cache_valid;
    reg [$clog2(CACHE_SIZE)-1:0] lru_counters [0:CACHE_SIZE-1];
    
    // FIFO status signals
    wire [ADDR_WIDTH:0] fifo_count = wr_ptr - rd_ptr;
    assign data_count = fifo_count;
    
    assign full = (fifo_count == (1<<ADDR_WIDTH));
    assign empty = (fifo_count == 0);
    assign wr_ready = !full;
    assign rd_valid = !empty;
    
    // Calculate hit ratio as fixed point (0-10000 for 0.00%-100.00%)
    assign hit_ratio = (cache_hits + cache_misses == 0) ? 0 :
                       (cache_hits * 10000) / (cache_hits + cache_misses);
    
    // Function to find index of least recently used cache entry
    function [$clog2(CACHE_SIZE)-1:0] find_lru_index;
        input [$clog2(CACHE_SIZE)-1:0] counters [0:CACHE_SIZE-1];
        reg [$clog2(CACHE_SIZE)-1:0] min_idx;
        reg [$clog2(CACHE_SIZE)-1:0] max_counter;
        begin
            min_idx = 0;
            max_counter = counters[0];
            
            for (integer i = 1; i < CACHE_SIZE; i = i + 1) begin
                if (counters[i] > max_counter) begin
                    max_counter = counters[i];
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
                    // LRU replacement
                    idx = find_lru_index(counters);
                end else begin
                    // FIFO replacement (round-robin)
                    idx = (counters[0] % CACHE_SIZE);
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
        integer i, j;
        reg [$clog2(CACHE_SIZE)-1:0] cache_idx;
        reg [CACHE_SIZE-1:0] matched_tag;
        reg hit_index;
        
        if (!rst_n) begin
            wr_ptr <= 0;
            rd_ptr <= 0;
            rd_hit <= 0;
            cache_hits <= 0;
            cache_misses <= 0;
            
            // Initialize cache
            for (i = 0; i < CACHE_SIZE; i = i + 1) begin
                cache_valid[i] <= 0;
                lru_counters[i] <= i[$clog2(CACHE_SIZE)-1:0];
                cache_data[i] <= 0;
                cache_tags[i] <= 0;
            end
        end else begin
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
            if (rd_en && !empty) begin
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
                    
                    // Update LRU counters manually to avoid delayed assignments in loops
                    if (LRU_POLICY) begin
                        for (i = 0; i < CACHE_SIZE; i = i + 1) begin
                            if (i[$clog2(CACHE_SIZE)-1:0] == hit_index) begin
                                lru_counters[i] <= 0; // Most recently used
                            end else if (lru_counters[i] < lru_counters[hit_index]) begin
                                lru_counters[i] <= lru_counters[i] + 1;
                            end
                        end
                    end
                end else begin
                    // Cache miss - search in main FIFO memory
                    reg [TAG_WIDTH-1:0] found_tag;
                    reg [DATA_WIDTH-1:0] found_data;
                    reg tag_found;
                    reg [ADDR_WIDTH-1:0] found_addr;
                    
                    tag_found = 0;
                    found_addr = rd_ptr[ADDR_WIDTH-1:0];
                    
                    // Search for tag in FIFO memory
                    for (i = 0; i < fifo_count; i = i + 1) begin
                        reg [ADDR_WIDTH-1:0] addr;
                        addr = (rd_ptr + i) % (1<<ADDR_WIDTH);
                        if (tag_mem[addr] == rd_tag) begin
                            found_tag = tag_mem[addr];
                            found_data = mem[addr];
                            found_addr = addr;
                            tag_found = 1;
                            i = fifo_count; // Break the loop
                        end
                    end
                    
                    if (tag_found) begin
                        // Found in FIFO but not in cache
                        rd_data <= found_data;
                        cache_misses <= cache_misses + 1;
                        
                        // Add to cache - find a suitable cache index
                        cache_idx = find_cache_index(cache_valid, lru_counters);
                        
                        cache_valid[cache_idx] <= 1;
                        cache_tags[cache_idx] <= found_tag;
                        cache_data[cache_idx] <= found_data;
                        
                        // Update LRU counters for the cache insertion
                        if (LRU_POLICY) begin
                            for (i = 0; i < CACHE_SIZE; i = i + 1) begin
                                if (i[$clog2(CACHE_SIZE)-1:0] == cache_idx) begin
                                    lru_counters[i] <= 0; // Most recently used
                                end else begin
                                    lru_counters[i] <= lru_counters[i] + 1;
                                end
                            end
                        end else begin
                            // For FIFO policy, just increment the counter
                            lru_counters[0] <= lru_counters[0] + 1;
                        end
                    end else begin
                        // Tag not found in FIFO either - return first item
                        rd_data <= mem[rd_ptr[ADDR_WIDTH-1:0]];
                        cache_misses <= cache_misses + 1;
                    end
                end
                
                // Advance read pointer
                rd_ptr <= rd_ptr + 1'b1;
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