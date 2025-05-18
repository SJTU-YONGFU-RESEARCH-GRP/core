#include <stdlib.h>
#include <iostream>
#include <vector>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vfwft_fifo.h"

#define MAX_SIM_TIME 1000
vluint64_t sim_time = 0;
vluint64_t posedge_cnt = 0;

// Test parameters
#define DATA_WIDTH 8
#define ADDR_WIDTH 4
#define FIFO_DEPTH (1 << ADDR_WIDTH)

void clock_cycle(Vfwft_fifo *dut, VerilatedVcdC *m_trace) {
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
bool write_data(Vfwft_fifo *dut, VerilatedVcdC *m_trace, uint8_t data) {
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

// Function to read data from the FIFO
bool read_data(Vfwft_fifo *dut, VerilatedVcdC *m_trace, uint8_t &data) {
    if (dut->empty) {
        return false;
    }
    
    // In FWFT FIFO, data is already available on rd_data
    // Record the current data
    data = dut->rd_data;
    
    // Then advance the FIFO
    dut->rd_en = 1;
    clock_cycle(dut, m_trace);
    dut->rd_en = 0;
    clock_cycle(dut, m_trace);
    
    return true;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Vfwft_fifo *dut = new Vfwft_fifo;
    
    // Enable waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform_fwft_fifo.vcd");
    
    // Initialize signals
    dut->clk = 0;
    dut->rst_n = 0;
    dut->wr_en = 0;
    dut->rd_en = 0;
    dut->wr_data = 0;
    
    // Test tracking variables
    int total_tests = 0;
    int passed_tests = 0;
    bool global_test_pass = true;
    
    std::cout << "Starting FWFT FIFO test..." << std::endl;
    
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
        for (int i = 1; i <= FIFO_DEPTH; i++) {
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
        for (int i = 0; i < FIFO_DEPTH; i++) {
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
    
    // Test 2: FWFT behavior - data available immediately after write
    {
        total_tests++;
        std::cout << "\nTest 2: FWFT behavior - data available immediately after write" << std::endl;
        bool test_pass = true;
        
        // Verify FIFO is empty
        if (dut->empty) {
            std::cout << "FIFO is empty, continuing with test" << std::endl;
        } else {
            std::cout << "FIFO is not empty, something's wrong!" << std::endl;
            test_pass = false;
        }
        
        // Write one element
        uint8_t write_value = 42;
        write_data(dut, m_trace, write_value);
        
        // Data should be immediately available without a read operation
        std::cout << "After write, rd_data = " << (int)dut->rd_data;
        std::cout << " (Expected: " << (int)write_value << ")" << std::endl;
        
        if (dut->rd_data != write_value) {
            test_pass = false;
        }
        
        // Verify empty flag is not set
        std::cout << "FIFO empty flag = " << (int)dut->empty;
        std::cout << " (Expected: 0)" << std::endl;
        
        if (dut->empty) {
            test_pass = false;
        }
        
        // Now read the data
        uint8_t read_value;
        read_data(dut, m_trace, read_value);
        std::cout << "Read data: " << (int)read_value;
        std::cout << " (Expected: " << (int)write_value << ")" << std::endl;
        
        if (read_value != write_value) {
            test_pass = false;
        }
        
        if (test_pass) {
            passed_tests++;
            std::cout << "  PASS: FWFT behavior - data available immediately after write" << std::endl;
        } else {
            global_test_pass = false;
            std::cout << "  FAIL: FWFT behavior - data available immediately after write" << std::endl;
        }
    }
    
    // Test 3: Multiple writes followed by multiple reads
    {
        total_tests++;
        std::cout << "\nTest 3: Multiple writes followed by multiple reads" << std::endl;
        bool test_pass = true;
        
        // Write a sequence of data
        for (int i = 101; i <= 110; i++) {
            write_data(dut, m_trace, i);
        }
        
        // Read back data
        for (int i = 101; i <= 110; i++) {
            uint8_t data;
            if (read_data(dut, m_trace, data)) {
                std::cout << "Read data: " << (int)data;
                std::cout << " (Expected: " << i << ")" << std::endl;
                
                if (data != i) {
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
            std::cout << "  PASS: Multiple writes followed by multiple reads" << std::endl;
        } else {
            global_test_pass = false;
            std::cout << "  FAIL: Multiple writes followed by multiple reads" << std::endl;
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