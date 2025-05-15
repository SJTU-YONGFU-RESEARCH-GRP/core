#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vonehot_decoder_register.h"

#define MAX_SIM_TIME 300
vluint64_t sim_time = 0;

void clock_tick(Vonehot_decoder_register *dut, VerilatedVcdC *m_trace) {
    dut->clk = 0;
    dut->eval();
    m_trace->dump(sim_time++);
    
    dut->clk = 1;
    dut->eval();
    m_trace->dump(sim_time++);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vonehot_decoder_register* dut = new Vonehot_decoder_register;
    
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    // Initialize inputs
    dut->clk = 0;
    dut->rst_n = 0;
    dut->enable = 0;
    dut->binary_in = 0;
    
    // Reset sequence
    std::cout << "Test Case 1: Reset Sequence" << std::endl;
    for (int i = 0; i < 5; i++) {
        clock_tick(dut, m_trace);
    }
    dut->rst_n = 1;
    
    // Test case 2: Test all binary inputs
    std::cout << "Test Case 2: Test All Binary Inputs" << std::endl;
    dut->enable = 1;
    
    for (int i = 0; i < 16; i++) {
        dut->binary_in = i;
        clock_tick(dut, m_trace);
        
        // Print in binary format for better visibility of one-hot encoding
        std::cout << "Binary input: " << i << " (";
        for (int b = 3; b >= 0; b--) {
            std::cout << ((i >> b) & 1);
        }
        std::cout << "), One-hot output: 0x" << std::hex << dut->onehot_out << std::dec << " (";
        
        // Print one-hot output in binary
        for (int b = 15; b >= 0; b--) {
            std::cout << ((dut->onehot_out >> b) & 1);
            if (b % 4 == 0 && b > 0) std::cout << " ";
        }
        std::cout << ")" << std::endl;
    }
    
    // Test case 3: Disable decoder
    std::cout << "Test Case 3: Disable Decoder" << std::endl;
    dut->enable = 0;
    dut->binary_in = 10;  // Should not affect output
    
    for (int i = 0; i < 3; i++) {
        clock_tick(dut, m_trace);
        std::cout << "After disabled cycle " << i+1 << ", binary_in = " << (int)dut->binary_in 
                  << ", onehot_out = 0x" << std::hex << dut->onehot_out << std::dec << std::endl;
        
        // Change input during disabled state
        dut->binary_in = (dut->binary_in + 1) % 16;
    }
    
    // Test case 4: Re-enable decoder
    std::cout << "Test Case 4: Re-enable Decoder" << std::endl;
    dut->enable = 1;
    dut->binary_in = 7;
    
    clock_tick(dut, m_trace);
    std::cout << "After re-enable, binary_in = " << (int)dut->binary_in 
              << ", onehot_out = 0x" << std::hex << dut->onehot_out << std::dec << std::endl;
    
    // Test case 5: Reset during operation
    std::cout << "Test Case 5: Reset During Operation" << std::endl;
    dut->rst_n = 0;
    clock_tick(dut, m_trace);
    std::cout << "After reset, onehot_out = 0x" << std::hex << dut->onehot_out << std::dec << std::endl;
    
    m_trace->close();
    delete dut;
    delete m_trace;
    
    return EXIT_SUCCESS;
} 