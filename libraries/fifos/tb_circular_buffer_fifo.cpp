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
    
    // Test tracking variables
    int total_tests = 0;
    int passed_tests = 0;
    bool global_test_pass = true;
    
    std::cout << "Starting Circular Buffer FIFO test..." << std::endl;
    
    // Test 1: Fill FIFO
    {
        std::cout << "Test 1: Fill FIFO" << std::endl;
        total_tests++;
        bool test_pass = true;
        std::vector<uint8_t> test_data;
        
        for (int i = 1; i <= FIFO_DEPTH; i++) {
            uint8_t data = i;
            test_data.push_back(data);
            
            if (!write_to_fifo(dut, m_trace, data)) {
                std::cout << "Failed to write data: " << (int)data << " (FIFO full)" << std::endl;
                test_pass = false;
                break;
            }
        }
        
        if (test_pass) {
            passed_tests++;
            std::cout << "  PASS: Fill FIFO" << std::endl;
        } else {
            global_test_pass = false;
            std::cout << "  FAIL: Fill FIFO" << std::endl;
        }
    }
    
    // Test 2: Peek operations
    {
        std::cout << "Test 2: Peek operations" << std::endl;
        total_tests++;
        bool test_pass = true;
        std::vector<uint8_t> test_data;
        
        // Populate test_data with initial fill
        for (int i = 1; i <= FIFO_DEPTH; i++) {
            test_data.push_back(i);
        }
        
        // Peek at various indices
        uint8_t peek_data;
        int peek_indices[] = {0, FIFO_DEPTH/2, FIFO_DEPTH-1};
        
        for (int idx : peek_indices) {
            if (!peek_from_fifo(dut, m_trace, idx, peek_data)) {
                std::cout << "Failed to peek at index " << idx << std::endl;
                test_pass = false;
                break;
            }
            
            if (peek_data != test_data[idx]) {
                std::cout << "Peek mismatch at index " << idx 
                          << ": Got " << (int)peek_data 
                          << ", Expected " << (int)test_data[idx] << std::endl;
                test_pass = false;
                break;
            }
        }
        
        if (test_pass) {
            passed_tests++;
            std::cout << "  PASS: Peek operations" << std::endl;
        } else {
            global_test_pass = false;
            std::cout << "  FAIL: Peek operations" << std::endl;
        }
    }
    
    // Test 3: Read half of the FIFO
    {
        std::cout << "Test 3: Read half of the FIFO" << std::endl;
        total_tests++;
        bool test_pass = true;
        std::vector<uint8_t> test_data;
        
        // Populate test_data with initial fill
        for (int i = 1; i <= FIFO_DEPTH; i++) {
            test_data.push_back(i);
        }
        
        for (int i = 0; i < FIFO_DEPTH/2; i++) {
            uint8_t data;
            if (!read_from_fifo(dut, m_trace, data)) {
                std::cout << "Failed to read data at index " << i << std::endl;
                test_pass = false;
                break;
            }
            
            if (data != test_data[i]) {
                std::cout << "Read mismatch at index " << i 
                          << ": Got " << (int)data 
                          << ", Expected " << (int)test_data[i] << std::endl;
                test_pass = false;
                break;
            }
        }
        
        if (test_pass) {
            passed_tests++;
            std::cout << "  PASS: Read half of the FIFO" << std::endl;
        } else {
            global_test_pass = false;
            std::cout << "  FAIL: Read half of the FIFO" << std::endl;
        }
    }
    
    // Test 4 & 5: Write more data to wrap around and Peek after wrap-around
    {
        std::cout << "Test 4 & 5: Wrap-around and Peek" << std::endl;
        total_tests++;
        bool test_pass = true;
        // Build expected data: remaining old entries (9..FIFO_DEPTH) then wrap-around data (100..)
        std::vector<uint8_t> expected_data;
        for (int i = FIFO_DEPTH/2 + 1; i <= FIFO_DEPTH; i++) {
            expected_data.push_back((uint8_t)i);
        }
 
        // Write wrap-around data and append to expected data
        for (int i = 0; i < FIFO_DEPTH/2; i++) {
            uint8_t data = 100 + i;
            expected_data.push_back(data);
             
            if (!write_to_fifo(dut, m_trace, data)) {
                std::cout << "Failed to write wrap-around data: " << (int)data << std::endl;
                test_pass = false;
                break;
            }
        }
        
        // Peek after wrap-around
        int peek_indices[] = {0, 4, 8, 12};
        for (int idx : peek_indices) {
            uint8_t peek_data;
            if (!peek_from_fifo(dut, m_trace, idx, peek_data)) {
                std::cout << "Failed to peek at index " << idx << std::endl;
                test_pass = false;
                break;
            }
            
            if (peek_data != expected_data[idx]) {
                std::cout << "Peek mismatch at index " << idx \
                          << ": Got " << (int)peek_data \
                          << ", Expected " << (int)expected_data[idx] << std::endl;
                test_pass = false;
                break;
            }
        }
        
        if (test_pass) {
            passed_tests++;
            std::cout << "  PASS: Wrap-around and Peek" << std::endl;
        } else {
            global_test_pass = false;
            std::cout << "  FAIL: Wrap-around and Peek" << std::endl;
        }
    }
    
    // Test 6: Read all remaining data
    {
        std::cout << "Test 6: Read all remaining data" << std::endl;
        total_tests++;
        bool test_pass = true;
        std::vector<uint8_t> test_data;
        
        // Populate test_data with remaining data
        for (int i = 9; i <= 16; i++) {
            test_data.push_back(i);
        }
        for (int i = 100; i < 108; i++) {
            test_data.push_back(i);
        }
        
        for (size_t i = 0; i < test_data.size(); i++) {
            uint8_t data;
            if (!read_from_fifo(dut, m_trace, data)) {
                std::cout << "Failed to read data at index " << i << std::endl;
                test_pass = false;
                break;
            }
            
            if (data != test_data[i]) {
                std::cout << "Read mismatch at index " << i 
                          << ": Got " << (int)data 
                          << ", Expected " << (int)test_data[i] << std::endl;
                test_pass = false;
                break;
            }
        }
        
        if (test_pass) {
            passed_tests++;
            std::cout << "  PASS: Read all remaining data" << std::endl;
        } else {
            global_test_pass = false;
            std::cout << "  FAIL: Read all remaining data" << std::endl;
        }
    }
    
    // Test 7: Test almost_full and almost_empty flags
    {
        std::cout << "Test 7: Test almost_full and almost_empty flags" << std::endl;
        total_tests++;
        bool test_pass = true;
        
        // Fill FIFO to almost_full
        for (int i = 0; i < FIFO_DEPTH - 3; i++) {
            if (!write_to_fifo(dut, m_trace, i)) {
                std::cout << "Failed to write data for almost_full test" << std::endl;
                test_pass = false;
                break;
            }
        }
        
        // Verify almost_full and almost_empty states
        if (test_pass) {
            // Verify FIFO is not full or empty
            test_pass = (dut->fifo_count == FIFO_DEPTH - 3) && 
                        (dut->almost_full == 0) && 
                        (dut->almost_empty == 0);
        }
        
        // Read until almost_empty
        if (test_pass) {
            while (dut->fifo_count > 3) {
                uint8_t data;
                if (!read_from_fifo(dut, m_trace, data)) {
                    std::cout << "Failed to read data for almost_empty test" << std::endl;
                    test_pass = false;
                    break;
                }
            }
        }
        
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