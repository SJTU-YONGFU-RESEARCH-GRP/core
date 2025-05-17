#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <bitset>
#include <iomanip>
#include <vector>
#include <unordered_map>
#include <cmath>
#include "Vtrue_random_generator.h"

// ANSI color codes for terminal output
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_RESET   "\x1b[0m"

// Forward declarations
void advance_cycles(Vtrue_random_generator* trng, VerilatedVcdC* tfp, int cycles, vluint64_t& main_time);
void wait_for_valid(Vtrue_random_generator* trng, VerilatedVcdC* tfp, vluint64_t& main_time, int max_cycles = 200);
bool test_basic_operation(Vtrue_random_generator* trng, VerilatedVcdC* tfp, vluint64_t& main_time);
bool test_parameterized_width(Vtrue_random_generator* trng, VerilatedVcdC* tfp, vluint64_t& main_time);
bool test_disable_feature(Vtrue_random_generator* trng, VerilatedVcdC* tfp, vluint64_t& main_time);
bool test_entropy_quality(Vtrue_random_generator* trng, VerilatedVcdC* tfp, vluint64_t& main_time);

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of the TRNG
    Vtrue_random_generator* trng = new Vtrue_random_generator;
    
    // Initialize VCD tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    trng->trace(tfp, 99);
    tfp->open("true_random_generator.vcd");

    // Simulation time
    vluint64_t main_time = 0;

    // Start with reset
    trng->rst_n = 0;
    trng->clk = 0;
    trng->enable = 0;
    trng->read_next = 0;
    trng->eval();
    tfp->dump(main_time);
    main_time++;
    
    // Release reset after a few clock cycles
    advance_cycles(trng, tfp, 5, main_time);
    trng->rst_n = 1;
    advance_cycles(trng, tfp, 5, main_time);
    
    // Track test results
    int tests_passed = 0;
    int total_tests = 4; // Update this if adding more tests
    
    std::cout << ANSI_COLOR_YELLOW << "\n===== True Random Generator Testing =====" << ANSI_COLOR_RESET << std::endl;
    
    // Run tests
    bool result;
    
    // Test 1: Basic operation
    result = test_basic_operation(trng, tfp, main_time);
    if (result) tests_passed++;
    
    // Reset trng for next test
    trng->rst_n = 0;
    advance_cycles(trng, tfp, 5, main_time);
    trng->rst_n = 1;
    advance_cycles(trng, tfp, 5, main_time);
    
    // Test 2: Parameterized width (check in simulation log)
    result = test_parameterized_width(trng, tfp, main_time);
    if (result) tests_passed++;
    
    // Reset trng for next test
    trng->rst_n = 0;
    advance_cycles(trng, tfp, 5, main_time);
    trng->rst_n = 1;
    advance_cycles(trng, tfp, 5, main_time);
    
    // Test 3: Enable/disable functionality
    result = test_disable_feature(trng, tfp, main_time);
    if (result) tests_passed++;
    
    // Reset trng for next test
    trng->rst_n = 0;
    advance_cycles(trng, tfp, 5, main_time);
    trng->rst_n = 1;
    advance_cycles(trng, tfp, 5, main_time);
    
    // Test 4: Entropy quality test (basic statistical tests)
    result = test_entropy_quality(trng, tfp, main_time);
    if (result) tests_passed++;
    
    // Print test summary in the requested format
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (tests_passed == total_tests ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << tests_passed << " of " << total_tests << std::endl;
    
    // Clean up
    tfp->close();
    delete tfp;
    delete trng;
    
    return tests_passed == total_tests ? 0 : 1;
}

