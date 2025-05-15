#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vparameterized_johnson_counter.h"

#define MAX_SIM_TIME 100
vluint64_t sim_time = 0;

// Define the width parameter here to match the Verilog module
#define WIDTH 6

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Vparameterized_johnson_counter* dut = new Vparameterized_johnson_counter;
    
    // Initialize VCD trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    // Use the defined WIDTH parameter
    int width = WIDTH;
    std::cout << "Johnson Counter Width: " << width << std::endl;
    
    // Calculate the expected sequence length (2*WIDTH)
    int expected_sequence_length = 2 * width;
    std::cout << "Expected sequence length: " << expected_sequence_length << std::endl;
    
    // Initialize signals
    dut->clk = 0;
    dut->rst_n = 0;  // Start with reset active
    dut->enable = 1; // Enable the counter
    
    // Run simulation
    while (sim_time < MAX_SIM_TIME) {
        // Toggle clock
        dut->clk = !dut->clk;
        
        // Release reset after a few clock cycles
        if (sim_time == 4) {
            dut->rst_n = 1;
        }
        
        // Evaluate model
        dut->eval();
        
        // Dump wave trace
        m_trace->dump(sim_time);
        
        // Print counter value on positive clock edge
        if (dut->clk && sim_time > 4) {
            std::cout << "Time: " << sim_time << ", Count: ";
            for (int i = width-1; i >= 0; i--) {
                std::cout << ((dut->count >> i) & 1);
            }
            std::cout << std::endl;
        }
        
        sim_time++;
    }
    
    // Verify Johnson counter sequence
    std::cout << "\nVerifying Johnson counter sequence..." << std::endl;
    
    // Reset for verification
    dut->clk = 0;
    dut->rst_n = 0;
    dut->enable = 1;
    dut->eval();
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->rst_n = 1;
    dut->eval();
    
    // Store the sequence
    uint32_t* sequence = new uint32_t[expected_sequence_length];
    int seq_idx = 0;
    bool sequence_repeats = false;
    
    for (int i = 0; i < expected_sequence_length * 2; i++) {
        // Clock the design
        dut->clk = 1;
        dut->eval();
        
        if (i >= 1) { // Skip the first clock after reset
            sequence[seq_idx] = dut->count;
            seq_idx++;
            
            // Check if we've seen a complete sequence
            if (seq_idx == expected_sequence_length) {
                // Verify next values match the start of the sequence
                uint32_t next_val = dut->count;
                dut->clk = 0;
                dut->eval();
                dut->clk = 1;
                dut->eval();
                
                if (dut->count == sequence[0]) {
                    sequence_repeats = true;
                    break;
                }
                
                // If not repeating yet, continue collecting
                seq_idx = 0;
            }
        }
        
        dut->clk = 0;
        dut->eval();
    }
    
    // Print the sequence
    std::cout << "Johnson counter sequence:" << std::endl;
    for (int i = 0; i < expected_sequence_length; i++) {
        std::cout << "  " << i << ": ";
        for (int j = width-1; j >= 0; j--) {
            std::cout << ((sequence[i] >> j) & 1);
        }
        std::cout << std::endl;
    }
    
    // Check if sequence has the expected properties
    bool valid_johnson = true;
    
    // Check if the sequence repeats
    if (!sequence_repeats) {
        std::cout << "ERROR: Sequence does not repeat after expected length." << std::endl;
        valid_johnson = false;
    }
    
    // Check if the sequence has the Johnson counter pattern
    for (int i = 0; i < expected_sequence_length-1; i++) {
        uint32_t curr = sequence[i];
        uint32_t next = sequence[i+1];
        
        // In a Johnson counter, each state should differ from the next by exactly one bit
        int bit_diff = 0;
        for (int j = 0; j < width; j++) {
            if (((curr >> j) & 1) != ((next >> j) & 1)) {
                bit_diff++;
            }
        }
        
        if (bit_diff != 1) {
            std::cout << "ERROR: Invalid transition from state " << i << " to " << (i+1) 
                      << ". Johnson counter should have exactly 1 bit change." << std::endl;
            valid_johnson = false;
        }
    }
    
    if (valid_johnson) {
        std::cout << "SUCCESS: Valid Johnson counter sequence verified!" << std::endl;
    } else {
        std::cout << "FAILURE: Johnson counter sequence verification failed." << std::endl;
        return 1;
    }
    
    // Clean up
    delete[] sequence;
    m_trace->close();
    delete m_trace;
    delete dut;
    
    return valid_johnson ? 0 : 1;
} 