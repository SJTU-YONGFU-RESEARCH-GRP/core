#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vconfigurable_param_fifo.h"
#include <vector>
#include <queue>

#define MAX_SIM_TIME 2000
#define VERIF_START_TIME 10
vluint64_t sim_time = 0;

// Test configuration parameters
typedef struct {
    int data_width;
    int fifo_depth;
    int almost_full_threshold;
    int almost_empty_threshold;
    bool enable_almost_flags;
} TestConfig;

// Helper function to print FIFO status
void print_fifo_status(Vconfigurable_param_fifo* dut, const char* operation) {
    printf("%s: empty=%d, full=%d, almost_empty=%d, almost_full=%d\n", 
           operation, dut->empty, dut->full, dut->almost_empty, dut->almost_full);
}

// Test function
bool test_fifo(TestConfig config) {
    Vconfigurable_param_fifo* fifo = new Vconfigurable_param_fifo;
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    fifo->trace(tfp, 99);

    // Create VCD trace filename based on configuration
    char vcd_filename[100];
    sprintf(vcd_filename, "configurable_param_fifo_w%d_d%d_sim.vcd", 
            config.data_width, config.fifo_depth);
    tfp->open(vcd_filename);

    // Test variables
    int write_count = 0;
    int read_count = 0;
    bool test_passed = true;
    std::vector<uint32_t> expected_reads;  // Track expected read values in order
    std::queue<uint32_t> read_data_queue;  // Track actual read values for validation
    bool read_pending = false;             // Flag to indicate a read is pending

    // Reset the FIFO
    fifo->clk = 0;
    fifo->rst_n = 0;
    fifo->wr_en = 0;
    fifo->rd_en = 0;
    fifo->wr_data = 0;

    // Apply reset for 5 clock cycles
    for (int i = 0; i < 5; i++) {
        fifo->clk = !fifo->clk;
        fifo->eval();
        tfp->dump(sim_time++);
        fifo->clk = !fifo->clk;
        fifo->eval();
        tfp->dump(sim_time++);
    }
    
    fifo->rst_n = 1;
    
    // FIFO should be empty after reset
    if (!fifo->empty || fifo->full) {
        printf("TEST FAILED: FIFO not properly reset (empty=%d, full=%d)\n", 
               fifo->empty, fifo->full);
        test_passed = false;
    }

    // Main test loop
    while (sim_time < MAX_SIM_TIME) {
        // Toggle clock
        fifo->clk = !fifo->clk;
        
        // On positive edge, perform operations
        if (fifo->clk) {
            // Default - no operations
            fifo->wr_en = 0;
            fifo->rd_en = 0;
            
            // Randomly decide to write if not full
            if (!fifo->full && (rand() % 100 < 40)) {  // 40% chance to write
                fifo->wr_en = 1;
                fifo->wr_data = rand() & ((1 << config.data_width) - 1);
                expected_reads.push_back(fifo->wr_data);  // Store for later comparison
                write_count++;
                print_fifo_status(fifo, "Write");
            }
            
            // Randomly decide to read if not empty
            if (!fifo->empty && (rand() % 100 < 30)) {  // 30% chance to read
                fifo->rd_en = 1;
                read_pending = true;  // Mark that we'll need to check read data on next cycle
                read_count++;
            }
        } 
        // On negative edge, check for read data from previous reads
        else if (!fifo->clk && read_pending) {
            // Store the current read data value for later verification
            read_data_queue.push(fifo->rd_data);
            read_pending = false;
            print_fifo_status(fifo, "Read ");
        }
        
        // Verify read data
        if (read_data_queue.size() > 0 && expected_reads.size() >= read_data_queue.size()) {
            uint32_t actual_data = read_data_queue.front();
            read_data_queue.pop();
            
            uint32_t expected_data = expected_reads[0];
            expected_reads.erase(expected_reads.begin());  // Remove the verified item
            
            if (actual_data != expected_data) {
                printf("TEST FAILED: Read data mismatch. Got %d, expected %d\n", 
                       actual_data, expected_data);
                test_passed = false;
            }
        }
        
        // Check for flag consistency
        if (fifo->empty && fifo->full) {
            printf("TEST FAILED: FIFO cannot be both empty and full\n");
            test_passed = false;
            break;  // This is a critical failure, stop testing
        }
        
        // Simulate and dump VCD
        fifo->eval();
        tfp->dump(sim_time++);
        
        // Check if we've performed enough operations
        if (write_count > 3 * config.fifo_depth && read_count > 2 * config.fifo_depth) {
            break;
        }
    }
    
    // Verify final state
    printf("Test summary: %d writes, %d reads, final state: empty=%d, full=%d\n", 
           write_count, read_count, fifo->empty, fifo->full);
    
    // Clean up
    tfp->close();
    delete tfp;
    delete fifo;
    
    return test_passed;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    srand(time(NULL));
    
    bool all_passed = true;
    
    // Test configuration 1: Small FIFO
    TestConfig config1 = {
        .data_width = 8,
        .fifo_depth = 4,
        .almost_full_threshold = 3,
        .almost_empty_threshold = 1,
        .enable_almost_flags = true
    };
    
    printf("\n=== Testing small FIFO (width=%d, depth=%d) ===\n", 
           config1.data_width, config1.fifo_depth);
    if (!test_fifo(config1)) {
        all_passed = false;
    }
    
    // Test configuration 2: Medium FIFO
    TestConfig config2 = {
        .data_width = 16,
        .fifo_depth = 8,
        .almost_full_threshold = 6,
        .almost_empty_threshold = 2,
        .enable_almost_flags = true
    };
    
    printf("\n=== Testing medium FIFO (width=%d, depth=%d) ===\n", 
           config2.data_width, config2.fifo_depth);
    if (!test_fifo(config2)) {
        all_passed = false;
    }
    
    // Test configuration 3: Large FIFO with almost flags disabled
    TestConfig config3 = {
        .data_width = 32,
        .fifo_depth = 16,
        .almost_full_threshold = 12,
        .almost_empty_threshold = 4,
        .enable_almost_flags = false
    };
    
    printf("\n=== Testing large FIFO (width=%d, depth=%d, almost_flags=%d) ===\n", 
           config3.data_width, config3.fifo_depth, config3.enable_almost_flags);
    if (!test_fifo(config3)) {
        all_passed = false;
    }
    
    if (all_passed) {
        printf("\nAll tests PASSED!\n");
        return 0;
    } else {
        printf("\nSome tests FAILED!\n");
        return 1;
    }
} 