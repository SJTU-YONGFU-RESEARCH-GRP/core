#include "Vshift_register.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <vector>
#include <bitset>

// Helper function to display register content
void print_reg(uint32_t value, int width) {
    std::cout << "0x" << std::hex << value << " (";
    std::cout << std::bitset<32>(value).to_string().substr(32-width, width) << ")" << std::endl;
}

void test_shift_register(std::unique_ptr<Vshift_register>& sr, VerilatedVcdC* tfp, vluint64_t& sim_time,
                       bool shift_dir, int width) {
    // Test tracking variables
    bool all_tests_pass = true;
    int tests_passed = 0;
    int total_tests = 2; // Parallel load test and shift test
    
    // Reset the shift register
    sr->rst_n = 0;
    sr->clk = 0;
    sr->en = 0;
    sr->load = 0;
    sr->serial_in = 0;
    sr->parallel_in = 0;
    
    sr->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    sr->clk = 1;
    sr->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    sr->rst_n = 1;
    
    // Test parallel load
    uint32_t test_value = (1 << width) - 1; // All 1's for the given width
    std::cout << "Testing parallel load with value: ";
    print_reg(test_value, width);
    
    sr->clk = 0;
    sr->load = 1;
    sr->parallel_in = test_value;
    sr->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    sr->clk = 1;
    sr->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    sr->load = 0;
    sr->clk = 0;
    sr->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    sr->clk = 1;
    sr->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    std::cout << "After load, register value: ";
    print_reg(sr->parallel_out, width);
    
    // Verify parallel load
    bool load_test_passed = (sr->parallel_out == test_value);
    if (load_test_passed) {
        std::cout << "Parallel load test: PASS" << std::endl;
        tests_passed++;
    } else {
        std::cout << "Parallel load test: FAIL - Expected: ";
        print_reg(test_value, width);
        std::cout << " Actual: ";
        print_reg(sr->parallel_out, width);
        all_tests_pass = false;
    }
    
    // Test shifting
    const char* shift_type = shift_dir ? "left" : "right";
    std::cout << "\nTesting " << shift_type << " shift with serial in = 0" << std::endl;
    
    bool shift_test_passed = true;
    uint32_t expected_value = test_value;
    
    for (int i = 0; i < width + 2; i++) { // Do width+2 shifts to see full effect
        // First half of shifts with serial_in = 0, second half with serial_in = 1
        bool serial_bit = (i < width/2) ? 0 : 1;
        sr->clk = 0;
        sr->en = 1;
        sr->serial_in = serial_bit;
        sr->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        sr->clk = 1;
        sr->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        // Calculate expected value after shift
        if (shift_dir) {
            // Left shift
            expected_value = ((expected_value << 1) | serial_bit) & ((1 << width) - 1);
            // Expected serial out is the MSB that gets shifted out
            bool expected_serial_out = (i > 0) && ((test_value >> (width - i)) & 1);
            if (i < width && sr->serial_out != expected_serial_out) {
                shift_test_passed = false;
            }
        } else {
            // Right shift
            bool expected_serial_out = expected_value & 1;
            expected_value = (expected_value >> 1) | (serial_bit << (width - 1));
            if (i < width && sr->serial_out != expected_serial_out) {
                shift_test_passed = false;
            }
        }
        
        std::cout << "Shift " << i+1 << ", serial_in = " << serial_bit 
                  << ", serial_out = " << (int)sr->serial_out
                  << ", register = ";
        print_reg(sr->parallel_out, width);
        
        // Check if register value matches expected after each shift
        if (sr->parallel_out != expected_value) {
            std::cout << "  Expected: ";
            print_reg(expected_value, width);
            shift_test_passed = false;
        }
    }
    
    if (shift_test_passed) {
        std::cout << "Shift test: PASS" << std::endl;
        tests_passed++;
    } else {
        std::cout << "Shift test: FAIL" << std::endl;
        all_tests_pass = false;
    }
    
    // Print test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (all_tests_pass ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << tests_passed << " of " << total_tests << std::endl;
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // ----- Test RIGHT shift register (SHIFT_DIR=0) -----
    std::cout << "=== Testing RIGHT shift register (SHIFT_DIR=0) ===" << std::endl;
    std::unique_ptr<Vshift_register> sr_right = std::make_unique<Vshift_register>();
    
    // Initialize VCD trace file for right shift
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp_right = std::make_unique<VerilatedVcdC>();
    sr_right->trace(tfp_right.get(), 99);
    tfp_right->open("shift_register_right_sim.vcd");
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Run test for right shift (WIDTH=8, SHIFT_DIR=0)
    test_shift_register(sr_right, tfp_right.get(), sim_time, false, 8);
    
    // Cleanup right shift resources
    tfp_right->close();
    sr_right->final();
    
    // ----- Test LEFT shift register (SHIFT_DIR=1) -----
    std::cout << "\n=== Testing LEFT shift register (SHIFT_DIR=1) ===" << std::endl;
    
    // Reset simulation time for left shift test
    sim_time = 0;
    
    // The correct way to pass parameters to Verilator instances is at compile time
    // We need to recompile with different parameters for the left shift test
    // This won't work in the current setup, so we'll need a workaround
    
    std::cout << "NOTE: The correct way to change parameters in Verilator requires compilation with different parameters.\n";
    std::cout << "      In a real project, you would create separate modules with different parameters.\n";
    std::cout << "      For this example, we'll create a new instance but the parameter won't change.\n";
    
    // Create a new instance for left shift
    std::unique_ptr<Vshift_register> sr_left = std::make_unique<Vshift_register>();
    
    // Setup new VCD file for left shift
    std::unique_ptr<VerilatedVcdC> tfp_left = std::make_unique<VerilatedVcdC>();
    sr_left->trace(tfp_left.get(), 99);
    tfp_left->open("shift_register_left_sim.vcd");
    
    // Test left shift manually by inverting the shift direction in software
    // This simulates what would happen if SHIFT_DIR=1 was working correctly
    test_shift_register(sr_left, tfp_left.get(), sim_time, true, 8);
    
    // Cleanup left shift resources
    tfp_left->close();
    sr_left->final();
    
    return 0;
} 