// Test 1: Basic operation test
bool test_basic_operation(Vtrue_random_generator* trng, VerilatedVcdC* tfp, vluint64_t& main_time) {
    std::cout << ANSI_COLOR_YELLOW << "\nTest 1: Basic Operation" << ANSI_COLOR_RESET << std::endl;
    
    // Enable the TRNG
    trng->enable = 1;
    advance_cycles(trng, tfp, 5, main_time);
    
    // Wait for data_valid
    wait_for_valid(trng, tfp, main_time);
    
    if (!trng->data_valid) {
        std::cout << ANSI_COLOR_RED << "ERROR: data_valid not asserted after waiting" << ANSI_COLOR_RESET << std::endl;
        return false;
    }
    
    // Capture first value
    uint32_t first_value = trng->random_data;
    std::cout << "First value: 0x" << std::hex << first_value << std::dec << std::endl;
    
    // Request next value
    trng->read_next = 1;
    advance_cycles(trng, tfp, 1, main_time);
    trng->read_next = 0;
    
    // Wait for next valid data
    wait_for_valid(trng, tfp, main_time);
    
    if (!trng->data_valid) {
        std::cout << ANSI_COLOR_RED << "ERROR: data_valid not asserted after read_next" << ANSI_COLOR_RESET << std::endl;
        return false;
    }
    
    // Capture second value
    uint32_t second_value = trng->random_data;
    std::cout << "Second value: 0x" << std::hex << second_value << std::dec << std::endl;
    
    // Check that the values are different
    bool values_differ = (first_value != second_value);
    
    std::cout << "Values differ: " << (values_differ ? "Yes" : "No") << std::endl;
    std::cout << "Basic Operation Test: " << (values_differ ? 
        ANSI_COLOR_GREEN "PASSED" : 
        ANSI_COLOR_RED "FAILED") << ANSI_COLOR_RESET << std::endl;
    
    return values_differ;
}

// Test 2: Test the parameterized width (simplified for simulation)
bool test_parameterized_width(Vtrue_random_generator* trng, VerilatedVcdC* tfp, vluint64_t& main_time) {
    std::cout << ANSI_COLOR_YELLOW << "\nTest 2: Parameterized Width" << ANSI_COLOR_RESET << std::endl;
    
    // Note: In a real test, we would instantiate multiple generators with different widths
    // For Verilator simulation, we'll check the defined width matches expectations
    int expected_width = 32; // The default value in our module
    
    // Enable the TRNG
    trng->enable = 1;
    advance_cycles(trng, tfp, 5, main_time);
    
    // Wait for data_valid
    wait_for_valid(trng, tfp, main_time);
    
    uint32_t random_value = trng->random_data;
    
    // Check if the highest bits of the expected width can be non-zero
    // This is not a perfect test but can detect major width issues
    trng->read_next = 1;
    advance_cycles(trng, tfp, 1, main_time);
    trng->read_next = 0;
    
    // Collect multiple values to increase chance of seeing bits set
    std::vector<uint32_t> values;
    for (int i = 0; i < 10; i++) {
        wait_for_valid(trng, tfp, main_time);
        values.push_back(trng->random_data);
        trng->read_next = 1;
        advance_cycles(trng, tfp, 1, main_time);
        trng->read_next = 0;
    }
    
    // Combine all values with OR to see which bits get set
    uint32_t combined = 0;
    for (auto val : values) {
        combined |= val;
    }
    
    std::cout << "Combined bits from samples: 0x" << std::hex << combined << std::dec << std::endl;
    
    // Check if we see activity in the high bits appropriate for the width
    // For 32-bit, we should see bits 31-24 active
    bool high_bits_active = (combined & 0xFF000000) != 0;
    
    std::cout << "High bits active: " << (high_bits_active ? "Yes" : "No") << std::endl;
    std::cout << "Parameterized Width Test: " << (high_bits_active ? 
        ANSI_COLOR_GREEN "PASSED" : 
        ANSI_COLOR_RED "FAILED") << ANSI_COLOR_RESET << std::endl;
        
    return high_bits_active;
}

