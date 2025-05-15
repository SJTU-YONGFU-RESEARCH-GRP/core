#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vparameterized_clock_gating.h"

#define MAX_SIM_TIME 200
vluint64_t sim_time = 0;

void clock_cycle(Vparameterized_clock_gating *dut, VerilatedVcdC *m_trace) {
    dut->clk_in = 0;
    dut->eval();
    sim_time++;
    m_trace->dump(sim_time);
    
    dut->clk_in = 1;
    dut->eval();
    sim_time++;
    m_trace->dump(sim_time);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Vparameterized_clock_gating *dut = new Vparameterized_clock_gating;
    
    // Enable waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    // Initialize signals
    dut->clk_in = 0;
    dut->enable = 0;
    dut->test_mode = 0;
    
    std::cout << "Starting Clock Gating Test..." << std::endl;
    
    // Test 1: Basic clock gating functionality
    std::cout << "Test 1: Basic clock gating functionality" << std::endl;
    
    // Run with enable=0 (clock should be gated)
    std::cout << "Clock should be gated (enable=0)" << std::endl;
    for (int i = 0; i < 10; i++) {
        clock_cycle(dut, m_trace);
        std::cout << "Cycle " << i << ": clk_in=" << (int)dut->clk_in 
                  << ", enable=" << (int)dut->enable 
                  << ", clk_out=" << (int)dut->clk_out << std::endl;
    }
    
    // Run with enable=1 (clock should pass through)
    std::cout << "Clock should pass through (enable=1)" << std::endl;
    dut->enable = 1;
    for (int i = 0; i < 10; i++) {
        clock_cycle(dut, m_trace);
        std::cout << "Cycle " << i << ": clk_in=" << (int)dut->clk_in 
                  << ", enable=" << (int)dut->enable 
                  << ", clk_out=" << (int)dut->clk_out << std::endl;
    }
    
    // Test 2: Test mode functionality
    std::cout << "Test 2: Test mode functionality" << std::endl;
    
    // Run with enable=0, test_mode=1 (clock should pass through)
    std::cout << "Clock should pass through (enable=0, test_mode=1)" << std::endl;
    dut->enable = 0;
    dut->test_mode = 1;
    for (int i = 0; i < 10; i++) {
        clock_cycle(dut, m_trace);
        std::cout << "Cycle " << i << ": clk_in=" << (int)dut->clk_in 
                  << ", enable=" << (int)dut->enable 
                  << ", test_mode=" << (int)dut->test_mode
                  << ", clk_out=" << (int)dut->clk_out << std::endl;
    }
    
    // Test 3: Dynamic enable changes
    std::cout << "Test 3: Dynamic enable changes" << std::endl;
    dut->test_mode = 0;
    
    for (int i = 0; i < 20; i++) {
        // Toggle enable every 4 cycles
        if (i % 4 == 0) {
            dut->enable = !dut->enable;
        }
        
        clock_cycle(dut, m_trace);
        std::cout << "Cycle " << i << ": clk_in=" << (int)dut->clk_in 
                  << ", enable=" << (int)dut->enable 
                  << ", clk_out=" << (int)dut->clk_out << std::endl;
    }
    
    std::cout << "Clock gating test completed successfully!" << std::endl;
    
    // Cleanup
    m_trace->close();
    delete m_trace;
    delete dut;
    
    return 0;
} 