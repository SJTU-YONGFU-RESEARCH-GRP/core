#include "Vsequence_detector_fsm.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <bitset>
#include <vector>
#include <deque>

void clock_tick(std::unique_ptr<Vsequence_detector_fsm>& detector, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    detector->clk = 0;
    detector->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    detector->clk = 1;
    detector->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
}

void test_sequence_detector(std::unique_ptr<Vsequence_detector_fsm>& detector, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    // Get the parameters from the design
    const int PATTERN_WIDTH = 4;
    const uint32_t DEFAULT_PATTERN = 0b1011;
    
    std::cout << "Testing Sequence Detector FSM with PATTERN_WIDTH = " << PATTERN_WIDTH << std::endl;
    std::cout << "Default pattern: 0x" << std::hex << DEFAULT_PATTERN 
              << " (Binary: " << std::bitset<4>(DEFAULT_PATTERN) << ")" << std::endl;
    
    // Reset the module
    detector->rst_n = 0;
    detector->enable = 0;
    detector->serial_in = 0;
    detector->load_pattern = 0;
    detector->config_pattern = 0;
    clock_tick(detector, tfp, sim_time);
    
    // Release reset
    detector->rst_n = 1;
    clock_tick(detector, tfp, sim_time);
    
    // Test with default pattern
    std::cout << "\nTest 1: Default pattern detection (1011)" << std::endl;
    
    // Input stream with pattern embedded: 0010111010
    std::vector<bool> input_stream = {0, 0, 1, 0, 1, 1, 1, 0, 1, 0};
    std::deque<bool> last_bits;
    
    std::cout << "Input stream: ";
    for (bool bit : input_stream) {
        std::cout << bit;
    }
    std::cout << std::endl;
    
    std::cout << "Cycle\tInput\tLast " << PATTERN_WIDTH << " bits\tDetected\tExpected" << std::endl;
    
    bool all_passed = true;
    
    for (size_t i = 0; i < input_stream.size(); i++) {
        // Enable detector and set input bit
        detector->enable = 1;
        detector->serial_in = input_stream[i];
        
        // Track last PATTERN_WIDTH bits for expected output calculation
        last_bits.push_back(input_stream[i]);
        if (last_bits.size() > PATTERN_WIDTH) {
            last_bits.pop_front();
        }
        
        // Calculate expected output
        bool expected_detection = false;
        if (last_bits.size() == PATTERN_WIDTH) {
            uint32_t last_pattern = 0;
            for (size_t j = 0; j < last_bits.size(); j++) {
                last_pattern = (last_pattern << 1) | last_bits[j];
            }
            expected_detection = (last_pattern == DEFAULT_PATTERN);
        }
        
        // Clock the design
        clock_tick(detector, tfp, sim_time);
        
        // Check the output
        bool actual_detection = detector->pattern_detected;
        
        // Print bit pattern
        std::string bit_pattern;
        for (bool bit : last_bits) {
            bit_pattern += bit ? '1' : '0';
        }
        while (bit_pattern.length() < PATTERN_WIDTH) {
            bit_pattern = '0' + bit_pattern;
        }
        
        std::cout << i << "\t" << input_stream[i] << "\t" << bit_pattern << "\t\t" 
                  << actual_detection << "\t\t" << expected_detection << "\t";
        
        if (actual_detection == expected_detection) {
            std::cout << "PASS" << std::endl;
        } else {
            std::cout << "FAIL" << std::endl;
            all_passed = false;
        }
    }
    
    // Test with a custom pattern
    std::cout << "\nTest 2: Custom pattern detection (0101)" << std::endl;
    uint32_t custom_pattern = 0b0101;
    
    // Reset state
    last_bits.clear();
    
    // Load custom pattern
    detector->load_pattern = 1;
    detector->config_pattern = custom_pattern;
    clock_tick(detector, tfp, sim_time);
    detector->load_pattern = 0;
    
    std::cout << "Custom pattern: 0x" << std::hex << custom_pattern 
              << " (Binary: " << std::bitset<4>(custom_pattern) << ")" << std::endl;
    
    // Input stream with custom pattern embedded: 1001010010
    std::vector<bool> custom_input_stream = {1, 0, 0, 1, 0, 1, 0, 0, 1, 0};
    
    std::cout << "Input stream: ";
    for (bool bit : custom_input_stream) {
        std::cout << bit;
    }
    std::cout << std::endl;
    
    std::cout << "Cycle\tInput\tLast " << PATTERN_WIDTH << " bits\tDetected\tExpected" << std::endl;
    
    for (size_t i = 0; i < custom_input_stream.size(); i++) {
        // Enable detector and set input bit
        detector->enable = 1;
        detector->serial_in = custom_input_stream[i];
        
        // Track last PATTERN_WIDTH bits for expected output calculation
        last_bits.push_back(custom_input_stream[i]);
        if (last_bits.size() > PATTERN_WIDTH) {
            last_bits.pop_front();
        }
        
        // Calculate expected output
        bool expected_detection = false;
        if (last_bits.size() == PATTERN_WIDTH) {
            uint32_t last_pattern = 0;
            for (size_t j = 0; j < last_bits.size(); j++) {
                last_pattern = (last_pattern << 1) | last_bits[j];
            }
            expected_detection = (last_pattern == custom_pattern);
        }
        
        // Clock the design
        clock_tick(detector, tfp, sim_time);
        
        // Check the output
        bool actual_detection = detector->pattern_detected;
        
        // Print bit pattern
        std::string bit_pattern;
        for (bool bit : last_bits) {
            bit_pattern += bit ? '1' : '0';
        }
        while (bit_pattern.length() < PATTERN_WIDTH) {
            bit_pattern = '0' + bit_pattern;
        }
        
        std::cout << i << "\t" << custom_input_stream[i] << "\t" << bit_pattern << "\t\t" 
                  << actual_detection << "\t\t" << expected_detection << "\t";
        
        if (actual_detection == expected_detection) {
            std::cout << "PASS" << std::endl;
        } else {
            std::cout << "FAIL" << std::endl;
            all_passed = false;
        }
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
    std::unique_ptr<Vsequence_detector_fsm> detector = std::make_unique<Vsequence_detector_fsm>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    detector->trace(tfp.get(), 99);  // Trace 99 levels of hierarchy
    tfp->open("sequence_detector_fsm_sim.vcd");
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Run tests
    test_sequence_detector(detector, tfp.get(), sim_time);
    
    // Cleanup
    tfp->close();
    detector->final();
    
    return 0;
} 