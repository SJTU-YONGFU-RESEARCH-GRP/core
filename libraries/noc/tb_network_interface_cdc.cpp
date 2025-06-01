#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vnetwork_interface_cdc.h"

#define MAX_SIM_TIME 2000
vluint64_t sim_time = 0;
vluint64_t src_posedge_cnt = 0;
vluint64_t dst_posedge_cnt = 0;

// Clock periods (in ps) - using different frequencies to test CDC
#define SRC_CLK_PERIOD 20  // 50 MHz
#define DST_CLK_PERIOD 15  // ~66.67 MHz

// Test configuration
#define DATA_WIDTH 32
#define ADDR_WIDTH 32
#define TEST_COUNT 5

void tick_clocks(Vnetwork_interface_cdc *dut, VerilatedVcdC *m_trace);
void wait_src_cycles(Vnetwork_interface_cdc *dut, VerilatedVcdC *m_trace, int cycles);
void wait_dst_cycles(Vnetwork_interface_cdc *dut, VerilatedVcdC *m_trace, int cycles);

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Vnetwork_interface_cdc *dut = new Vnetwork_interface_cdc;
    
    // Enable waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("network_interface_cdc_sim.vcd");
    
    // Initialize signals
    dut->src_clk = 0;
    dut->dst_clk = 0;
    dut->src_rst_n = 0;
    dut->dst_rst_n = 0;
    dut->router_in_ready = 1;
    dut->router_out_valid = 0;
    dut->router_out_data = 0;
    dut->mem_write = 0;
    dut->mem_read = 0;
    dut->mem_addr = 0;
    dut->mem_wdata = 0;
    dut->dest_id = 0x01;  // Destination node ID
    dut->msg_type = 0x01; // Message type
    
    // Reset sequence - hold both resets for several cycles
    for(int i = 0; i < 10; i++) {
        tick_clocks(dut, m_trace);
    }
    
    // Release resets
    dut->src_rst_n = 1;
    dut->dst_rst_n = 1;
    
    // Additional stabilization cycles after reset
    for(int i = 0; i < 10; i++) {
        tick_clocks(dut, m_trace);
    }
    
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
    
    std::cout << "Starting CDC Network Interface tests with different clock domains:" << std::endl;
    std::cout << "Source clock period: " << SRC_CLK_PERIOD << " ps" << std::endl;
    std::cout << "Destination clock period: " << DST_CLK_PERIOD << " ps" << std::endl;
    
    // Test 1: Write transactions across clock domains
    for (int i = 0; i < TEST_COUNT/2; i++) {
        std::cout << "Write Test " << i << ": Addr=0x" << std::hex << test_addrs[i]
                  << ", Data=0x" << test_data[i] << std::dec << std::endl;
        
        // Setup write transaction
        dut->mem_addr = test_addrs[i];
        dut->mem_wdata = test_data[i];
        dut->mem_write = 1;
        dut->mem_read = 0;
        
        // Clock cycle to start transaction
        wait_src_cycles(dut, m_trace, 1);
        dut->mem_write = 0;
        
        // Wait for header packet to appear on router interface
        int timeout = 100;
        while (!dut->router_in_valid && timeout > 0) {
            tick_clocks(dut, m_trace);
            timeout--;
        }
        
        if (timeout == 0) {
            std::cout << "Write Test " << i << " FAILED: Timeout waiting for header packet" << std::endl;
            continue;
        }
        
        // Verify header packet format
        uint32_t expected_header = (dut->dest_id << 24) | (dut->msg_type << 21) | 
                                  (1 << 20) | (test_addrs[i] & 0x1FFFFF);
        
        bool header_passed = (dut->router_in_data == expected_header);
        
        if (!header_passed) {
            std::cout << "Write Test " << i << " FAILED: Header mismatch. "
                      << "Expected: 0x" << std::hex << expected_header 
                      << ", Got: 0x" << dut->router_in_data << std::dec << std::endl;
        }
        
        // Accept header packet
        wait_dst_cycles(dut, m_trace, 1);
        
        // Wait for data packet
        timeout = 100;
        while (!dut->router_in_valid && timeout > 0) {
            tick_clocks(dut, m_trace);
            timeout--;
        }
        
        if (timeout == 0) {
            std::cout << "Write Test " << i << " FAILED: Timeout waiting for data packet" << std::endl;
            continue;
        }
        
        // Verify data packet
        bool data_passed = (dut->router_in_data == test_data[i]);
        
        if (!data_passed) {
            std::cout << "Write Test " << i << " FAILED: Data mismatch. "
                      << "Expected: 0x" << std::hex << test_data[i] 
                      << ", Got: 0x" << dut->router_in_data << std::dec << std::endl;
        }
        
        // Accept data packet
        wait_dst_cycles(dut, m_trace, 1);
        
        // Wait for memory ready (write complete)
        timeout = 100;
        while (!dut->mem_ready && timeout > 0) {
            tick_clocks(dut, m_trace);
            timeout--;
        }
        
        if (timeout == 0) {
            std::cout << "Write Test " << i << " FAILED: Timeout waiting for write completion" << std::endl;
            continue;
        }
        
        // Additional cycles to complete transaction
        wait_src_cycles(dut, m_trace, 2);
        
        if (header_passed && data_passed) {
            passed_tests++;
            std::cout << "Write Test " << i << " PASSED!" << std::endl;
        }
    }
    
    // Test 2: Read transactions
    for (int i = TEST_COUNT/2; i < TEST_COUNT; i++) {
        std::cout << "Read Test " << i << ": Addr=0x" << std::hex << test_addrs[i]
                  << ", Expected Data=0x" << test_data[i] << std::dec << std::endl;
        
        // Setup read transaction
        dut->mem_addr = test_addrs[i];
        dut->mem_read = 1;
        dut->mem_write = 0;
        
        // Clock cycle to start transaction
        wait_src_cycles(dut, m_trace, 1);
        dut->mem_read = 0;
        
        // Wait for header packet
        int timeout = 100;
        while (!dut->router_in_valid && timeout > 0) {
            tick_clocks(dut, m_trace);
            timeout--;
        }
        
        if (timeout == 0) {
            std::cout << "Read Test " << i << " FAILED: Timeout waiting for header packet" << std::endl;
            continue;
        }
        
        // Verify header packet format
        uint32_t expected_header = (dut->dest_id << 24) | (dut->msg_type << 21) | 
                                  (0 << 20) | (test_addrs[i] & 0x1FFFFF);
        
        bool header_passed = (dut->router_in_data == expected_header);
        
        if (!header_passed) {
            std::cout << "Read Test " << i << " FAILED: Header mismatch. "
                      << "Expected: 0x" << std::hex << expected_header 
                      << ", Got: 0x" << dut->router_in_data << std::dec << std::endl;
        }
        
        // Accept header packet
        wait_dst_cycles(dut, m_trace, 2);
        
        // Send response data
        dut->router_out_data = test_data[i];
        dut->router_out_valid = 1;
        wait_dst_cycles(dut, m_trace, 1);
        dut->router_out_valid = 0;
        
        // Wait for data to appear on memory interface
        timeout = 100;
        while (!dut->mem_ready && timeout > 0) {
            tick_clocks(dut, m_trace);
            timeout--;
        }
        
        if (timeout == 0) {
            std::cout << "Read Test " << i << " FAILED: Timeout waiting for read data" << std::endl;
            continue;
        }
        
        // Verify received data
        bool data_passed = (dut->mem_rdata == test_data[i]);
        
        if (!data_passed) {
            std::cout << "Read Test " << i << " FAILED: Data mismatch. "
                      << "Expected: 0x" << std::hex << test_data[i] 
                      << ", Got: 0x" << dut->mem_rdata << std::dec << std::endl;
        }
        
        // Complete transaction
        wait_src_cycles(dut, m_trace, 2);
        
        if (header_passed && data_passed) {
            passed_tests++;
            std::cout << "Read Test " << i << " PASSED!" << std::endl;
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
    
    return (passed_tests == TEST_COUNT) ? 0 : 1;
}

// Generate clock ticks for both clocks with their respective periods
void tick_clocks(Vnetwork_interface_cdc *dut, VerilatedVcdC *m_trace) {
    // Track if each clock should toggle this step
    static int src_clk_counter = 0;
    static int dst_clk_counter = 0;
    
    // Advance time by 1ps
    sim_time++;
    
    // Check if source clock should toggle
    src_clk_counter++;
    if (src_clk_counter >= SRC_CLK_PERIOD/2) {
        dut->src_clk = !dut->src_clk;
        src_clk_counter = 0;
        if (dut->src_clk) src_posedge_cnt++;
    }
    
    // Check if destination clock should toggle
    dst_clk_counter++;
    if (dst_clk_counter >= DST_CLK_PERIOD/2) {
        dut->dst_clk = !dut->dst_clk;
        dst_clk_counter = 0;
        if (dut->dst_clk) dst_posedge_cnt++;
    }
    
    // Evaluate and dump
    dut->eval();
    m_trace->dump(sim_time);
}

// Wait for a specified number of source clock cycles
void wait_src_cycles(Vnetwork_interface_cdc *dut, VerilatedVcdC *m_trace, int cycles) {
    uint64_t target = src_posedge_cnt + cycles;
    while (src_posedge_cnt < target) {
        tick_clocks(dut, m_trace);
    }
}

// Wait for a specified number of destination clock cycles
void wait_dst_cycles(Vnetwork_interface_cdc *dut, VerilatedVcdC *m_trace, int cycles) {
    uint64_t target = dst_posedge_cnt + cycles;
    while (dst_posedge_cnt < target) {
        tick_clocks(dut, m_trace);
    }
} 