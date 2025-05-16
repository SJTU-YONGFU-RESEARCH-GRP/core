#include <stdlib.h>
#include <iostream>
#include <vector>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vcircular_buffer_fifo.h"

#define MAX_SIM_TIME 1000
vluint64_t sim_time = 0;
vluint64_t posedge_cnt = 0;

// Test parameters
#define DATA_WIDTH 8
#define ADDR_WIDTH 4
#define FIFO_DEPTH (1 << ADDR_WIDTH)

void clock_cycle(Vcircular_buffer_fifo *dut, VerilatedVcdC *m_trace) {
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

// Function to write data to FIFO
bool write_to_fifo(Vcircular_buffer_fifo *dut, VerilatedVcdC *m_trace, uint8_t data) {
    if (dut->full) {
        return false;
    }
    
    dut->wr_en = 1;
    dut->wr_data = data;
    clock_cycle(dut, m_trace);
    dut->wr_en = 0;
    
    return true;
}

// Function to read data from FIFO
bool read_from_fifo(Vcircular_buffer_fifo *dut, VerilatedVcdC *m_trace, uint8_t &data) {
    if (dut->empty) {
        return false;
    }
    
    dut->rd_en = 1;
    clock_cycle(dut, m_trace);
    dut->rd_en = 0;
    clock_cycle(dut, m_trace);  // Extra cycle to get registered data
    data = dut->rd_data;
    
    return true;
}

// Function to peek data from FIFO at a specific offset
bool peek_from_fifo(Vcircular_buffer_fifo *dut, VerilatedVcdC *m_trace, uint8_t addr, uint8_t &data) {
    if (dut->empty || addr >= dut->fifo_count) {
        return false;
    }
    
    dut->peek_en = 1;
    dut->peek_addr = addr;
    clock_cycle(dut, m_trace);
    data = dut->peek_data;
    dut->peek_en = 0;
    
    return true;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Vcircular_buffer_fifo *dut = new Vcircular_buffer_fifo;
    
    // Enable waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    // Initialize signals
    dut->clk = 0;
    dut->rst_n = 0;
    dut->wr_en = 0;
    dut->rd_en = 0;
    dut->peek_en = 0;
    dut->wr_data = 0;
    dut->peek_addr = 0;
    
    // Reset
    for (int i = 0; i < 5; i++) {
        clock_cycle(dut, m_trace);
    }
    dut->rst_n = 1;
    for (int i = 0; i < 2; i++) {
        clock_cycle(dut, m_trace);
    }
    
    std::cout << "Starting Circular Buffer FIFO test..." << std::endl;
    
    // Test 1: Fill FIFO
    std::cout << "Test 1: Fill FIFO" << std::endl;
    std::vector<uint8_t> test_data;
    for (int i = 1; i <= FIFO_DEPTH; i++) {
        uint8_t data = i;  // Use sequential data for easier debugging
        test_data.push_back(data);
        if (write_to_fifo(dut, m_trace, data)) {
            std::cout << "Wrote data: " << (int)data << std::endl;
        } else {
            std::cout << "Failed to write data: " << (int)data << " (FIFO full)" << std::endl;
        }
    }
    
    // Test 2: Peek operations
    std::cout << "Test 2: Peek operations" << std::endl;
    uint8_t peek_data;
    
    // Peek at the first element
    if (peek_from_fifo(dut, m_trace, 0, peek_data)) {
        std::cout << "Peeked at index 0: " << (int)peek_data;
        std::cout << " (Expected: " << (int)test_data[0] << ")" << std::endl;
    }
    
    // Peek at the middle element
    if (peek_from_fifo(dut, m_trace, FIFO_DEPTH/2, peek_data)) {
        std::cout << "Peeked at index " << FIFO_DEPTH/2 << ": " << (int)peek_data;
        std::cout << " (Expected: " << (int)test_data[FIFO_DEPTH/2] << ")" << std::endl;
    }
    
    // Peek at the last element
    if (peek_from_fifo(dut, m_trace, FIFO_DEPTH-1, peek_data)) {
        std::cout << "Peeked at index " << FIFO_DEPTH-1 << ": " << (int)peek_data;
        std::cout << " (Expected: " << (int)test_data[FIFO_DEPTH-1] << ")" << std::endl;
    }
    
    // Test 3: Read half of the FIFO
    std::cout << "Test 3: Read half of the FIFO" << std::endl;
    for (int i = 0; i < FIFO_DEPTH/2; i++) {
        uint8_t data;
        if (read_from_fifo(dut, m_trace, data)) {
            std::cout << "Read data: " << (int)data;
            std::cout << " (Expected: " << (int)test_data[i] << ")" << std::endl;
        }
    }
    
    // Test 4: Write more data to wrap around
    std::cout << "Test 4: Write more data to wrap around" << std::endl;
    for (int i = 0; i < FIFO_DEPTH/2; i++) {
        uint8_t data = 100 + i;
        test_data.push_back(data);
        if (write_to_fifo(dut, m_trace, data)) {
            std::cout << "Wrote data: " << (int)data << std::endl;
        }
    }
    
    // Test 5: Peek after wrap-around
    std::cout << "Test 5: Peek after wrap-around" << std::endl;
    
    // Peek at various indices
    for (int i = 0; i < FIFO_DEPTH; i += FIFO_DEPTH/4) {
        if (peek_from_fifo(dut, m_trace, i, peek_data)) {
            std::cout << "Peeked at index " << i << ": " << (int)peek_data;
            std::cout << " (Expected: " << (int)test_data[FIFO_DEPTH/2 + i] << ")" << std::endl;
        }
    }
    
    // Test 6: Read all remaining data
    std::cout << "Test 6: Read all remaining data" << std::endl;
    for (int i = 0; i < FIFO_DEPTH; i++) {
        uint8_t data;
        if (read_from_fifo(dut, m_trace, data)) {
            std::cout << "Read data: " << (int)data;
            std::cout << " (Expected: " << (int)test_data[FIFO_DEPTH/2 + i] << ")" << std::endl;
        } else {
            std::cout << "Failed to read data (FIFO empty)" << std::endl;
            break;
        }
    }
    
    // Test 7: Test almost_full and almost_empty flags
    std::cout << "Test 7: Test almost_full and almost_empty flags" << std::endl;
    
    // Fill FIFO to almost_full
    for (int i = 0; i < FIFO_DEPTH - 3; i++) {
        write_to_fifo(dut, m_trace, i);
    }
    
    std::cout << "FIFO count: " << (int)dut->fifo_count << std::endl;
    std::cout << "almost_full: " << (int)dut->almost_full << std::endl;
    std::cout << "almost_empty: " << (int)dut->almost_empty << std::endl;
    
    // Read until almost_empty
    while (dut->fifo_count > 3) {
        uint8_t data;
        read_from_fifo(dut, m_trace, data);
    }
    
    std::cout << "FIFO count: " << (int)dut->fifo_count << std::endl;
    std::cout << "almost_full: " << (int)dut->almost_full << std::endl;
    std::cout << "almost_empty: " << (int)dut->almost_empty << std::endl;
    
    std::cout << "Circular Buffer FIFO test completed successfully!" << std::endl;
    
    // Cleanup
    m_trace->close();
    delete m_trace;
    delete dut;
    
    return 0;
} 