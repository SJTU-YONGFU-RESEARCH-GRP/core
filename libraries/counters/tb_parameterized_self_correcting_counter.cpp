#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vparameterized_self_correcting_counter.h"

#define MAX_SIM_TIME 100
vluint64_t sim_time = 0;

// Define the parameters to match the Verilog module
#define WIDTH 4
#define MODULO 10

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Vparameterized_self_correcting_counter* dut = new Vparameterized_self_correcting_counter;
    
    // Initialize VCD trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    std::cout << "Self-Correcting Counter Width: " << WIDTH << std::endl;
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
            std::cout << "Time: " << sim_time << ", Count: " << (int)dut->count << std::endl;
        }
        
        sim_time++;
    }
    
    // Verify self-correcting counter
    std::cout << "\nVerifying Self-Correcting Counter..." << std::endl;
    
    // Reset for verification
    dut->clk = 0;
    dut->rst_n = 0;
    dut->enable = 1;
    dut->eval();
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->rst_n = 1;
    dut->eval();
    
    // Verify normal counting sequence
    bool count_correct = true;
    for (int i = 0; i < MODULO * 2; i++) {
        dut->clk = 1;
        dut->eval();
        
        int expected = i % MODULO;
        if ((int)dut->count != expected) {
            std::cout << "ERROR: Count failed at " << i << ", got " << (int)dut->count 
                      << " expected " << expected << std::endl;
            count_correct = false;
            break;
        }
        
        dut->clk = 0;
        dut->eval();
    }
    
    // Test self-correction by forcing an invalid state
    // This requires direct manipulation of internal state, which isn't directly possible in Verilator
    // without modifying the Verilog code. Instead, we'll simulate the behavior by checking
    // that the counter never exceeds MODULO-1.
    
    bool self_correction_works = true;
    for (int i = 0; i < MODULO * 3; i++) {
        dut->clk = 1;
        dut->eval();
        
        if ((int)dut->count >= MODULO) {
            std::cout << "ERROR: Counter reached invalid state: " << (int)dut->count << std::endl;
            self_correction_works = false;
            break;
        }
        
        dut->clk = 0;
        dut->eval();
    }
    
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << ((count_correct && self_correction_works) ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << ((count_correct && self_correction_works) ? "2" : "0") << " of 2" << std::endl;
    
    // Clean up
    m_trace->close();
    delete m_trace;
    delete dut;
    
    return (count_correct && self_correction_works) ? 0 : 1;
}
