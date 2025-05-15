#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vscan_register.h"

#define MAX_SIM_TIME 300
vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vscan_register* dut = new Vscan_register;
    
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    // Initialize inputs
    dut->clk = 0;
    dut->rst_n = 0;
    dut->data_in = 0;
    dut->scan_en = 0;
    dut->scan_in = 0;
    
    // Reset sequence
    for (int i = 0; i < 5; i++) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
    }
    dut->rst_n = 1;
    
    // Test case 1: Normal operation
    std::cout << "Test Case 1: Normal Operation" << std::endl;
    dut->scan_en = 0;  // Normal mode
    dut->data_in = 0xA5;  // 10100101
    
    // Clock cycle for normal operation
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    
    // Another clock cycle to observe output
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    
    std::cout << "After normal operation, data_out = 0x" << std::hex << (int)dut->data_out << std::dec << std::endl;
    std::cout << "Scan output = " << (int)dut->scan_out << std::endl;
    
    // Test case 2: Scan mode - shift in a pattern
    std::cout << "Test Case 2: Scan Mode - Shift In Pattern" << std::endl;
    dut->scan_en = 1;  // Scan mode
    
    // Shift in 8 bits (10101010)
    bool pattern[8] = {0, 1, 0, 1, 0, 1, 0, 1};  // LSB first
    
    for (int i = 0; i < 8; i++) {
        dut->scan_in = pattern[i];
        
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        
        std::cout << "Scan bit " << i << " = " << pattern[i] << ", scan_out = " << (int)dut->scan_out << std::endl;
    }
    
    // Test case 3: Return to normal mode
    std::cout << "Test Case 3: Return to Normal Mode" << std::endl;
    dut->scan_en = 0;  // Normal mode
    dut->data_in = 0x3C;  // 00111100
    
    // Clock cycle to load new data
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    
    // Another clock cycle to observe output
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    
    std::cout << "After returning to normal mode, data_out = 0x" << std::hex << (int)dut->data_out << std::dec << std::endl;
    
    // Test case 4: Scan out the loaded data
    std::cout << "Test Case 4: Scan Out Loaded Data" << std::endl;
    dut->scan_en = 1;  // Scan mode
    dut->scan_in = 0;  // Scan in zeros
    
    // Shift out 8 bits
    for (int i = 0; i < 8; i++) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        
        std::cout << "Scan out bit " << i << " = " << (int)dut->scan_out << std::endl;
    }
    
    m_trace->close();
    delete dut;
    delete m_trace;
    
    return EXIT_SUCCESS;
} 