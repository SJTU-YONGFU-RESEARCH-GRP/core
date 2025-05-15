#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vdual_edge_register.h"

#define MAX_SIM_TIME 300
vluint64_t sim_time = 0;

// Helper function to toggle clock and evaluate the model
void toggle_clock(Vdual_edge_register *dut, VerilatedVcdC *m_trace) {
    dut->clk = !dut->clk;
    dut->eval();
    m_trace->dump(sim_time++);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vdual_edge_register* dut = new Vdual_edge_register;
    
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    // Initialize inputs
    dut->clk = 0;
    dut->rst_n = 0;
    dut->enable = 0;
    dut->data_in = 0;
    
    // Reset sequence
    std::cout << "Test Case 1: Reset Sequence" << std::endl;
    for (int i = 0; i < 10; i++) {
        toggle_clock(dut, m_trace);
    }
    dut->rst_n = 1;
    
    // Test case 2: Sample data on rising edge
    std::cout << "Test Case 2: Sample Data on Rising Edge" << std::endl;
    dut->enable = 1;
    
    // Input changes while clock is low (will be captured on next rising edge)
    dut->data_in = 0xAA;  // 10101010
    dut->eval();
    m_trace->dump(sim_time++);
    
    // Clock goes high - data should be captured
    toggle_clock(dut, m_trace);
    std::cout << "After rising edge, data_out = 0x" << std::hex << (int)dut->data_out << std::dec << std::endl;
    
    // Clock goes low again
    toggle_clock(dut, m_trace);
    
    // Test case 3: Sample data on falling edge
    std::cout << "Test Case 3: Sample Data on Falling Edge" << std::endl;
    
    // Input changes while clock is high (will be captured on next falling edge)
    dut->data_in = 0x55;  // 01010101
    dut->eval();
    m_trace->dump(sim_time++);
    
    // Clock goes low - data should be captured
    toggle_clock(dut, m_trace);
    std::cout << "After falling edge, data_out = 0x" << std::hex << (int)dut->data_out << std::dec << std::endl;
    
    // Test case 4: Alternate sampling on both edges
    std::cout << "Test Case 4: Alternate Sampling on Both Edges" << std::endl;
    
    const int NUM_EDGES = 10;
    uint8_t test_data[NUM_EDGES] = {0x01, 0x03, 0x07, 0x0F, 0x1F, 0x3F, 0x7F, 0xFF, 0x00, 0xFF};
    
    for (int i = 0; i < NUM_EDGES; i++) {
        // Set new data_in
        dut->data_in = test_data[i];
        dut->eval();
        m_trace->dump(sim_time++);
        
        // Toggle clock
        toggle_clock(dut, m_trace);
        
        // Check output after edge
        std::cout << "Edge " << i+1 << " (";
        if (dut->clk) {
            std::cout << "rising): ";
        } else {
            std::cout << "falling): ";
        }
        std::cout << "data_in = 0x" << std::hex << (int)test_data[i] 
                  << ", data_out = 0x" << (int)dut->data_out << std::dec << std::endl;
    }
    
    // Test case 5: Disable the register
    std::cout << "Test Case 5: Disable Register" << std::endl;
    dut->enable = 0;
    
    for (int i = 0; i < 4; i++) {
        // Set new data_in (should be ignored since enable = 0)
        dut->data_in = 0xA5 + i;
        dut->eval();
        m_trace->dump(sim_time++);
        
        // Toggle clock
        toggle_clock(dut, m_trace);
        
        // Check output (should remain unchanged)
        std::cout << "Disabled edge " << i+1 << ": data_in = 0x" << std::hex 
                  << (int)dut->data_in << ", data_out = 0x" << (int)dut->data_out << std::dec << std::endl;
    }
    
    // Test case 6: Reset during operation
    std::cout << "Test Case 6: Reset During Operation" << std::endl;
    dut->enable = 1;
    dut->data_in = 0x99;
    dut->eval();
    m_trace->dump(sim_time++);
    
    // Toggle clock a few times
    for (int i = 0; i < 2; i++) {
        toggle_clock(dut, m_trace);
    }
    
    // Assert reset
    dut->rst_n = 0;
    dut->eval();
    m_trace->dump(sim_time++);
    
    // Toggle clock with reset asserted
    toggle_clock(dut, m_trace);
    std::cout << "After reset, data_out = 0x" << std::hex << (int)dut->data_out << std::dec << std::endl;
    
    m_trace->close();
    delete dut;
    delete m_trace;
    
    return EXIT_SUCCESS;
} 