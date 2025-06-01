#include <stdlib.h>
#include <iostream>
#include <vector>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vasync_fifo.h"

#define MAX_SIM_TIME 2000
vluint64_t sim_time = 0;
vluint64_t wr_posedge_cnt = 0;
vluint64_t rd_posedge_cnt = 0;

// Test parameters
#define DATA_WIDTH 8
#define ADDR_WIDTH 4
#define FIFO_DEPTH (1 << ADDR_WIDTH)

// Forward declarations
void wr_clock_tick(Vasync_fifo *dut, VerilatedVcdC *m_trace);
void rd_clock_tick(Vasync_fifo *dut, VerilatedVcdC *m_trace);
void print_fifo_status(Vasync_fifo *dut, const char* context);
bool read_data(Vasync_fifo *dut, VerilatedVcdC *m_trace, uint8_t &data, bool verbose);
bool write_data(Vasync_fifo *dut, VerilatedVcdC *m_trace, uint8_t data, bool verbose);
void reset_fifo(Vasync_fifo *dut, VerilatedVcdC *m_trace);
void wait_for_sync(Vasync_fifo *dut, VerilatedVcdC *m_trace);

// Clock tick functions
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

// Wait for synchronization between write and read domains
void wait_for_sync(Vasync_fifo *dut, VerilatedVcdC *m_trace) {
    int sync_attempts = 0;
    const int MAX_SYNC_ATTEMPTS = 50;
    
    while (sync_attempts < MAX_SYNC_ATTEMPTS) {
        wr_clock_tick(dut, m_trace);
        rd_clock_tick(dut, m_trace);
        
        // Check if synchronization is stable
        if (dut->full == 0 && dut->empty == 1) {
            break;
        }
        
        sync_attempts++;
    }
    
    if (sync_attempts >= MAX_SYNC_ATTEMPTS) {
        std::cout << "WARNING: Synchronization timeout" << std::endl;
    }
}

// Reset function
void reset_fifo(Vasync_fifo *dut, VerilatedVcdC *m_trace) {
    // Asserting both write and read domain resets
    dut->wr_rst_n = 0;
    dut->rd_rst_n = 0;
    dut->wr_en = 0;
    dut->rd_en = 0;
    dut->wr_data = 0;
    
    // Toggle clocks during reset
    for (int i = 0; i < 20; i++) {
        wr_clock_tick(dut, m_trace);
        rd_clock_tick(dut, m_trace);
    }
    
    // Release resets
    dut->wr_rst_n = 1;
    dut->rd_rst_n = 1;
    
    // Additional clock cycles to stabilize
    wait_for_sync(dut, m_trace);
}

// Enhanced debugging function to include error flags
void print_fifo_status(Vasync_fifo *dut, const char* context) {
    std::cout << "FIFO Status [" << context << "]:" << std::endl;
    std::cout << "  Write Count: " << (int)dut->wr_count 
              << ", Read Count: " << (int)dut->rd_count << std::endl;
    std::cout << "  Full: " << (int)dut->full 
              << ", Empty: " << (int)dut->empty 
              << ", Almost Full: " << (int)dut->almost_full 
              << ", Almost Empty: " << (int)dut->almost_empty << std::endl;
    
    // New error flag reporting
    std::cout << "  Error Flags:" << std::endl;
    std::cout << "    Sync Error: " << (int)dut->sync_error_flag 
              << ", Pointer Wraparound: " << (int)dut->pointer_wraparound_flag << std::endl;
}

// Enhanced write_data function with more detailed debugging
bool write_data(Vasync_fifo *dut, VerilatedVcdC *m_trace, uint8_t data, bool verbose) {
    int attempts = 0;
    const int MAX_ATTEMPTS = 50;
    
    while (attempts < MAX_ATTEMPTS) {
        // Perform multiple clock ticks to ensure synchronization
        for (int sync_attempts = 0; sync_attempts < 5; sync_attempts++) {
            wr_clock_tick(dut, m_trace);
            rd_clock_tick(dut, m_trace);
        }
        
        if (!dut->full) {
            dut->wr_en = 1;
            dut->wr_data = data;
            wr_clock_tick(dut, m_trace);
            dut->wr_en = 0;
            wr_clock_tick(dut, m_trace);
            
            if (verbose) {
                std::cout << "Write successful: data=" << (int)data 
                          << ", wr_count=" << (int)dut->wr_count 
                          << ", rd_count=" << (int)dut->rd_count 
                          << ", full=" << (int)dut->full 
                          << ", empty=" << (int)dut->empty << std::endl;
            }
            
            return true;
        }
        
        if (verbose) {
            std::cout << "Write attempt " << attempts 
                      << " failed. FIFO status:" << std::endl;
            print_fifo_status(dut, "Write Attempt");
        }
        
        attempts++;
    }
    
    return false;
}

