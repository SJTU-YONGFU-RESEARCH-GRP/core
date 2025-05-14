#include "Vconfigurable_fp_adder.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <vector>
#include <cmath>
#include <bitset>
#include <cassert>
#include <sstream>
#include <iomanip>
#include <limits>
#include <cfloat>

// Structure to hold test data
struct TestCase {
    uint64_t a;
    uint64_t b;
    uint64_t expected_result;
    std::string description;
};

// Print IEEE 754 float in binary and decimal
void print_fp(uint64_t val, int exp_width, int mant_width) {
    int total_width = 1 + exp_width + mant_width; // sign + exp + mant
    
    // Extract components
    bool sign = (val >> (exp_width + mant_width)) & 1;
    uint64_t exp = (val >> mant_width) & ((1ULL << exp_width) - 1);
    uint64_t mant = val & ((1ULL << mant_width) - 1);
    
    // Format binary representation
    std::cout << (sign ? "1 " : "0 ");
    
    for (int i = exp_width - 1; i >= 0; i--) {
        std::cout << ((exp >> i) & 1);
    }
    std::cout << " ";
    
    for (int i = mant_width - 1; i >= 0; i--) {
        std::cout << ((mant >> i) & 1);
    }
    
    // Calculate approximate float value
    double value = 0.0;
    
    // Special cases
    if (exp == 0) {
        if (mant == 0) {
            value = sign ? -0.0 : 0.0;
        } else {
            // Denormalized number
            value = std::ldexp((double)mant / (1ULL << mant_width), 1 - ((1 << (exp_width - 1)) - 1));
            if (sign) value = -value;
        }
    } else if (exp == ((1ULL << exp_width) - 1)) {
        if (mant == 0) {
            value = sign ? -INFINITY : INFINITY;
        } else {
            value = std::numeric_limits<double>::quiet_NaN();
        }
    } else {
        // Normalized number
        int exponent = exp - ((1 << (exp_width - 1)) - 1);
        double mantissa = 1.0 + (double)mant / (1ULL << mant_width);
        value = std::ldexp(mantissa, exponent);
        if (sign) value = -value;
    }
    
    // Print approximate decimal value
    if (std::isnan(value)) {
        std::cout << " (NaN)";
    } else if (std::isinf(value)) {
        std::cout << " (" << (sign ? "-" : "+") << "Inf)";
    } else {
        std::cout << " (~" << std::scientific << std::setprecision(6) << value << ")";
    }
}

// Convert binary FP to double (for verification)
double binary_to_double(uint64_t val, int exp_width, int mant_width) {
    bool sign = (val >> (exp_width + mant_width)) & 1;
    uint64_t exp = (val >> mant_width) & ((1ULL << exp_width) - 1);
    uint64_t mant = val & ((1ULL << mant_width) - 1);
    
    // Special cases
    if (exp == 0) {
        if (mant == 0) {
            return sign ? -0.0 : 0.0;
        } else {
            // Denormalized number
            double result = std::ldexp((double)mant / (1ULL << mant_width), 1 - ((1 << (exp_width - 1)) - 1));
            return sign ? -result : result;
        }
    } else if (exp == ((1ULL << exp_width) - 1)) {
        if (mant == 0) {
            return sign ? -INFINITY : INFINITY;
        } else {
            return std::numeric_limits<double>::quiet_NaN();
        }
    }
    
    // Normalized number
    int exponent = exp - ((1 << (exp_width - 1)) - 1);
    double mantissa = 1.0 + (double)mant / (1ULL << mant_width);
    double result = std::ldexp(mantissa, exponent);
    return sign ? -result : result;
}

// Convert double to binary FP representation
uint64_t double_to_binary(double val, int exp_width, int mant_width) {
    // Maximum exponent bias
    int exp_bias = (1 << (exp_width - 1)) - 1;
    uint64_t sign = 0, exp = 0, mant = 0;
    
    // Handle special cases
    if (std::isnan(val)) {
        sign = 0;
        exp = (1ULL << exp_width) - 1;
        mant = 1; // Any non-zero value for NaN
    } else if (std::isinf(val)) {
        sign = (val < 0) ? 1 : 0;
        exp = (1ULL << exp_width) - 1;
        mant = 0;
    } else if (val == 0.0) {
        sign = (std::signbit(val)) ? 1 : 0;
        exp = 0;
        mant = 0;
    } else {
        // Handle normal non-zero values
        sign = (val < 0) ? 1 : 0;
        val = std::fabs(val);
        
        // Get exponent and normalized mantissa
        int binary_exp;
        double normalized_val = std::frexp(val, &binary_exp);
        
        // Convert to the format with exponent bias
        if (binary_exp <= -exp_bias) {
            // Handle denormalized numbers
            exp = 0;
            normalized_val = std::ldexp(normalized_val, binary_exp + exp_bias - 1);
            mant = (uint64_t)(normalized_val * (1ULL << mant_width)) & ((1ULL << mant_width) - 1);
        } else {
            // Normalized numbers
            exp = binary_exp + exp_bias - 1;
            if (exp >= (1ULL << exp_width) - 1) {
                // Overflow to infinity
                exp = (1ULL << exp_width) - 1;
                mant = 0;
            } else {
                // Regular normalized number
                // Adjust mantissa (remove implicit leading 1)
                normalized_val = normalized_val * 2.0 - 1.0;
                mant = (uint64_t)(normalized_val * (1ULL << mant_width)) & ((1ULL << mant_width) - 1);
            }
        }
    }
    
    return (sign << (exp_width + mant_width)) | (exp << mant_width) | mant;
}