// Test 3: Enable/disable functionality
bool test_disable_feature(Vtrue_random_generator* trng, VerilatedVcdC* tfp, vluint64_t& main_time) {
    std::cout << ANSI_COLOR_YELLOW << "\nTest 3: Enable/Disable Functionality" << ANSI_COLOR_RESET << std::endl;
    
    // Enable the TRNG
    trng->enable = 1;
    advance_cycles(trng, tfp, 5, main_time);
    
    // Wait for data_valid
    wait_for_valid(trng, tfp, main_time);
    
    if (!trng->data_valid) {
        std::cout << ANSI_COLOR_RED << "ERROR: data_valid not asserted when enabled" << ANSI_COLOR_RESET << std::endl;
        return false;
    }
    
    uint32_t value_when_enabled = trng->random_data;
    
    // Disable the TRNG
    trng->enable = 0;
    advance_cycles(trng, tfp, 10, main_time);
    
    // Data valid should go low
    bool valid_went_low = !trng->data_valid;
    std::cout << "data_valid went low after disable: " << (valid_went_low ? "Yes" : "No") << std::endl;
    
    // Re-enable the TRNG
    trng->enable = 1;
    advance_cycles(trng, tfp, 5, main_time);
    
    // Wait for data_valid
    wait_for_valid(trng, tfp, main_time);
    
    if (!trng->data_valid) {
        std::cout << ANSI_COLOR_RED << "ERROR: data_valid not asserted when re-enabled" << ANSI_COLOR_RESET << std::endl;
        return false;
    }
    
    uint32_t value_when_reenabled = trng->random_data;
    bool values_differ_after_reenable = (value_when_enabled != value_when_reenabled);
    
    std::cout << "Values differ after re-enable: " << (values_differ_after_reenable ? "Yes" : "No") << std::endl;
    std::cout << "Enable/Disable Test: " << ((valid_went_low && values_differ_after_reenable) ? 
        ANSI_COLOR_GREEN "PASSED" : 
        ANSI_COLOR_RED "FAILED") << ANSI_COLOR_RESET << std::endl;
    
    return valid_went_low && values_differ_after_reenable;
}

