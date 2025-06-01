#include "Vparameterized_barrel_rotator.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <bitset>
#include <iomanip>
#include <cmath>

// Helper function to perform rotation in software for verification
uint32_t rotate_data(uint32_t data, uint32_t amount, bool direction, int data_width) {
    if (amount == 0 || amount >= data_width) {
        return data;
    }
    
    // Create a mask based on data width
    uint32_t mask = 0;
    if (data_width == 32) {
        mask = 0xFFFFFFFF;
    } else {
        mask = (1ULL << data_width) - 1;
    }
    data &= mask;
    
    if (direction) {
        // Left rotation
        return ((data << amount) | (data >> (data_width - amount))) & mask;
    } else {
        // Right rotation
        return ((data >> amount) | (data << (data_width - amount))) & mask;
    }
}

int check_operation(std::unique_ptr<Vparameterized_barrel_rotator>& rotator, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    const int DATA_WIDTH = 32;  // Must match the DATA_WIDTH parameter in the Verilog module
    const int SHIFT_WIDTH = std::log2(DATA_WIDTH);
    
    std::cout << "Testing Parameterized Barrel Rotator with DATA_WIDTH=" << DATA_WIDTH << std::endl;
    
    int total_tests = 0;
    int passed_tests = 0;
    
    // Test data patterns
    uint32_t test_patterns[] = {
        0x00000001,  // Single bit at LSB
        0x80000000,  // Single bit at MSB
        0x55555555,  // Alternating pattern
        0xAAAAAAAA,  // Alternating pattern (inverted)
        0xFFFFFFFF,  // All bits set
        0x12345678,  // Random pattern
        0x0000FFFF,  // Lower half bits set
        0xFFFF0000   // Upper half bits set
    };
    
    // Test with various rotation amounts
    uint32_t test_amounts[] = {0, 1, 4, 7, 8, 15, 16, 23, 24, 31};
    
    // Test each pattern with different rotation amounts and directions
    for (uint32_t pattern : test_patterns) {
        for (uint32_t amount : test_amounts) {
            for (int dir = 0; dir <= 1; dir++) {
                bool direction = (dir == 1);
                total_tests++;
                
                // Apply inputs
                rotator->data_in = pattern;
                rotator->rotate_amount = amount;
                rotator->direction = direction;
                rotator->eval();
                if (tfp) tfp->dump(sim_time);
                sim_time++;
                
                // Calculate expected result
                uint32_t expected = rotate_data(pattern, amount, direction, DATA_WIDTH);
                
                // Verify output
                std::cout << "Input: 0x" << std::hex << std::setw(8) << std::setfill('0') << pattern
                          << ", Rotate " << (direction ? "Left" : "Right")
                          << " by " << std::dec << amount
                          << ", Output: 0x" << std::hex << std::setw(8) << std::setfill('0') 
                          << rotator->data_out;
                
                bool pass = (rotator->data_out == expected);
                if (pass) {
                    passed_tests++;
                    std::cout << " - PASS";
                } else {
                    std::cout << " - ERROR: Expected 0x" << std::hex << std::setw(8) << std::setfill('0') 
                              << expected;
                }
                std::cout << std::endl;
            }
        }
    }
    
    return passed_tests;
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    std::unique_ptr<Vparameterized_barrel_rotator> rotator = std::make_unique<Vparameterized_barrel_rotator>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    rotator->trace(tfp.get(), 99);  // Trace 99 levels of hierarchy
    tfp->open("parameterized_barrel_rotator_sim.vcd");
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Calculate total tests (8 patterns * 10 amounts * 2 directions)
    int total_tests = 8 * 10 * 2;
    
    // Run tests
    int passed_tests = check_operation(rotator, tfp.get(), sim_time);
    
    // Cleanup
    tfp->close();
    rotator->final();
    
    // Print test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << std::dec;  // Ensure decimal output for the summary
    std::cout << "Result: " << (passed_tests == total_tests ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << passed_tests << " of " << total_tests << std::endl;
    
    return (passed_tests == total_tests) ? 0 : 1;
} 