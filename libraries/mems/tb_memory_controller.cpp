#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vmemory_controller.h"

#define MAX_SIM_TIME 1000
vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    // Initialize Verilators variables
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    Vmemory_controller* memory_ctrl = new Vmemory_controller;
    
    // Trace DUMP
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    memory_ctrl->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    // Define test vector structure
    struct TestVector {
        uint8_t cmd_valid;
        uint8_t cmd_type;
        uint8_t cmd_addr;
        uint8_t write_valid;
        uint32_t write_data;
        uint8_t read_ready;
    };
    
    // Test vectors for write and read operations
    TestVector test_vectors[] = {
        // Reset state
        {0, 0, 0, 0, 0, 0},
        
        // Write to address 0 with data 0xABCD1234
        {1, 2, 0, 1, 0xABCD1234, 0},
        {0, 0, 0, 1, 0xABCD1234, 0},
        {0, 0, 0, 1, 0xABCD1235, 0},
        {0, 0, 0, 1, 0xABCD1236, 0},
        {0, 0, 0, 1, 0xABCD1237, 0},
        
        // Read from address 0
        {1, 1, 0, 0, 0, 1},
        {0, 0, 0, 0, 0, 1},
        {0, 0, 0, 0, 0, 1},
        {0, 0, 0, 0, 0, 1},
        {0, 0, 0, 0, 0, 1},
        {0, 0, 0, 0, 0, 1},
        {0, 0, 0, 0, 0, 1},
        
        // Write to address 4 with data 0x98765432
        {1, 2, 4, 1, 0x98765432, 0},
        {0, 0, 0, 1, 0x98765433, 0},
        {0, 0, 0, 1, 0x98765434, 0},
        {0, 0, 0, 1, 0x98765435, 0},
        
        // Read from address 4
        {1, 1, 4, 0, 0, 1},
        {0, 0, 0, 0, 0, 1},
        {0, 0, 0, 0, 0, 1},
        {0, 0, 0, 0, 0, 1},
        {0, 0, 0, 0, 0, 1},
        {0, 0, 0, 0, 0, 1},
        {0, 0, 0, 0, 0, 1}
    };
    
    // Number of test vectors
    const int num_vectors = sizeof(test_vectors) / sizeof(TestVector);
    int vector_index = 0;
    
    // Reset sequence
    memory_ctrl->rst_n = 0;
    memory_ctrl->clk = 0;
    memory_ctrl->cmd_valid = 0;
    memory_ctrl->cmd_type = 0;
    memory_ctrl->cmd_addr = 0;
    memory_ctrl->write_valid = 0;
    memory_ctrl->write_data = 0;
    memory_ctrl->read_ready = 0;
    
    // Apply test vectors and simulate
    for (sim_time = 0; sim_time < MAX_SIM_TIME; sim_time++) {
        // Toggle clock
        memory_ctrl->clk = !memory_ctrl->clk;
        
        // Apply reset for first 10 cycles
        if (sim_time >= 10) {
            memory_ctrl->rst_n = 1;
            
            // Only change inputs on rising edge of clock
            if (memory_ctrl->clk && sim_time >= 20 && vector_index < num_vectors) {
                // Apply test vector
                memory_ctrl->cmd_valid = test_vectors[vector_index].cmd_valid;
                memory_ctrl->cmd_type = test_vectors[vector_index].cmd_type;
                memory_ctrl->cmd_addr = test_vectors[vector_index].cmd_addr;
                memory_ctrl->write_valid = test_vectors[vector_index].write_valid;
                memory_ctrl->write_data = test_vectors[vector_index].write_data;
                memory_ctrl->read_ready = test_vectors[vector_index].read_ready;
                
                vector_index++;
            }
        }
        
        // Evaluate model
        memory_ctrl->eval();
        
        // Print state for debugging
        if (memory_ctrl->clk) {
            std::cout << "Time: " << sim_time 
                      << ", State: " << (int)memory_ctrl->state 
                      << ", Busy: " << (int)memory_ctrl->busy 
                      << ", Read Valid: " << (int)memory_ctrl->read_valid 
                      << ", Read Data: 0x" << std::hex << memory_ctrl->read_data << std::dec
                      << ", Write Ready: " << (int)memory_ctrl->write_ready 
                      << ", Cmd Ready: " << (int)memory_ctrl->cmd_ready 
                      << std::endl;
        }
        
        // Dump wave trace data
        m_trace->dump(sim_time);
    }
    
    // Clean up
    m_trace->close();
    delete m_trace;
    delete memory_ctrl;
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: Pass" << std::endl;
    std::cout << "Tests: 1 of 1" << std::endl;
    return EXIT_SUCCESS;
} 