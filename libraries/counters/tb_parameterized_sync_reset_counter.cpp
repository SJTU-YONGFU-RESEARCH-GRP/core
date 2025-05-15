#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vparameterized_sync_reset_counter.h"

#define MAX_SIM_TIME 100
vluint64_t sim_time = 0;

// Define the parameters to match the Verilog module
#define WIDTH 8
#define MAX_COUNT ((1 << WIDTH) - 1)

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Vparameterized_sync_reset_counter* dut = new Vparameterized_sync_reset_counter;
    
    // Initialize VCD trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    std::cout << "Synchronous Reset Counter Width: " << WIDTH << std::endl;
    std::cout << "Max Count: " << MAX_COUNT << std::endl;
    
    // Initialize signals
    dut->clk = 0;
    dut->sync_rst = 1;  // Start with reset active
    dut->enable = 1;    // Enable the counter
    
    // Run simulation
    while (sim_time < MAX_SIM_TIME) {
        // Toggle clock
        dut->clk = !dut->clk;
        
        // Release reset after a few clock cycles
        if (sim_time == 4) {
            dut->sync_rst = 0;
        }
        
        // Apply reset in the middle of counting
        if (sim_time == 40) {
            dut->sync_rst = 1;
            std::cout << "\nApplying synchronous reset\n" << std::endl;
        }
        
        // Release reset again
        if (sim_time == 44) {
            dut->sync_rst = 0;
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
            if (dut->sync_rst) {
                std::cout << " (Reset Active)";
            }
            std::cout << std::endl;
        }
        
        sim_time++;
    }
    
    // Verify synchronous reset counter
    std::cout << "\nVerifying Synchronous Reset Counter..." << std::endl;
    
    // Reset for verification
    dut->clk = 0;
    dut->sync_rst = 1;
    dut->enable = 1;
    dut->eval();
    dut->clk = 1;  // Apply clock with reset active
    dut->eval();
    
    // Check counter is reset
    if ((int)dut->count != 0) {
        std::cout << "ERROR: Counter not reset properly, got " << (int)dut->count << std::endl;
        return 1;
    }
    
    // Release reset and check counting
    dut->clk = 0;
    dut->sync_rst = 0;
    dut->eval();
    
    bool counting_correct = true;
    for (int i = 0; i < 20; i++) {
        dut->clk = 1;
        dut->eval();
        
        int expected = i + 1; // First clock after reset should increment to 1
        if ((int)dut->count != expected) {
            std::cout << "ERROR: Count failed at step " << i << ", got " << (int)dut->count 
                      << ", expected " << expected << std::endl;
            counting_correct = false;
            break;
        }
        
        // Check terminal count
        bool expected_tc = (expected == MAX_COUNT);
        if (dut->tc != expected_tc) {
            std::cout << "ERROR: Terminal count signal incorrect at count " << expected 
                      << ", got " << (dut->tc ? "high" : "low") << std::endl;
            counting_correct = false;
            break;
        }
        
        dut->clk = 0;
        dut->eval();
    }
    
    // Apply synchronous reset in the middle of counting
    dut->sync_rst = 1;
    dut->clk = 1;  // Clock edge with reset active
    dut->eval();
    
    // Check counter is reset
    if ((int)dut->count != 0) {
        std::cout << "ERROR: Counter not reset properly on synchronous reset, got " << (int)dut->count << std::endl;
        counting_correct = false;
    }
    
    if (counting_correct) {
        std::cout << "SUCCESS: Synchronous reset counter verified!" << std::endl;
    } else {
        std::cout << "FAILURE: Synchronous reset counter verification failed." << std::endl;
        return 1;
    }
    
    // Clean up
    m_trace->close();
    delete m_trace;
    delete dut;
    
    return 0;
} 