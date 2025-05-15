#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vpulse_width_detector.h"

#define MAX_SIM_TIME 1000
vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    Vpulse_width_detector *tb = new Vpulse_width_detector;
    
    // Initialize VCD tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC* trace = new VerilatedVcdC;
    tb->trace(trace, 5);
    trace->open("waveform.vcd");
    
    // Set threshold value (detect pulses wider than 10 clock cycles)
    tb->threshold = 10;
    
    // Reset sequence
    tb->clk = 0;
    tb->rst = 1;
    tb->signal_in = 0;
    
    // Toggle clock for a few cycles during reset
    for (int i = 0; i < 5; i++) {
        tb->clk = !tb->clk;
        tb->eval();
        trace->dump(sim_time++);
        
        tb->clk = !tb->clk;
        tb->eval();
        trace->dump(sim_time++);
    }
    
    // Release reset
    tb->rst = 0;
    
    // Test case 1: Pulse width less than threshold (8 cycles)
    std::cout << "Test case 1: Pulse width less than threshold (8 cycles)" << std::endl;
    for (int i = 0; i < 20; i++) {
        tb->clk = !tb->clk;
        
        // Create a pulse for 8 clock cycles
        if (i >= 2 && i < 10) {
            tb->signal_in = 1;
        } else {
            tb->signal_in = 0;
        }
        
        tb->eval();
        trace->dump(sim_time++);
        
        // Print detection status on rising clock edge
        if (tb->clk) {
            std::cout << "Cycle " << (sim_time/2) << ": signal_in = " << (int)tb->signal_in 
                      << ", pulse_detected = " << (int)tb->pulse_detected << std::endl;
        }
        
        tb->clk = !tb->clk;
        tb->eval();
        trace->dump(sim_time++);
    }
    
    // Test case 2: Pulse width greater than threshold (15 cycles)
    std::cout << "\nTest case 2: Pulse width greater than threshold (15 cycles)" << std::endl;
    for (int i = 0; i < 30; i++) {
        tb->clk = !tb->clk;
        
        // Create a pulse for 15 clock cycles
        if (i >= 2 && i < 17) {
            tb->signal_in = 1;
        } else {
            tb->signal_in = 0;
        }
        
        tb->eval();
        trace->dump(sim_time++);
        
        // Print detection status on rising clock edge
        if (tb->clk) {
            std::cout << "Cycle " << (sim_time/2) << ": signal_in = " << (int)tb->signal_in 
                      << ", pulse_detected = " << (int)tb->pulse_detected << std::endl;
        }
        
        tb->clk = !tb->clk;
        tb->eval();
        trace->dump(sim_time++);
    }
    
    // Test case 3: Multiple pulses with different widths
    std::cout << "\nTest case 3: Multiple pulses with different widths" << std::endl;
    for (int i = 0; i < 50; i++) {
        tb->clk = !tb->clk;
        
        // Create pulses of varying widths
        if ((i >= 2 && i < 7) || (i >= 15 && i < 30) || (i >= 35 && i < 40)) {
            tb->signal_in = 1;
        } else {
            tb->signal_in = 0;
        }
        
        tb->eval();
        trace->dump(sim_time++);
        
        // Print detection status on rising clock edge
        if (tb->clk) {
            std::cout << "Cycle " << (sim_time/2) << ": signal_in = " << (int)tb->signal_in 
                      << ", pulse_detected = " << (int)tb->pulse_detected << std::endl;
        }
        
        tb->clk = !tb->clk;
        tb->eval();
        trace->dump(sim_time++);
    }
    
    // Cleanup
    trace->close();
    delete trace;
    delete tb;
    
    std::cout << "\nSimulation complete" << std::endl;
    return 0;
} 