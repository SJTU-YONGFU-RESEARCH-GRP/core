#include <stdlib.h>
#include <iostream>
#include <vector>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vasync_fifo.h"

#define MAX_SIM_TIME 1000
vluint64_t sim_time = 0;
vluint64_t wr_posedge_cnt = 0;
vluint64_t rd_posedge_cnt = 0;

// Test parameters
#define DATA_WIDTH 8
#define ADDR_WIDTH 4
#define FIFO_DEPTH (1 << ADDR_WIDTH)

void wr_clock_tick(Vasync_fifo *dut, VerilatedVcdC *m_trace) {
    dut->wr_clk = 0;
    dut->eval();
    sim_time++;
    m_trace->dump(sim_time);
    
    dut->wr_clk = 1;
    dut->eval();
    sim_time++;
    m_trace->dump(sim_time);
    wr_posedge_cnt++;
}

void rd_clock_tick(Vasync_fifo *dut, VerilatedVcdC *m_trace) {
    dut->rd_clk = 0;
    dut->eval();
    sim_time++;
    m_trace->dump(sim_time);
    
    dut->rd_clk = 1;
    dut->eval();
    sim_time++;
    m_trace->dump(sim_time);
    rd_posedge_cnt++;
}

// Function to write data to the FIFO
bool write_data(Vasync_fifo *dut, VerilatedVcdC *m_trace, uint8_t data) {
    if (dut->full) {
        return false;
    }
    
    dut->wr_en = 1;
    dut->wr_data = data;
    wr_clock_tick(dut, m_trace);
    dut->wr_en = 0;
    wr_clock_tick(dut, m_trace);
    
    return true;
}

