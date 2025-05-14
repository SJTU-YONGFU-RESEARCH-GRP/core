#include "Vbarrel_rotator.h"
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
    
    uint32_t mask = (1 << data_width) - 1;
    data &= mask;
    
    if (direction) {
        // Left rotation
        return ((data << amount) | (data >> (data_width - amount))) & mask;
    } else {
        // Right rotation
        return ((data >> amount) | (data << (data_width - amount))) & mask;
    }
}

void check_operation(std::unique_ptr<Vbarrel_rotator>& rotator, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    const int DATA_WIDTH = 8;  // Must match the DATA_WIDTH parameter in the Verilog module
    const int SHIFT_WIDTH = std::log2(DATA_WIDTH);
    
    std::cout << "Testing Barrel Rotator with DATA_WIDTH=" << DATA_WIDTH << std::endl;
    
    // Test data patterns
    uint32_t test_patterns[] = {
        0x01,  // Single bit set at LSB
        0x80,  // Single bit set at MSB
        0x55,  // Alternating pattern
        0xAA,  // Alternating pattern (inverted)
        0xFF,  // All bits set
        0x12,  // Random pattern
        0x0F,  // Lower half bits set
        0xF0   // Upper half bits set
    };
    
    // Test each pattern with different rotation amounts and directions
    for (uint32_t pattern : test_patterns) {
        for (uint32_t amount = 0; amount < DATA_WIDTH; amount++) {
            for (int dir = 0; dir <= 1; dir++) {
                bool direction = (dir == 1);
                
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
                std::cout << "Input: 0x" << std::hex << std::setw(2) << std::setfill('0') << pattern
                          << " (" << std::bitset<8>(pattern) << ")"
                          << ", Rotate " << (direction ? "Left" : "Right")
                          << " by " << std::dec << amount
                          << ", Output: 0x" << std::hex << std::setw(2) << std::setfill('0') 
                          << (uint32_t)rotator->data_out
                          << " (" << std::bitset<8>(rotator->data_out) << ")";
                
                bool pass = (rotator->data_out == expected);
                if (!pass) {
                    std::cout << " - ERROR: Expected 0x" << std::hex << std::setw(2) << std::setfill('0') 
                              << expected << " (" << std::bitset<8>(expected) << ")";
                } else {
                    std::cout << " - PASS";
                }
                std::cout << std::endl;
            }
        }
    }
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    std::unique_ptr<Vbarrel_rotator> rotator = std::make_unique<Vbarrel_rotator>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    rotator->trace(tfp.get(), 99);  // Trace 99 levels of hierarchy
    tfp->open("barrel_rotator_sim.vcd");
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Run tests
    check_operation(rotator, tfp.get(), sim_time);
    
    // Cleanup
    tfp->close();
    rotator->final();
    
    std::cout << "Simulation completed!" << std::endl;
    return 0;
} 