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
    
    // Reset for verification
    dut->clk = 0;
    dut->rst_n = 0;
    dut->enable = 0;  // Disable counter during reset
    dut->eval();
    
    // Apply reset for 2 clock cycles
    for (int i = 0; i < 2; i++) {
        dut->clk = 1;
        dut->eval();
        dut->clk = 0;
        dut->eval();
    }
    
    // Release reset and enable counter
    dut->rst_n = 1;
    dut->enable = 1;
    dut->eval();
    
    // Wait for one clock cycle after reset
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->eval();
    
    // Verify counting sequence
    bool count_correct = true;
    for (int i = 0; i < MODULO * 2; i++) {
        // Check value before clock edge
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
        
        // Apply clock edge
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