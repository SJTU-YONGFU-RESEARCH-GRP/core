#include "Vconfigurable_clz_clo.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <bitset>
#include <iomanip>
#include <cmath>

// Helper function to count leading zeros or ones in software for verification
uint32_t count_leading(uint32_t data, bool count_ones, int data_width) {
    uint32_t count = 0;
    uint32_t mask = 1UL << (data_width - 1);
    
    for (int i = 0; i < data_width; i++) {
        if ((count_ones && (data & mask)) || (!count_ones && !(data & mask))) {
            count++;
            mask >>= 1;
        } else {
            break;
        }
    }
    
    return count;
}

bool is_all_zeros(uint32_t data, int data_width) {
    uint32_t mask = (data_width == 32) ? 0xFFFFFFFF : ((1ULL << data_width) - 1);
    return (data & mask) == 0;
}

bool is_all_ones(uint32_t data, int data_width) {
    uint32_t mask = (data_width == 32) ? 0xFFFFFFFF : ((1ULL << data_width) - 1);
    return (data & mask) == mask;
}

void check_operation(std::unique_ptr<Vconfigurable_clz_clo>& counter, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    const int DATA_WIDTH = 32;  // Must match the DATA_WIDTH parameter in the Verilog module
    const int COUNT_WIDTH = std::log2(DATA_WIDTH + 1);
    
    // Track test results
    int total_tests = 0;
    int passed_tests = 0;
    
    std::cout << "Testing Configurable CLZ/CLO with DATA_WIDTH=" << DATA_WIDTH << std::endl;
    
    // Test data patterns
    uint32_t test_patterns[] = {
        0x00000000,  // All zeros
        0xFFFFFFFF,  // All ones
        0x80000000,  // Single bit at MSB
        0x00000001,  // Single bit at LSB
        0x7FFFFFFF,  // All ones except MSB
        0xFFFFFFFE,  // All ones except LSB
        0x0F0F0F0F,  // Alternating nibbles
        0xF0F0F0F0,  // Alternating nibbles (inverted)
        0x55555555,  // Alternating bits
        0xAAAAAAAA,  // Alternating bits (inverted)
        0x00FFFFFF,  // Leading zeros followed by ones
        0xFF000000   // Leading ones followed by zeros
    };
    
    // Test both count modes
    for (uint32_t pattern : test_patterns) {
        for (int mode = 0; mode <= 1; mode++) {
            total_tests++;
            bool count_ones = (mode == 1);
            
            // Apply inputs
            counter->data_in = pattern;
            counter->count_ones = count_ones;
            counter->eval();
            if (tfp) tfp->dump(sim_time);
            sim_time++;
            
            // Calculate expected results
            uint32_t expected_count = count_leading(pattern, count_ones, DATA_WIDTH);
            bool expected_all_zeros = is_all_zeros(pattern, DATA_WIDTH);
            bool expected_all_ones = is_all_ones(pattern, DATA_WIDTH);
            
            // Verify output
            std::cout << "Input: 0x" << std::hex << std::setw(8) << std::setfill('0') << pattern
                      << ", Mode: Count Leading " << (count_ones ? "Ones" : "Zeros")
                      << ", Count: " << std::dec << counter->count_out
                      << ", All Zeros: " << counter->all_zeros
                      << ", All Ones: " << counter->all_ones;
            
            bool count_pass = (counter->count_out == expected_count);
            bool zeros_pass = (counter->all_zeros == expected_all_zeros);
            bool ones_pass = (counter->all_ones == expected_all_ones);
            bool pass = count_pass && zeros_pass && ones_pass;
            
            if (!pass) {
                std::cout << " - ERROR: Expected Count=" << expected_count
                          << ", All Zeros=" << expected_all_zeros
                          << ", All Ones=" << expected_all_ones;
            } else {
                std::cout << " - PASS";
                passed_tests++;
            }
            std::cout << std::endl;
        }
    }
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (passed_tests == total_tests ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << passed_tests << " of " << total_tests << std::endl;
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    std::unique_ptr<Vconfigurable_clz_clo> counter = std::make_unique<Vconfigurable_clz_clo>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    counter->trace(tfp.get(), 99);  // Trace 99 levels of hierarchy
    tfp->open("configurable_clz_clo_sim.vcd");
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Run tests
    check_operation(counter, tfp.get(), sim_time);
    
    // Cleanup
    tfp->close();
    counter->final();
    
    return 0;
} 