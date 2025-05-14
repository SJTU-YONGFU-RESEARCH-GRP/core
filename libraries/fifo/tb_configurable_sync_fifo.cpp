#include "Vconfigurable_sync_fifo.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <vector>
#include <deque>
#include <random>
#include <iomanip>

// FIFO parameters
#define DEPTH 16

// Test case structure
struct TestCase {
    std::string name;
    int cycles;
};

// Helper function to run a simple test
bool run_test(std::unique_ptr<Vconfigurable_sync_fifo>& fifo, VerilatedVcdC* tfp, 
              vluint64_t& sim_time, const TestCase& test) {
    
    std::cout << "Running test: " << test.name << std::endl;
    
    // Test patterns (known input and expected output)
    std::vector<uint8_t> test_data = {
        0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08,
        0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 0x10,
        0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18
    };
    
    // Test tracking
    int writes = 0;
    int reads = 0;
    int errors = 0;
    std::deque<uint8_t> expected_values;
    
    // Reset the FIFO
    fifo->rst_n = 0;
    fifo->clk = 0;
    fifo->wr_en = 0;
    fifo->rd_en = 0;
    fifo->data_in = 0;
    
    // Apply reset for a few cycles
    for (int i = 0; i < 5; i++) {
        fifo->clk = 0; fifo->eval(); if (tfp) tfp->dump(sim_time++);
        fifo->clk = 1; fifo->eval(); if (tfp) tfp->dump(sim_time++);
    }
    
    // Release reset
    fifo->rst_n = 1;
    
    // First, fill the FIFO halfway
    for (int i = 0; i < DEPTH/2; i++) {
        fifo->data_in = test_data[i];
        fifo->wr_en = 1;
        fifo->rd_en = 0;
        
        fifo->clk = 0;
        fifo->eval();
        if (tfp) tfp->dump(sim_time++);
        
        fifo->clk = 1;
        fifo->eval();
        if (tfp) tfp->dump(sim_time++);
        
        expected_values.push_back(test_data[i]);
        writes++;
    }
    
    // Main test loop - alternating read/write
    for (int cycle = 0; cycle < test.cycles; cycle++) {
        // Every other cycle, do a read/write pair
        bool do_write = (cycle % 3 != 0) && (writes < test_data.size());
        bool do_read = (cycle % 2 == 0) && !expected_values.empty();
        
        // Check data if we did a read in the previous cycle
        static bool prev_read = false;
        static uint8_t prev_expected = 0;
        
        if (prev_read) {
            if (fifo->data_out != prev_expected) {
                std::cout << "  ERROR at cycle " << cycle 
                          << ": Expected " << (int)prev_expected 
                          << ", got " << (int)fifo->data_out << std::endl;
                errors++;
            }
            prev_read = false;
        }
        
        // Set up current cycle operations
        if (do_write) {
            fifo->data_in = test_data[writes];
            expected_values.push_back(test_data[writes]);
            writes++;
        }
        
        if (do_read) {
            prev_expected = expected_values.front();
            expected_values.pop_front();
            reads++;
            prev_read = true;
        }
        
        fifo->wr_en = do_write;
        fifo->rd_en = do_read;
        
        // Clock edge
        fifo->clk = 0;
        fifo->eval();
        if (tfp) tfp->dump(sim_time++);
        
        fifo->clk = 1;
        fifo->eval();
        if (tfp) tfp->dump(sim_time++);
        
        // Status output
        if (cycle % 20 == 0 || cycle == test.cycles - 1) {
            std::cout << "  Cycle " << cycle 
                      << " - Fill level: " << (int)fifo->fill_level
                      << ", Full: " << (fifo->full ? "Yes" : "No")
                      << ", Empty: " << (fifo->empty ? "Yes" : "No") 
                      << std::endl;
        }
    }
    
    // Final statistics
    std::cout << "  Test completed:" << std::endl;
    std::cout << "  - Writes: " << writes << std::endl;
    std::cout << "  - Reads: " << reads << std::endl;
    std::cout << "  - Errors: " << errors << std::endl;
    std::cout << "  - Final fill level: " << (int)fifo->fill_level << std::endl;
    std::cout << "  - Test " << (errors == 0 ? "PASSED" : "FAILED") << std::endl;
    std::cout << std::endl;
    
    return (errors == 0);
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    std::unique_ptr<Vconfigurable_sync_fifo> fifo = std::make_unique<Vconfigurable_sync_fifo>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    fifo->trace(tfp.get(), 99);
    tfp->open("configurable_sync_fifo_sim.vcd");
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Define a simple test case
    TestCase simple_test = {"Basic FIFO Operation", 100};
    
    // Run the test and get the result
    bool test_passed = run_test(fifo, tfp.get(), sim_time, simple_test);
    
    // Cleanup
    tfp->close();
    fifo->final();
    
    // Print overall result
    if (test_passed) {
        std::cout << "ALL TESTS PASSED!" << std::endl;
    } else {
        std::cout << "TEST FAILED!" << std::endl;
    }
    
    return test_passed ? 0 : 1;
} 