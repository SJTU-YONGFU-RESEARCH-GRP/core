#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vcredit_based_fifo.h"

#define MAX_SIM_TIME 500
#define DATA_WIDTH 8
#define FIFO_DEPTH 16
#define ADDR_WIDTH 4

vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of the module
    Vcredit_based_fifo* dut = new Vcredit_based_fifo;
    
    // Initialize trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    // Initialize test data
    uint8_t test_data[64];
    for (int i = 0; i < 64; i++) {
        test_data[i] = i + 1; // Simple data pattern
    }
    
    // Test variables
    int write_count = 0;
    int read_count = 0;
    int credit_return_count = 0;
    bool test_passed = true;
    int test_phase = 1; // 1: Fill FIFO, 2: Test full condition, 3: Normal operation
    
    // Reset
    dut->rst_n = 0;
    dut->clk = 0;
    dut->valid_in = 0;
    dut->data_in = 0;
    dut->ready_in = 0;
    dut->credit_return = 0;
    
    // Run simulation
    while (sim_time < MAX_SIM_TIME && test_passed) {
        // Toggle clock
        dut->clk = !dut->clk;
        
        // Apply reset for the first 10 cycles
        if (sim_time == 20) {
            dut->rst_n = 1;
        }
        
        // Only on positive clock edge
        if (dut->clk) {
            // After reset, start the test phases
            if (sim_time > 20) {
                // Phase 1: Fill the FIFO without reading
                if (test_phase == 1) {
                    // Try to write data
                    if (dut->ready_out) {
                        dut->valid_in = 1;
                        dut->data_in = test_data[write_count % 64];
                        write_count++;
                    } else {
                        dut->valid_in = 0;
                    }
                    
                    // Don't read any data in this phase
                    dut->ready_in = 0;
                    
                    // No credit returns in this phase
                    dut->credit_return = 0;
                    
                    // Check if FIFO is getting full
                    if (dut->fifo_level >= FIFO_DEPTH - 1) {
                        test_phase = 2; // Move to full condition test
                        std::cout << "Phase 1 complete at time " << sim_time 
                                  << ", FIFO level: " << (int)dut->fifo_level 
                                  << ", Written: " << write_count << std::endl;
                    }
                }
                // Phase 2: Test full condition
                else if (test_phase == 2) {
                    // Try to write one more item to trigger full
                    dut->valid_in = 1;
                    dut->data_in = test_data[write_count % 64];
                    
                    // Don't read any data in this phase
                    dut->ready_in = 0;
                    
                    // No credit returns in this phase
                    dut->credit_return = 0;
                    
                    // Check if FIFO is full
                    if (dut->full) {
                        std::cout << "FIFO full detected at time " << sim_time 
                                  << ", FIFO level: " << (int)dut->fifo_level 
                                  << ", Written: " << write_count
                                  << ", Read: " << read_count << std::endl;
                        test_phase = 3; // Move to normal operation
                    } else if (dut->ready_out) {
                        // If not full but accepted data, increment write count
                        write_count++;
                    }
                }
                // Phase 3: Normal operation with credit returns
                else {
                    // Try to write data when credits are available
                    if (write_count < 64 && dut->ready_out) {
                        dut->valid_in = 1;
                        dut->data_in = test_data[write_count % 64];
                        write_count++;
                    } else {
                        dut->valid_in = 0;
                    }
                    
                    // Randomly accept data from FIFO
                    if (sim_time % 3 == 0) {
                        dut->ready_in = 1;
                    } else {
                        dut->ready_in = 0;
                    }
                    
                    // Return credits periodically after consuming data
                    if (dut->valid_out && dut->ready_in) {
                        if (sim_time % 5 == 0) {
                            dut->credit_return = 1;
                            credit_return_count++;
                        } else {
                            dut->credit_return = 0;
                        }
                    } else {
                        dut->credit_return = 0;
                    }
                }
                
                // Check output data when valid
                if (dut->valid_out && dut->ready_in) {
                    if (dut->data_out != test_data[read_count % 64]) {
                        std::cout << "Error at time " << sim_time 
                                  << ": Expected " << (int)test_data[read_count % 64] 
                                  << " but got " << (int)dut->data_out << std::endl;
                        test_passed = false;
                    }
                    read_count++;
                }
                
                // Print status
                if (sim_time % 20 == 0) {
                    std::cout << "Time: " << sim_time
                              << ", Phase: " << test_phase
                              << ", Credits: " << (int)dut->credits_available
                              << ", FIFO level: " << (int)dut->fifo_level
                              << ", Full: " << (dut->full ? "Yes" : "No")
                              << ", Empty: " << (dut->empty ? "Yes" : "No")
                              << ", Written: " << write_count
                              << ", Read: " << read_count
                              << ", Credits returned: " << credit_return_count << std::endl;
                }
            }
        }
        
        // Evaluate model
        dut->eval();
        
        // Dump trace data
        m_trace->dump(sim_time);
        
        // Increment simulation time
        sim_time++;
    }
    
    // Final check
    if (read_count > 0 && test_passed) {
        std::cout << "Test PASSED!" << std::endl;
        std::cout << "Total writes: " << write_count << std::endl;
        std::cout << "Total reads: " << read_count << std::endl;
        std::cout << "Final credits: " << (int)dut->credits_available << std::endl;
        std::cout << "Final FIFO level: " << (int)dut->fifo_level << std::endl;
        std::cout << "Final FIFO status - Full: " << (dut->full ? "Yes" : "No") 
                  << ", Empty: " << (dut->empty ? "Yes" : "No") << std::endl;
    } else {
        std::cout << "Test FAILED or no data processed!" << std::endl;
    }
    
    // Cleanup
    m_trace->close();
    delete m_trace;
    delete dut;
    
    return 0;
} 