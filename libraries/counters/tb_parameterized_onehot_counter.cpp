#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vparameterized_onehot_counter.h"

#define MAX_SIM_TIME 100
vluint64_t sim_time = 0;

// Define the width parameter to match the Verilog module
#define WIDTH 8

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Vparameterized_onehot_counter* dut = new Vparameterized_onehot_counter;
    
    // Initialize VCD trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    std::cout << "One-Hot Counter Width: " << WIDTH << std::endl;
    
    // Initialize signals
    dut->clk = 0;
    dut->rst_n = 0;  // Start with reset active
    dut->enable = 1; // Enable the counter
    dut->eval();
    
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
            std::cout << "Time: " << sim_time << ", Count: 0b";
            for (int i = WIDTH-1; i >= 0; i--) {
                std::cout << ((dut->count >> i) & 1);
            }
            std::cout << std::endl;
        }
        
        sim_time++;
    }
    
    // Verify one-hot counter
    std::cout << "\nVerifying One-Hot Counter..." << std::endl;
    
    // Reset for verification
    dut->clk = 0;
    dut->rst_n = 0;
    dut->enable = 1;
    dut->eval();
    
    // Hold in reset for a few cycles
    for (int i = 0; i < 3; i++) {
        dut->clk = 1;
        dut->eval();
        dut->clk = 0;
        dut->eval();
    }
    
    // Release reset
    dut->rst_n = 1;
    dut->eval();
    
    // Store the sequence
    uint32_t* sequence = new uint32_t[WIDTH];
    
    // Collect sequence
    for (int i = 0; i < WIDTH; i++) {
        dut->clk = 1;
        dut->eval();
        
        sequence[i] = dut->count;
        
        dut->clk = 0;
        dut->eval();
    }
    
    // Print the sequence
    std::cout << "One-hot counter sequence:" << std::endl;
    for (int i = 0; i < WIDTH; i++) {
        std::cout << "  " << i << ": 0b";
        for (int j = WIDTH-1; j >= 0; j--) {
            std::cout << ((sequence[i] >> j) & 1);
        }
        std::cout << std::endl;
    }
    
    // Verify the sequence is correct
    bool valid_onehot = true;
    
    // Check initial state (LSB should be 1)
    if (sequence[0] != 1) {
        std::cout << "ERROR: Initial state is not correct (LSB should be 1)" << std::endl;
        valid_onehot = false;
    }
    
    // Check each state has exactly one bit set (one-hot property)
    for (int i = 0; i < WIDTH; i++) {
        if (__builtin_popcount(sequence[i]) != 1) {
            std::cout << "ERROR: State " << i << " is not one-hot (exactly one bit set)" << std::endl;
            valid_onehot = false;
        }
    }
    
    // Check for proper shifting (next bit position)
    for (int i = 0; i < WIDTH-1; i++) {
        uint32_t expected = sequence[i] << 1;
        if (sequence[i+1] != expected) {
            std::cout << "ERROR: Incorrect shift from state " << i << " to " << (i+1) << std::endl;
            valid_onehot = false;
        }
    }
    
    // Check if sequence wraps around correctly
    dut->clk = 1;
    dut->eval();
    if (dut->count != sequence[0]) {
        std::cout << "ERROR: Sequence does not wrap around correctly after " << WIDTH << " cycles" << std::endl;
        valid_onehot = false;
    }
    
    if (valid_onehot) {
        std::cout << "\n==== Test Summary ====" << std::endl;
        std::cout << "Result: Pass" << std::endl;
        std::cout << "Tests: 4 of 4" << std::endl;
    } else {
        std::cout << "\n==== Test Summary ====" << std::endl;
        std::cout << "Result: Fail" << std::endl;
        std::cout << "Tests: 0 of 4" << std::endl;
    }
    
    // Clean up
    delete[] sequence;
    m_trace->close();
    delete m_trace;
    delete dut;
    
    return valid_onehot ? 0 : 1;
} 