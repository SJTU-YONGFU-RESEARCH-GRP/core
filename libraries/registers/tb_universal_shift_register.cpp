#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vuniversal_shift_register.h"

#define MAX_SIM_TIME 300
vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vuniversal_shift_register* dut = new Vuniversal_shift_register;
    
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    // Initialize inputs
    dut->clk = 0;
    dut->rst_n = 0;
    dut->enable = 0;
    dut->direction = 0;
    dut->serial_in_left = 0;
    dut->serial_in_right = 0;
    dut->parallel_in = 0;
    dut->load = 0;
    
    // Reset sequence
    for (int i = 0; i < 5; i++) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
    }
    dut->rst_n = 1;
    
    // Test case 1: Parallel load
    std::cout << "Test Case 1: Parallel Load" << std::endl;
    dut->enable = 1;
    dut->direction = 3; // 11 - Parallel load
    dut->parallel_in = 0xA5; // 10100101
    dut->load = 1;
    
    // Clock cycle for parallel load
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    
    // Check output after parallel load
    std::cout << "After parallel load, output = 0x" << std::hex << (int)dut->parallel_out << std::dec << std::endl;
    
    // Test case 2: Shift right
    std::cout << "Test Case 2: Shift Right" << std::endl;
    dut->direction = 1; // 01 - Shift right
    dut->serial_in_left = 1;
    dut->load = 0;
    
    // Clock cycles for shift right operations
    for (int i = 0; i < 8; i++) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        std::cout << "After shift right " << i+1 << ", output = 0x" << std::hex << (int)dut->parallel_out << std::dec << std::endl;
    }
    
    // Test case 3: Shift left
    std::cout << "Test Case 3: Shift Left" << std::endl;
    dut->direction = 2; // 10 - Shift left
    dut->serial_in_right = 0;
    
    // Clock cycles for shift left operations
    for (int i = 0; i < 8; i++) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        std::cout << "After shift left " << i+1 << ", output = 0x" << std::hex << (int)dut->parallel_out << std::dec << std::endl;
    }
    
    // Test case 4: Hold
    std::cout << "Test Case 4: Hold" << std::endl;
    dut->direction = 0; // 00 - Hold
    
    // Clock cycles for hold operation
    for (int i = 0; i < 3; i++) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        std::cout << "After hold " << i+1 << ", output = 0x" << std::hex << (int)dut->parallel_out << std::dec << std::endl;
    }
    
    // Test case 5: Disable
    std::cout << "Test Case 5: Disable" << std::endl;
    dut->enable = 0;
    dut->direction = 1; // 01 - Shift right (should be ignored when disabled)
    
    // Clock cycles for disabled state
    for (int i = 0; i < 3; i++) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        std::cout << "After disable " << i+1 << ", output = 0x" << std::hex << (int)dut->parallel_out << std::dec << std::endl;
    }
    
    m_trace->close();
    delete dut;
    delete m_trace;
    
    return EXIT_SUCCESS;
} 