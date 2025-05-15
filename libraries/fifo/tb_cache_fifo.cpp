#include <stdlib.h>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vcache_fifo.h"

#define MAX_SIM_TIME 1000
vluint64_t sim_time = 0;
vluint64_t posedge_cnt = 0;

// Test parameters
#define DATA_WIDTH 32
#define ADDR_WIDTH 4
#define TAG_WIDTH 8
#define FIFO_DEPTH (1 << ADDR_WIDTH)
#define CACHE_SIZE 4

void clock_cycle(Vcache_fifo *dut, VerilatedVcdC *m_trace) {
    dut->clk = 0;
    dut->eval();
    sim_time++;
    m_trace->dump(sim_time);
    
    dut->clk = 1;
    dut->eval();
    sim_time++;
    m_trace->dump(sim_time);
    posedge_cnt++;
}

// Function to write data to the FIFO
void write_data(Vcache_fifo *dut, VerilatedVcdC *m_trace, uint32_t data, uint8_t tag, bool &success) {
    dut->wr_en = 1;
    dut->wr_data = data;
    dut->wr_tag = tag;
    clock_cycle(dut, m_trace);
    
    success = dut->wr_ready;
    
    dut->wr_en = 0;
    clock_cycle(dut, m_trace);
}

// Function to read data from the FIFO by tag
void read_data_by_tag(Vcache_fifo *dut, VerilatedVcdC *m_trace, uint8_t tag, uint32_t &data, bool &valid, bool &hit) {
    dut->rd_en = 1;
    dut->rd_tag = tag;
    clock_cycle(dut, m_trace);
    
    data = dut->rd_data;
    valid = dut->rd_valid;
    hit = dut->rd_hit;
    
    dut->rd_en = 0;
    clock_cycle(dut, m_trace);
}

