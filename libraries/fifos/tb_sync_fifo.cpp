#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vsync_fifo.h"

#define MAX_SIM_TIME 1000
vluint64_t sim_time = 0;
vluint64_t src_posedge_cnt = 0;
vluint64_t dst_posedge_cnt = 0;

// Test parameters
#define DATA_WIDTH 8
#define NUM_STAGES 2

void src_clock_tick(Vsync_fifo *dut, VerilatedVcdC *m_trace) {
    dut->src_clk = 0;
    dut->eval();
    sim_time++;
    m_trace->dump(sim_time);
    
    dut->src_clk = 1;
    dut->eval();
    sim_time++;
    m_trace->dump(sim_time);
    src_posedge_cnt++;
}

void dst_clock_tick(Vsync_fifo *dut, VerilatedVcdC *m_trace) {
    dut->dst_clk = 0;
    dut->eval();
    sim_time++;
    m_trace->dump(sim_time);
    
    dut->dst_clk = 1;
    dut->eval();
    sim_time++;
    m_trace->dump(sim_time);
    dst_posedge_cnt++;
}

// Function to send data from source to destination
bool send_data(Vsync_fifo *dut, VerilatedVcdC *m_trace, uint8_t data) {
    if (!dut->src_ready) {
        return false;
    }
    
    dut->src_valid = 1;
    dut->src_data = data;
    src_clock_tick(dut, m_trace);
    
    // Wait until source is not ready, which means data is being transferred
    while (dut->src_ready) {
        src_clock_tick(dut, m_trace);
        dst_clock_tick(dut, m_trace);
    }
    
    dut->src_valid = 0;
    return true;
}

