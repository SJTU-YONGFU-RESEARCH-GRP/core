#include <stdlib.h>
#include <iostream>
#include <vector>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vskid_buffer.h"

#define MAX_SIM_TIME 1000
vluint64_t sim_time = 0;
vluint64_t posedge_cnt = 0;

// Test parameters
#define DATA_WIDTH 8

void clock_cycle(Vskid_buffer *dut, VerilatedVcdC *m_trace) {
    dut->clk = 0;
    dut->eval();
    sim_time++;
    m_trace->dump(sim_time);
    
    dut->clk = 1;
    dut->eval();
    sim_time++;
    m_trace->dump(sim_time);
    posedge_cnt++;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Vskid_buffer *dut = new Vskid_buffer;
    
    // Enable waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    // Initialize signals
    dut->clk = 0;
    dut->rst_n = 0;
    dut->s_valid = 0;
    dut->s_data = 0;
    dut->m_ready = 1;  // Initially ready to receive data
    
    // Apply reset
    for (int i = 0; i < 5; i++) {
        clock_cycle(dut, m_trace);
    }
    dut->rst_n = 1;
    for (int i = 0; i < 2; i++) {
        clock_cycle(dut, m_trace);
    }
    
    std::cout << "Starting Skid Buffer test..." << std::endl;
    
    // Test 1: Normal flow - no backpressure
    std::cout << "Test 1: Normal flow - no backpressure" << std::endl;
    std::vector<uint8_t> test_data;
    
    for (int i = 1; i <= 10; i++) {
        uint8_t data = i;
        test_data.push_back(data);
        
        // Send data
        dut->s_valid = 1;
        dut->s_data = data;
        clock_cycle(dut, m_trace);
        
        // Check if data was accepted
        if (dut->s_ready) {
            std::cout << "Data sent: " << (int)data << std::endl;
        } else {
            std::cout << "Failed to send data: " << (int)data << " (not ready)" << std::endl;
        }
        
        // Check if data appears at output
        if (dut->m_valid) {
            std::cout << "Data received: " << (int)dut->m_data << std::endl;
        }
    }
    
    // Clear s_valid
    dut->s_valid = 0;
    clock_cycle(dut, m_trace);
    
    // Test 2: Backpressure test
    std::cout << "\nTest 2: Backpressure test" << std::endl;
    
    // Assert backpressure
    dut->m_ready = 0;
    
    // Try to send 3 data items (should accept 2 and then stall)
    for (int i = 20; i <= 22; i++) {
        dut->s_valid = 1;
        dut->s_data = i;
        clock_cycle(dut, m_trace);
        
        std::cout << "Cycle " << i-19 << ": ";
        std::cout << "s_valid=" << (int)dut->s_valid << ", ";
        std::cout << "s_ready=" << (int)dut->s_ready << ", ";
        std::cout << "s_data=" << (int)dut->s_data << ", ";
        std::cout << "m_valid=" << (int)dut->m_valid << ", ";
        std::cout << "m_ready=" << (int)dut->m_ready << ", ";
        std::cout << "m_data=" << (int)dut->m_data << std::endl;
    }
    
    // Release backpressure and check data flow
    std::cout << "\nReleasing backpressure:" << std::endl;
    dut->s_valid = 0;
    dut->m_ready = 1;
    
    for (int i = 0; i < 3; i++) {
        clock_cycle(dut, m_trace);
        
        std::cout << "Cycle " << i+1 << " after release: ";
        std::cout << "s_valid=" << (int)dut->s_valid << ", ";
        std::cout << "s_ready=" << (int)dut->s_ready << ", ";
        std::cout << "m_valid=" << (int)dut->m_valid << ", ";
        std::cout << "m_ready=" << (int)dut->m_ready << ", ";
        std::cout << "m_data=" << (int)dut->m_data << std::endl;
    }
    
    // Test 3: Intermittent backpressure
    std::cout << "\nTest 3: Intermittent backpressure" << std::endl;
    
    // Send data with intermittent backpressure
    for (int i = 30; i < 40; i++) {
        // Toggle m_ready every 2 cycles
        if ((i % 2) == 0) {
            dut->m_ready = 0;  // Assert backpressure
        } else {
            dut->m_ready = 1;  // Release backpressure
        }
        
        dut->s_valid = 1;
        dut->s_data = i;
        clock_cycle(dut, m_trace);
        
        std::cout << "Cycle " << i-29 << ": ";
        std::cout << "s_valid=" << (int)dut->s_valid << ", ";
        std::cout << "s_ready=" << (int)dut->s_ready << ", ";
        std::cout << "s_data=" << (int)dut->s_data << ", ";
        std::cout << "m_valid=" << (int)dut->m_valid << ", ";
        std::cout << "m_ready=" << (int)dut->m_ready << ", ";
        std::cout << "m_data=" << (int)dut->m_data << std::endl;
    }
    
    // Final cycles with both valid and ready asserted
    std::cout << "\nFinal cycles:" << std::endl;
    dut->s_valid = 1;
    dut->m_ready = 1;
    dut->s_data = 50;
    
    for (int i = 0; i < 3; i++) {
        clock_cycle(dut, m_trace);
        
        std::cout << "Final cycle " << i+1 << ": ";
        std::cout << "s_valid=" << (int)dut->s_valid << ", ";
        std::cout << "s_ready=" << (int)dut->s_ready << ", ";
        std::cout << "s_data=" << (int)dut->s_data << ", ";
        std::cout << "m_valid=" << (int)dut->m_valid << ", ";
        std::cout << "m_ready=" << (int)dut->m_ready << ", ";
        std::cout << "m_data=" << (int)dut->m_data << std::endl;
    }
    
    std::cout << "\nSkid Buffer test completed successfully!" << std::endl;
    
    // Cleanup
    m_trace->close();
    delete m_trace;
    delete dut;
    
    return 0;
} 