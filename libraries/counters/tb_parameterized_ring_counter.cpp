#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vparameterized_ring_counter.h"

#define MAX_SIM_TIME 100
vluint64_t sim_time = 0;

// Define the width parameter here to match the Verilog module
#define WIDTH 4

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Vparameterized_ring_counter* dut = new Vparameterized_ring_counter;
    
    // Initialize VCD trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    std::cout << "Ring Counter Width: " << WIDTH << std::endl;
    
    // Initialize signals
    dut->clk = 0;
    dut->rst_n = 0;  // Start with reset active
    dut->enable = 1; // Enable the counter
    
    // Run simulation
    while (sim_time < MAX_SIM_TIME) {
        // Toggle clock
        dut->clk = !dut->clk;
        
        // Release reset after a few clock cycles
        if (sim_time == 4) {
            dut->rst_n = 1;
        }
        
        // Evaluate model
        dut->eval();
        
        // Dump wave trace
        m_trace->dump(sim_time);
        
        // Print counter value on positive clock edge
        if (dut->clk && sim_time > 4) {
            std::cout << "Time: " << sim_time << ", Count: ";
            for (int i = WIDTH-1; i >= 0; i--) {
                std::cout << ((dut->count >> i) & 1);
            }
            std::cout << std::endl;
        }
        
        sim_time++;
    }
    
    // Verify ring counter
    std::cout << "\nVerifying Ring Counter..." << std::endl;
    
    int passed_tests = 0;
    const int total_tests = 4;
    
    // Reset for verification
    dut->clk = 0;
    dut->rst_n = 0;
    dut->enable = 1;
    dut->eval();
    dut->clk = 1;
    dut->eval();
    
    // Test 1: Check initial reset state (should be 0001)
    if ((int)dut->count == 1) {
        passed_tests++;
    } else {
        std::cout << "ERROR: Initial state incorrect, got " << (int)dut->count << ", expected 1" << std::endl;
    }
    
    // Release reset
    dut->clk = 0;
    dut->rst_n = 1;
    dut->eval();
    
    // Test 2: Verify ring counting sequence
    bool sequence_correct = true;
    uint32_t expected = 1;
    for (int i = 0; i < WIDTH; i++) {
        dut->clk = 1;
        dut->eval();
        
        if ((int)dut->count != expected) {
            std::cout << "ERROR: Sequence incorrect at step " << i 
                      << ", got " << (int)dut->count << ", expected " << expected << std::endl;
            sequence_correct = false;
            break;
        }
        
        expected = (expected << 1) | (expected >> (WIDTH-1));
        dut->clk = 0;
        dut->eval();
    }
    
    if (sequence_correct) {
        passed_tests++;
    }
    
    // Test 3: Verify bit rotation
    bool rotation_correct = true;
    for (int i = 0; i < WIDTH; i++) {
        dut->clk = 1;
        dut->eval();
        
        // Check that only one bit is set
        if (__builtin_popcount(dut->count) != 1) {
            std::cout << "ERROR: Multiple bits set at step " << i << std::endl;
            rotation_correct = false;
            break;
        }
        
        dut->clk = 0;
        dut->eval();
    }
    
    if (rotation_correct) {
        passed_tests++;
    }
    
    // Test 4: Verify wrapping behavior
    dut->clk = 1;
    dut->eval();
    if ((int)dut->count == 1) {
        passed_tests++;
    } else {
        std::cout << "ERROR: Counter did not wrap correctly, got " << (int)dut->count << ", expected 1" << std::endl;
    }
    
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (passed_tests == total_tests ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << passed_tests << " of " << total_tests << std::endl;
    
    // Clean up
    m_trace->close();
    delete m_trace;
    delete dut;
    
    return (passed_tests == total_tests) ? 0 : 1;
} 