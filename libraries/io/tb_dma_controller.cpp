#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <memory>
#include <vector>
#include "Vdma_controller.h"

#define MAX_SIM_TIME 10000
vluint64_t sim_time = 0;

// Test parameters - must match with Verilator parameters
#define ADDR_WIDTH 32
#define DATA_WIDTH 32
#define CHANNEL_COUNT 4
#define MAX_BURST_LENGTH 16

// Memory simulation class
class Memory {
private:
    std::vector<uint32_t> data;
    size_t size;
    
public:
    Memory(size_t size_bytes) : size(size_bytes / 4) {
        data.resize(size, 0);
    }
    
    uint32_t read(uint32_t addr) {
        uint32_t word_addr = addr / 4;
        if (word_addr < size) {
            return data[word_addr];
        }
        std::cerr << "ERROR: Out of bounds memory read at " << std::hex << addr << std::endl;
        return 0;
    }
    
    void write(uint32_t addr, uint32_t value, uint8_t byte_enable = 0xF) {
        uint32_t word_addr = addr / 4;
        if (word_addr < size) {
            uint32_t current = data[word_addr];
            uint32_t mask = 0;
            if (byte_enable & 0x1) mask |= 0x000000FF;
            if (byte_enable & 0x2) mask |= 0x0000FF00;
            if (byte_enable & 0x4) mask |= 0x00FF0000;
            if (byte_enable & 0x8) mask |= 0xFF000000;
            
            data[word_addr] = (current & ~mask) | (value & mask);
        } else {
            std::cerr << "ERROR: Out of bounds memory write at " << std::hex << addr << std::endl;
        }
    }
    
    void dump(uint32_t start_addr, uint32_t length) {
        uint32_t start_word = start_addr / 4;
        uint32_t end_word = start_word + length;
        
        if (end_word > size) {
            end_word = size;
        }
        
        std::cout << "Memory dump from 0x" << std::hex << start_addr << " (" << std::dec << length << " words):\n";
        for (uint32_t i = start_word; i < end_word; i++) {
            std::cout << "0x" << std::hex << (i * 4) << ": 0x" << std::hex << data[i] << std::endl;
        }
        std::cout << std::dec; // Reset to decimal
    }
    
    void fill_pattern(uint32_t start_addr, uint32_t length, uint32_t pattern_start = 0) {
        uint32_t start_word = start_addr / 4;
        uint32_t end_word = start_word + length;
        
        if (end_word > size) {
            end_word = size;
        }
        
        for (uint32_t i = start_word, j = pattern_start; i < end_word; i++, j++) {
            data[i] = 0xA0000000 | j;
        }
    }
    
    bool verify_pattern(uint32_t start_addr, uint32_t length, uint32_t pattern_start = 0) {
        uint32_t start_word = start_addr / 4;
        uint32_t end_word = start_word + length;
        
        if (end_word > size) {
            end_word = size;
        }
        
        for (uint32_t i = start_word, j = pattern_start; i < end_word; i++, j++) {
            if (data[i] != (0xA0000000 | j)) {
                std::cout << "Verification failed at addr 0x" << std::hex << (i * 4) 
                          << ": expected 0x" << (0xA0000000 | j) 
                          << ", got 0x" << data[i] << std::dec << std::endl;
                return false;
            }
        }
        return true;
    }
};

