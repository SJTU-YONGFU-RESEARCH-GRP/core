#include "Vleading_zero_counter.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <bitset>
#include <cmath>
#include <iomanip>

// Helper function to calculate the expected number of leading zeros
uint32_t expected_lzc(uint32_t data, int data_width) {
    if (data == 0) {
        return data_width;
    }
    
    uint32_t count = 0;
    for (int i = data_width - 1; i >= 0; i--) {
        if ((data >> i) & 1) {
            break;
        }
        count++;
    }
    return count;
}

void check_operation(std::unique_ptr<Vleading_zero_counter>& lzc, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    const int DATA_WIDTH = 32;  // Must match the DATA_WIDTH parameter in the Verilog module
    const int COUNT_WIDTH = std::log2(DATA_WIDTH + 1);
    
    int total_tests = 0;
    int passed_tests = 0;
    
    std::cout << "Testing Leading Zero Counter with DATA_WIDTH=" << DATA_WIDTH << std::endl;
    
    // Test data patterns
    uint32_t test_patterns[] = {
        0x00000000,  // All zeros
        0x00000001,  // Single bit set at LSB
        0x80000000,  // Single bit set at MSB
        0x00010000,  // Single bit in the middle
        0x55555555,  // Alternating pattern
        0xAAAAAAAA,  // Alternating pattern (inverted)
        0xFFFFFFFF,  // All bits set
        0x12345678,  // Random pattern
        0x0000FFFF,  // Lower half bits set
        0xFFFF0000   // Upper half bits set
    };
    
    // Test each pattern
    for (uint32_t pattern : test_patterns) {
        total_tests++;
        
        // Apply input
        lzc->data_in = pattern;
        lzc->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        // Calculate expected result
        uint32_t expected = expected_lzc(pattern, DATA_WIDTH);
        bool expected_valid = (pattern != 0);
        
        // Verify output
        std::cout << "Input: 0x" << std::hex << std::setw(8) << std::setfill('0') << pattern
                  << " (" << std::bitset<32>(pattern) << ")"
                  << ", Leading Zeros: " << std::dec << lzc->zero_count
                  << ", Valid: " << (lzc->valid_input ? "Yes" : "No");
        
        bool pass = true;
        if (lzc->zero_count != expected) {
            std::cout << " - ERROR: Expected " << expected << " leading zeros";
            pass = false;
        }
        
        if (lzc->valid_input != expected_valid) {
            std::cout << " - ERROR: Expected valid_input to be " << (expected_valid ? "1" : "0");
            pass = false;
        }
        
        if (pass) {
            std::cout << " - PASS";
            passed_tests++;
        }
        std::cout << std::endl;
    }
    
    // Test some randomly generated patterns
    std::cout << "\nTesting with random patterns:" << std::endl;
    for (int i = 0; i < 10; i++) {
        total_tests++;
        
        uint32_t random_pattern = rand() & 0xFFFFFFFF;
        
        // Apply input
        lzc->data_in = random_pattern;
        lzc->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        // Calculate expected result
        uint32_t expected = expected_lzc(random_pattern, DATA_WIDTH);
        bool expected_valid = (random_pattern != 0);
        
        // Verify output
        std::cout << "Input: 0x" << std::hex << std::setw(8) << std::setfill('0') << random_pattern
                  << ", Leading Zeros: " << std::dec << lzc->zero_count
                  << ", Valid: " << (lzc->valid_input ? "Yes" : "No");
        
        bool pass = true;
        if (lzc->zero_count != expected) {
            std::cout << " - ERROR: Expected " << expected << " leading zeros";
            pass = false;
        }
        
        if (lzc->valid_input != expected_valid) {
            std::cout << " - ERROR: Expected valid_input to be " << (expected_valid ? "1" : "0");
            pass = false;
        }
        
        if (pass) {
            std::cout << " - PASS";
            passed_tests++;
        }
        std::cout << std::endl;
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
    std::unique_ptr<Vleading_zero_counter> lzc = std::make_unique<Vleading_zero_counter>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    lzc->trace(tfp.get(), 99);  // Trace 99 levels of hierarchy
    tfp->open("leading_zero_counter_sim.vcd");
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Run tests
    check_operation(lzc, tfp.get(), sim_time);
    
    // Cleanup
    tfp->close();
    lzc->final();
    
    return 0;
} 