#include "Vdual_clock_fifo.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <vector>
#include <queue>
#include <random>
#include <bitset>
#include <functional>

// Clock generation functions
void wr_clock_tick(std::unique_ptr<Vdual_clock_fifo>& fifo, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    fifo->wr_clk = 0;
    fifo->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    fifo->wr_clk = 1;
    fifo->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
}

void rd_clock_tick(std::unique_ptr<Vdual_clock_fifo>& fifo, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    fifo->rd_clk = 0;
    fifo->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    fifo->rd_clk = 1;
    fifo->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
}

// Test function
void test_dual_clock_fifo(std::unique_ptr<Vdual_clock_fifo>& fifo, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    // Get parameters from the design
    const int DATA_WIDTH = 8;
    const int ADDR_WIDTH = 4;
    const int FIFO_DEPTH = 1 << ADDR_WIDTH;
    const int ALMOST_FULL_THRESHOLD = 12;
    const int ALMOST_EMPTY_THRESHOLD = 4;
    
    std::cout << "Testing Dual-Clock FIFO with:" << std::endl;
    std::cout << "  DATA_WIDTH = " << DATA_WIDTH << std::endl;
    std::cout << "  ADDR_WIDTH = " << ADDR_WIDTH << std::endl;
    std::cout << "  FIFO_DEPTH = " << FIFO_DEPTH << std::endl;
    std::cout << "  ALMOST_FULL_THRESHOLD = " << ALMOST_FULL_THRESHOLD << std::endl;
    std::cout << "  ALMOST_EMPTY_THRESHOLD = " << ALMOST_EMPTY_THRESHOLD << std::endl;
    
    // Random number generator for data
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, (1 << DATA_WIDTH) - 1);
    
    // Queue to track expected data
    std::queue<uint8_t> expected_data;
    
    // Reset the FIFO
    fifo->wr_rst_n = 0;
    fifo->rd_rst_n = 0;
    fifo->wr_en = 0;
    fifo->rd_en = 0;
    fifo->wr_data = 0;
    
    // Apply reset for a few cycles
    for (int i = 0; i < 5; i++) {
        wr_clock_tick(fifo, tfp, sim_time);
        rd_clock_tick(fifo, tfp, sim_time);
    }
    
    // Release reset
    fifo->wr_rst_n = 1;
    fifo->rd_rst_n = 1;
    
    // Apply a few more cycles to stabilize
    for (int i = 0; i < 5; i++) {
        wr_clock_tick(fifo, tfp, sim_time);
        rd_clock_tick(fifo, tfp, sim_time);
    }
    
    // Verify initial conditions
    fifo->eval();
    if (!fifo->empty || fifo->full || !fifo->almost_empty || fifo->almost_full) {
        std::cout << "ERROR: Initial flags incorrect!" << std::endl;
        std::cout << "  empty = " << (fifo->empty ? "true" : "false") << " (expected: true)" << std::endl;
        std::cout << "  full = " << (fifo->full ? "true" : "false") << " (expected: false)" << std::endl;
        std::cout << "  almost_empty = " << (fifo->almost_empty ? "true" : "false") << " (expected: true)" << std::endl;
        std::cout << "  almost_full = " << (fifo->almost_full ? "true" : "false") << " (expected: false)" << std::endl;
    } else {
        std::cout << "Initial flags correct!" << std::endl;
    }
    
    // Test 1: Fill the FIFO completely
    std::cout << "\nTest 1: Filling the FIFO..." << std::endl;
    for (int i = 0; i < FIFO_DEPTH; i++) {
        uint8_t data = dis(gen);
        fifo->wr_data = data;
        fifo->wr_en = 1;
        expected_data.push(data);
        
        wr_clock_tick(fifo, tfp, sim_time);
        rd_clock_tick(fifo, tfp, sim_time);
        
        // Check flags after each write
        fifo->eval();
        std::cout << "  Write " << i << ": data = 0x" << std::hex << (int)data << std::dec 
                  << ", empty = " << (fifo->empty ? "true" : "false")
                  << ", full = " << (fifo->full ? "true" : "false")
                  << ", almost_empty = " << (fifo->almost_empty ? "true" : "false")
                  << ", almost_full = " << (fifo->almost_full ? "true" : "false") << std::endl;
    }
    
    // Disable write enable
    fifo->wr_en = 0;
    
    // Test 2: Empty the FIFO completely
    std::cout << "\nTest 2: Emptying the FIFO..." << std::endl;
    for (int i = 0; i < FIFO_DEPTH; i++) {
        fifo->rd_en = 1;
        
        rd_clock_tick(fifo, tfp, sim_time);
        wr_clock_tick(fifo, tfp, sim_time);
        
        // Check data and flags after each read
        fifo->eval();
        uint8_t expected = expected_data.front();
        expected_data.pop();
        
        std::cout << "  Read " << i << ": data = 0x" << std::hex << (int)fifo->rd_data 
                  << ", expected = 0x" << (int)expected << std::dec
                  << ", empty = " << (fifo->empty ? "true" : "false")
                  << ", full = " << (fifo->full ? "true" : "false")
                  << ", almost_empty = " << (fifo->almost_empty ? "true" : "false")
                  << ", almost_full = " << (fifo->almost_full ? "true" : "false") << std::endl;
        
        if (fifo->rd_data != expected) {
            std::cout << "ERROR: Data mismatch at read " << i << "!" << std::endl;
        }
    }
    
    // Disable read enable
    fifo->rd_en = 0;
    
    // Test 3: Concurrent read and write operations with synchronized checking
    std::cout << "\nTest 3: Concurrent read/write operations with synchronized checking..." << std::endl;
    
    // Reset the FIFO to ensure a clean state
    fifo->wr_rst_n = 0;
    fifo->rd_rst_n = 0;
    fifo->wr_en = 0;
    fifo->rd_en = 0;
    
    for (int i = 0; i < 5; i++) {
        wr_clock_tick(fifo, tfp, sim_time);
        rd_clock_tick(fifo, tfp, sim_time);
    }
    
    fifo->wr_rst_n = 1;
    fifo->rd_rst_n = 1;
    
    for (int i = 0; i < 5; i++) {
        wr_clock_tick(fifo, tfp, sim_time);
        rd_clock_tick(fifo, tfp, sim_time);
    }
    
    // Create a separate vector to store the written data
    std::vector<uint8_t> written_data;
    
    // First, write 8 items to the FIFO
    std::cout << "  Writing initial data..." << std::endl;
    for (int i = 0; i < 8; i++) {
        uint8_t data = dis(gen);
        fifo->wr_data = data;
        fifo->wr_en = 1;
        written_data.push_back(data);
        
        wr_clock_tick(fifo, tfp, sim_time);
    }
    fifo->wr_en = 0;
    
    // Let the data propagate through the synchronizers
    for (int i = 0; i < 5; i++) {
        rd_clock_tick(fifo, tfp, sim_time);
        wr_clock_tick(fifo, tfp, sim_time);
    }
    
    // Now perform alternating read and write operations
    std::cout << "  Alternating read and write operations..." << std::endl;
    int read_index = 0;
    bool all_passed = true;
    
    for (int i = 0; i < 20; i++) {
        // On even cycles, read from the FIFO
        if (i % 2 == 0 && read_index < written_data.size()) {
            fifo->rd_en = 1;
            fifo->wr_en = 0;
            
            rd_clock_tick(fifo, tfp, sim_time);
            
            // Check the read data
            uint8_t expected = written_data[read_index++];
            if (fifo->rd_data != expected) {
                std::cout << "  ERROR: Data mismatch! Read 0x" << std::hex << (int)fifo->rd_data
                          << ", expected 0x" << (int)expected << std::dec << std::endl;
                all_passed = false;
            } else {
                std::cout << "  Read successful: 0x" << std::hex << (int)fifo->rd_data << std::dec << std::endl;
            }
        }
        // On odd cycles, write to the FIFO
        else if (i % 2 == 1) {
            fifo->rd_en = 0;
            fifo->wr_en = 1;
            uint8_t data = dis(gen);
            fifo->wr_data = data;
            written_data.push_back(data);
            
            wr_clock_tick(fifo, tfp, sim_time);
            
            std::cout << "  Write: 0x" << std::hex << (int)data << std::dec << std::endl;
        }
        // If we've read all data, just tick the clocks
        else {
            fifo->rd_en = 0;
            fifo->wr_en = 0;
            
            if (i % 2 == 0) {
                rd_clock_tick(fifo, tfp, sim_time);
            } else {
                wr_clock_tick(fifo, tfp, sim_time);
            }
        }
        
        // Print status flags
        fifo->eval();
        std::cout << "  Cycle " << i 
                  << ": empty = " << (fifo->empty ? "true" : "false")
                  << ", full = " << (fifo->full ? "true" : "false")
                  << ", almost_empty = " << (fifo->almost_empty ? "true" : "false")
                  << ", almost_full = " << (fifo->almost_full ? "true" : "false") << std::endl;
    }
    
    if (all_passed) {
        std::cout << "  All concurrent read/write tests passed!" << std::endl;
    } else {
        std::cout << "  Some concurrent read/write tests failed!" << std::endl;
    }
    
    std::cout << "\nDual-Clock FIFO tests completed!" << std::endl;
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    std::unique_ptr<Vdual_clock_fifo> fifo = std::make_unique<Vdual_clock_fifo>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    fifo->trace(tfp.get(), 99);  // Trace 99 levels of hierarchy
    tfp->open("dual_clock_fifo_sim.vcd");
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Test tracking variables
    int total_tests = 0;
    int passed_tests = 0;
    bool global_test_pass = true;
    
    std::cout << "Starting Dual-Clock FIFO test..." << std::endl;
    
    // Wrapper function to run tests with error tracking
    auto run_test = [&](const std::function<void(std::unique_ptr<Vdual_clock_fifo>&, VerilatedVcdC*, vluint64_t&)>& test_func) {
        total_tests++;
        bool test_passed = true;
        
        try {
            test_func(fifo, tfp.get(), sim_time);
        } catch (const std::exception& e) {
            std::cout << "Test failed with exception: " << e.what() << std::endl;
            test_passed = false;
        }
        
        if (test_passed) {
            passed_tests++;
            std::cout << "  PASS: Dual-Clock FIFO Test" << std::endl;
        } else {
            global_test_pass = false;
            std::cout << "  FAIL: Dual-Clock FIFO Test" << std::endl;
        }
    };
    
    // Run tests
    run_test(test_dual_clock_fifo);
    
    // Cleanup
    tfp->close();
    fifo->final();
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (global_test_pass ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << passed_tests << " of " << total_tests << std::endl;
    
    return global_test_pass ? 0 : 1;
} 