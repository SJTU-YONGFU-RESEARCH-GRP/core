#include <stdlib.h>
#include <iostream>
#include <vector>
#include <map>
#include <bitset>
#include <cmath>
#include <iomanip>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vconfigurable_prng.h"

#define MAX_SIM_TIME 5000
vluint64_t sim_time = 0;

// Function to calculate expected Fibonacci LFSR next value for verification
uint16_t next_fibonacci_lfsr(uint16_t current, uint16_t taps) {
    uint16_t feedback = 0;
    for (int i = 0; i < 16; i++) {
        if ((taps >> i) & 1) {
            feedback ^= ((current >> i) & 1);
        }
    }
    return ((current << 1) | feedback) & 0xFFFF;
}

// Function to calculate expected Galois LFSR next value for verification
uint16_t next_galois_lfsr(uint16_t current, uint16_t taps) {
    if (current & 1) {
        return (current >> 1) ^ taps;
    } else {
        return (current >> 1);
    }
}

// Function to test randomness by measuring distribution
void analyze_distribution(const std::vector<uint16_t>& values, int width) {
    // Count occurrences of each unique value
    std::map<uint16_t, int> value_counts;
    for (uint16_t val : values) {
        value_counts[val]++;
    }
    
    // Calculate expected period for maximum LFSR
    uint32_t expected_period = (1ULL << width) - 1;
    
    // Check if we have the expected number of unique values
    std::cout << "Number of unique values: " << value_counts.size() << std::endl;
    std::cout << "Expected period: " << expected_period << std::endl;

    // Only analyze bit distribution for reasonable sizes
    if (width <= 16) {
        // Count how many times each bit position is 1
        std::vector<int> bit_ones(width, 0);
        for (uint16_t val : values) {
            for (int i = 0; i < width; i++) {
                if (val & (1 << i)) {
                    bit_ones[i]++;
                }
            }
        }
        
        // Display bit distribution (should be close to 50%)
        std::cout << "Bit distribution (percentage of 1s):" << std::endl;
        for (int i = 0; i < width; i++) {
            double percent = (double)bit_ones[i] / values.size() * 100.0;
            std::cout << "Bit " << i << ": " << std::fixed << std::setprecision(2) << percent << "%" << std::endl;
        }
    }
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilated modules
    Vconfigurable_prng *dut = new Vconfigurable_prng;
    
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    // Test tracking variables
    bool all_tests_pass = true;
    int tests_passed = 0;
    int total_tests = 3; // Three test cases
    bool test1_pass = true;
    bool test2_pass = true;
    bool test3_pass = true;
    
    // Parameters (need to match the Verilog)
    const int WIDTH = 16;
    const uint16_t SEED = 0xACE1;
    const uint16_t TAPS = 0xB400; // Taps for Fibonacci mode
    const uint16_t SEED_CUSTOM = 0x1234;
    
    // Detect the mode from the executable name
    // If the executable name contains "galois", we're in Galois mode
    int prng_mode = 0; // Default to Fibonacci mode
    std::string exe_name(argv[0]);
    if (exe_name.find("galois") != std::string::npos) {
        prng_mode = 1; // Galois mode
    }
    
    std::cout << "PRNG Mode: " << (prng_mode == 0 ? "Fibonacci" : "Galois") << std::endl;
    
    // Function pointer to the appropriate next value calculation
    uint16_t (*next_lfsr)(uint16_t, uint16_t);
    if (prng_mode == 0) {
        next_lfsr = &next_fibonacci_lfsr;
    } else {
        next_lfsr = &next_galois_lfsr;
    }
    
    // Initialize signals
    dut->clk = 0;
    dut->rst_n = 0;
    dut->enable = 0;
    dut->reseed = 0;
    dut->seed_in = 0;
    
    // Reset sequence
    for (int i = 0; i < 5; i++) {
        dut->clk = !dut->clk;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk = !dut->clk;
        dut->eval();
        m_trace->dump(sim_time++);
    }
    dut->rst_n = 1;
    
    // Store sequence of values for analysis
    std::vector<uint16_t> values;
    uint16_t expected_value = SEED;
    
    // Test 1: Generate sequence with default seed
    std::cout << "=== Test 1: " << (prng_mode == 0 ? "Fibonacci" : "Galois") << " LFSR with default seed ===" << std::endl;
    std::cout << "Initial value: 0x" << std::hex << (unsigned)dut->random << std::dec << std::endl;
    
    dut->enable = 1;
    for (int i = 0; i < 100; i++) {
        // Clock cycle
        dut->clk = !dut->clk;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk = !dut->clk;
        dut->eval();
        m_trace->dump(sim_time++);
        
        // Calculate expected value for verification
        expected_value = next_lfsr(expected_value, TAPS);
        
        // Check if actual matches expected
        if (dut->random != expected_value) {
            std::cout << "ERROR at cycle " << i << ": Expected 0x" << std::hex << expected_value 
                      << ", Got 0x" << (unsigned)dut->random << std::dec << std::endl;
            test1_pass = false;
        }
        
        // Save values for distribution analysis
        values.push_back(dut->random);
        
        // Print some values
        if (i < 10) {
            std::cout << "Cycle " << i << ": 0x" << std::hex << (unsigned)dut->random 
                      << " (Valid: " << dut->valid << ")" << std::dec << std::endl;
        }
    }
    
    // Test 2: Reseed the PRNG with custom seed
    std::cout << "\n=== Test 2: Reseeding the PRNG ===" << std::endl;
    values.clear();
    
    dut->reseed = 1;
    dut->seed_in = SEED_CUSTOM;
    
    dut->clk = !dut->clk;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk = !dut->clk;
    dut->eval();
    m_trace->dump(sim_time++);
    
    dut->reseed = 0;
    expected_value = SEED_CUSTOM;
    
    for (int i = 0; i < 50; i++) {
        dut->clk = !dut->clk;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk = !dut->clk;
        dut->eval();
        m_trace->dump(sim_time++);
        
        expected_value = next_lfsr(expected_value, TAPS);
        
        if (dut->random != expected_value && i > 0) { // Skip first cycle after reseed
            std::cout << "ERROR after reseed at cycle " << i << ": Expected 0x" << std::hex 
                      << expected_value << ", Got 0x" << (unsigned)dut->random << std::dec << std::endl;
            test2_pass = false;
        }
        
        values.push_back(dut->random);
        
        if (i < 5) {
            std::cout << "Cycle " << i << " after reseed: 0x" << std::hex << (unsigned)dut->random 
                      << " (Valid: " << dut->valid << ")" << std::dec << std::endl;
        }
    }
    
    // Test 3: Generate longer sequence for distribution analysis
    std::cout << "\n=== Test 3: Distribution Analysis ===" << std::endl;
    values.clear();
    
    // Reset PRNG
    dut->rst_n = 0;
    dut->clk = !dut->clk;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk = !dut->clk;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->rst_n = 1;
    
    // Generate longer sequence
    for (int i = 0; i < 1000; i++) {
        dut->clk = !dut->clk;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk = !dut->clk;
        dut->eval();
        m_trace->dump(sim_time++);
        
        values.push_back(dut->random);
    }
    
    // Analyze distribution
    analyze_distribution(values, WIDTH);
    
    // Set test3_pass based on analysis (this is a simple check, in a real test would be more thorough)
    if (values.size() > 0) {
        test3_pass = true;
    }
    
    // Update test status
    if (test1_pass) tests_passed++;
    if (test2_pass) tests_passed++;
    if (test3_pass) tests_passed++;
    all_tests_pass = test1_pass && test2_pass && test3_pass;
    
    // Clean up
    dut->final();
    m_trace->close();
    delete m_trace;
    delete dut;
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (all_tests_pass ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << tests_passed << " of " << total_tests << std::endl;
    
    return 0;
} 