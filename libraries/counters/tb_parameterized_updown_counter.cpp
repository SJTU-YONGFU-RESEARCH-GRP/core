#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vparameterized_updown_counter.h"

#define MAX_SIM_TIME 200
vluint64_t sim_time = 0;

// Define the width parameter here to match the Verilog module
#define WIDTH 4
#define MAX_COUNT ((1 << WIDTH) - 1)

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Vparameterized_updown_counter* dut = new Vparameterized_updown_counter;
    
    // Initialize VCD trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    std::cout << "Up/Down Counter Width: " << WIDTH << std::endl;
    std::cout << "Max Count: " << MAX_COUNT << std::endl;
    
    // Initialize signals
    dut->clk = 0;
    dut->rst_n = 0;     // Start with reset active
    dut->enable = 1;    // Enable the counter
    dut->up_down = 1;   // Start counting up
    
    // Test tracking variables
    bool test_passed = true;
    int total_tests = 1;
    
    // Run simulation
    while (sim_time < MAX_SIM_TIME) {
        // Toggle clock
        dut->clk = !dut->clk;
        
        // Release reset after a few clock cycles
        if (sim_time == 4) {
            dut->rst_n = 1;
        }
        
        // Switch direction after counting up to MAX_COUNT
        if (sim_time == 40) {
            dut->up_down = 0; // Count down
            std::cout << "\nSwitching to count down mode\n" << std::endl;
        }
        
        // Switch back to up after counting down to 0
        if (sim_time == 80) {
            dut->up_down = 1; // Count up again
            std::cout << "\nSwitching back to count up mode\n" << std::endl;
        }
        
        // Evaluate model
        dut->eval();
        
        // Dump wave trace
        m_trace->dump(sim_time);
        
        // Print counter value on positive clock edge
        if (dut->clk && sim_time > 4) {
            std::cout << "Time: " << sim_time << ", Count: " << (int)dut->count;
            if (dut->overflow) {
                std::cout << " (Overflow/Underflow)";
            }
            std::cout << std::endl;
        }
        
        sim_time++;
    }
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (test_passed ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << (test_passed ? total_tests : 0) << " of " << total_tests << std::endl;
    
    // Clean up
    m_trace->close();
    delete m_trace;
    delete dut;
    
    return 0;
} 