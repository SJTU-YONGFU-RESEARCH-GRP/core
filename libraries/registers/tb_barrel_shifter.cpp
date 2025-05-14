#include "Vbarrel_shifter.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <bitset>
#include <cmath>
#include <iomanip>

// Helper function to perform the expected shift operation in software
uint32_t expected_shift(uint32_t data, uint32_t shift_amount, bool direction, bool rotate, int data_width) {
    uint32_t result = 0;
    
    if (direction) {  // Left shift
        if (rotate) {
            result = ((data << shift_amount) | (data >> (data_width - shift_amount))) & ((1ULL << data_width) - 1);
        } else {
            result = (data << shift_amount) & ((1ULL << data_width) - 1);
        }
    } else {  // Right shift
        if (rotate) {
            result = ((data >> shift_amount) | (data << (data_width - shift_amount))) & ((1ULL << data_width) - 1);
        } else {
            result = data >> shift_amount;
        }
    }
    
    return result;
}

void check_operation(std::unique_ptr<Vbarrel_shifter>& shifter, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    const int DATA_WIDTH = 32;  // Must match the DATA_WIDTH parameter in the Verilog module
    const int SHIFT_WIDTH = std::log2(DATA_WIDTH);
    
    std::cout << "Testing barrel shifter with DATA_WIDTH=" << DATA_WIDTH << std::endl;
    
    // Test data patterns
    uint32_t test_patterns[] = {
        0x00000001,  // Single bit set
        0x80000000,  // MSB set
        0x55555555,  // Alternating pattern
        0xAAAAAAAA,  // Alternating pattern (inverted)
        0xFFFFFFFF,  // All bits set
        0x12345678   // Random pattern
    };
    
    // Test various shift amounts
    for (uint32_t pattern : test_patterns) {
        for (int shift = 0; shift < DATA_WIDTH; shift++) {
            for (int dir = 0; dir <= 1; dir++) {
                for (int rot = 0; rot <= 1; rot++) {
                    // Apply inputs
                    shifter->data_in = pattern;
                    shifter->shift_amount = shift;
                    shifter->shift_direction = dir;
                    shifter->rotate = rot;
                    shifter->eval();
                    if (tfp) tfp->dump(sim_time);
                    sim_time++;
                    
                    // Calculate expected result
                    uint32_t expected = expected_shift(pattern, shift, dir, rot, DATA_WIDTH);
                    
                    // Verify output
                    std::cout << "Input: 0x" << std::hex << std::setw(8) << std::setfill('0') << pattern
                              << ", Shift: " << std::dec << shift
                              << ", Direction: " << (dir ? "Left" : "Right")
                              << ", Mode: " << (rot ? "Rotate" : "Logical")
                              << ", Output: 0x" << std::hex << std::setw(8) << std::setfill('0') << shifter->data_out;
                    
                    if (shifter->data_out != expected) {
                        std::cout << " - ERROR: Expected 0x" << std::hex << std::setw(8) << std::setfill('0') << expected << std::endl;
                    } else {
                        std::cout << " - PASS" << std::endl;
                    }
                }
            }
        }
    }
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    std::unique_ptr<Vbarrel_shifter> shifter = std::make_unique<Vbarrel_shifter>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    shifter->trace(tfp.get(), 99);  // Trace 99 levels of hierarchy
    tfp->open("barrel_shifter_sim.vcd");
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Run tests
    check_operation(shifter, tfp.get(), sim_time);
    
    // Cleanup
    tfp->close();
    shifter->final();
    
    std::cout << "Simulation completed!" << std::endl;
    return 0;
} 