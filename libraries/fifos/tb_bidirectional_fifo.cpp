#include <stdlib.h>
#include <iostream>
#include <vector>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vbidirectional_fifo.h"

#define MAX_SIM_TIME 1000
vluint64_t sim_time = 0;
vluint64_t posedge_cnt = 0;

// Test parameters
#define DATA_WIDTH 8
#define ADDR_WIDTH 4
#define FIFO_DEPTH (1 << ADDR_WIDTH)

void clock_cycle(Vbidirectional_fifo *dut, VerilatedVcdC *m_trace) {
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

// Function to write data from port A to B
bool write_a_to_b(Vbidirectional_fifo *dut, VerilatedVcdC *m_trace, uint8_t data) {
    if (dut->b_full) {
        return false;
    }
    
    dut->a_wr_en = 1;
    dut->a_wr_data = data;
    clock_cycle(dut, m_trace);
    dut->a_wr_en = 0;
    
    return true;
}

// Function to write data from port B to A
bool write_b_to_a(Vbidirectional_fifo *dut, VerilatedVcdC *m_trace, uint8_t data) {
    if (dut->a_full) {
        return false;
    }
    
    dut->b_wr_en = 1;
    dut->b_wr_data = data;
    clock_cycle(dut, m_trace);
    dut->b_wr_en = 0;
    
    return true;
}

// Function to read data at port A (from B to A direction)
bool read_at_a(Vbidirectional_fifo *dut, VerilatedVcdC *m_trace, uint8_t &data) {
    if (dut->a_empty) {
        return false;
    }
    
    dut->a_rd_en = 1;
    clock_cycle(dut, m_trace);
    data = dut->a_rd_data;
    dut->a_rd_en = 0;
    clock_cycle(dut, m_trace);  // Extra cycle to account for registered output
    
    return true;
}

// Function to read data at port B (from A to B direction)
bool read_at_b(Vbidirectional_fifo *dut, VerilatedVcdC *m_trace, uint8_t &data) {
    if (dut->b_empty) {
        return false;
    }
    
    dut->b_rd_en = 1;
    clock_cycle(dut, m_trace);
    data = dut->b_rd_data;
    dut->b_rd_en = 0;
    clock_cycle(dut, m_trace);  // Extra cycle to account for registered output
    
    return true;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Vbidirectional_fifo *dut = new Vbidirectional_fifo;
    
    // Enable waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    // Initialize signals
    dut->clk = 0;
    dut->rst_n = 0;
    dut->a_wr_en = 0;
    dut->a_rd_en = 0;
    dut->b_wr_en = 0;
    dut->b_rd_en = 0;
    dut->a_wr_data = 0;
    dut->b_wr_data = 0;
    
    // Apply reset
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
    
    std::cout << "Starting Bidirectional FIFO test..." << std::endl;
    
    // Test 1: A to B direction
    {
        std::cout << "Test 1: A to B direction" << std::endl;
        total_tests++;
        std::vector<uint8_t> a_to_b_data;
        bool test_pass = true;
        
        // Write data from A to B
        for (int i = 1; i <= FIFO_DEPTH; i++) {
            uint8_t data = i;
            a_to_b_data.push_back(data);
            
            if (!write_a_to_b(dut, m_trace, data)) {
                std::cout << "Failed to write A->B data: " << (int)data << " (FIFO full)" << std::endl;
                test_pass = false;
                break;
            }
        }
        
        // Read and verify data at B
        if (test_pass) {
            for (int i = 0; i < FIFO_DEPTH; i++) {
                uint8_t data;
                if (!read_at_b(dut, m_trace, data) || data != a_to_b_data[i]) {
                    test_pass = false;
                    break;
                }
            }
        }
        
        if (test_pass) {
            passed_tests++;
            std::cout << "  PASS: A to B direction" << std::endl;
        } else {
            global_test_pass = false;
            std::cout << "  FAIL: A to B direction" << std::endl;
        }
    }
    
    // Test 2: B to A direction
    {
        std::cout << "\nTest 2: B to A direction" << std::endl;
        total_tests++;
        std::vector<uint8_t> b_to_a_data;
        bool test_pass = true;
        
        // Write data from B to A
        for (int i = 101; i <= 100 + FIFO_DEPTH; i++) {
            uint8_t data = i;
            b_to_a_data.push_back(data);
            
            if (!write_b_to_a(dut, m_trace, data)) {
                std::cout << "Failed to write B->A data: " << (int)data << " (FIFO full)" << std::endl;
                test_pass = false;
                break;
            }
        }
        
        // Read and verify data at A
        if (test_pass) {
            for (int i = 0; i < FIFO_DEPTH; i++) {
                uint8_t data;
                if (!read_at_a(dut, m_trace, data) || data != b_to_a_data[i]) {
                    test_pass = false;
                    break;
                }
            }
        }
        
        if (test_pass) {
            passed_tests++;
            std::cout << "  PASS: B to A direction" << std::endl;
        } else {
            global_test_pass = false;
            std::cout << "  FAIL: B to A direction" << std::endl;
        }
    }
    
    // Test 3: Bidirectional simultaneous operation
    {
        std::cout << "\nTest 3: Bidirectional simultaneous operation" << std::endl;
        total_tests++;
        std::vector<std::pair<uint8_t, uint8_t>> simultaneous_data;
        bool test_pass = true;
        
        // Perform simultaneous writes
        for (int i = 0; i < FIFO_DEPTH/2; i++) {
            uint8_t a_data = 50 + i;
            uint8_t b_data = 150 + i;
            
            simultaneous_data.push_back({a_data, b_data});
            
            dut->a_wr_en = 1;
            dut->a_wr_data = a_data;
            dut->b_wr_en = 1;
            dut->b_wr_data = b_data;
            
            clock_cycle(dut, m_trace);
            
            dut->a_wr_en = 0;
            dut->b_wr_en = 0;
        }
        
        // Perform simultaneous reads and verify
        for (int i = 0; i < FIFO_DEPTH/2; i++) {
            dut->a_rd_en = 1;
            dut->b_rd_en = 1;
            
            clock_cycle(dut, m_trace);
            
            uint8_t a_data = dut->a_rd_data;
            uint8_t b_data = dut->b_rd_data;
            
            dut->a_rd_en = 0;
            dut->b_rd_en = 0;
            
            clock_cycle(dut, m_trace);
            
            if (a_data != simultaneous_data[i].second || 
                b_data != simultaneous_data[i].first) {
                test_pass = false;
                break;
            }
        }
        
        if (test_pass) {
            passed_tests++;
            std::cout << "  PASS: Bidirectional simultaneous operation" << std::endl;
        } else {
            global_test_pass = false;
            std::cout << "  FAIL: Bidirectional simultaneous operation" << std::endl;
        }
    }
    
    // Test 4: Check almost_full and almost_empty flags
    {
        std::cout << "\nTest 4: Check almost_full and almost_empty flags" << std::endl;
        total_tests++;
        bool test_pass = true;
        
        // Fill A to B direction to almost full
        while (!dut->b_almost_full) {
            if (!write_a_to_b(dut, m_trace, 200)) {
                test_pass = false;
                break;
            }
        }
        
        // Fill B to A direction to almost full
        while (!dut->a_almost_full) {
            if (!write_b_to_a(dut, m_trace, 200)) {
                test_pass = false;
                break;
            }
        }
        
        // Read to almost empty
        while (!dut->b_almost_empty) {
            uint8_t data;
            if (!read_at_b(dut, m_trace, data)) {
                test_pass = false;
                break;
            }
        }
        
        while (!dut->a_almost_empty) {
            uint8_t data;
            if (!read_at_a(dut, m_trace, data)) {
                test_pass = false;
                break;
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