// Enhanced read_data function with more detailed debugging
bool read_data(Vasync_fifo *dut, VerilatedVcdC *m_trace, uint8_t &data, bool verbose) {
    int attempts = 0;
    const int MAX_ATTEMPTS = 50;
    
    while (attempts < MAX_ATTEMPTS) {
        // Perform multiple clock ticks to ensure synchronization
        for (int sync_attempts = 0; sync_attempts < 5; sync_attempts++) {
            wr_clock_tick(dut, m_trace);
            rd_clock_tick(dut, m_trace);
        }
        
        if (!dut->empty) {
            dut->rd_en = 1;
            rd_clock_tick(dut, m_trace);
            data = dut->rd_data;
            dut->rd_en = 0;
            rd_clock_tick(dut, m_trace);
            
            if (verbose) {
                std::cout << "Read successful: data=" << (int)data 
                          << ", wr_count=" << (int)dut->wr_count 
                          << ", rd_count=" << (int)dut->rd_count 
                          << ", full=" << (int)dut->full 
                          << ", empty=" << (int)dut->empty << std::endl;
            }
            
            return true;
        }
        
        if (verbose) {
            std::cout << "Read attempt " << attempts 
                      << " failed. FIFO status:" << std::endl;
            print_fifo_status(dut, "Read Attempt");
        }
        
        attempts++;
    }
    
    return false;
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
    bool global_test_pass = true;
    
    // Reset the FIFO
    reset_fifo(dut, m_trace);
    
    std::cout << "Starting Asynchronous FIFO test..." << std::endl;
    
    // Test 1: Error flag initialization
    std::cout << "Test 1: Error Flag Initialization" << std::endl;
    total_tests++;
    if (dut->sync_error_flag == 0 && dut->pointer_wraparound_flag == 0) {
        passed_tests++;
        std::cout << "  PASS: Initial error flags are clear" << std::endl;
    } else {
        global_test_pass = false;
        std::cout << "  FAIL: Initial error flags should be zero" << std::endl;
        print_fifo_status(dut, "Error Flag Init");
    }
    
    // Test 2: Basic write and read operations
    std::cout << "\nTest 2: Basic write and read with different clock frequencies" << std::endl;
    total_tests++;
    bool test2_pass = true;
    std::vector<uint8_t> test_data;
    
    // Write data to the FIFO
    for (int i = 1; i <= FIFO_DEPTH; i++) {
        uint8_t data = i;
        test_data.push_back(data);
        
        if (!write_data(dut, m_trace, data, true)) {
            std::cout << "Write failed at iteration " << i << std::endl;
            test2_pass = false;
            break;
        }
    }
    
    // Read data from the FIFO
    if (test2_pass) {
        for (int i = 0; i < FIFO_DEPTH; i++) {
            uint8_t data;
            if (!read_data(dut, m_trace, data, true)) {
                std::cout << "Read failed at iteration " << i << std::endl;
                test2_pass = false;
                break;
            }
            
            if (data != test_data[i]) {
                std::cout << "Data mismatch at iteration " << i 
                          << ": Read " << (int)data 
                          << ", Expected " << (int)test_data[i] << std::endl;
                test2_pass = false;
                break;
            }
        }
    }
    
    if (test2_pass) {
        passed_tests++;
        std::cout << "Test 2 PASSED" << std::endl;
    } else {
        std::cout << "Test 2 FAILED" << std::endl;
    }

    // Reset the FIFO between tests
    reset_fifo(dut, m_trace);

    // Test 3: Almost full and almost empty flags
    std::cout << "\nTest 3: Almost full and almost empty flags" << std::endl;
    total_tests++;
    bool test3_pass = true;
    
    // Fill the FIFO until almost full
    while (!dut->almost_full) {
        if (!write_data(dut, m_trace, 100, true)) {
            test3_pass = false;
            break;
        }
    }
    
    if (test3_pass) {
        std::cout << "FIFO almost full: wr_count=" << (int)dut->wr_count 
                  << ", almost_full=" << (int)dut->almost_full << std::endl;
    } else {
        test3_pass = false;
    }
    
    // Read data until almost empty
    while (!dut->almost_empty && !dut->empty) {
        uint8_t data;
        if (!read_data(dut, m_trace, data, true)) {
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

    // Reset the FIFO between tests
    reset_fifo(dut, m_trace);

    // Test 4: Asynchronous clock domains
    std::cout << "\nTest 4: Asynchronous clock domains (write faster than read)" << std::endl;
    total_tests++;
    bool test4_pass = true;
    std::vector<uint8_t> async_test_data;
    
    // Write data quickly (multiple write clocks per read clock)
    for (int i = 1; i <= 8; i++) {
        uint8_t data = i + 50;
        async_test_data.push_back(data);
        
        if (!write_data(dut, m_trace, data, true)) {
            std::cout << "Write failed during async test at iteration " << i << std::endl;
            test4_pass = false;
            break;
        }
        
        if (i % 2 == 0) {
            rd_clock_tick(dut, m_trace);
        }
    }
    
    // Read the data and verify
    if (test4_pass) {
        for (int i = 0; i < async_test_data.size(); i++) {
            uint8_t data;
            if (!read_data(dut, m_trace, data, true)) {
                std::cout << "Read failed during async test at iteration " << i << std::endl;
                test4_pass = false;
                break;
            }
            
            if (data != async_test_data[i]) {
                std::cout << "Async data mismatch at iteration " << i 
                          << ": Read " << (int)data 
                          << ", Expected " << (int)async_test_data[i] << std::endl;
                test4_pass = false;
                break;
            }
        }
    }
    
    if (test4_pass) {
        passed_tests++;
        std::cout << "Test 4 PASSED" << std::endl;
    } else {
        std::cout << "Test 4 FAILED" << std::endl;
    }
    
    // Final test result reporting
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