// Function to read data from the FIFO
bool read_data(Vasync_fifo *dut, VerilatedVcdC *m_trace, uint8_t &data) {
    if (dut->empty) {
        return false;
    }
    
    dut->rd_en = 1;
    rd_clock_tick(dut, m_trace);
    data = dut->rd_data;
    dut->rd_en = 0;
    rd_clock_tick(dut, m_trace);
    
    return true;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Vasync_fifo *dut = new Vasync_fifo;
    
    // Enable waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform_async_fifo.vcd");
    
    // Test tracking variables
    int total_tests = 0;
    int passed_tests = 0;
    
    // Initialize signals
    dut->wr_clk = 0;
    dut->rd_clk = 0;
    dut->wr_rst_n = 0;
    dut->rd_rst_n = 0;
    dut->wr_en = 0;
    dut->rd_en = 0;
    dut->wr_data = 0;
    
    // Apply reset
    for (int i = 0; i < 5; i++) {
        wr_clock_tick(dut, m_trace);
        rd_clock_tick(dut, m_trace);
    }
    dut->wr_rst_n = 1;
    dut->rd_rst_n = 1;
    for (int i = 0; i < 2; i++) {
        wr_clock_tick(dut, m_trace);
        rd_clock_tick(dut, m_trace);
    }
    
    std::cout << "Starting Asynchronous FIFO test..." << std::endl;
    
    // Test 1: Basic write and read operations with different clock frequencies
    std::cout << "Test 1: Basic write and read with different clock frequencies" << std::endl;
    total_tests++;
    std::vector<uint8_t> test_data;
    bool test1_pass = true;
    
    // Write data to the FIFO
    for (int i = 1; i <= FIFO_DEPTH; i++) {
        uint8_t data = i;
        test_data.push_back(data);
        
        if (!write_data(dut, m_trace, data)) {
            test1_pass = false;
            break;
        }
    }
    
    // Read data from the FIFO
    for (int i = 0; i < FIFO_DEPTH; i++) {
        uint8_t data;
        if (!read_data(dut, m_trace, data) || data != test_data[i]) {
            test1_pass = false;
            break;
        }
    }
    
    if (test1_pass) {
        passed_tests++;
        std::cout << "Test 1 PASSED" << std::endl;
    } else {
        std::cout << "Test 1 FAILED" << std::endl;
    }
    
    // Test 2: Almost full and almost empty flags
    std::cout << "\nTest 2: Almost full and almost empty flags" << std::endl;
    total_tests++;
    bool test2_pass = true;
    
    // Fill the FIFO until almost full
    while (!dut->almost_full) {
        if (!write_data(dut, m_trace, 100)) {
            test2_pass = false;
            break;
        }
    }
    
    if (test2_pass) {
        std::cout << "FIFO almost full: wr_count=" << (int)dut->wr_count 
                  << ", almost_full=" << (int)dut->almost_full << std::endl;
    } else {
        test2_pass = false;
    }
    
    // Read data until almost empty
    while (!dut->almost_empty && !dut->empty) {
        uint8_t data;
        if (!read_data(dut, m_trace, data)) {
            test2_pass = false;
            break;
        }
    }
    
    if (test2_pass) {
        passed_tests++;
        std::cout << "Test 2 PASSED" << std::endl;
    } else {
        std::cout << "Test 2 FAILED" << std::endl;
    }

    // Test 3: Asynchronous clock domains
    std::cout << "\nTest 3: Asynchronous clock domains (write faster than read)" << std::endl;
    total_tests++;
    bool test3_pass = true;
    
    // Write data quickly (multiple write clocks per read clock)
    for (int i = 1; i <= 8; i++) {
        dut->wr_en = 1;
        dut->wr_data = i + 50;
        wr_clock_tick(dut, m_trace);
        dut->wr_en = 0;
        wr_clock_tick(dut, m_trace);
        
        if (i % 2 == 0) {
            rd_clock_tick(dut, m_trace);
        }
    }
    
    // Read the data and verify
    for (int i = 0; i < 8; i++) {
        uint8_t data;
        if (!read_data(dut, m_trace, data) || data != (i + 1 + 50)) {
            test3_pass = false;
            break;
        }
    }
    
    if (test3_pass) {
        passed_tests++;
        std::cout << "Test 3 PASSED" << std::endl;
    } else {
        std::cout << "Test 3 FAILED" << std::endl;
    }
    
    // Reset for the next test
    dut->wr_rst_n = 0;
    dut->rd_rst_n = 0;
    for (int i = 0; i < 5; i++) {
        wr_clock_tick(dut, m_trace);
        rd_clock_tick(dut, m_trace);
    }
    dut->wr_rst_n = 1;
    dut->rd_rst_n = 1;
    for (int i = 0; i < 2; i++) {
        wr_clock_tick(dut, m_trace);
        rd_clock_tick(dut, m_trace);
    }
    
    // Write data quickly (multiple write clocks per read clock)
    for (int i = 1; i <= 8; i++) {
        dut->wr_en = 1;
        dut->wr_data = i + 50;
        wr_clock_tick(dut, m_trace);
        dut->wr_en = 0;
        wr_clock_tick(dut, m_trace);
        
        if (i % 2 == 0) {  // One read clock for every two write clocks
            rd_clock_tick(dut, m_trace);
        }
    }
    
    // Extra write clocks to ensure synchronization
    for (int i = 0; i < 5; i++) {
        wr_clock_tick(dut, m_trace);
    }
    
    // Read the data
    std::cout << "Reading data from asynchronous write operation:" << std::endl;
    for (int i = 0; i < 8; i++) {
        uint8_t data;
        if (read_data(dut, m_trace, data)) {
            std::cout << "Read data: " << (int)data;
            std::cout << " (Expected: " << (i + 1 + 50) << ")";
            std::cout << " (rd_count=" << (int)dut->rd_count << ")" << std::endl;
        } else {
            std::cout << "Failed to read data (FIFO empty)" << std::endl;
        }
    }
    
    std::cout << "\nAsynchronous FIFO test completed!" << std::endl;
    
    // Cleanup
    m_trace->close();
    delete m_trace;
    delete dut;
    
    // Standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (passed_tests == total_tests ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << passed_tests << " of " << total_tests << std::endl;

    return passed_tests == total_tests ? 0 : 1;
}