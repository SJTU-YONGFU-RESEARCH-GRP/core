#include "Vsequence_detector_fsm.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <bitset>
#include <vector>
#include <deque>

#define MAX_SIM_TIME 300
vluint64_t sim_time = 0;

// Define parameters to match the Verilog module
#define PATTERN_WIDTH 4
#define PATTERN 0b1011  // Default pattern to detect

// Helper function to display bits as a string
std::string bitToStr(uint32_t value, int width) {
    std::string result = "";
    for (int i = width - 1; i >= 0; i--) {
        result += ((value >> i) & 1) ? '1' : '0';
    }
    return result;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Vsequence_detector_fsm* dut = new Vsequence_detector_fsm;
    
    // Initialize VCD trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("sequence_detector_fsm_waveform.vcd");
    
    std::cout << "Sequence Detector FSM Test" << std::endl;
    std::cout << "Pattern Width: " << PATTERN_WIDTH << std::endl;
    std::cout << "Default Pattern: " << bitToStr(PATTERN, PATTERN_WIDTH) << std::endl;
    
    // Initialize signals
    dut->clk = 0;
    dut->rst_n = 0;     // Start with reset active
    dut->enable = 0;    // Disabled
    dut->serial_in = 0;
    dut->config_pattern = PATTERN;
    dut->load_pattern = 0;
    
    // Test variables
    bool test_passed = true;
    int tests_passed = 0;
    int total_tests = 0;
    
    // Test vectors - patterns to send
    struct TestCase {
        std::string name;
        uint32_t pattern;
        std::vector<bool> input_sequence;
        std::vector<bool> expected_output;
    };
    
    std::vector<TestCase> test_cases;
    
    // Test case 1: Default pattern (1011) with exact match
    {
        TestCase tc;
        tc.name = "Basic Pattern Detection";
        tc.pattern = PATTERN;  // Default pattern: 1011
        tc.input_sequence = {
            0, 1, 0, 1, 1,  // Does not contain pattern
            1, 0, 1, 1, 0,  // Contains pattern (1011)
            1, 0, 1, 1      // Contains pattern (1011)
        };
        // Expected output: pattern_detected should be high when the full pattern is detected
        tc.expected_output = {
            0, 0, 0, 0, 0,  // No detection yet
            0, 0, 0, 1, 0,  // Detection at position 8 (after shift in)
            0, 0, 0, 1      // Detection at position 13 (after shift in)
        };
        test_cases.push_back(tc);
    }
    
    // Test case 2: Overlapping patterns
    {
        TestCase tc;
        tc.name = "Overlapping Patterns";
        tc.pattern = 0b1101;  // New pattern to test: 1101
        tc.input_sequence = {
            1, 1, 0, 1, 1, 0, 1  // Contains 1101 at positions 0-3 and 3-6
        };
        // Expected output: pattern_detected should be high twice when the full pattern is detected
        tc.expected_output = {
            0, 0, 0, 1, 0, 0, 1  // Detection at positions 3 and 6
        };
        test_cases.push_back(tc);
    }
    
    // Test case 3: Pattern change during operation
    {
        TestCase tc;
        tc.name = "Pattern Change";
        tc.pattern = 0b0101;  // Changed pattern: 0101
        tc.input_sequence = {
            1, 0, 1, 1,  // Original pattern (no match with new pattern)
            0, 1, 0, 1   // New pattern (should match)
        };
        tc.expected_output = {
            0, 0, 0, 0,  // No detection (wrong pattern)
            0, 0, 0, 1   // Detection at position 7
        };
        test_cases.push_back(tc);
    }
    
    // Current test case state
    int current_test = -1;
    size_t bit_index = 0;
    bool loading_pattern = false;
    
    // Run simulation
    while (sim_time < MAX_SIM_TIME && current_test < (int)test_cases.size()) {
        // Toggle clock
        dut->clk = !dut->clk;
        
        // On positive clock edge
        if (dut->clk) {
            // Release reset after a few clock cycles
            if (sim_time == 8) {
                dut->rst_n = 1;
                dut->enable = 1;
                current_test = 0;
                bit_index = 0;
                
                std::cout << "\nStarting Test Case 1: " << test_cases[current_test].name << std::endl;
                std::cout << "Pattern: " << bitToStr(test_cases[current_test].pattern, PATTERN_WIDTH) << std::endl;
            }
            
            // Test case state machine
            if (sim_time > 8 && dut->rst_n) {
                // If this is a new test, load the pattern
                if (loading_pattern) {
                    dut->load_pattern = 0;
                    loading_pattern = false;
                }
                
                // If we've completed the current test case, move to the next one
                if (current_test >= 0 && bit_index >= test_cases[current_test].input_sequence.size()) {
                    current_test++;
                    bit_index = 0;
                    
                    if (current_test < (int)test_cases.size()) {
                        // Configure the new pattern
                        dut->config_pattern = test_cases[current_test].pattern;
                        dut->load_pattern = 1;
                        loading_pattern = true;
                        
                        std::cout << "\nStarting Test Case " << (current_test + 1) << ": " 
                                  << test_cases[current_test].name << std::endl;
                        std::cout << "Pattern: " << bitToStr(test_cases[current_test].pattern, PATTERN_WIDTH) << std::endl;
                    }
                } 
                // Process the next bit in the current test case
                else if (current_test >= 0 && current_test < (int)test_cases.size()) {
                    // Apply input bit
                    dut->serial_in = test_cases[current_test].input_sequence[bit_index];
                    
                    // For debugging - print the current bit
                    std::cout << "Input[" << bit_index << "]: " << dut->serial_in;
                    
                    // Check output against expected (on next clock cycle)
                    if (bit_index > 0) {
                        bool expected = test_cases[current_test].expected_output[bit_index - 1];
                        bool actual = dut->pattern_detected;
                        
                        std::cout << " - Expected output: " << expected 
                                  << ", Actual output: " << actual;
                        
                        if (expected == actual) {
                            std::cout << " - PASS" << std::endl;
                        } else {
                            std::cout << " - FAIL" << std::endl;
                            test_passed = false;
                        }
                        
                        total_tests++;
                        if (expected == actual) tests_passed++;
                    } else {
                        std::cout << std::endl;
                    }
                    
                    // Move to next bit
                    bit_index++;
                }
            }
        }
        
        // Evaluate model
        dut->eval();
        
        // Dump wave trace
        m_trace->dump(sim_time);
        
        sim_time++;
    }
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (test_passed ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << tests_passed << " of " << total_tests << std::endl;
    
    // Clean up
    m_trace->close();
    delete m_trace;
    delete dut;
    
    return 0;
} 