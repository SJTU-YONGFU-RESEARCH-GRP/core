#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vparameterized_johnson_updown_counter.h"

#define MAX_SIM_TIME 200
vluint64_t sim_time = 0;

// Define the width parameter to match the Verilog module
#define WIDTH 4

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Vparameterized_johnson_updown_counter* dut = new Vparameterized_johnson_updown_counter;
    
    // Initialize VCD trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    std::cout << "Johnson Up/Down Counter Width: " << WIDTH << std::endl;
    
    // Initialize signals
    dut->clk = 0;
    dut->rst_n = 0;     // Start with reset active
    dut->enable = 1;    // Enable the counter
    dut->up_down = 1;   // Start counting up
    
    // Run simulation
    while (sim_time < MAX_SIM_TIME) {
        // Toggle clock
        dut->clk = !dut->clk;
        
        // Release reset after a few clock cycles
        if (sim_time == 4) {
            dut->rst_n = 1;
        }
        
        // Switch direction after some time
        if (sim_time == 60) {
            dut->up_down = 0; // Count down
            std::cout << "\nSwitching to count down mode\n" << std::endl;
        }
        
        // Switch back to up after some more time
        if (sim_time == 120) {
            dut->up_down = 1; // Count up again
            std::cout << "\nSwitching back to count up mode\n" << std::endl;
        }
        
        // Evaluate model
        dut->eval();
        
        // Dump wave trace
        m_trace->dump(sim_time);
        
        // Print counter value on positive clock edge
        if (dut->clk && sim_time > 4) {
            std::cout << "Time: " << sim_time << ", Count: ";
            for (int i = WIDTH-1; i >= 0; i--) {
                std::cout << ((dut->count >> i) & 1);
            }
            std::cout << " (" << (dut->up_down ? "Up" : "Down") << ")" << std::endl;
        }
        
        sim_time++;
    }
    
    // Verify Johnson counter with direction control
    std::cout << "\nVerifying Johnson Up/Down Counter..." << std::endl;
    
    // Reset for verification
    dut->clk = 0;
    dut->rst_n = 0;
    dut->enable = 1;
    dut->up_down = 1; // Start with up direction
    dut->eval();
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->rst_n = 1;
    dut->eval();
    
    // Store the up sequence
    uint32_t* up_sequence = new uint32_t[2*WIDTH];
    int seq_idx = 0;
    
    // Collect up sequence
    for (int i = 0; i < 2*WIDTH; i++) {
        dut->clk = 1;
        dut->eval();
        
        up_sequence[seq_idx++] = dut->count;
        
        dut->clk = 0;
        dut->eval();
    }
    
    // Print the up sequence
    std::cout << "Johnson counter UP sequence:" << std::endl;
    for (int i = 0; i < 2*WIDTH; i++) {
        std::cout << "  " << i << ": ";
        for (int j = WIDTH-1; j >= 0; j--) {
            std::cout << ((up_sequence[i] >> j) & 1);
        }
        std::cout << std::endl;
    }
    
    // Reset and switch to down direction
    dut->clk = 0;
    dut->rst_n = 0;
    dut->up_down = 0; // Down direction
    dut->eval();
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->rst_n = 1;
    dut->eval();
    
    // Store the down sequence
    uint32_t* down_sequence = new uint32_t[2*WIDTH];
    seq_idx = 0;
    
    // Collect down sequence
    for (int i = 0; i < 2*WIDTH; i++) {
        dut->clk = 1;
        dut->eval();
        
        down_sequence[seq_idx++] = dut->count;
        
        dut->clk = 0;
        dut->eval();
    }
    
    // Print the down sequence
    std::cout << "Johnson counter DOWN sequence:" << std::endl;
    for (int i = 0; i < 2*WIDTH; i++) {
        std::cout << "  " << i << ": ";
        for (int j = WIDTH-1; j >= 0; j--) {
            std::cout << ((down_sequence[i] >> j) & 1);
        }
        std::cout << std::endl;
    }
    
    // Verify the sequences
    bool valid_johnson = true;
    
    // Check each state has the Johnson counter pattern (one bit changes at a time)
    for (int i = 0; i < 2*WIDTH-1; i++) {
        uint32_t curr_up = up_sequence[i];
        uint32_t next_up = up_sequence[i+1];
        uint32_t curr_down = down_sequence[i];
        uint32_t next_down = down_sequence[i+1];
        
        // Count bit differences
        int bit_diff_up = 0;
        int bit_diff_down = 0;
        for (int j = 0; j < WIDTH; j++) {
            if (((curr_up >> j) & 1) != ((next_up >> j) & 1)) {
                bit_diff_up++;
            }
            if (((curr_down >> j) & 1) != ((next_down >> j) & 1)) {
                bit_diff_down++;
            }
        }
        
        if (bit_diff_up != 1) {
            std::cout << "ERROR: Invalid UP transition from state " << i << " to " << (i+1) 
                      << ". Johnson counter should have exactly 1 bit change." << std::endl;
            valid_johnson = false;
        }
        
        if (bit_diff_down != 1) {
            std::cout << "ERROR: Invalid DOWN transition from state " << i << " to " << (i+1) 
                      << ". Johnson counter should have exactly 1 bit change." << std::endl;
            valid_johnson = false;
        }
    }
    
    // Check if sequences repeat
    dut->up_down = 1; // Up direction
    dut->rst_n = 0;
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->rst_n = 1;
    dut->eval();
    
    for (int i = 0; i < 2*WIDTH; i++) {
        dut->clk = 1;
        dut->eval();
        dut->clk = 0;
        dut->eval();
    }
    
    dut->clk = 1;
    dut->eval();
    if (dut->count != up_sequence[0]) {
        std::cout << "ERROR: UP sequence does not repeat after " << 2*WIDTH << " cycles" << std::endl;
        valid_johnson = false;
    }
    
    dut->up_down = 0; // Down direction
    dut->rst_n = 0;
    dut->clk = 0;
    dut->eval();
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->rst_n = 1;
    dut->eval();
    
    for (int i = 0; i < 2*WIDTH; i++) {
        dut->clk = 1;
        dut->eval();
        dut->clk = 0;
        dut->eval();
    }
    
    dut->clk = 1;
    dut->eval();
    if (dut->count != down_sequence[0]) {
        std::cout << "ERROR: DOWN sequence does not repeat after " << 2*WIDTH << " cycles" << std::endl;
        valid_johnson = false;
    }
    
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (valid_johnson ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << (valid_johnson ? "1" : "0") << " of 1" << std::endl;
    
    return 0;
}
    
    // Clean up
