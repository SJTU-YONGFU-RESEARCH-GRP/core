#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vclock_domain_crossing.h"

#define MAX_SIM_TIME 1000
vluint64_t sim_time = 0;

// Test configuration
#define DATA_WIDTH 32
#define TEST_COUNT 10

void src_clock_cycle(Vclock_domain_crossing *dut, VerilatedVcdC *m_trace);
void dst_clock_cycle(Vclock_domain_crossing *dut, VerilatedVcdC *m_trace);
void wait_cycles(Vclock_domain_crossing *dut, VerilatedVcdC *m_trace, int cycles);

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Vclock_domain_crossing *dut = new Vclock_domain_crossing;
    
    // Enable waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("clock_domain_crossing_sim.vcd");
    
    // Initialize signals
    dut->src_clk = 0;
    dut->dst_clk = 0;
    dut->src_rst_n = 0;
    dut->dst_rst_n = 0;
    dut->src_valid = 0;
    dut->dst_ready = 0;
    dut->src_data = 0;
    
    // Reset sequence
    wait_cycles(dut, m_trace, 5);
    dut->src_rst_n = 1;
    dut->dst_rst_n = 1;
    wait_cycles(dut, m_trace, 10);
    
    // Test variables
    int passed_tests = 0;
    uint32_t test_data[TEST_COUNT];
    uint32_t received_data[TEST_COUNT];
    
    // Generate test data
    for (int i = 0; i < TEST_COUNT; i++) {
        test_data[i] = rand() & ((1ULL << DATA_WIDTH) - 1);
    }
    
    // Run tests
    for (int i = 0; i < TEST_COUNT; i++) {
        // Set source data and valid
        dut->src_data = test_data[i];
        dut->src_valid = 1;
        
        // Wait for source ready to go low (busy)
        while (dut->src_ready) {
            src_clock_cycle(dut, m_trace);
        }
        
        // Complete source handshake
        dut->src_valid = 0;
        
        // Wait for destination valid
        int timeout = 100;  // Prevent infinite loop
        while (!dut->dst_valid && timeout > 0) {
            src_clock_cycle(dut, m_trace);
            dst_clock_cycle(dut, m_trace);
            timeout--;
        }
        
        if (timeout <= 0) {
            std::cout << "Test " << i << " timed out waiting for dst_valid" << std::endl;
            continue;
        }
        
        // Capture received data
        received_data[i] = dut->dst_data;
        
        // Complete destination handshake
        dut->dst_ready = 1;
        dst_clock_cycle(dut, m_trace);
        dut->dst_ready = 0;
        
        // Wait for source ready to go high again
        timeout = 100;  // Prevent infinite loop
        while (!dut->src_ready && timeout > 0) {
            src_clock_cycle(dut, m_trace);
            dst_clock_cycle(dut, m_trace);
            timeout--;
        }
        
        // Add some delay between transfers
        wait_cycles(dut, m_trace, 5);
        
        // Verify data
        if (received_data[i] == test_data[i]) {
            passed_tests++;
        } else {
            std::cout << "Test " << i << " failed. Expected: " << test_data[i] 
                      << ", Got: " << received_data[i] << std::endl;
        }
    }
    
    // Print test results in the standardized format
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (passed_tests == TEST_COUNT ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << passed_tests << " of " << TEST_COUNT << std::endl;
    
    // Clean up
    m_trace->close();
    delete m_trace;
    delete dut;
    
    return 0;
}

// Generate a source clock cycle
void src_clock_cycle(Vclock_domain_crossing *dut, VerilatedVcdC *m_trace) {
    dut->src_clk = 0;
    dut->eval();
    m_trace->dump(sim_time++);
    
    dut->src_clk = 1;
    dut->eval();
    m_trace->dump(sim_time++);
}

// Generate a destination clock cycle
void dst_clock_cycle(Vclock_domain_crossing *dut, VerilatedVcdC *m_trace) {
    dut->dst_clk = 0;
    dut->eval();
    m_trace->dump(sim_time++);
    
    dut->dst_clk = 1;
    dut->eval();
    m_trace->dump(sim_time++);
}

// Wait for multiple clock cycles
void wait_cycles(Vclock_domain_crossing *dut, VerilatedVcdC *m_trace, int cycles) {
    for (int i = 0; i < cycles; i++) {
        src_clock_cycle(dut, m_trace);
        dst_clock_cycle(dut, m_trace);
    }
} 