// Function to receive data at destination
bool receive_data(Vsync_fifo *dut, VerilatedVcdC *m_trace, uint8_t &data) {
    // Wait until destination has valid data
    while (!dut->dst_valid) {
        dst_clock_tick(dut, m_trace);
        src_clock_tick(dut, m_trace);
    }
    
    // Capture data
    data = dut->dst_data;
    
    // Assert ready to accept data
    dut->dst_ready = 1;
    dst_clock_tick(dut, m_trace);
    
    // Wait until valid is deasserted
    while (dut->dst_valid) {
        dst_clock_tick(dut, m_trace);
        src_clock_tick(dut, m_trace);
    }
    
    dut->dst_ready = 0;
    dst_clock_tick(dut, m_trace);
    
    return true;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Vsync_fifo *dut = new Vsync_fifo;
    
    // Enable waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform_sync_fifo.vcd");
    
    // Test tracking variables
    bool all_tests_pass = true;
    int tests_passed = 0;
    int total_tests = 3; // Three test cases
    bool test1_pass = true;
    bool test2_pass = true;
    bool test3_pass = true;
    
    // Initialize signals
    dut->src_clk = 0;
    dut->dst_clk = 0;
    dut->src_rst_n = 0;
    dut->dst_rst_n = 0;
    dut->src_valid = 0;
    dut->dst_ready = 0;
    dut->src_data = 0;
    
    // Apply reset
    for (int i = 0; i < 5; i++) {
        src_clock_tick(dut, m_trace);
        dst_clock_tick(dut, m_trace);
    }
    dut->src_rst_n = 1;
    dut->dst_rst_n = 1;
    for (int i = 0; i < 2; i++) {
        src_clock_tick(dut, m_trace);
        dst_clock_tick(dut, m_trace);
    }
    
    std::cout << "Starting Synchronization FIFO test..." << std::endl;
    
    // Test 1: Basic data transfer
    std::cout << "Test 1: Basic data transfer" << std::endl;
    
    uint8_t test_data[] = {0x55, 0xAA, 0x33, 0xCC, 0x0F, 0xF0};
    uint8_t received_data;
    
    for (int i = 0; i < 6; i++) {
        // Send data from source to destination
        std::cout << "Sending data: 0x" << std::hex << (int)test_data[i] << std::dec << std::endl;
        if (send_data(dut, m_trace, test_data[i])) {
            std::cout << "Data sent successfully" << std::endl;
        } else {
            std::cout << "Failed to send data" << std::endl;
            test1_pass = false;
        }
        
        // Receive data at destination
        if (receive_data(dut, m_trace, received_data)) {
            std::cout << "Received data: 0x" << std::hex << (int)received_data << std::dec;
            std::cout << " (Expected: 0x" << std::hex << (int)test_data[i] << std::dec << ")" << std::endl;
            if (received_data != test_data[i]) {
                test1_pass = false;
            }
        } else {
            std::cout << "Failed to receive data" << std::endl;
            test1_pass = false;
        }
    }
    
    // Test 2: Rapid source transactions
    std::cout << "\nTest 2: Rapid source transactions (source faster than destination)" << std::endl;
    
    // Reset for the next test
    dut->src_rst_n = 0;
    dut->dst_rst_n = 0;
    for (int i = 0; i < 5; i++) {
        src_clock_tick(dut, m_trace);
        dst_clock_tick(dut, m_trace);
    }
    dut->src_rst_n = 1;
    dut->dst_rst_n = 1;
    for (int i = 0; i < 2; i++) {
        src_clock_tick(dut, m_trace);
        dst_clock_tick(dut, m_trace);
    }
    
    // Send multiple data items rapidly
    uint8_t rapid_data[] = {0x11, 0x22, 0x33, 0x44};
    
    // Send all data items
    for (int i = 0; i < 4; i++) {
        std::cout << "Rapidly sending data: 0x" << std::hex << (int)rapid_data[i] << std::dec << std::endl;
        
        // Try to send data, but continue even if not ready
        if (dut->src_ready) {
            dut->src_valid = 1;
            dut->src_data = rapid_data[i];
            src_clock_tick(dut, m_trace);
            
            // Wait a bit between each send
            for (int j = 0; j < 3; j++) {
                src_clock_tick(dut, m_trace);
            }
            
            dut->src_valid = 0;
            src_clock_tick(dut, m_trace);
        } else {
            std::cout << "Source not ready, waiting..." << std::endl;
            // Wait until ready
            while (!dut->src_ready) {
                src_clock_tick(dut, m_trace);
                dst_clock_tick(dut, m_trace);
            }
            // Then try again (same data)
            i--;
        }
    }
    
    // Receive all data items
    for (int i = 0; i < 4; i++) {
        if (receive_data(dut, m_trace, received_data)) {
            std::cout << "Received data: 0x" << std::hex << (int)received_data << std::dec;
            std::cout << " (Expected: 0x" << std::hex << (int)rapid_data[i] << std::dec << ")" << std::endl;
            if (received_data != rapid_data[i]) {
                test2_pass = false;
            }
        } else {
            std::cout << "Failed to receive data" << std::endl;
            test2_pass = false;
        }
    }
    
    // Test 3: Slow destination
    std::cout << "\nTest 3: Slow destination (destination slower than source)" << std::endl;
    
    // Reset for the next test
    dut->src_rst_n = 0;
    dut->dst_rst_n = 0;
    for (int i = 0; i < 5; i++) {
        src_clock_tick(dut, m_trace);
        dst_clock_tick(dut, m_trace);
    }
    dut->src_rst_n = 1;
    dut->dst_rst_n = 1;
    for (int i = 0; i < 2; i++) {
        src_clock_tick(dut, m_trace);
        dst_clock_tick(dut, m_trace);
    }
    
    // Send data
    uint8_t slow_dst_data = 0xA5;
    std::cout << "Sending data: 0x" << std::hex << (int)slow_dst_data << std::dec << std::endl;
    send_data(dut, m_trace, slow_dst_data);
    
    // Run destination clock slower than source clock
    for (int i = 0; i < 10; i++) {
        src_clock_tick(dut, m_trace);
        if (i % 3 == 0) {  // Only run destination clock every 3 source clocks
            dst_clock_tick(dut, m_trace);
        }
    }
    
    // Now receive the data
    if (receive_data(dut, m_trace, received_data)) {
        std::cout << "Received data: 0x" << std::hex << (int)received_data << std::dec;
        std::cout << " (Expected: 0x" << std::hex << (int)slow_dst_data << std::dec << ")" << std::endl;
        if (received_data != slow_dst_data) {
            test3_pass = false;
        }
    } else {
        std::cout << "Failed to receive data" << std::endl;
        test3_pass = false;
    }
    
    // Track test results
    if (test1_pass) tests_passed++;
    if (test2_pass) tests_passed++;
    if (test3_pass) tests_passed++;
    all_tests_pass = test1_pass && test2_pass && test3_pass;
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (all_tests_pass ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << tests_passed << " of " << total_tests << std::endl;
    
    // Cleanup
    m_trace->close();
    delete m_trace;
    delete dut;
    
    return 0;
} 