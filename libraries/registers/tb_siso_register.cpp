#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vsiso_register.h"

#define MAX_SIM_TIME 300
vluint64_t sim_time = 0;

void clock_tick(Vsiso_register *dut, VerilatedVcdC *m_trace) {
    dut->clk = 0;
    dut->eval();
    m_trace->dump(sim_time++);
    
    dut->clk = 1;
    dut->eval();
    m_trace->dump(sim_time++);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vsiso_register* dut = new Vsiso_register;
    
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    // Initialize inputs
    dut->clk = 0;
    dut->rst_n = 0;
    dut->enable = 0;
    dut->serial_in = 0;
    
    // Reset sequence
    std::cout << "Test Case 1: Reset Sequence" << std::endl;
    for (int i = 0; i < 5; i++) {
        clock_tick(dut, m_trace);
    }
    dut->rst_n = 1;
    
    // Test case 2: Right shift with alternating bit pattern
    std::cout << "Test Case 2: Right Shift with Alternating Bit Pattern" << std::endl;
    dut->enable = 1;
    
    // Shift in alternating bit pattern (10101010)
    bool pattern[8] = {0, 1, 0, 1, 0, 1, 0, 1};  // Will be shifted in MSB first
    
    for (int i = 0; i < 8; i++) {
        dut->serial_in = pattern[i];
        clock_tick(dut, m_trace);
        std::cout << "Shift in bit " << pattern[i] << ", serial_out = " << (int)dut->serial_out << std::endl;
    }
    
    // Shift in all zeros to observe the pattern moving through
    dut->serial_in = 0;
    for (int i = 0; i < 10; i++) {
        clock_tick(dut, m_trace);
        std::cout << "Flush cycle " << i+1 << ", serial_out = " << (int)dut->serial_out << std::endl;
    }
    
    // Test case 3: Shift in another pattern
    std::cout << "\nTest Case 3: Shift in 10011001 Pattern" << std::endl;
    
    // Shift in pattern (10011001)
    bool pattern2[8] = {1, 0, 0, 1, 1, 0, 0, 1};  // Will be shifted in MSB first
    
    for (int i = 0; i < 8; i++) {
        dut->serial_in = pattern2[i];
        clock_tick(dut, m_trace);
        std::cout << "Shift in bit " << pattern2[i] << ", serial_out = " << (int)dut->serial_out << std::endl;
    }
    
    // Shift in all zeros to observe the pattern
    dut->serial_in = 0;
    for (int i = 0; i < 10; i++) {
        clock_tick(dut, m_trace);
        std::cout << "Flush cycle " << i+1 << ", serial_out = " << (int)dut->serial_out << std::endl;
    }
    
    // Test case 4: Disable shifting
    std::cout << "\nTest Case 4: Disable Shifting" << std::endl;
    dut->enable = 0;
    dut->serial_in = 1;
    
    for (int i = 0; i < 5; i++) {
        clock_tick(dut, m_trace);
        std::cout << "Disabled cycle " << i+1 << ", serial_out = " << (int)dut->serial_out << std::endl;
    }
    
    m_trace->close();
    delete dut;
    delete m_trace;
    
    return EXIT_SUCCESS;
} 