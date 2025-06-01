#include <stdlib.h>
#include <iostream>
#include <vector>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vshowahead_fifo.h"

#define MAX_SIM_TIME 1000
vluint64_t sim_time = 0;
vluint64_t posedge_cnt = 0;

// Test parameters
#define DATA_WIDTH 8
#define ADDR_WIDTH 4
#define FIFO_DEPTH (1 << ADDR_WIDTH)

void clock_cycle(Vshowahead_fifo *dut, VerilatedVcdC *m_trace) {
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
bool write_data(Vshowahead_fifo *dut, VerilatedVcdC *m_trace, uint8_t data) {
    if (dut->full) {
        return false;
    }
    
    dut->wr_en = 1;
    dut->wr_data = data;
    clock_cycle(dut, m_trace);
    dut->wr_en = 0;
    clock_cycle(dut, m_trace);
    
    return true;
}

// Function to peek at the head of FIFO without removing data
bool peek_data(Vshowahead_fifo *dut, VerilatedVcdC *m_trace, uint8_t &data) {
    if (dut->empty) {
        return false;
    }
    
    // In showahead FIFO, data is already available on rd_data
    dut->peek_en = 1;
    clock_cycle(dut, m_trace);
    data = dut->rd_data;
    dut->peek_en = 0;
    clock_cycle(dut, m_trace);
    
    return true;
}

// Function to read data from the FIFO (dequeue)
bool read_data(Vshowahead_fifo *dut, VerilatedVcdC *m_trace, uint8_t &data) {
    if (dut->empty) {
        return false;
    }
    
    // In showahead FIFO, data is already available on rd_data
    data = dut->rd_data;
    
    // Then dequeue the FIFO
    dut->rd_en = 1;
    clock_cycle(dut, m_trace);
    dut->rd_en = 0;
    clock_cycle(dut, m_trace);
    
    return true;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Vshowahead_fifo *dut = new Vshowahead_fifo;
    
    // Enable waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform_showahead_fifo.vcd");
    
    // Initialize signals
    dut->clk = 0;
    dut->rst_n = 0;
    dut->wr_en = 0;
    dut->rd_en = 0;
    dut->peek_en = 0;
    dut->wr_data = 0;
    
    // Test tracking variables
    int total_tests = 0;
    int passed_tests = 0;
    bool global_test_pass = true;
    
    std::cout << "Starting Showahead FIFO test..." << std::endl;
    
    // Apply reset
    for (int i = 0; i < 5; i++) {
        clock_cycle(dut, m_trace);
    }
    dut->rst_n = 1;
    for (int i = 0; i < 2; i++) {
        clock_cycle(dut, m_trace);
    }
    
    // Test 1: Basic write and read operations
    {
        total_tests++;
        std::cout << "Test 1: Basic write and read operations" << std::endl;
        std::vector<uint8_t> test_data;
        bool test_pass = true;
        
        // Write data to the FIFO
        for (int i = 1; i <= FIFO_DEPTH/2; i++) {
            uint8_t data = i;
            test_data.push_back(data);
            
            if (write_data(dut, m_trace, data)) {
                std::cout << "Wrote data: " << (int)data;
                std::cout << " (data_count=" << (int)dut->data_count << ")" << std::endl;
            } else {
                std::cout << "Failed to write data: " << (int)data << " (FIFO full)" << std::endl;
                test_pass = false;
                break;
            }
        }
        
        // Read data from the FIFO
        for (int i = 0; i < FIFO_DEPTH/2; i++) {
            uint8_t data;
            if (read_data(dut, m_trace, data)) {
                std::cout << "Read data: " << (int)data;
                std::cout << " (Expected: " << (int)test_data[i] << ")";
                std::cout << " (data_count=" << (int)dut->data_count << ")" << std::endl;
                
                if (data != test_data[i]) {
                    test_pass = false;
                }
            } else {
                std::cout << "Failed to read data (FIFO empty)" << std::endl;
                test_pass = false;
                break;
            }
        }
        
        if (test_pass) {
            passed_tests++;
            std::cout << "  PASS: Basic write and read operations" << std::endl;
        } else {
            global_test_pass = false;
            std::cout << "  FAIL: Basic write and read operations" << std::endl;
        }
    }
    
    // Test 2: Showahead behavior - peek without dequeuing
    {
        total_tests++;
        std::cout << "\nTest 2: Showahead behavior - peek without dequeuing" << std::endl;
        bool test_pass = true;
        
        // Write some data
        for (int i = 101; i <= 105; i++) {
            write_data(dut, m_trace, i);
        }
        
        // Peek at the first element multiple times without removing
        uint8_t peek_value1, peek_value2, peek_value3;
        bool peek_result1 = peek_data(dut, m_trace, peek_value1);
        bool peek_result2 = peek_data(dut, m_trace, peek_value2);
        bool peek_result3 = peek_data(dut, m_trace, peek_value3);
        
        std::cout << "Peek 1: " << (int)peek_value1 << " (Expected: 101)" << std::endl;
        std::cout << "Peek 2: " << (int)peek_value2 << " (Expected: 101)" << std::endl;
        std::cout << "Peek 3: " << (int)peek_value3 << " (Expected: 101)" << std::endl;
        
        if (peek_value1 != 101 || peek_value2 != 101 || peek_value3 != 101) {
            test_pass = false;
        }
        
        // Now read the data
        uint8_t read_value;
        read_data(dut, m_trace, read_value);
        std::cout << "Read after peeks: " << (int)read_value << " (Expected: 101)" << std::endl;
        
        if (read_value != 101) {
            test_pass = false;
        }
        
        if (test_pass) {
            passed_tests++;
            std::cout << "  PASS: Showahead behavior - peek without dequeuing" << std::endl;
        } else {
            global_test_pass = false;
            std::cout << "  FAIL: Showahead behavior - peek without dequeuing" << std::endl;
        }
    }
    
    // Test 3: Mixed peek and read operations
    {
        total_tests++;
        std::cout << "\nTest 3: Mixed peek and read operations" << std::endl;
        bool test_pass = true;
        
        // Read the next element with read (not peek)
        uint8_t read_value;
        read_data(dut, m_trace, read_value);
        std::cout << "Read: " << (int)read_value << " (Expected: 102)" << std::endl;
        
        if (read_value != 102) {
            test_pass = false;
        }
        
        // Peek at the next element
        uint8_t peek_value;
        peek_data(dut, m_trace, peek_value);
        std::cout << "Peek: " << (int)peek_value << " (Expected: 103)" << std::endl;
        
        if (peek_value != 103) {
            test_pass = false;
        }
        
        // Read it
        read_data(dut, m_trace, read_value);
        std::cout << "Read: " << (int)read_value << " (Expected: 103)" << std::endl;
        
        if (read_value != 103) {
            test_pass = false;
        }
        
        // Read remaining elements
        read_data(dut, m_trace, read_value);
        std::cout << "Read: " << (int)read_value << " (Expected: 104)" << std::endl;
        
        read_data(dut, m_trace, read_value);
        std::cout << "Read: " << (int)read_value << " (Expected: 105)" << std::endl;
        
        if (test_pass) {
            passed_tests++;
            std::cout << "  PASS: Mixed peek and read operations" << std::endl;
        } else {
            global_test_pass = false;
            std::cout << "  FAIL: Mixed peek and read operations" << std::endl;
        }
    }
    
    // Test 4: Almost full and almost empty flags
    {
        total_tests++;
        std::cout << "\nTest 4: Almost full and almost empty flags" << std::endl;
        bool test_pass = true;
        
        // Fill the FIFO until almost full
        while (!dut->almost_full) {
            if (!write_data(dut, m_trace, 100)) {
                test_pass = false;
                break;
            }
        }
        
        std::cout << "FIFO almost full: data_count=" << (int)dut->data_count 
                  << ", almost_full=" << (int)dut->almost_full << std::endl;
        
        // Read data until almost empty
        while (!dut->almost_empty && !dut->empty) {
            uint8_t data;
            if (!read_data(dut, m_trace, data)) {
                test_pass = false;
                break;
            }
        }
        
        std::cout << "FIFO almost empty: data_count=" << (int)dut->data_count 
                  << ", almost_empty=" << (int)dut->almost_empty << std::endl;
        
        if (test_pass) {
            passed_tests++;
            std::cout << "  PASS: Almost full and almost empty flags" << std::endl;
        } else {
            global_test_pass = false;
            std::cout << "  FAIL: Almost full and almost empty flags" << std::endl;
        }
    }
    
    // Test 5: Valid flag
    {
        total_tests++;
        std::cout << "\nTest 5: Testing valid flag" << std::endl;
        bool test_pass = true;
        
        // FIFO should be almost empty but not completely empty
        std::cout << "FIFO valid flag = " << (int)dut->valid;
        std::cout << " (Expected: 1)" << std::endl;
        
        if (!dut->valid) {
            test_pass = false;
        }
        
        // Read until empty
        while (dut->valid) {
            uint8_t data;
            read_data(dut, m_trace, data);
        }
        
        std::cout << "FIFO empty, valid flag = " << (int)dut->valid;
        std::cout << " (Expected: 0)" << std::endl;
        
        if (dut->valid) {
            test_pass = false;
        }
        
        if (test_pass) {
            passed_tests++;
            std::cout << "  PASS: Valid flag" << std::endl;
        } else {
            global_test_pass = false;
            std::cout << "  FAIL: Valid flag" << std::endl;
        }
    }
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (global_test_pass ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << passed_tests << " of " << total_tests << std::endl;
    
    // Cleanup
    m_trace->close();
    delete m_trace;
    delete dut;
    
    return global_test_pass ? 0 : 1;
} 