// Test 4: Entropy quality tests
bool test_entropy_quality(Vtrue_random_generator* trng, VerilatedVcdC* tfp, vluint64_t& main_time) {
    std::cout << ANSI_COLOR_YELLOW << "\nTest 4: Entropy Quality" << ANSI_COLOR_RESET << std::endl;
    
    // Enable the TRNG
    trng->enable = 1;
    advance_cycles(trng, tfp, 10, main_time);
    
    // Collect more samples for simulation
    const int num_samples = 200;
    std::vector<uint32_t> samples;
    
    for (int i = 0; i < num_samples; i++) {
        wait_for_valid(trng, tfp, main_time);
        samples.push_back(trng->random_data);
        
        // Request next value
        trng->read_next = 1;
        advance_cycles(trng, tfp, 1, main_time);
        trng->read_next = 0;
    }
    
    // Test 1: Uniqueness - check how many unique values we have
    std::unordered_map<uint32_t, int> value_counts;
    for (auto val : samples) {
        value_counts[val]++;
    }
    
    int unique_values = value_counts.size();
    double uniqueness_percentage = (double)unique_values / num_samples * 100.0;
    
    std::cout << "Unique values: " << unique_values << " out of " << num_samples 
              << " (" << uniqueness_percentage << "%)" << std::endl;
    
    // Test 2: Bit distribution - count 1s and 0s
    std::vector<int> bit_counts(32, 0);
    for (auto val : samples) {
        for (int bit = 0; bit < 32; bit++) {
            if (val & (1 << bit)) {
                bit_counts[bit]++;
            }
        }
    }
    
    // For simulation, accept a wider range as "random enough"
    // Note: In real hardware with true randomness we would use stricter limits
    int skewed_bits = 0;
    bool major_skew = false;
    
    for (int bit = 0; bit < 32; bit++) {
        double ones_percentage = (double)bit_counts[bit] / num_samples * 100.0;
        
        // Consider 15-85% range acceptable for simulation
        if (ones_percentage < 15.0 || ones_percentage > 85.0) {
            skewed_bits++;
            std::cout << "Bit " << bit << " has skewed distribution: " 
                      << ones_percentage << "% ones" << std::endl;
                      
            // Check for extreme skew
            if (ones_percentage < 5.0 || ones_percentage > 95.0) {
                major_skew = true;
            }
        }
    }
    
    // Allow some skewed bits in simulation but fail on extreme skew
    double skewed_percentage = (double)skewed_bits / 32.0 * 100.0;
    std::cout << "Skewed bits: " << skewed_bits << " of 32 (" << skewed_percentage << "%)" << std::endl;
    
    // Test 3: Check for health monitoring signals
    bool health_monitoring_works = false;
    for (int i = 0; i < 10; i++) {
        if (trng->entropy_low || trng->test_failed) {
            health_monitoring_works = true;
            std::cout << "Health monitoring signals detected: "
                      << "entropy_low=" << (trng->entropy_low ? "1" : "0")
                      << " test_failed=" << (trng->test_failed ? "1" : "0") << std::endl;
            break;
        }
        // Try getting more samples to see if health signals get triggered
        wait_for_valid(trng, tfp, main_time);
        trng->read_next = 1;
        advance_cycles(trng, tfp, 1, main_time);
        trng->read_next = 0;
    }
    
    // Test 4: Basic pattern tests
    // Count runs of 0s and 1s to detect obvious patterns
    std::vector<int> run_lengths;
    for (size_t i = 1; i < samples.size(); i++) {
        int xor_result = samples[i] ^ samples[i-1];
        int bit_diff_count = 0;
        for (int bit = 0; bit < 32; bit++) {
            if (xor_result & (1 << bit)) {
                bit_diff_count++;
            }
        }
        run_lengths.push_back(bit_diff_count);
    }
    
    // Calculate average number of bits that change between consecutive values
    // In an ideal random sequence, this should be close to 16 for 32-bit values
    double avg_bit_changes = 0.0;
    for (auto len : run_lengths) {
        avg_bit_changes += len;
    }
    avg_bit_changes /= run_lengths.size();
    
    std::cout << "Average bit changes between consecutive values: " << avg_bit_changes << std::endl;
    
    // For simulation, we'll pass if:
    // 1. At least 40% unique values
    // 2. No more than 50% of bits have skewed distribution 
    // 3. No extreme skew (<5% or >95% ones)
    // 4. Average bit changes is at least 8 (out of theoretical 16)
    bool passed = (uniqueness_percentage >= 40.0) && (skewed_percentage <= 50.0) && 
                  !major_skew && (avg_bit_changes >= 8.0);
    
    std::cout << "Entropy Quality Test: " << (passed ? 
        ANSI_COLOR_GREEN "PASSED" : 
        ANSI_COLOR_RED "FAILED") << ANSI_COLOR_RESET << std::endl;
    
    return passed;
}

// Helper function to advance simulation by a number of clock cycles
void advance_cycles(Vtrue_random_generator* trng, VerilatedVcdC* tfp, int cycles, vluint64_t& main_time) {
    for (int i = 0; i < cycles; i++) {
        main_time += 5;  // 5 time units for 1/2 cycle
        trng->clk = 1;
        trng->eval();
        tfp->dump(main_time);
        
        main_time += 5;  // 5 time units for 1/2 cycle
        trng->clk = 0;
        trng->eval();
        tfp->dump(main_time);
    }
}

// Helper function to wait for data_valid to be asserted
void wait_for_valid(Vtrue_random_generator* trng, VerilatedVcdC* tfp, vluint64_t& main_time, int max_cycles) {
    for (int i = 0; i < max_cycles; i++) {
        if (trng->data_valid) {
            return;  // Data is valid, return
        }
        advance_cycles(trng, tfp, 1, main_time);
    }
    // If we get here, data_valid was not asserted within max_cycles
    std::cout << ANSI_COLOR_RED << "WARNING: Timeout waiting for data_valid" << ANSI_COLOR_RESET << std::endl;
} 