// Format hit ratio as percentage string
std::string formatHitRatio(uint32_t ratio) {
    char buffer[10];
    sprintf(buffer, "%d.%02d%%", ratio / 100, ratio % 100);
    return std::string(buffer);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Vcache_fifo *dut = new Vcache_fifo;
    
    // Enable waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform_cache_fifo.vcd");
    
    // Initialize signals
    dut->clk = 0;
    dut->rst_n = 0;
    dut->wr_en = 0;
    dut->rd_en = 0;
    dut->wr_data = 0;
    dut->wr_tag = 0;
    dut->rd_tag = 0;
    dut->clear_stats = 0;
    
    // Apply reset
    for (int i = 0; i < 5; i++) {
        clock_cycle(dut, m_trace);
    }
    dut->rst_n = 1;
    for (int i = 0; i < 2; i++) {
        clock_cycle(dut, m_trace);
    }
    
    std::cout << "Starting Cache FIFO test..." << std::endl;
    
    // Create a map to store tag->data pairs
    std::unordered_map<uint8_t, uint32_t> tag_data_map;
    
    // Test 1: Basic write and read operations with different tags
    std::cout << "Test 1: Basic write and read operations with different tags" << std::endl;
    
    // Write several items with different tags
    for (int i = 1; i <= 8; i++) {
        uint8_t tag = i;
        uint32_t data = i * 0x1000 + i;
        bool success;
        
        write_data(dut, m_trace, data, tag, success);
        
        if (success) {
            tag_data_map[tag] = data;
            std::cout << "Wrote data: 0x" << std::hex << data << std::dec
                     << " with tag: " << (int)tag 
                     << " (data_count=" << (int)dut->data_count << ")" << std::endl;
        }
    }
    
    // Read the data back in a different order to test cache behavior
    std::cout << "\nReading data in different order:" << std::endl;
    
    // First read in sequential order to fill cache
    for (int tag = 1; tag <= 4; tag++) {
        uint32_t data;
        bool valid, hit;
        
        read_data_by_tag(dut, m_trace, tag, data, valid, hit);
        
        std::cout << "Read tag " << tag << ": data=0x" << std::hex << data << std::dec
                 << " (Expected: 0x" << std::hex << tag_data_map[tag] << std::dec << ")"
                 << " (Valid: " << valid << ", Hit: " << hit << ")"
                 << " (Cache stats: hits=" << dut->cache_hits 
                 << ", misses=" << dut->cache_misses
                 << ", ratio=" << formatHitRatio(dut->hit_ratio) << ")" << std::endl;
    }
    
    // Then read the same data again to test cache hits
    std::cout << "\nReading same data again to test cache hits:" << std::endl;
    for (int tag = 1; tag <= 4; tag++) {
        uint32_t data;
        bool valid, hit;
        
        read_data_by_tag(dut, m_trace, tag, data, valid, hit);
        
        std::cout << "Read tag " << tag << " again: data=0x" << std::hex << data << std::dec
                 << " (Expected cache hit: " << (hit ? "YES" : "NO") << ")"
                 << " (Cache stats: hits=" << dut->cache_hits 
                 << ", misses=" << dut->cache_misses
                 << ", ratio=" << formatHitRatio(dut->hit_ratio) << ")" << std::endl;
    }
    
    // Read tags that should cause cache eviction
    std::cout << "\nReading data that causes cache eviction:" << std::endl;
    for (int tag = 5; tag <= 8; tag++) {
        uint32_t data;
        bool valid, hit;
        
        read_data_by_tag(dut, m_trace, tag, data, valid, hit);
        
        std::cout << "Read tag " << tag << ": data=0x" << std::hex << data << std::dec
                 << " (Expected: 0x" << std::hex << tag_data_map[tag] << std::dec << ")"
                 << " (Valid: " << valid << ", Hit: " << hit << ")"
                 << " (Cache stats: hits=" << dut->cache_hits 
                 << ", misses=" << dut->cache_misses
                 << ", ratio=" << formatHitRatio(dut->hit_ratio) << ")" << std::endl;
    }
    
    // Test 2: Clear statistics and test LRU eviction policy
    std::cout << "\nTest 2: Clear statistics and test LRU eviction policy" << std::endl;
    
    // Clear statistics
    dut->clear_stats = 1;
    clock_cycle(dut, m_trace);
    dut->clear_stats = 0;
    clock_cycle(dut, m_trace);
    
    std::cout << "After clearing stats: hits=" << dut->cache_hits 
              << ", misses=" << dut->cache_misses
              << ", ratio=" << formatHitRatio(dut->hit_ratio) << std::endl;
    
    // Test the LRU eviction policy by accessing specific tags in particular order
    std::cout << "\nTest LRU policy with specific access pattern:" << std::endl;
    
    // First read some tags to fill the cache
    uint8_t access_sequence[] = {10, 20, 30, 40, 10, 20, 50, 60, 10, 30};
    
    // Write these tags with data
    for (uint8_t tag : access_sequence) {
        if (tag_data_map.find(tag) == tag_data_map.end()) {
            uint32_t data = tag * 0x1000 + tag;
            bool success;
            
            write_data(dut, m_trace, data, tag, success);
            
            if (success) {
                tag_data_map[tag] = data;
                std::cout << "Wrote data: 0x" << std::hex << data << std::dec
                         << " with tag: " << (int)tag << std::endl;
            }
        }
    }
    
    // Now access in the sequence designed to test LRU
    for (int i = 0; i < sizeof(access_sequence)/sizeof(access_sequence[0]); i++) {
        uint8_t tag = access_sequence[i];
        uint32_t data;
        bool valid, hit;
        
        read_data_by_tag(dut, m_trace, tag, data, valid, hit);
        
        std::cout << "Access " << (i+1) << ": tag " << (int)tag 
                 << ", data=0x" << std::hex << data << std::dec
                 << " (Hit: " << hit << ")"
                 << " (Cache stats: hits=" << dut->cache_hits 
                 << ", misses=" << dut->cache_misses
                 << ", ratio=" << formatHitRatio(dut->hit_ratio) << ")" << std::endl;
    }
    
    // Final cache hit rate
    std::cout << "\nFinal cache statistics:" << std::endl;
    std::cout << "Hits:      " << dut->cache_hits << std::endl;
    std::cout << "Misses:    " << dut->cache_misses << std::endl;
    std::cout << "Hit ratio: " << formatHitRatio(dut->hit_ratio) << std::endl;
    
    std::cout << "\nCache FIFO test completed!" << std::endl;
    
    // Cleanup
    m_trace->close();
    delete m_trace;
    delete dut;
    
    return 0;
} 