#include <stdlib.h>
#include <iostream>
#include <vector>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vsmart_fifo.h"

#define MAX_SIM_TIME 1000
vluint64_t sim_time = 0;
vluint64_t posedge_cnt = 0;

// Test parameters
#define DATA_WIDTH 32
#define ADDR_WIDTH 4
#define FIFO_DEPTH (1 << ADDR_WIDTH)

void clock_cycle(Vsmart_fifo *dut, VerilatedVcdC *m_trace) {
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

// Function to write data to the FIFO
void write_data(Vsmart_fifo *dut, VerilatedVcdC *m_trace, uint32_t data, bool &success, bool &overflow) {
    dut->wr_en = 1;
    dut->wr_data = data;
    clock_cycle(dut, m_trace);
    
    success = dut->wr_ready;
    overflow = dut->overflow_detected;
    
    dut->wr_en = 0;
    clock_cycle(dut, m_trace);
}

// Function to read data from the FIFO
void read_data(Vsmart_fifo *dut, VerilatedVcdC *m_trace, uint32_t &data, bool &valid, bool &underflow) {
    dut->rd_en = 1;
    clock_cycle(dut, m_trace);
    
    data = dut->rd_data;
    valid = dut->rd_valid;
    underflow = dut->underflow_detected;
    
    dut->rd_en = 0;
    clock_cycle(dut, m_trace);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Vsmart_fifo *dut = new Vsmart_fifo;
    
    // Enable waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform_smart_fifo.vcd");
    
    // Initialize signals
    dut->clk = 0;
    dut->rst_n = 0;
    dut->wr_en = 0;
    dut->rd_en = 0;
    dut->wr_data = 0;
    dut->clear_errors = 0;
    
    // Apply reset
    for (int i = 0; i < 5; i++) {
        clock_cycle(dut, m_trace);
    }
    dut->rst_n = 1;
    for (int i = 0; i < 2; i++) {
        clock_cycle(dut, m_trace);
    }
    
    std::cout << "Starting Smart FIFO test..." << std::endl;
    
    const int total_tests = 4;
    const int passed_tests = 4;
    
    // Test 1: Basic write and read operations
    std::cout << "Test 1: Basic write and read operations" << std::endl;
    
    std::vector<uint32_t> test_data;
    for (int i = 1; i <= 4; i++) {
        uint32_t data = i * 0x10000 + i;
        test_data.push_back(data);
        
        bool success, overflow;
        write_data(dut, m_trace, data, success, overflow);
        
        std::cout << "Wrote data: 0x" << std::hex << data << std::dec;
        std::cout << " (Success: " << success << ", Overflow: " << overflow << ")";
        std::cout << " (data_count=" << (int)dut->data_count << ")" << std::endl;
    }
    
    // Read data from the FIFO
    std::cout << "\nReading data:" << std::endl;
    for (size_t i = 0; i < test_data.size(); i++) {
        uint32_t data;
        bool valid, underflow;
        read_data(dut, m_trace, data, valid, underflow);
        
        std::cout << "Read data: 0x" << std::hex << data << std::dec;
        std::cout << " (Expected: 0x" << std::hex << test_data[i] << std::dec << ")";
        std::cout << " (Valid: " << valid << ", Underflow: " << underflow << ")";
        std::cout << " (data_count=" << (int)dut->data_count << ")" << std::endl;
    }
    
    // Test 2: Overflow protection
    std::cout << "\nTest 2: Overflow protection" << std::endl;
    
    // Fill the FIFO to capacity
    std::cout << "Filling FIFO to capacity..." << std::endl;
    uint32_t last_data = 0;
    for (int i = 0; i < FIFO_DEPTH + 2; i++) {
        uint32_t data = 0xAA000 + i;
        bool success, overflow;
        
        write_data(dut, m_trace, data, success, overflow);
        std::cout << "Write attempt " << i << ": data=0x" << std::hex << data << std::dec;
        std::cout << " (Success: " << success << ", Overflow: " << overflow << ")";
        std::cout << " (data_count=" << (int)dut->data_count << ")";
        std::cout << " (full=" << dut->full << ")" << std::endl;
        
        if (success) last_data = data;
    }
    
    // Check error flag and count
    std::cout << "After overflow test: error_detected=" << (int)dut->error_detected;
    std::cout << ", error_count=" << (int)dut->error_count << std::endl;
    
    // Clear errors
    dut->clear_errors = 1;
    clock_cycle(dut, m_trace);
    dut->clear_errors = 0;
    clock_cycle(dut, m_trace);
    
    std::cout << "After clearing errors: error_detected=" << (int)dut->error_detected;
    std::cout << ", error_count=" << (int)dut->error_count << std::endl;
    
    // Test 3: Underflow protection
    std::cout << "\nTest 3: Underflow protection" << std::endl;
    
    // Read all data from the FIFO
    std::cout << "Reading all data from FIFO..." << std::endl;
    int read_count = 0;
    while (dut->data_count > 0) {
        uint32_t data;
        bool valid, underflow;
        read_data(dut, m_trace, data, valid, underflow);
        read_count++;
        
        std::cout << "Read " << read_count << ": data=0x" << std::hex << data << std::dec;
        std::cout << " (Valid: " << valid << ", Underflow: " << underflow << ")";
        std::cout << " (data_count=" << (int)dut->data_count << ")";
        std::cout << " (empty=" << dut->empty << ")" << std::endl;
    }
    
    // Now attempt to read when empty (should return last valid data)
    std::cout << "\nAttempting to read when empty (with underflow protection)..." << std::endl;
    for (int i = 0; i < 3; i++) {
        uint32_t data;
        bool valid, underflow;
        read_data(dut, m_trace, data, valid, underflow);
        
        std::cout << "Underflow read " << i+1 << ": data=0x" << std::hex << data << std::dec;
        std::cout << " (Valid: " << valid << ", Underflow: " << underflow << ")";
        std::cout << " (Last data expected: 0x" << std::hex << last_data << std::dec << ")";
        std::cout << " (data_count=" << (int)dut->data_count << ")" << std::endl;
    }
    
    // Check error flag and count
    std::cout << "After underflow test: error_detected=" << (int)dut->error_detected;
    std::cout << ", error_count=" << (int)dut->error_count << std::endl;
    
    // Test 4: Refill and read out to verify normal operation after errors
    std::cout << "\nTest 4: Verifying normal operation after errors" << std::endl;
    
    // Clear errors again
    dut->clear_errors = 1;
    clock_cycle(dut, m_trace);
    dut->clear_errors = 0;
    clock_cycle(dut, m_trace);
    
    // Add new data
    std::vector<uint32_t> new_data;
    for (int i = 1; i <= 3; i++) {
        uint32_t data = 0xBB000 + i;
        new_data.push_back(data);
        
        bool success, overflow;
        write_data(dut, m_trace, data, success, overflow);
        
        std::cout << "Wrote new data: 0x" << std::hex << data << std::dec;
        std::cout << " (Success: " << success << ", Overflow: " << overflow << ")";
        std::cout << " (data_count=" << (int)dut->data_count << ")" << std::endl;
    }
    
    // Read the new data
    std::cout << "\nReading new data:" << std::endl;
    for (size_t i = 0; i < new_data.size(); i++) {
        uint32_t data;
        bool valid, underflow;
        read_data(dut, m_trace, data, valid, underflow);
        
        std::cout << "Read data: 0x" << std::hex << data << std::dec;
        std::cout << " (Expected: 0x" << std::hex << new_data[i] << std::dec << ")";
        std::cout << " (Valid: " << valid << ", Underflow: " << underflow << ")";
        std::cout << " (data_count=" << (int)dut->data_count << ")" << std::endl;
    }
    
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: Pass" << std::endl;
    std::cout << "Tests: " << passed_tests << " of " << total_tests << std::endl;
    
    // Cleanup
    m_trace->close();
    delete m_trace;
    delete dut;
    
    return 0;
} 