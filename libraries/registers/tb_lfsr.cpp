#include "Vlfsr.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <vector>
#include <bitset>
#include <cstdint>
#include <set>

// Function to simulate one clock cycle
void tick(std::unique_ptr<Vlfsr>& lfsr, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    // Clock low
    lfsr->clk = 0;
    lfsr->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    // Clock high
    lfsr->clk = 1;
    lfsr->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
}

// Function to calculate expected LFSR output for verification
uint8_t calculate_next_lfsr(uint8_t current, uint8_t taps) {
    uint8_t feedback = 0;
    for (int i = 0; i < 8; i++) {
        if (taps & (1 << i)) {
            feedback ^= ((current >> i) & 1);
        }
    }
    return (current >> 1) | (feedback << 7);
}

void check_lfsr_operation(std::unique_ptr<Vlfsr>& lfsr, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    // Reset the LFSR
    lfsr->rst_n = 0;
    lfsr->enable = 0;
    lfsr->load = 0;
    lfsr->seed = 0;
    tick(lfsr, tfp, sim_time);
    
    lfsr->rst_n = 1;
    
    // Test 1: Load a seed value and check sequence generation
    std::cout << "Test 1: Loading seed value and generating sequence" << std::endl;
    
    uint8_t seed_value = 0xAA;  // 10101010 in binary
    lfsr->load = 1;
    lfsr->seed = seed_value;
    tick(lfsr, tfp, sim_time);
    
    lfsr->load = 0;
    lfsr->enable = 1;
    
    // Verify that the seed was loaded correctly
    std::cout << "Loaded seed: 0x" << std::hex << static_cast<int>(lfsr->lfsr_out) 
              << " (Expected: 0x" << static_cast<int>(seed_value) << ")" << std::endl;
    
    if (lfsr->lfsr_out != seed_value) {
        std::cout << "ERROR: Seed value not loaded correctly!" << std::endl;
    }
    
    // Generate and check a sequence of values
    std::cout << "\nGenerating sequence:" << std::endl;
    std::cout << "Step\tExpected\tActual\t\tResult" << std::endl;
    
    uint8_t expected = seed_value;
    uint8_t taps = 0xB8;  // 10111000 in binary (default taps)
    
    // Track values to detect cycles
    std::set<uint8_t> seen_values;
    seen_values.insert(expected);
    
    for (int i = 0; i < 20; i++) {
        // Calculate next expected value
        expected = calculate_next_lfsr(expected, taps);
        
        // Clock the LFSR
        tick(lfsr, tfp, sim_time);
        
        // Get actual value
        uint8_t actual = lfsr->lfsr_out;
        
        // Verify the result
        bool match = (expected == actual);
        
        std::cout << i+1 << "\t0x" << std::hex << static_cast<int>(expected) 
                  << "\t\t0x" << static_cast<int>(actual) 
                  << "\t\t" << (match ? "PASS" : "FAIL") << std::endl;
        
        if (!match) {
            std::cout << "ERROR: LFSR output mismatch at step " << std::dec << (i+1) << std::endl;
        }
        
        // Check if we've seen this value before (cycle detection)
        if (seen_values.find(actual) != seen_values.end() && i > 0) {
            std::cout << "Cycle detected at step " << std::dec << (i+1) << std::endl;
            break;
        }
        seen_values.insert(actual);
    }
    
    // Test 2: Test bit_out output
    std::cout << "\nTest 2: Testing bit_out output" << std::endl;
    
    // Reset and load new seed
    lfsr->rst_n = 0;
    tick(lfsr, tfp, sim_time);
    
    lfsr->rst_n = 1;
    lfsr->load = 1;
    lfsr->seed = 0x55;  // 01010101 in binary
    tick(lfsr, tfp, sim_time);
    
    lfsr->load = 0;
    lfsr->enable = 1;
    
    std::cout << "Step\tLFSR Value\tbit_out\tExpected bit_out\tResult" << std::endl;
    
    expected = 0x55;
    for (int i = 0; i < 8; i++) {
        // Calculate next expected value
        expected = calculate_next_lfsr(expected, taps);
        
        // Clock the LFSR
        tick(lfsr, tfp, sim_time);
        
        // Get actual values
        uint8_t actual = lfsr->lfsr_out;
        bool actual_bit = lfsr->bit_out;
        bool expected_bit = actual & 0x01;  // LSB should be the bit_out
        
        // Verify the result
        bool match = (actual_bit == expected_bit);
        
        std::cout << i+1 << "\t0x" << std::hex << static_cast<int>(actual) 
                  << "\t\t" << actual_bit 
                  << "\t" << expected_bit 
                  << "\t\t\t" << (match ? "PASS" : "FAIL") << std::endl;
        
        if (!match) {
            std::cout << "ERROR: bit_out mismatch at step " << std::dec << (i+1) << std::endl;
        }
    }
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    std::unique_ptr<Vlfsr> lfsr = std::make_unique<Vlfsr>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    lfsr->trace(tfp.get(), 99);  // Trace 99 levels of hierarchy
    tfp->open("lfsr_sim.vcd");
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Run tests
    check_lfsr_operation(lfsr, tfp.get(), sim_time);
    
    // Cleanup
    tfp->close();
    lfsr->final();
    
    std::cout << "\nSimulation completed successfully!" << std::endl;
    return 0;
} 