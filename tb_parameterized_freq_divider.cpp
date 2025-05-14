#include "Vparameterized_freq_divider.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <vector>
#include <cmath>
#include <iomanip>

// Structure to store test case data
struct TestCase {
    uint32_t divide_value;
    uint8_t duty_cycle;
    double expected_freq_ratio;
    double expected_duty_cycle;
};

// Helper function to measure frequency and duty cycle
void measure_output(const std::vector<bool>& waveform, double& freq_ratio, double& measured_duty) {
    size_t high_count = 0;
    size_t transition_count = 0;
    
    // Count high samples and transitions
    for (size_t i = 0; i < waveform.size(); i++) {
        if (waveform[i]) {
            high_count++;
        }
        if (i > 0 && waveform[i] != waveform[i-1]) {
            transition_count++;
        }
    }
    
    // Calculate duty cycle
    measured_duty = (double)high_count / waveform.size() * 100.0;
    
    // Calculate frequency (transitions per cycle)
    // If there are no transitions (all high or all low), the frequency is 0
    if (transition_count == 0) {
        freq_ratio = 0.0;
    } else {
        freq_ratio = (double)transition_count / (2 * waveform.size());
    }
}

// Run simulation for a test case
bool run_test_case(std::unique_ptr<Vparameterized_freq_divider>& divider, VerilatedVcdC* tfp, 
                  vluint64_t& sim_time, const TestCase& test) {
    const int CYCLES_TO_SIMULATE = 1000;
    std::vector<bool> waveform;
    
    // Initialize signals
    divider->rst_n = 0;
    divider->enable = 0;
    divider->divide_value = test.divide_value;
    divider->duty_cycle = test.duty_cycle;
    
    // Reset pulse
    divider->clk_in = 0;
    divider->eval();
    if (tfp) tfp->dump(sim_time++);
    
    divider->clk_in = 1;
    divider->eval();
    if (tfp) tfp->dump(sim_time++);
    
    divider->rst_n = 1;
    divider->enable = 1;
    
    // Run simulation for enough cycles to get stable measurements
    for (int i = 0; i < CYCLES_TO_SIMULATE; i++) {
        // Toggle clock
        divider->clk_in = 0;
        divider->eval();
        if (tfp) tfp->dump(sim_time++);
        
        divider->clk_in = 1;
        divider->eval();
        if (tfp) tfp->dump(sim_time++);
        
        // Store output after initial settling period
        if (i >= 10) {
            waveform.push_back(divider->clk_out);
        }
    }
    
    // Measure frequency and duty cycle
    double measured_freq_ratio, measured_duty_cycle;
    measure_output(waveform, measured_freq_ratio, measured_duty_cycle);
    
    // Calculate expected frequency ratio = 1/divide_value
    double expected_freq_ratio = test.expected_freq_ratio;
    
    // Special case for extreme duty cycles where frequency measurement may not be applicable
    bool freq_pass;
    bool duty_pass;
    
    if (test.duty_cycle == 0) {
        // For 0% duty cycle, we expect constant low output (no frequency)
        freq_pass = true;  // Skip frequency check for 0% duty cycle
        duty_pass = measured_duty_cycle <= 5.0;  // Allow some tolerance
    } else if (test.duty_cycle >= 100) {
        // For 100% duty cycle, we expect constant high output (no frequency)
        freq_pass = true;  // Skip frequency check for 100% duty cycle
        duty_pass = measured_duty_cycle >= 95.0;  // Allow some tolerance
    } else {
        // Normal operation - check both frequency and duty cycle
        const double FREQ_TOLERANCE = 0.1;
        const double DUTY_TOLERANCE = 5.0;
        
        freq_pass = std::abs(measured_freq_ratio - expected_freq_ratio) <= FREQ_TOLERANCE;
        duty_pass = std::abs(measured_duty_cycle - test.expected_duty_cycle) <= DUTY_TOLERANCE;
    }
    
    // Print results
    std::cout << "Divide Value: " << test.divide_value 
              << ", Duty Cycle: " << (int)test.duty_cycle << "%" << std::endl;
              
    std::cout << "  Frequency Ratio: " << std::fixed << std::setprecision(4) 
              << measured_freq_ratio << " (Expected: " << expected_freq_ratio << ") - "
              << (freq_pass ? "PASS" : "FAIL") << std::endl;
              
    std::cout << "  Duty Cycle: " << std::fixed << std::setprecision(2) 
              << measured_duty_cycle << "% (Expected: " << test.expected_duty_cycle << "%) - "
              << (duty_pass ? "PASS" : "FAIL") << std::endl;
    
    return freq_pass && duty_pass;
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    std::unique_ptr<Vparameterized_freq_divider> divider = std::make_unique<Vparameterized_freq_divider>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    divider->trace(tfp.get(), 99);  // Trace 99 levels of hierarchy
    tfp->open("parameterized_freq_divider_sim.vcd");
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Define test cases
    std::vector<TestCase> test_cases = {
        {2, 50, 0.5, 50.0},    // Divide by 2, 50% duty cycle
        {4, 25, 0.25, 25.0},   // Divide by 4, 25% duty cycle
        {5, 60, 0.2, 60.0},    // Divide by 5, 60% duty cycle
        {10, 10, 0.1, 10.0},   // Divide by 10, 10% duty cycle
        {8, 75, 0.125, 75.0},  // Divide by 8, 75% duty cycle
        {3, 33, 0.333, 33.0},  // Divide by 3, 33% duty cycle
        {16, 50, 0.0625, 50.0} // Divide by 16, 50% duty cycle
    };
    
    // Run test cases
    bool all_tests_passed = true;
    for (const auto& test : test_cases) {
        bool result = run_test_case(divider, tfp.get(), sim_time, test);
        all_tests_passed &= result;
        std::cout << std::endl;
    }
    
    // Special cases test
    std::cout << "Testing special cases:" << std::endl;
    
    // 1. Invalid divide value (less than 2)
    TestCase invalid_div = {1, 50, 0.5, 50.0};  // Should use default divide_value=2
    bool invalid_div_result = run_test_case(divider, tfp.get(), sim_time, invalid_div);
    all_tests_passed &= invalid_div_result;
    std::cout << " ^ Using default divide value of 2" << std::endl << std::endl;
    
    // 2. 0% duty cycle
    TestCase zero_duty = {4, 0, 0.0, 0.0};  // No frequency expected for 0% duty cycle
    bool zero_duty_result = run_test_case(divider, tfp.get(), sim_time, zero_duty);
    all_tests_passed &= zero_duty_result;
    std::cout << std::endl;
    
    // 3. 100% duty cycle
    TestCase full_duty = {4, 100, 0.0, 100.0};  // No frequency expected for 100% duty cycle
    bool full_duty_result = run_test_case(divider, tfp.get(), sim_time, full_duty);
    all_tests_passed &= full_duty_result;
    std::cout << std::endl;
    
    // Cleanup
    tfp->close();
    divider->final();
    
    // Print overall result
    if (all_tests_passed) {
        std::cout << "ALL TESTS PASSED!" << std::endl;
    } else {
        std::cout << "SOME TESTS FAILED!" << std::endl;
    }
    
    return all_tests_passed ? 0 : 1;
} 