// Run tests for a specific configuration
bool run_tests_for_config(int exp_width, int mant_width) {
    int total_width = 1 + exp_width + mant_width;
    
    std::cout << "\n===== Testing FP Adder with EXP_WIDTH = " << exp_width 
              << ", MANT_WIDTH = " << mant_width << " =====\n";
    
    // Create parameter strings
    std::stringstream param_exp_width_ss;
    param_exp_width_ss << "+PARAMETER+configurable_fp_adder.EXP_WIDTH+" << exp_width;
    std::string param_exp_width_str = param_exp_width_ss.str();
    
    std::stringstream param_mant_width_ss;
    param_mant_width_ss << "+PARAMETER+configurable_fp_adder.MANT_WIDTH+" << mant_width;
    std::string param_mant_width_str = param_mant_width_ss.str();
    
    // Print parameters being passed
    std::cout << "Setting parameters: " << param_exp_width_str << ", " << param_mant_width_str << std::endl;
    
    const char* args[] = {"testbench", param_exp_width_str.c_str(), param_mant_width_str.c_str(), nullptr};
    Verilated::commandArgs(3, const_cast<char**>(args));
    
    // Create and initialize model
    std::unique_ptr<Vconfigurable_fp_adder> fp_adder = std::make_unique<Vconfigurable_fp_adder>();
    
    // Initialize VCD tracing
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    fp_adder->trace(tfp.get(), 99);
    
    // Create a unique VCD filename for this config
    std::stringstream vcd_filename;
    vcd_filename << "configurable_fp_adder_" << exp_width << "e" << mant_width << "m_sim.vcd";
    tfp->open(vcd_filename.str().c_str());
    
    // Simulation time
    vluint64_t sim_time = 0;
    
    // Generate test cases
    std::vector<TestCase> test_cases;
    
    // Special masks
    uint64_t sign_mask = 1ULL << (exp_width + mant_width);
    uint64_t exp_mask = ((1ULL << exp_width) - 1) << mant_width;
    uint64_t mant_mask = (1ULL << mant_width) - 1;
    uint64_t exp_all_ones = exp_mask;
    uint64_t total_mask = (1ULL << total_width) - 1;
    
    // Helper to create a floating point value
    auto create_fp = [&](bool sign, uint64_t exp, uint64_t mant) -> uint64_t {
        return ((sign ? 1ULL : 0ULL) << (exp_width + mant_width)) |
               ((exp & ((1ULL << exp_width) - 1)) << mant_width) |
               (mant & ((1ULL << mant_width) - 1));
    };
    
    // Special values
    uint64_t pos_zero = 0;
    uint64_t neg_zero = sign_mask;
    uint64_t pos_inf = exp_all_ones;
    uint64_t neg_inf = sign_mask | exp_all_ones;
    uint64_t nan = exp_all_ones | (1ULL << (mant_width-1));
    
    // Basic test cases
    
    // 1. Adding zeros
    test_cases.push_back({pos_zero, pos_zero, pos_zero, "Zero + Zero = Zero"});
    test_cases.push_back({pos_zero, neg_zero, pos_zero, "Zero + -Zero = Zero"});
    test_cases.push_back({neg_zero, neg_zero, neg_zero, "-Zero + -Zero = -Zero"});
    
    // 2. Adding with infinities
    test_cases.push_back({pos_inf, create_fp(false, 1, 0), pos_inf, "Infinity + Value = Infinity"});
    test_cases.push_back({neg_inf, create_fp(false, 1, 0), neg_inf, "-Infinity + Value = -Infinity"});
    
    // 3. NaN propagation
    test_cases.push_back({nan, create_fp(false, 1, 0), nan, "NaN + Value = NaN"});
    test_cases.push_back({pos_inf, neg_inf, nan, "Infinity + -Infinity = NaN"});
    
    // 4. Simple additions with same exponent
    uint64_t a1 = create_fp(false, exp_width > 1 ? 2 : 1, 0); // 2.0
    uint64_t a2 = create_fp(false, exp_width > 1 ? 2 : 1, 1ULL << (mant_width-1)); // 3.0
    uint64_t a_sum = create_fp(false, exp_width > 1 ? 3 : 1, 0); // 5.0
    test_cases.push_back({a1, a2, a_sum, "2.0 + 3.0 = 5.0"});
    
    // 5. Additions with different exponents
    uint64_t b1 = create_fp(false, exp_width > 2 ? 3 : 1, 0); // 4.0
    uint64_t b2 = create_fp(false, exp_width > 1 ? 1 : 1, 0); // 1.0
    uint64_t b_sum = create_fp(false, exp_width > 2 ? 3 : 1, mant_width > 1 ? 1 : 0); // 5.0
    test_cases.push_back({b1, b2, b_sum, "4.0 + 1.0 = 5.0"});
    
    // 6. Subtractions (different signs)
    uint64_t c1 = create_fp(false, exp_width > 1 ? 2 : 1, 0); // 2.0
    uint64_t c2 = create_fp(true, exp_width > 1 ? 2 : 1, 0);  // -2.0
    uint64_t c_diff = pos_zero; // 0.0
    test_cases.push_back({c1, c2, c_diff, "2.0 + (-2.0) = 0.0"});
    
    // 7. Denormalized results
    if (exp_width > 1) {
        uint64_t tiny1 = create_fp(false, 1, 0); // Smallest normalized positive
        uint64_t tiny2 = create_fp(true, 1, mant_width > 1 ? 1 << (mant_width-2) : 0); // Slightly smaller negative
        uint64_t tiny_sum; // Should be a small positive value
        
        if (mant_width > 2) {
            tiny_sum = create_fp(false, 0, 1 << (mant_width-1)); // Denormalized result
        } else {
            tiny_sum = create_fp(false, 1, 0); // Small normalized value
        }
        test_cases.push_back({tiny1, tiny2, tiny_sum, "Tiny + (-Smaller) = Denormalized"});
    }
    
    // 8. Edge case: rounding
    if (mant_width >= 3) {
        // Create values that will need rounding
        uint64_t round1 = create_fp(false, exp_width > 1 ? 2 : 1, 0); // 2.0
        uint64_t round2 = create_fp(false, exp_width > 1 ? (exp_width > 2 ? 0 : 1) : 1, 
                                   mant_width > 4 ? 1 << (mant_width-4) : 1); // Very small value
        uint64_t round_sum = round1; // Result should be just over 2.0
        test_cases.push_back({round1, round2, round_sum, "2.0 + Small = Rounded"});
    }
    
    // 9. Random values
    // For reproducibility using fixed values
    double random_vals[] = {1.5, 0.125, -2.25, 7.0, -0.5, 42.0, -10.75};
    
    for (size_t i = 0; i < 3 && i < sizeof(random_vals)/sizeof(random_vals[0]); i++) {
        for (size_t j = i+1; j < sizeof(random_vals)/sizeof(random_vals[0]); j++) {
            double a_val = random_vals[i];
            double b_val = random_vals[j];
            double sum_val = a_val + b_val;
            
            uint64_t a_bin = double_to_binary(a_val, exp_width, mant_width);
            uint64_t b_bin = double_to_binary(b_val, exp_width, mant_width);
            uint64_t sum_bin = double_to_binary(sum_val, exp_width, mant_width);
            
            std::stringstream ss;
            ss << a_val << " + " << b_val << " = " << sum_val;
            test_cases.push_back({a_bin, b_bin, sum_bin, ss.str()});
        }
    }
    
    // Test one simple addition case with debugging
    {
        std::cout << "\n=== DEBUGGING A SIMPLE ADDITION CASE ===" << std::endl;
        uint64_t a_val = create_fp(false, exp_width > 1 ? 2 : 1, 0); // 2.0
        uint64_t b_val = create_fp(false, exp_width > 1 ? 2 : 1, 1ULL << (mant_width-1)); // 3.0
        uint64_t expected = create_fp(false, exp_width > 1 ? 3 : 1, 0); // 5.0
        
        // Print binary representation of operands
        std::cout << "Input A (binary): " << std::bitset<32>(a_val) << std::endl;
        std::cout << "Input B (binary): " << std::bitset<32>(b_val) << std::endl;
        std::cout << "Expected (binary): " << std::bitset<32>(expected) << std::endl;
        
        // Apply inputs
        fp_adder->a = a_val & total_mask;
        fp_adder->b = b_val & total_mask;
        
        // Evaluate model
        fp_adder->eval();
        
        // Check results
        uint64_t actual_result = fp_adder->result & total_mask;
        
        std::cout << "Actual result (binary): " << std::bitset<32>(actual_result) << std::endl;
        std::cout << "Actual result: ";
        print_fp(actual_result, exp_width, mant_width);
        std::cout << std::endl;
        
        double a_double = binary_to_double(a_val, exp_width, mant_width);
        double b_double = binary_to_double(b_val, exp_width, mant_width);
        double expected_double = a_double + b_double;
        std::cout << "A as double: " << a_double << std::endl;
        std::cout << "B as double: " << b_double << std::endl;
        std::cout << "Expected sum as double: " << expected_double << std::endl;
        std::cout << "Expected result from double: " << std::bitset<32>(double_to_binary(expected_double, exp_width, mant_width)) << std::endl;
    }
    
    // Debug special case operations
    {
        std::cout << "\n=== DEBUGGING INFINITY CASE ===" << std::endl;
        uint64_t a_inf = create_fp(false, (1ULL << exp_width) - 1, 0); // +Infinity
        uint64_t b_val = create_fp(false, exp_width > 1 ? 2 : 1, 0); // Some value
        
        // Print binary representation
        std::cout << "Input A (Inf, binary): " << std::bitset<32>(a_inf) << std::endl;
        std::cout << "Input B (value, binary): " << std::bitset<32>(b_val) << std::endl;
        
        // Apply inputs
        fp_adder->a = a_inf & total_mask;
        fp_adder->b = b_val & total_mask;
        
        // Evaluate model
        fp_adder->eval();
        
        // Check results
        uint64_t actual_result = fp_adder->result & total_mask;
        
        std::cout << "Actual result (binary): " << std::bitset<32>(actual_result) << std::endl;
        std::cout << "Actual result: ";
        print_fp(actual_result, exp_width, mant_width);
        std::cout << std::endl;
    }
    
    // Run tests
    bool all_tests_passed = true;
    
    for (size_t t = 0; t < test_cases.size(); t++) {
        const auto& test = test_cases[t];
        
        // Apply inputs
        fp_adder->a = test.a & total_mask;
        fp_adder->b = test.b & total_mask;
        
        // Print test case
        std::cout << "Test " << (t + 1) << " (" << test.description << "): " << std::endl;
        std::cout << "  a = ";
        print_fp(fp_adder->a, exp_width, mant_width);
        std::cout << std::endl;
        
        std::cout << "  b = ";
        print_fp(fp_adder->b, exp_width, mant_width);
        std::cout << std::endl;
        
        // Evaluate model
        fp_adder->eval();
        if (tfp) tfp->dump(sim_time++);
        
        // Check results
        uint64_t actual_result = fp_adder->result & total_mask;
        uint64_t expected_result = test.expected_result & total_mask;
        
        // Special handling for NaN - any NaN representation is acceptable
        bool is_expected_nan = (expected_result & exp_mask) == exp_mask && 
                              (expected_result & mant_mask) != 0;
        bool is_actual_nan = (actual_result & exp_mask) == exp_mask && 
                            (actual_result & mant_mask) != 0;
        
        bool result_ok = (actual_result == expected_result) || 
                         (is_expected_nan && is_actual_nan);
        
        // Print result
        std::cout << "  Expected: ";
        print_fp(expected_result, exp_width, mant_width);
        std::cout << std::endl;
        
        std::cout << "  Actual:   ";
        print_fp(actual_result, exp_width, mant_width);
        std::cout << std::endl;
        
        if (result_ok) {
            std::cout << "  ✓ PASS" << std::endl;
        } else {
            std::cout << "  ✗ FAIL" << std::endl;
            all_tests_passed = false;
        }
        
        std::cout << std::endl;
    }
    
    // Finish simulation
    if (tfp) tfp->close();
    
    return all_tests_passed;
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Run tests for different configurations
    bool all_passed = true;
    
    // Test with different parameters
    
    // Mini (4-bit exponent, 3-bit mantissa)
    bool mini_passed = run_tests_for_config(4, 3);
    std::cout << "Mini FP format tests: " << (mini_passed ? "PASSED" : "FAILED") << std::endl;
    all_passed &= mini_passed;
    
    // Half precision (5-bit exponent, 10-bit mantissa)
    bool half_passed = run_tests_for_config(5, 10);
    std::cout << "Half precision tests: " << (half_passed ? "PASSED" : "FAILED") << std::endl;
    all_passed &= half_passed;
    
    // Single precision (8-bit exponent, 23-bit mantissa)
    bool single_passed = run_tests_for_config(8, 23);
    std::cout << "Single precision tests: " << (single_passed ? "PASSED" : "FAILED") << std::endl;
    all_passed &= single_passed;
    
    // Final result
    std::cout << "\nOverall Result: " << (all_passed ? "ALL TESTS PASSED" : "SOME TESTS FAILED") << std::endl;
    
    return all_passed ? 0 : 1;
} 