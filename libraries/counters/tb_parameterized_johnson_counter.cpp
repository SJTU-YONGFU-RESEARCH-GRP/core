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
    dut->enable = 0; // Start with counter disabled
    dut->eval();
    
    // Hold in reset for a few cycles
    for(int i = 0; i < 3; i++) {
        dut->clk = 1;
        dut->eval();
        dut->clk = 0;
        dut->eval();
    }
    
    // Release reset and enable counter
    dut->rst_n = 1;
    dut->enable = 1;
    dut->eval();
    
    // Run simulation
    while (sim_time < MAX_SIM_TIME) {
        // Toggle clock
        dut->clk = !dut->clk;
        
        // Evaluate model
        dut->eval();
        
        // Dump wave trace
        m_trace->dump(sim_time);
        
        // Print counter value on positive clock edge
        if (dut->clk) {
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
    
    int passed_tests = 0;
    const int total_tests = 4;
    
    // Reset for verification
    dut->clk = 0;
    dut->rst_n = 0;
    dut->enable = 0;
    dut->eval();
    
    // Hold in reset for a few cycles
    for(int i = 0; i < 3; i++) {
        dut->clk = 1;
        dut->eval();
        dut->clk = 0;
        dut->eval();
    }
    
    // Test 1: Check initial reset state
    if ((int)dut->count == 0) {
        passed_tests++;
    } else {
        std::cout << "ERROR: Initial reset state incorrect, got " << (int)dut->count << ", expected 0" << std::endl;
    }
    
    // Release reset and enable counter
    dut->rst_n = 1;
    dut->enable = 1;
    dut->eval();
    
    // Store the sequence
    uint32_t* sequence = new uint32_t[expected_sequence_length * 2];
    int seq_idx = 0;
    bool found_repeat = false;
    
    // Capture more values than needed to find the repetition
    for (int i = 0; i < expected_sequence_length * 2; i++) {
        // Rising edge
        dut->clk = 1;
        dut->eval();
        sequence[i] = dut->count;
        
        // Check for sequence repetition starting from the second value
        if (i > 0 && sequence[i] == sequence[0]) {
            // Found potential repetition point
            bool is_repeat = true;
            for (int j = 1; j < i; j++) {
                if (sequence[j] != sequence[j % i]) {
                    is_repeat = false;
                    break;
                }
            }
            if (is_repeat) {
                seq_idx = i;
                found_repeat = true;
                break;
            }
        }
        
        // Falling edge
        dut->clk = 0;
        dut->eval();
    }
    
    // Print the sequence
    std::cout << "Johnson counter sequence:" << std::endl;
    for (int i = 0; i < (found_repeat ? seq_idx : expected_sequence_length); i++) {
        std::cout << "  " << i << ": ";
        for (int j = width-1; j >= 0; j--) {
            std::cout << ((sequence[i] >> j) & 1);
        }
        std::cout << std::endl;
    }
    
    // Test 2: Check sequence length
    if (found_repeat && seq_idx == expected_sequence_length) {
        passed_tests++;
    } else {
        if (!found_repeat) {
            std::cout << "ERROR: Could not find a repeating sequence." << std::endl;
        } else {
            std::cout << "ERROR: Sequence repeats after " << seq_idx 
                      << " steps, expected " << expected_sequence_length << std::endl;
        }
    }
    
    // Test 3: Check Johnson counter pattern (one bit change per state)
    bool pattern_correct = true;
    if (found_repeat) {
        for (int i = 0; i < seq_idx; i++) {
            uint32_t curr = sequence[i];
            uint32_t next = sequence[(i + 1) % seq_idx];
            
            // In a Johnson counter, each state should differ from the next by exactly one bit
            int bit_diff = 0;
            for (int j = 0; j < width; j++) {
                if (((curr >> j) & 1) != ((next >> j) & 1)) {
                    bit_diff++;
                }
            }
            
            if (bit_diff != 1) {
                std::cout << "ERROR: Invalid transition from state " << i << " to " << ((i + 1) % seq_idx)
                          << ". Johnson counter should have exactly 1 bit change." << std::endl;
                std::cout << "Current state: ";
                for (int j = width-1; j >= 0; j--) {
                    std::cout << ((curr >> j) & 1);
                }
                std::cout << "\nNext state:    ";
                for (int j = width-1; j >= 0; j--) {
                    std::cout << ((next >> j) & 1);
                }
                std::cout << std::endl;
                pattern_correct = false;
                break;
            }
        }
    }
    
    if (pattern_correct) {
        passed_tests++;
    }
    
    // Test 4: Verify sequence repetition
    if (found_repeat) {
        bool repetition_correct = true;
        for (int i = 0; i < seq_idx; i++) {
            if (sequence[i] != sequence[i % seq_idx]) {
                std::cout << "ERROR: Sequence repetition incorrect at index " << i << std::endl;
                repetition_correct = false;
                break;
            }
        }
        if (repetition_correct) {
            passed_tests++;
        }
    }
    
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (passed_tests == total_tests ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << passed_tests << " of " << total_tests << std::endl;
    
    // Clean up
    delete[] sequence;
    m_trace->close();
    delete m_trace;
    delete dut;
    
    return (passed_tests == total_tests) ? 0 : 1;
} 