#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vparameterized_decade_counter.h"

#define MAX_SIM_TIME 100
vluint64_t sim_time = 0;

// Define the parameters to match the Verilog module
#define WIDTH 4
#define MODULO 10

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Track test results
    int total_tests = 0;
    int passed_tests = 0;
    
    // Initialize Verilator
    Vparameterized_decade_counter* dut = new Vparameterized_decade_counter;
    
    // Initialize VCD trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    std::cout << "Decade Counter Width: " << WIDTH << std::endl;
    std::cout << "Modulo: " << MODULO << std::endl;
    
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
            std::cout << "Time: " << sim_time << ", Count: " << (int)dut->count;
            if (dut->tc) {
                std::cout << " (Terminal Count)";
            }
            std::cout << std::endl;
        }
        
        sim_time++;
    }
    
    std::cout << "\nVerifying Decade Counter..." << std::endl;
    
    // Test 1: Reset State Test
    total_tests++;
    bool reset_test_passed = true;
    
    // Initial state - everything disabled/reset
    dut->clk = 0;
    dut->enable = 0;
    dut->rst_n = 0;  // Assert reset
    dut->eval();
    
    // Hold in reset for a few cycles
    for(int i = 0; i < 3; i++) {
        dut->clk = 1;
        dut->eval();
        dut->clk = 0;
        dut->eval();
    }
    
    // Release reset
    dut->rst_n = 1;
    dut->eval();
    
    // Wait one clock cycle before enabling
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->eval();
    
    // Enable counter and check initial value
    dut->enable = 1;
    dut->eval();
    
    if ((int)dut->count != 0) {
        std::cout << "ERROR: Initial count after reset not 0, got " << (int)dut->count << std::endl;
        reset_test_passed = false;
    }
    
    if (reset_test_passed) passed_tests++;
    
    // Test 2: Counting Sequence Test
    total_tests++;
    bool count_test_passed = true;
    
    // Verify counting sequence
    for (int i = 0; i < MODULO * 2; i++) {
        // Rising edge - counter should increment here
        dut->clk = 1;
        dut->eval();
        
        // Check counter value - should be i+1 since we start at 0
        int expected = (i + 1) % MODULO;
        if ((int)dut->count != expected) {
            std::cout << "ERROR: Count failed at cycle " << i << ", got " << (int)dut->count 
                      << " expected " << expected << std::endl;
            count_test_passed = false;
            break;
        }
        
        // Check terminal count signal
        bool expected_tc = (expected == MODULO - 1);
        if (dut->tc != expected_tc) {
            std::cout << "ERROR: Terminal count signal incorrect at count " << expected 
                      << ", got " << (dut->tc ? "high" : "low") << std::endl;
            count_test_passed = false;
            break;
        }
        
        // Falling edge
        dut->clk = 0;
        dut->eval();
    }
    
    if (count_test_passed) passed_tests++;
    
    // Clean up
    m_trace->close();
    delete m_trace;
    delete dut;
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (passed_tests == total_tests ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << passed_tests << " of " << total_tests << std::endl;
    
    return (passed_tests == total_tests) ? 0 : 1;
} 