int main(int argc, char** argv) {
    // Test tracking variables
    int tests_passed = 0;
    int total_tests = 3; // Three test cases
    bool all_tests_passed = true;
    
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create instance of the top module
    Vdma_controller* top = new Vdma_controller;
    
    // Enable waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("waveform.vcd");
    
    // Create memory for testing
    Memory src_mem(1024 * 4); // 1KB source memory
    Memory dst_mem(1024 * 4); // 1KB destination memory
    
    // Fill source memory with test pattern
    src_mem.fill_pattern(0, 256);
    
    // Variables to track memory interface state
    bool src_reading = false;
    bool dst_writing = false;
    uint32_t src_addr_latched = 0;
    uint32_t dst_addr_latched = 0;
    uint32_t src_data_latched = 0;
    
    // Clock function
    auto tick = [&]() {
        // Process source memory read
        if (top->src_read && top->src_rready) {
            src_reading = true;
            src_addr_latched = top->src_addr;
            src_data_latched = src_mem.read(src_addr_latched);
        }
        
        // Process destination memory write
        if (top->dst_write) {
            dst_writing = true;
            dst_addr_latched = top->dst_addr;
        }
        
        // Rising edge
        top->clk = 1;
        top->eval();
        tfp->dump(sim_time++);
        
        // Handle memory interface signals
        if (src_reading) {
            top->src_rvalid = 1;
            top->src_rdata = src_data_latched;
            
            if (!top->src_rready) {
                src_reading = false;
                top->src_rvalid = 0;
            }
        } else {
            top->src_rvalid = 0;
        }
        
        if (dst_writing) {
            top->dst_wready = 1;
            dst_mem.write(dst_addr_latched, top->dst_wdata, top->dst_wstrb);
            
            if (!top->dst_write) {
                dst_writing = false;
                top->dst_wready = 0;
            }
        } else {
            top->dst_wready = 1; // Always ready to accept writes
        }
        
        // Falling edge
        top->clk = 0;
        top->eval();
        tfp->dump(sim_time++);
    };
    
    // Initialize inputs
    top->clk = 0;
    top->rst_n = 0;
    top->src_rvalid = 0;
    top->dst_wready = 1;
    top->channel_enable = 0;
    top->channel_start = 0;
    
    // Apply reset for a few clock cycles
    for (int i = 0; i < 5; i++) {
        tick();
    }
    
    // Release reset
    top->rst_n = 1;
    tick();
    
    std::cout << "=== DMA Controller Test ===\n";
    
    // Test 1: Basic memory-to-memory transfer
    std::cout << "\nTest 1: Basic memory-to-memory transfer\n";
    
    // Configure channel 0 for memory-to-memory transfer
    top->channel_enable = 0x1; // Enable channel 0
    top->channel_src_addr[0] = 0x0; // Source address
    top->channel_dst_addr[0] = 0x400; // Destination address (1KB offset)
    top->channel_length[0] = 16; // Transfer 16 words
    top->channel_mode[0] = 0; // MEM2MEM mode
    tick();
    
    // Start the transfer
    top->channel_start = 0x1; // Start channel 0
    tick();
    top->channel_start = 0x0; // Clear start signal
    
    // Wait for the transfer to complete
    int timeout = 1000;
    while (!top->channel_done[0] && --timeout > 0) {
        tick();
    }
    
    // Verify the transfer
    std::cout << "Channel 0 done: " << (top->channel_done[0] ? "YES" : "NO") << std::endl;
    std::cout << "Channel 0 busy: " << (top->channel_busy[0] ? "YES" : "NO") << std::endl;
    std::cout << "Transfer completed in " << (1000 - timeout) << " cycles\n";
    
    // Check if source data was copied to destination
    bool test1_pass = dst_mem.verify_pattern(0x400, 16);
    if (test1_pass && top->channel_done[0] && !top->channel_busy[0] && timeout > 0) {
        std::cout << "Test 1: PASSED - Memory-to-memory transfer completed successfully\n";
        tests_passed++;
    } else {
        std::cout << "Test 1: FAILED - ";
        if (timeout <= 0) std::cout << "Transfer timed out\n";
        else if (!test1_pass) std::cout << "Data verification failed\n";
        else std::cout << "Unexpected channel status\n";
        all_tests_passed = false;
    }
    
    // Test 2: Multi-channel concurrent transfer
    std::cout << "\nTest 2: Multi-channel concurrent transfer\n";
    
    // Configure channel 0 and 1 for memory-to-memory transfer
    top->channel_enable = 0x3; // Enable channels 0 and 1
    
    // Channel 0 transfer
    top->channel_src_addr[0] = 0x100; // Source address
    top->channel_dst_addr[0] = 0x500; // Destination address
    top->channel_length[0] = 8; // Transfer 8 words
    top->channel_mode[0] = 0; // MEM2MEM mode
    
    // Channel 1 transfer
    top->channel_src_addr[1] = 0x200; // Source address
    top->channel_dst_addr[1] = 0x600; // Destination address
    top->channel_length[1] = 12; // Transfer 12 words
    top->channel_mode[1] = 0; // MEM2MEM mode
    
    tick();
    
    // Start both transfers
    top->channel_start = 0x3; // Start channels 0 and 1
    tick();
    top->channel_start = 0x0; // Clear start signals
    
    // Wait for both transfers to complete
    timeout = 2000;
    while (!(top->channel_done[0] && top->channel_done[1]) && --timeout > 0) {
        tick();
    }
    
    // Verify the transfers
    std::cout << "Channel 0 done: " << (top->channel_done[0] ? "YES" : "NO") << std::endl;
    std::cout << "Channel 1 done: " << (top->channel_done[1] ? "YES" : "NO") << std::endl;
    std::cout << "Transfers completed in " << (2000 - timeout) << " cycles\n";
    
    // Check if source data was copied to destination for both channels
    bool ch0_verified = dst_mem.verify_pattern(0x500, 8, 0x100/4);
    bool ch1_verified = dst_mem.verify_pattern(0x600, 12, 0x200/4);
    
    if (ch0_verified && ch1_verified && top->channel_done[0] && top->channel_done[1] && timeout > 0) {
        std::cout << "Test 2: PASSED - Multi-channel transfers completed successfully\n";
        tests_passed++;
    } else {
        std::cout << "Test 2: FAILED - ";
        if (timeout <= 0) std::cout << "Transfers timed out\n";
        else if (!ch0_verified) std::cout << "Channel 0 data verification failed\n";
        else if (!ch1_verified) std::cout << "Channel 1 data verification failed\n";
        else std::cout << "Unexpected channel status\n";
        all_tests_passed = false;
    }
    
    // Test 3: I/O mode transfer
    std::cout << "\nTest 3: I/O mode transfer (MEM2IO)\n";
    
    // Configure channel 2 for memory-to-IO transfer
    top->channel_enable = 0x4; // Enable channel 2
    top->channel_src_addr[2] = 0x300; // Source address
    top->channel_dst_addr[2] = 0x700; // Destination I/O address
    top->channel_length[2] = 8; // Transfer 8 words
    top->channel_mode[2] = 1; // MEM2IO mode
    tick();
    
    // Start the transfer
    top->channel_start = 0x4; // Start channel 2
    tick();
    top->channel_start = 0x0; // Clear start signal
    
    // Wait for the transfer to complete
    timeout = 1000;
    while (!top->channel_done[2] && --timeout > 0) {
        tick();
    }
    
    // Verify the transfer
    std::cout << "Channel 2 done: " << (top->channel_done[2] ? "YES" : "NO") << std::endl;
    std::cout << "Transfer completed in " << (1000 - timeout) << " cycles\n";
    
    // For I/O mode, we assume writes worked if the transfer completed
    if (top->channel_done[2] && !top->channel_busy[2] && timeout > 0) {
        std::cout << "Test 3: PASSED - Memory-to-IO transfer completed successfully\n";
        tests_passed++;
    } else {
        std::cout << "Test 3: FAILED - ";
        if (timeout <= 0) std::cout << "Transfer timed out\n";
        else std::cout << "Unexpected channel status\n";
        all_tests_passed = false;
    }
    
    // Dump some memory for debug purposes
    src_mem.dump(0x0, 16);
    dst_mem.dump(0x400, 16);
    dst_mem.dump(0x500, 8);
    dst_mem.dump(0x600, 12);
    
    // Cleanup and finish
    for (int i = 0; i < 10; i++) {
        tick();
    }
    
    tfp->close();
    delete top;
    delete tfp;
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====\n";
    std::cout << "Result: " << (all_tests_passed ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << tests_passed << " of " << total_tests << std::endl;
    
    return all_tests_passed ? 0 : 1;
} 