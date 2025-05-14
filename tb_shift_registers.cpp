#include "Vshift_register_right.h"
#include "Vshift_register_left.h"
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

template<typename T>
void test_shift_register(std::unique_ptr<T>& sr, VerilatedVcdC* tfp, vluint64_t& sim_time, 
                        bool is_left_shift, int width) {
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
    
    // Test shifting
    const char* shift_type = is_left_shift ? "left" : "right";
    std::cout << "\nTesting " << shift_type << " shift" << std::endl;
    
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
        
        std::cout << "Shift " << i+1 << ", serial_in = " << serial_bit 
                  << ", serial_out = " << (int)sr->serial_out
                  << ", register = ";
        print_reg(sr->parallel_out, width);
    }
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // ----- Test RIGHT shift register -----
    std::cout << "=== Testing RIGHT shift register ===" << std::endl;
    std::unique_ptr<Vshift_register_right> sr_right = std::make_unique<Vshift_register_right>();
    
    // Initialize VCD trace file for right shift
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp_right = std::make_unique<VerilatedVcdC>();
    sr_right->trace(tfp_right.get(), 99);
    tfp_right->open("shift_register_right_sim.vcd");
    
    // Run test for right shift (WIDTH=8)
    test_shift_register(sr_right, tfp_right.get(), sim_time, false, 8);
    
    // Cleanup right shift resources
    tfp_right->close();
    sr_right->final();
    
    // Reset simulation time for left shift test
    sim_time = 0;
    
    // ----- Test LEFT shift register -----
    std::cout << "\n=== Testing LEFT shift register ===" << std::endl;
    
    // Create a new instance for left shift
    std::unique_ptr<Vshift_register_left> sr_left = std::make_unique<Vshift_register_left>();
    
    // Setup new VCD file for left shift
    std::unique_ptr<VerilatedVcdC> tfp_left = std::make_unique<VerilatedVcdC>();
    sr_left->trace(tfp_left.get(), 99);
    tfp_left->open("shift_register_left_sim.vcd");
    
    // Test left shift (WIDTH=8)
    test_shift_register(sr_left, tfp_left.get(), sim_time, true, 8);
    
    // Cleanup left shift resources
    tfp_left->close();
    sr_left->final();
    
    std::cout << "\nSimulation completed successfully!" << std::endl;
    return 0;
} 