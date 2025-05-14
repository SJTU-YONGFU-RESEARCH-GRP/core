#include "Vshift_register_right.h"
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

void test_shift_register(std::unique_ptr<Vshift_register_right>& sr, VerilatedVcdC* tfp, vluint64_t& sim_time, 
                        int width) {
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
    std::cout << "\nTesting right shift" << std::endl;
    
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
    
    // Test RIGHT shift register
    std::cout << "=== Testing RIGHT shift register ===" << std::endl;
    std::unique_ptr<Vshift_register_right> sr_right = std::make_unique<Vshift_register_right>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    sr_right->trace(tfp.get(), 99);
    tfp->open("shift_register_right_sim.vcd");
    
    // Run test for right shift (WIDTH=8)
    test_shift_register(sr_right, tfp.get(), sim_time, 8);
    
    // Cleanup
    tfp->close();
    sr_right->final();
    
    std::cout << "\nSimulation completed successfully!" << std::endl;
    return 0;
} 