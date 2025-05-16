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
    
    // Verify decade counter
    std::cout << "\nVerifying Decade Counter..." << std::endl;
    
    // Initial state
    dut->clk = 0;
    dut->enable = 0;  // Disable counter
    dut->rst_n = 1;   // Not in reset
    dut->eval();
    
    // Apply asynchronous reset
    dut->rst_n = 0;   // Assert reset
    dut->eval();      // Let async reset take effect
    
    // Hold reset for a few cycles
    for (int i = 0; i < 4; i++) {
        dut->clk = !dut->clk;
        dut->eval();
    }
    
    // Release reset while clock is low
    dut->clk = 0;
    dut->rst_n = 1;   // Release reset
    dut->eval();      // Let it propagate
    
    // Enable the counter
    dut->enable = 1;
    dut->eval();
    
    // Complete the clock cycle
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->eval();
    
    // Verify counting sequence
    bool count_correct = true;
    for (int i = 0; i < MODULO * 2; i++) {
        // Check value at current state
        int expected = i % MODULO;
        if ((int)dut->count != expected) {
            std::cout << "ERROR: Count failed at " << i << ", got " << (int)dut->count 
                      << " expected " << expected << std::endl;
            count_correct = false;
            break;
        }
        
        // Check terminal count signal
        bool expected_tc = (expected == MODULO - 1);
        if (dut->tc != expected_tc) {
            std::cout << "ERROR: Terminal count signal incorrect at count " << expected 
                      << ", got " << (dut->tc ? "high" : "low") << std::endl;
            count_correct = false;
            break;
        }
        
        // Apply clock edge for next state
        dut->clk = 1;
        dut->eval();
        dut->clk = 0;
        dut->eval();
    }
    
    if (count_correct) {
        std::cout << "SUCCESS: Decade counter verified!" << std::endl;
    } else {
        std::cout << "FAILURE: Decade counter verification failed." << std::endl;
        return 1;
    }
    
    // Clean up
    m_trace->close();
    delete m_trace;
    delete dut;
    
    return 0;
} 