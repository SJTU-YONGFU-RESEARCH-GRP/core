#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vparameterized_loadable_counter.h"

#define MAX_SIM_TIME 100
vluint64_t sim_time = 0;

// Define the width parameter to match the Verilog module
#define WIDTH 8

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Vparameterized_loadable_counter* dut = new Vparameterized_loadable_counter;
    
    // Initialize VCD trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    std::cout << "Loadable Counter Width: " << WIDTH << std::endl;
    
    // Initialize signals
    dut->clk = 0;
    dut->rst_n = 0;     // Start with reset active
    dut->enable = 1;    // Enable the counter
    dut->load = 0;      // No load initially
    dut->data_in = 0;   // Initialize data input
    
    // Run simulation
    while (sim_time < MAX_SIM_TIME) {
        // Toggle clock
        dut->clk = !dut->clk;
        
        // Release reset after a few clock cycles
        if (sim_time == 4) {
            dut->rst_n = 1;
        }
        
        // Load a value after some counting
        if (sim_time == 20) {
            dut->load = 1;
            dut->data_in = 0x55; // Load 0x55 (01010101)
        } else if (sim_time == 22) {
            dut->load = 0;       // Disable load
        }
        
        // Load another value later
        if (sim_time == 50) {
            dut->load = 1;
            dut->data_in = 0xA0; // Load 0xA0 (10100000)
        } else if (sim_time == 52) {
            dut->load = 0;       // Disable load
        }
        
        // Evaluate model
        dut->eval();
        
        // Dump wave trace
        m_trace->dump(sim_time);
        
        // Print counter value on positive clock edge
        if (dut->clk && sim_time > 4) {
            std::cout << "Time: " << sim_time << ", Count: 0x" << std::hex << (int)dut->count;
            if (dut->load) {
                std::cout << " (Loading 0x" << std::hex << (int)dut->data_in << ")";
            }
            std::cout << std::dec << std::endl;
        }
        
        sim_time++;
    }
    
    // Verify loadable counter
    std::cout << "\nVerifying Loadable Counter..." << std::endl;
    
    // Reset for verification
    dut->clk = 0;
    dut->rst_n = 0;
    dut->enable = 1;
    dut->load = 0;
    dut->data_in = 0;
    dut->eval();
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->rst_n = 1;
    dut->eval();
    
    // Verify normal counting
    bool counting_correct = true;
    for (int i = 0; i < 10; i++) {
        dut->clk = 1;
        dut->eval();
        
        if ((int)dut->count != i) {
            std::cout << "ERROR: Count failed at " << i << ", got " << (int)dut->count << std::endl;
            counting_correct = false;
            break;
        }
        
        dut->clk = 0;
        dut->eval();
    }
    
    // Verify load functionality
    dut->load = 1;
    dut->data_in = 0x42; // Load 0x42
    dut->clk = 1;
    dut->eval();
    
    if ((int)dut->count != 0x42) {
        std::cout << "ERROR: Load failed, expected 0x42, got 0x" << std::hex << (int)dut->count << std::endl;
        counting_correct = false;
    }
    
    dut->clk = 0;
    dut->load = 0;
    dut->eval();
    
    // Verify counting continues from loaded value
    for (int i = 0; i < 5; i++) {
        dut->clk = 1;
        dut->eval();
        
        int expected = 0x42 + i + 1;
        if ((int)dut->count != expected) {
            std::cout << "ERROR: Count after load failed at step " << i 
                      << ", expected 0x" << std::hex << expected 
                      << ", got 0x" << (int)dut->count << std::endl;
            counting_correct = false;
            break;
        }
        
        dut->clk = 0;
        dut->eval();
    }
    
    if (counting_correct) {
        std::cout << "SUCCESS: Loadable counter verified!" << std::endl;
    } else {
        std::cout << "FAILURE: Loadable counter verification failed." << std::endl;
        return 1;
    }
    
    // Clean up
    m_trace->close();
    delete m_trace;
    delete dut;
    
    return 0;
} 