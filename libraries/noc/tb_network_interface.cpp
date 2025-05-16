#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vnetwork_interface.h"

#define MAX_SIM_TIME 1000
vluint64_t sim_time = 0;
vluint64_t posedge_cnt = 0;

// Test configuration
#define DATA_WIDTH 32
#define ADDR_WIDTH 32
#define TEST_COUNT 10

void clock_cycle(Vnetwork_interface *dut, VerilatedVcdC *m_trace);
void wait_cycles(Vnetwork_interface *dut, VerilatedVcdC *m_trace, int cycles);

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Vnetwork_interface *dut = new Vnetwork_interface;
    
    // Enable waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("network_interface_sim.vcd");
    
    // Initialize signals
    dut->clk = 0;
    dut->rst_n = 0;
    dut->router_in_ready = 1;
    dut->router_out_valid = 0;
    dut->router_out_data = 0;
    dut->mem_write = 0;
    dut->mem_read = 0;
    dut->mem_addr = 0;
    dut->mem_wdata = 0;
    dut->dest_id = 0x01;  // Destination node ID
    dut->msg_type = 0x01; // Message type
    
    // Reset sequence
    wait_cycles(dut, m_trace, 5);
    dut->rst_n = 1;
    wait_cycles(dut, m_trace, 5);
    
    // Test variables
    int passed_tests = 0;
    uint32_t test_addrs[TEST_COUNT];
    uint32_t test_data[TEST_COUNT];
    uint32_t received_data[TEST_COUNT];
    
    // Generate test data
    for (int i = 0; i < TEST_COUNT; i++) {
        test_addrs[i] = rand() & 0x1FFFFF; // Fit in address field
        test_data[i] = rand() & 0xFFFFFFFF;
    }
    
    // Test 1: Write transactions
    for (int i = 0; i < TEST_COUNT/2; i++) {
        // Setup write transaction
        dut->mem_addr = test_addrs[i];
        dut->mem_wdata = test_data[i];
        dut->mem_write = 1;
        dut->mem_read = 0;
        
        // Clock cycle to start transaction
        clock_cycle(dut, m_trace);
        dut->mem_write = 0;
        
        // Wait for header packet
        while (!dut->router_in_valid) {
            clock_cycle(dut, m_trace);
        }
        
        // Verify header packet format
        uint32_t expected_header = (dut->dest_id << 24) | (dut->msg_type << 21) | 
                                   (0 << 12) | (1 << 20) | (test_addrs[i] & 0x1FFFFF);
        
        if (dut->router_in_data == expected_header) {
            // Accept header packet
            clock_cycle(dut, m_trace);
            
            // Wait for data packet
            while (!dut->mem_ready) {
                clock_cycle(dut, m_trace);
            }
            
            // Verify data packet
            if (dut->router_in_data == test_data[i]) {
                passed_tests++;
            } else {
                std::cout << "Write Test " << i << " failed. Data mismatch. Expected: " 
                          << test_data[i] << ", Got: " << dut->router_in_data << std::endl;
            }
        } else {
            std::cout << "Write Test " << i << " failed. Header mismatch. Expected: " 
                      << expected_header << ", Got: " << dut->router_in_data << std::endl;
        }
        
        // Complete transaction
        clock_cycle(dut, m_trace);
    }
    
    // Test 2: Read transactions
    for (int i = TEST_COUNT/2; i < TEST_COUNT; i++) {
        // Setup read transaction
        dut->mem_addr = test_addrs[i];
        dut->mem_read = 1;
        dut->mem_write = 0;
        
        // Clock cycle to start transaction
        clock_cycle(dut, m_trace);
        dut->mem_read = 0;
        
        // Wait for header packet
        while (!dut->router_in_valid) {
            clock_cycle(dut, m_trace);
        }
        
        // Verify header packet format
        uint32_t expected_header = (dut->dest_id << 24) | (dut->msg_type << 21) | 
                                   (0 << 12) | (0 << 20) | (test_addrs[i] & 0x1FFFFF);
        
        if (dut->router_in_data == expected_header) {
            // Accept header packet
            clock_cycle(dut, m_trace);
            
            // Send response data
            dut->router_out_data = test_data[i];
            dut->router_out_valid = 1;
            clock_cycle(dut, m_trace);
            dut->router_out_valid = 0;
            
            // Wait for ready signal
            while (!dut->mem_ready) {
                clock_cycle(dut, m_trace);
            }
            
            // Verify received data
            if (dut->mem_rdata == test_data[i]) {
                passed_tests++;
            } else {
                std::cout << "Read Test " << i << " failed. Data mismatch. Expected: " 
                          << test_data[i] << ", Got: " << dut->mem_rdata << std::endl;
            }
        } else {
            std::cout << "Read Test " << i << " failed. Header mismatch. Expected: " 
                      << expected_header << ", Got: " << dut->router_in_data << std::endl;
        }
        
        // Complete transaction
        clock_cycle(dut, m_trace);
    }
    
    // Print test results in the standardized format
    std::cout << "==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (passed_tests == TEST_COUNT ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << passed_tests << " of " << TEST_COUNT << std::endl;
    
    // Clean up
    m_trace->close();
    delete m_trace;
    delete dut;
    
    return 0;
}

// Generate a clock cycle
void clock_cycle(Vnetwork_interface *dut, VerilatedVcdC *m_trace) {
    dut->clk = 0;
    dut->eval();
    m_trace->dump(sim_time++);
    
    dut->clk = 1;
    dut->eval();
    m_trace->dump(sim_time++);
    
    posedge_cnt++;
}

// Wait for multiple clock cycles
void wait_cycles(Vnetwork_interface *dut, VerilatedVcdC *m_trace, int cycles) {
    for (int i = 0; i < cycles; i++) {
        clock_cycle(dut, m_trace);
    }
} 