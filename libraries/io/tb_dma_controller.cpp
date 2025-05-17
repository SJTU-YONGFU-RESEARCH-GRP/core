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

// Helper functions to access flattened arrays
uint32_t get_addr(uint32_t* addr_array, int index) {
    return addr_array[index];
}

uint32_t get_data(uint32_t* data_array, int index) {
    return data_array[index];
}

uint32_t get_length(uint32_t* length_array, int index) {
    return length_array[index];
}

uint8_t get_mode(uint8_t* mode_array, int index) {
    return mode_array[index];
}

void set_addr(uint32_t* addr_array, int index, uint32_t value) {
    addr_array[index] = value;
}

void set_data(uint32_t* data_array, int index, uint32_t value) {
    data_array[index] = value;
}

uint8_t get_debug_state(uint8_t* state_array, int index) {
    return (state_array[index/4] >> ((index % 4) * 3)) & 0x7;
}

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
    
    // Clock function
    auto tick = [&]() {
        // Process source memory read for each channel
        for (int ch = 0; ch < CHANNEL_COUNT; ch++) {
            if (top->src_read & (1 << ch)) {
                uint32_t addr = get_addr((uint32_t*)&top->src_addr, ch);
                ((uint32_t*)&top->src_rdata)[ch] = src_mem.read(addr);
                top->src_rvalid |= (1 << ch);
            } else {
                top->src_rvalid &= ~(1 << ch);
            }
        }
        
        // Process destination memory write for each channel
        for (int ch = 0; ch < CHANNEL_COUNT; ch++) {
            if (top->dst_write & (1 << ch)) {
                uint32_t addr = get_addr((uint32_t*)&top->dst_addr, ch);
                uint32_t data = get_data((uint32_t*)&top->dst_wdata, ch);
                uint8_t strb = (top->dst_wstrb >> (ch * 4)) & 0xF;
                dst_mem.write(addr, data, strb);
                top->dst_wready |= (1 << ch);
            } else {
                top->dst_wready |= (1 << ch); // Always ready to accept writes
            }
        }
        
        // Rising edge
        top->clk = 1;
        top->eval();
        tfp->dump(sim_time++);
        
        // Falling edge
        top->clk = 0;
        top->eval();
        tfp->dump(sim_time++);
    };
    
    // Initialize inputs
    top->clk = 0;
    top->rst_n = 0;
    
    // Initialize signals
    top->src_rvalid = 0;
    top->dst_wready = 0xF; // All channels ready
    
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
    
    // Modify channel configuration and access
    top->channel_enable = 0x1; // Enable channel 0
    set_addr((uint32_t*)&top->channel_src_addr, 0, 0x0); // Source address
    set_addr((uint32_t*)&top->channel_dst_addr, 0, 0x400); // Destination address (1KB offset)
    ((uint32_t*)&top->channel_length)[0] = 16; // Transfer 16 words
    
    // Set mode
    top->channel_mode = 0; // MEM2MEM mode for channel 0
    
    // Start the transfer
    top->channel_start = 0x1; // Start channel 0
    tick();
    top->channel_start = 0x0; // Clear start signal
    
    // Wait for the transfer to complete
    int timeout = 1000;
    while (!(top->channel_done & 0x1) && --timeout > 0) {
        tick();
    }
    
    // Verify the transfer
    std::cout << "Channel 0 done: " << ((top->channel_done & 0x1) ? "YES" : "NO") << std::endl;
    std::cout << "Channel 0 busy: " << ((top->channel_busy & 0x1) ? "YES" : "NO") << std::endl;
    std::cout << "Transfer completed in " << (1000 - timeout) << " cycles\n";
    
    // Check if source data was copied to destination
    bool test1_pass = dst_mem.verify_pattern(0x400, 16);
    if (test1_pass && (top->channel_done & 0x1) && !(top->channel_busy & 0x1) && timeout > 0) {
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
    
    // Reset the DMA controller
    top->rst_n = 0;
    for (int i = 0; i < 5; i++) {
        tick();
    }
    top->rst_n = 1;
    tick();
    
    // Clear destination memory for clean test
    for (uint32_t addr = 0x400; addr < 0x800; addr += 4) {
        dst_mem.write(addr, 0);
    }
    
    // Prepare multiple channels
    top->channel_enable = 0xF; // Enable all 4 channels
    
    // Channel 0: Transfer from 0x0 to 0x400
    set_addr((uint32_t*)&top->channel_src_addr, 0, 0x0);
    set_addr((uint32_t*)&top->channel_dst_addr, 0, 0x400);
    ((uint32_t*)&top->channel_length)[0] = 16;
    
    // Channel 1: Transfer from 0x100 to 0x500
    set_addr((uint32_t*)&top->channel_src_addr, 1, 0x100);
    set_addr((uint32_t*)&top->channel_dst_addr, 1, 0x500);
    ((uint32_t*)&top->channel_length)[1] = 16;
    
    // Channel 2: Transfer from 0x200 to 0x600
    set_addr((uint32_t*)&top->channel_src_addr, 2, 0x200);
    set_addr((uint32_t*)&top->channel_dst_addr, 2, 0x600);
    ((uint32_t*)&top->channel_length)[2] = 16;
    
    // Channel 3: Transfer from 0x300 to 0x700
    set_addr((uint32_t*)&top->channel_src_addr, 3, 0x300);
    set_addr((uint32_t*)&top->channel_dst_addr, 3, 0x700);
    ((uint32_t*)&top->channel_length)[3] = 16;
    
    // Set mode for all channels (0 = MEM2MEM)
    top->channel_mode = 0;
    
    // Fill source memory with test patterns
    src_mem.fill_pattern(0x0, 16, 0);      // Pattern: 0xA0000000-0xA000000F
    src_mem.fill_pattern(0x100, 16, 0x40); // Pattern: 0xA0000040-0xA000004F (matches expected verification)
    src_mem.fill_pattern(0x200, 16, 0x80); // Pattern: 0xA0000080-0xA000008F (matches expected verification)
    src_mem.fill_pattern(0x300, 16, 0xC0); // Pattern: 0xA00000C0-0xA00000CF
    
    std::cout << "Source memory patterns set:\n";
    std::cout << "Channel 0: 0xA0000000-0xA000000F\n";
    std::cout << "Channel 1: 0xA0000040-0xA000004F\n";
    std::cout << "Channel 2: 0xA0000080-0xA000008F\n";
    std::cout << "Channel 3: 0xA00000C0-0xA00000CF\n\n";
    
    // Start all channels
    top->channel_start = 0xF;
    tick();
    top->channel_start = 0x0;
    
    // Wait for transfers to complete with detailed debugging
    int cycles_waited = 0;
    timeout = 2000;
    
    // Detailed state tracking
    std::vector<bool> channel_processed(CHANNEL_COUNT, false);
    std::vector<int> channel_transfer_cycles(CHANNEL_COUNT, 0);
    std::vector<int> last_debug_cycle(CHANNEL_COUNT, 0);
    
    // Track transfer progress
    while (!(top->channel_done == 0xF) && --timeout > 0) {
        tick();
        cycles_waited++;
        
        // Record state changes and debug info
        for (int ch = 0; ch < CHANNEL_COUNT; ++ch) {
            // Track channel completion
            if (!channel_processed[ch] && (top->channel_done & (1 << ch))) {
                channel_processed[ch] = true;
                channel_transfer_cycles[ch] = cycles_waited;
                std::cout << "Cycle " << cycles_waited << ": Channel " << ch << " completed transfer.\n";
                
                // Verify immediately when a channel completes
                uint32_t dst_addr = 0x400 + (ch * 0x100);
                uint32_t pattern_start = ch == 0 ? 0 : 
                                        ch == 1 ? 0x40 : 
                                        ch == 2 ? 0x80 : 0xC0;
                bool ch_verified = dst_mem.verify_pattern(dst_addr, 16, pattern_start);
                
                if (ch_verified) {
                    std::cout << "  Verification PASSED for channel " << ch << "\n";
                } else {
                    std::cout << "  Verification FAILED for channel " << ch << "\n";
                    dst_mem.dump(dst_addr, 16);
                }
            }
            
            // Periodic detailed debug
            if (cycles_waited % 25 == 0 || 
                ((top->channel_busy & (1 << ch)) && cycles_waited - last_debug_cycle[ch] >= 25)) {
                last_debug_cycle[ch] = cycles_waited;
                
                std::cout << "Cycle " << cycles_waited << " - Ch" << ch 
                          << ": Busy=" << ((top->channel_busy & (1 << ch)) ? "Y" : "N")
                          << " Done=" << ((top->channel_done & (1 << ch)) ? "Y" : "N");
                
                if (top->src_read & (1 << ch)) std::cout << " READ";
                if (top->src_rready & (1 << ch)) std::cout << " RREADY";
                if (top->src_rvalid & (1 << ch)) std::cout << " RVALID";
                if (top->dst_write & (1 << ch)) std::cout << " WRITE";
                if (top->dst_wready & (1 << ch)) std::cout << " WREADY";
                
                std::cout << std::endl;
            }
        }
    }
    
    // Final status report
    std::cout << "\n=== Multi-Channel Transfer Results ===\n";
    std::cout << "Total cycles: " << cycles_waited << " (timeout: " << (timeout > 0 ? "No" : "Yes") << ")\n";
    
    for (int ch = 0; ch < CHANNEL_COUNT; ++ch) {
        std::cout << "Channel " << ch << ": " 
                  << ((top->channel_done & (1 << ch)) ? "COMPLETED" : "INCOMPLETE")
                  << " in " << channel_transfer_cycles[ch] << " cycles\n";
    }
    
    // Dump memory from each channel destination
    for (int ch = 0; ch < CHANNEL_COUNT; ++ch) {
        std::cout << "\nMemory dump for channel " << ch << " destination:\n";
        dst_mem.dump(0x400 + (ch * 0x100), 16);
    }
    
    // Verify all channels
    bool ch0_verified = dst_mem.verify_pattern(0x400, 16, 0);
    bool ch1_verified = dst_mem.verify_pattern(0x500, 16, 0x40);
    bool ch2_verified = dst_mem.verify_pattern(0x600, 16, 0x80);
    bool ch3_verified = dst_mem.verify_pattern(0x700, 16, 0xC0);
    
    bool test2_pass = ch0_verified && ch1_verified && ch2_verified && ch3_verified;
    
    std::cout << "\nChannel verification results:\n";
    std::cout << "Channel 0: " << (ch0_verified ? "PASSED" : "FAILED") << "\n";
    std::cout << "Channel 1: " << (ch1_verified ? "PASSED" : "FAILED") << "\n";
    std::cout << "Channel 2: " << (ch2_verified ? "PASSED" : "FAILED") << "\n";
    std::cout << "Channel 3: " << (ch3_verified ? "PASSED" : "FAILED") << "\n";
    
    if (test2_pass && top->channel_done == 0xF && timeout > 0) {
        std::cout << "Test 2: PASSED - Multi-channel transfer completed successfully\n";
        tests_passed++;
    } else {
        std::cout << "Test 2: FAILED - ";
        if (timeout <= 0) std::cout << "Transfer timed out\n";
        else if (!test2_pass) {
            if (!ch0_verified) std::cout << "Channel 0 verification failed\n";
            else if (!ch1_verified) std::cout << "Channel 1 verification failed\n";
            else if (!ch2_verified) std::cout << "Channel 2 verification failed\n";
            else if (!ch3_verified) std::cout << "Channel 3 verification failed\n";
        }
        else std::cout << "Unexpected channel status\n";
        all_tests_passed = false;
    }
    
    // Test 3: I/O mode transfer
    std::cout << "\nTest 3: I/O mode transfer (MEM2IO)\n";
    
    // Reset the DMA controller
    top->rst_n = 0;
    for (int i = 0; i < 5; i++) {
        tick();
    }
    top->rst_n = 1;
    tick();
    
    // Configure channel 2 for memory-to-IO transfer
    top->channel_enable = 0x4; // Enable channel 2
    set_addr((uint32_t*)&top->channel_src_addr, 2, 0x300); // Source address
    set_addr((uint32_t*)&top->channel_dst_addr, 2, 0x700); // Destination I/O address
    ((uint32_t*)&top->channel_length)[2] = 8; // Transfer 8 words
    
    // Set mode for channel 2 (1 = MEM2IO)
    top->channel_mode = 4; // Bit pattern 0100 (channel 2 = MEM2IO)
    
    tick();
    
    // Start the transfer
    top->channel_start = 0x4; // Start channel 2
    tick();
    top->channel_start = 0x0; // Clear start signal
    
    // Wait for the transfer to complete
    timeout = 1000;
    cycles_waited = 0;
    
    while (!(top->channel_done & 0x4) && --timeout > 0) {
        tick();
        cycles_waited++;
        
        // Debug output
        if (cycles_waited % 25 == 0) {
            std::cout << "Cycle " << cycles_waited << " - Ch2"
                      << ": Busy=" << ((top->channel_busy & 0x4) ? "Y" : "N")
                      << " Done=" << ((top->channel_done & 0x4) ? "Y" : "N");
            std::cout << std::endl;
        }
    }
    
    // Verify the transfer
    std::cout << "Channel 2 done: " << ((top->channel_done & 0x4) ? "YES" : "NO") << std::endl;
    std::cout << "Transfer completed in " << cycles_waited << " cycles\n";
    
    // For I/O mode, we assume writes worked if the transfer completed
    if ((top->channel_done & 0x4) && timeout > 0) {
        std::cout << "Test 3: PASSED - Memory-to-IO transfer completed successfully\n";
        tests_passed++;
    } else {
        std::cout << "Test 3: FAILED - ";
        if (timeout <= 0) std::cout << "Transfer timed out\n";
        else std::cout << "Unexpected channel status\n";
        all_tests_passed = false;
    }
    
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