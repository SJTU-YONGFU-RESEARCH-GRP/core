#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vloadable_updown_counter.h"

#define MAX_SIM_TIME 300
vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vloadable_updown_counter* dut = new Vloadable_updown_counter;
    
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    // Initialize inputs
    dut->clk = 0;
    dut->rst_n = 0;
    dut->enable = 0;
    dut->up_down = 1;  // Start with count up
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
    dut->load_val = 0x80;  // Load 128 (for 8-bit counter)
    
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
    std::cout << "After load, count = " << (int)dut->count << std::endl;
    
    // Test case 2: Count up
    std::cout << "Test Case 2: Count Up" << std::endl;
    dut->up_down = 1;  // Count up
    
    // Clock cycles for count up
    for (int i = 0; i < 10; i++) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        std::cout << "Count up " << i+1 << ": " << (int)dut->count;
        if (dut->overflow) {
            std::cout << " (Overflow detected)";
        }
        std::cout << std::endl;
    }
    
    // Test case 3: Count down
    std::cout << "Test Case 3: Count Down" << std::endl;
    dut->up_down = 0;  // Count down
    
    // Clock cycles for count down
    for (int i = 0; i < 10; i++) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        std::cout << "Count down " << i+1 << ": " << (int)dut->count;
        if (dut->underflow) {
            std::cout << " (Underflow detected)";
        }
        std::cout << std::endl;
    }
    
    // Test case 4: Load and count to test overflow
    std::cout << "Test Case 4: Load and Count to Test Overflow" << std::endl;
    dut->load_en = 1;
    dut->load_val = 0xFE;  // Load 254 (for 8-bit counter)
    dut->up_down = 1;      // Count up
    
    // Clock cycle for load
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    
    // Disable load
    dut->load_en = 0;
    
    // Clock cycles to reach overflow
    for (int i = 0; i < 5; i++) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        std::cout << "Count near overflow " << i+1 << ": " << (int)dut->count;
        if (dut->overflow) {
            std::cout << " (Overflow detected)";
        }
        std::cout << std::endl;
    }
    
    // Test case 5: Load and count to test underflow
    std::cout << "Test Case 5: Load and Count to Test Underflow" << std::endl;
    dut->load_en = 1;
    dut->load_val = 0x01;  // Load 1 (for 8-bit counter)
    dut->up_down = 0;      // Count down
    
    // Clock cycle for load
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    
    // Disable load
    dut->load_en = 0;
    
    // Clock cycles to reach underflow
    for (int i = 0; i < 5; i++) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        std::cout << "Count near underflow " << i+1 << ": " << (int)dut->count;
        if (dut->underflow) {
            std::cout << " (Underflow detected)";
        }
        std::cout << std::endl;
    }
    
    // Test case 6: Disable counter
    std::cout << "Test Case 6: Disable Counter" << std::endl;
    dut->enable = 0;
    dut->up_down = 1;  // Count up (should be ignored when disabled)
    
    // Clock cycles with counter disabled
    for (int i = 0; i < 3; i++) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        std::cout << "After disable " << i+1 << ", count = " << (int)dut->count << std::endl;
    }
    
    m_trace->close();
    delete dut;
    delete m_trace;
    
    return EXIT_SUCCESS;
} 