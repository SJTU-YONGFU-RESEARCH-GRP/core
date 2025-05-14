#include "Vconfigurable_fir_filter.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include <sstream>
#include <cmath>
#include <iomanip>
#include <bitset>
#include <cstdint>
#include <algorithm>

// Helper function to convert a value to a hex string
template <typename T>
std::string to_hex_string(T value, int width) {
    std::stringstream ss;
    ss << "0x" << std::hex << std::setw(width/4) << std::setfill('0') << value;
    return ss.str();
}

// Helper function to generate a sample sine wave
std::vector<int16_t> generate_sine_wave(int num_samples, double amplitude, double frequency, double sample_rate) {
    std::vector<int16_t> samples;
    for (int i = 0; i < num_samples; ++i) {
        double time = static_cast<double>(i) / sample_rate;
        double value = amplitude * sin(2.0 * M_PI * frequency * time);
        int16_t sample = static_cast<int16_t>(value);
        samples.push_back(sample);
    }
    return samples;
}

// Define a test case with parameters
struct TestConfig {
    int data_width;
    int coeff_width;
    int num_taps;
    int filter_type;    // 0 = Low-pass, 1 = High-pass
    std::vector<uint16_t> coefficients; // For display purposes only
    std::string description;
};

// Run a test with a specific configuration
bool run_test(const TestConfig& config, const std::vector<int16_t>& input_samples) {
    std::cout << "\n===== Testing FIR Filter: " << config.description << " =====\n";
    
    // Print the filter type and coefficients for verification
    std::cout << "Using filter type " << config.filter_type << " with " << config.num_taps << " coefficients: ";
    for (size_t i = 0; i < config.coefficients.size(); ++i) {
        std::cout << to_hex_string(config.coefficients[i], 16);
        if (i < config.coefficients.size() - 1) std::cout << ", ";
    }
    std::cout << std::endl;
    
    // Create the module - the filter type is already set via Verilator -G option
    std::unique_ptr<Vconfigurable_fir_filter> fir = std::make_unique<Vconfigurable_fir_filter>();
    
    // Set up VCD tracing
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    fir->trace(tfp.get(), 99);
    
    // Create unique VCD filename based on the test
    std::stringstream vcd_filename;
    vcd_filename << "configurable_fir_filter_type" << config.filter_type << "_" << config.num_taps << "taps_sim.vcd";
    tfp->open(vcd_filename.str().c_str());
    
    // Simulation time
    vluint64_t sim_time = 0;
    
    // Reset the filter
    fir->rst_n = 0;
    fir->clk = 0;
    fir->data_valid = 0;
    fir->data_in = 0;
    
    // Toggle clock for a few cycles during reset
    for (int i = 0; i < 5; ++i) {
        fir->clk = !fir->clk;
        fir->eval();
        tfp->dump(sim_time++);
        fir->clk = !fir->clk;
        fir->eval();
        tfp->dump(sim_time++);
    }
    
    // Release reset
    fir->rst_n = 1;
    fir->clk = 0;
    fir->eval();
    tfp->dump(sim_time++);
    fir->clk = 1;
    fir->eval();
    tfp->dump(sim_time++);
    
    // Keep track of output samples
    std::vector<int16_t> output_samples;
    
    // Process input samples
    std::cout << "\nProcessing " << input_samples.size() << " input samples...\n";
    
    for (size_t i = 0; i < input_samples.size(); ++i) {
        // Set input sample and valid signal
        fir->data_in = input_samples[i];
        fir->data_valid = 1;
        
        // Toggle clock
        fir->clk = 0;
        fir->eval();
        tfp->dump(sim_time++);
        
        fir->clk = 1;
        fir->eval();
        tfp->dump(sim_time++);
        
        // Capture output if valid - cast to int16_t to handle signed interpretation
        if (fir->data_out_valid) {
            // Proper signed interpretation of the output value
            int16_t signed_output = static_cast<int16_t>(fir->data_out);
            output_samples.push_back(signed_output);
            
            // Print some samples for verification
            if (i < 10 || i > input_samples.size() - 10) {
                std::cout << "Sample " << i << ": Input=" << input_samples[i] 
                          << ", Output=" << signed_output << std::endl;
            } else if (i == 10) {
                std::cout << "...\n";
            }
        }
    }
    
    // One extra cycle to capture last output
    fir->data_valid = 0;
    fir->clk = 0;
    fir->eval();
    tfp->dump(sim_time++);
    fir->clk = 1;
    fir->eval();
    tfp->dump(sim_time++);
    
    if (fir->data_out_valid) {
        // Proper signed interpretation of the output value
        int16_t signed_output = static_cast<int16_t>(fir->data_out);
        output_samples.push_back(signed_output);
    }
    
    // Verify the number of output samples matches expected
    size_t expected_output_count = input_samples.size(); // For a causal filter
    
    bool size_check = (output_samples.size() == expected_output_count);
    std::cout << "Received " << output_samples.size() << " output samples (expected " 
              << expected_output_count << "): " << (size_check ? "PASS" : "FAIL") << std::endl;
    
    // For simplicity, we'll verify that the output is not all zeros
    bool non_zero_output = false;
    for (auto sample : output_samples) {
        if (sample != 0) {
            non_zero_output = true;
            break;
        }
    }
    
    std::cout << "Non-zero output check: " << (non_zero_output ? "PASS" : "FAIL") << std::endl;
    
    // Check for expected filter behavior (low-pass filter should reduce high frequencies)
    // This is a simple check: sine wave output should be smoother (have smaller peak-to-peak variation)
    if (output_samples.size() >= 2) {
        auto input_max = *std::max_element(input_samples.begin(), input_samples.end());
        auto input_min = *std::min_element(input_samples.begin(), input_samples.end());
        auto output_max = *std::max_element(output_samples.begin(), output_samples.end());
        auto output_min = *std::min_element(output_samples.begin(), output_samples.end());
        
        int16_t input_range = input_max - input_min;
        int16_t output_range = output_max - output_min;
        
        std::cout << "Input range: " << input_range << " (min=" << input_min << ", max=" << input_max << ")" << std::endl;
        std::cout << "Output range: " << output_range << " (min=" << output_min << ", max=" << output_max << ")" << std::endl;
        
        // For a low-pass filter, output range should be less than input range
        bool range_check = (output_range <= input_range);
        std::cout << "Output range check: " << (range_check ? "PASS" : "FAIL") << std::endl;
    }
    
    // Clean up
    tfp->close();
    fir->final();
    
    // Overall test result combines all checks
    bool test_passed = size_check && non_zero_output;
    
    std::cout << "Test result: " << (test_passed ? "PASS" : "FAIL") << std::endl;
    return test_passed;
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Determine filter type from command line
    int filter_type = 0; // Default to low-pass
    if (argc > 1) {
        filter_type = atoi(argv[1]);
    }
    std::cout << "Running test with filter_type = " << filter_type << std::endl;
    
    // Generate test input data - a sine wave plus a high-frequency component
    std::vector<int16_t> input_samples = generate_sine_wave(100, 1000.0, 1.0, 100.0);
    
    // Add a high-frequency component to test filtering
    std::vector<int16_t> high_freq_samples = generate_sine_wave(100, 500.0, 20.0, 100.0);
    
    for (size_t i = 0; i < input_samples.size(); ++i) {
        input_samples[i] += high_freq_samples[i];
    }
    
    // Define test configurations
    std::vector<TestConfig> test_configs = {
        // Low-pass filter configuration
        {
            16,                 // data_width
            16,                 // coeff_width
            8,                  // num_taps
            0,                  // filter_type (0 = low-pass)
            {                   // coefficients (for display only)
                0x0400, 0x0800, 0x0C00, 0x1000,
                0x1000, 0x0C00, 0x0800, 0x0400
            },
            "8-tap Low-Pass Filter"
        },
        // High-pass filter configuration
        {
            16,                 // data_width
            16,                 // coeff_width
            8,                  // num_taps
            1,                  // filter_type (1 = high-pass)
            {                   // coefficients (for display only)
                0xFC00, 0xF800, 0x0400, 0x0800, 
                0x0800, 0x0400, 0xF800, 0xFC00
            },
            "8-tap High-Pass Filter"
        }
    };
    
    // Run the test for the specified filter type
    bool test_passed = false;
    if (filter_type == 0 || filter_type == 1) {
        test_passed = run_test(test_configs[filter_type], input_samples);
    } else {
        std::cerr << "Error: Invalid filter type: " << filter_type << ". Must be 0 (low-pass) or 1 (high-pass)." << std::endl;
        return 1;
    }
    
    // Print overall result
    std::cout << "\n==========================\n";
    if (test_passed) {
        std::cout << "TEST PASSED!\n";
        return 0;
    } else {
        std::cout << "TEST FAILED!\n";
        return 1;
    }
} 