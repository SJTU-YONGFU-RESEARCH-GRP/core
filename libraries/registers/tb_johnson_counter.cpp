#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vjohnson_counter.h"

#define MAX_SIM_TIME 100
vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vjohnson_counter* dut = new Vjohnson_counter;
    
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    // Initialize inputs
    dut->clk = 0;
    dut->rst_n = 0;
    dut->enable = 0;
    dut->load_en = 0;
    dut->load_val = 0;
    
    // Reset sequence
    for (int i = 0; i < 5; i++) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
    }
    dut->rst_n = 1;
    dut->enable = 1;
    
    // Test case 1: Load a specific value
    std::cout << "Test Case 1: Load Value" << std::endl;
    dut->load_en = 1;
    dut->load_val = 0x5; // For a 4-bit counter
    
    // Clock cycle for load
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    
    // Disable load
    dut->load_en = 0;
    
    // Check output after load
    std::cout << "After load, count = 0x" << std::hex << (int)dut->count << std::dec << std::endl;
    
    // Test case 2: Johnson counter sequence
    std::cout << "Test Case 2: Johnson Counter Sequence" << std::endl;
    
    // For a 4-bit Johnson counter, we need 8 clock cycles to complete a sequence
    // The sequence should be: 0101 -> 0010 -> 0001 -> 1000 -> 1100 -> 1110 -> 1111 -> 0111 -> 0011 -> 0001 -> ...
    for (int i = 0; i < 10; i++) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        std::cout << "Johnson counter state " << i+1 << ": 0x" << std::hex << (int)dut->count << std::dec << std::endl;
    }
    
    // Test case 3: Disable counter
    std::cout << "Test Case 3: Disable Counter" << std::endl;
    dut->enable = 0;
    
    // Clock cycles with counter disabled
    for (int i = 0; i < 3; i++) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        std::cout << "After disable " << i+1 << ", count = 0x" << std::hex << (int)dut->count << std::dec << std::endl;
    }
    
    // Test case 4: Re-enable counter
    std::cout << "Test Case 4: Re-enable Counter" << std::endl;
    dut->enable = 1;
    
    // Continue Johnson counter sequence
    for (int i = 0; i < 5; i++) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        std::cout << "Johnson counter state " << i+1 << " after re-enable: 0x" << std::hex << (int)dut->count << std::dec << std::endl;
    }
    
    m_trace->close();
    delete dut;
    delete m_trace;
    
    return EXIT_SUCCESS;
} 