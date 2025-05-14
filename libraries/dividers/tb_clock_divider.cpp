#include "Vclock_divider.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <vector>
#include <iomanip>

// Test case structure
struct TestCase {
    uint16_t div_ratio;
    uint8_t duty_cycle;
    int cycles_to_run;
};

// Function to test the clock divider with different configurations
void test_clock_divider(std::unique_ptr<Vclock_divider>& dut, VerilatedVcdC* tfp, vluint64_t& sim_time, const TestCase& test) {
    int high_count = 0;
    int total_count = 0;
    
    // Reset the module
    dut->rst_n = 0;
    dut->clk_in = 0;
    dut->div_ratio = test.div_ratio;
    dut->duty_cycle = test.duty_cycle;
    
    dut->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    dut->clk_in = 1;
    dut->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    // Release reset
    dut->rst_n = 1;
    
    // Run for specified number of cycles
    for (int i = 0; i < test.cycles_to_run; i++) {
        // Toggle clock
        dut->clk_in = 0;
        dut->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        dut->clk_in = 1;
        dut->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        // Count high cycles of output clock
        if (dut->clk_out) {
            high_count++;
        }
        total_count++;
    }
    
    // Calculate actual duty cycle
    double actual_duty = (high_count * 100.0) / total_count;
    double expected_duty = (test.duty_cycle * 100.0) / 255.0;
    
    // Print results
    std::cout << "Test with div_ratio=" << test.div_ratio 
              << ", duty_cycle=" << static_cast<int>(test.duty_cycle) 
              << " (" << std::fixed << std::setprecision(2) << expected_duty << "%)" << std::endl;
    
    std::cout << "  Measured duty cycle: " << std::fixed << std::setprecision(2) 
              << actual_duty << "% (" << high_count << "/" << total_count << " cycles)" << std::endl;
    
    // Check if output toggles as expected
    if (high_count == 0) {
        std::cout << "  ERROR: Output clock never went high!" << std::endl;
    } else if (high_count == total_count) {
        std::cout << "  ERROR: Output clock never went low!" << std::endl;
    } else {
        std::cout << "  Output clock toggles correctly." << std::endl;
    }
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    std::unique_ptr<Vclock_divider> dut = std::make_unique<Vclock_divider>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    dut->trace(tfp.get(), 99);  // Trace 99 levels of hierarchy
    tfp->open("clock_divider_sim.vcd");
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Define test cases
    std::vector<TestCase> test_cases = {
        {4, 128, 100},   // Div by 4, 50% duty cycle
        {10, 128, 200},  // Div by 10, 50% duty cycle
        {8, 64, 200},    // Div by 8, 25% duty cycle
        {8, 192, 200},   // Div by 8, 75% duty cycle
        {16, 128, 400}   // Div by 16, 50% duty cycle
    };
    
    // Run tests
    for (const auto& test : test_cases) {
        test_clock_divider(dut, tfp.get(), sim_time, test);
    }
    
    // Cleanup
    tfp->close();
    dut->final();
    
    std::cout << "Simulation completed successfully!" << std::endl;
    return 0;
} 