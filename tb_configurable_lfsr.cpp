#include "Vconfigurable_lfsr.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <bitset>
#include <vector>
#include <set>

void clock_tick(std::unique_ptr<Vconfigurable_lfsr>& lfsr, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    lfsr->clk = 0;
    lfsr->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    lfsr->clk = 1;
    lfsr->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
}

// Function to calculate expected LFSR sequence
std::vector<uint32_t> calculate_lfsr_sequence(uint32_t seed, uint32_t tap_pattern, int width, int sequence_length) {
    std::vector<uint32_t> sequence;
    uint32_t lfsr = seed;
    uint32_t mask = (1 << width) - 1;  // Mask for the width
    
    for (int i = 0; i < sequence_length; i++) {
        sequence.push_back(lfsr);
        
        // Calculate feedback bit
        uint32_t feedback = 0;
        for (int j = 0; j < width; j++) {
            if ((tap_pattern >> j) & 1) {
                feedback ^= ((lfsr >> j) & 1);
            }
        }
        
        // Shift right, insert feedback at MSB
        lfsr = ((feedback << (width - 1)) | (lfsr >> 1)) & mask;
    }
    
    return sequence;
}

void test_configurable_lfsr(std::unique_ptr<Vconfigurable_lfsr>& lfsr, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    // Get the WIDTH parameter from the design
    const int WIDTH = 8;
    const int MAX_CYCLES = 32;  // Number of cycles to test
    
    // Test with a standard LFSR polynomial x^8 + x^6 + x^5 + x^4 + 1
    uint32_t seed = 0x01;  // Non-zero seed
    uint32_t tap_pattern = 0b00110001;  // Taps at positions 0, 4, 5, 6
    
    std::cout << "Testing Configurable LFSR with WIDTH = " << WIDTH << std::endl;
    std::cout << "Seed: 0x" << std::hex << seed << " (Binary: " << std::bitset<8>(seed) << ")" << std::endl;
    std::cout << "Tap Pattern: 0x" << std::hex << tap_pattern << " (Binary: " << std::bitset<8>(tap_pattern) << ")" << std::endl;
    
    // Reset the module
    lfsr->rst_n = 0;
    lfsr->enable = 0;
    lfsr->load_seed = 0;
    lfsr->seed = 0;
    lfsr->tap_pattern = 0;
    clock_tick(lfsr, tfp, sim_time);
    
    // Release reset
    lfsr->rst_n = 1;
    clock_tick(lfsr, tfp, sim_time);
    
    // Load the seed and tap pattern
    lfsr->load_seed = 1;
    lfsr->seed = seed;
    lfsr->tap_pattern = tap_pattern;
    clock_tick(lfsr, tfp, sim_time);
    lfsr->load_seed = 0;
    
    // Calculate expected sequence
    std::vector<uint32_t> expected_sequence = calculate_lfsr_sequence(seed, tap_pattern, WIDTH, MAX_CYCLES);
    
    // Check for sequence length before repetition
    std::set<uint32_t> seen_values;
    int expected_period = 0;
    for (size_t i = 0; i < expected_sequence.size(); i++) {
        if (seen_values.find(expected_sequence[i]) != seen_values.end()) {
            break;
        }
        seen_values.insert(expected_sequence[i]);
        expected_period++;
    }
    
    std::cout << "\nExpected LFSR period: " << std::dec << expected_period << " cycles" << std::endl;
    
    // Run the LFSR and check outputs
    bool all_passed = true;
    std::cout << "\nLFSR Sequence:" << std::endl;
    std::cout << "Cycle\tExpected (hex)\tActual (hex)\tResult" << std::endl;
    
    for (int i = 0; i < MAX_CYCLES; i++) {
        // Enable LFSR operation
        lfsr->enable = 1;
        
        // Check the output
        uint32_t expected = expected_sequence[i];
        uint32_t actual = lfsr->parallel_out;
        
        std::cout << std::dec << i << "\t0x" << std::hex << expected << "\t\t0x" << actual << "\t\t";
        if (expected == actual) {
            std::cout << "PASS" << std::endl;
        } else {
            std::cout << "FAIL" << std::endl;
            all_passed = false;
        }
        
        // Tick the clock to advance to next state
        clock_tick(lfsr, tfp, sim_time);
    }
    
    if (all_passed) {
        std::cout << "\nAll tests passed!" << std::endl;
    } else {
        std::cout << "\nSome tests failed!" << std::endl;
    }
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    std::unique_ptr<Vconfigurable_lfsr> lfsr = std::make_unique<Vconfigurable_lfsr>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    lfsr->trace(tfp.get(), 99);  // Trace 99 levels of hierarchy
    tfp->open("configurable_lfsr_sim.vcd");
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Run tests
    test_configurable_lfsr(lfsr, tfp.get(), sim_time);
    
    // Cleanup
    tfp->close();
    lfsr->final();
    
    return 0;
} 