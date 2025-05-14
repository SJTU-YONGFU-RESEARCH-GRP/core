#include "Vcrossbar_switch.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <vector>
#include <iomanip>
#include <bitset>
#include <cmath>

// Helper function to print binary representation
template<typename T>
std::string to_binary(T value, int width) {
    std::bitset<32> bits(value);
    std::string binary = bits.to_string();
    return binary.substr(32 - width, width);
}

// Helper functions to access flattened arrays
uint8_t get_data_in(Vcrossbar_switch* crossbar, int index) {
    const int DATA_WIDTH = 8;
    return (crossbar->data_in >> (index * DATA_WIDTH)) & 0xFF;
}

void set_data_in(Vcrossbar_switch* crossbar, int index, uint8_t value) {
    const int DATA_WIDTH = 8;
    uint32_t mask = 0xFF << (index * DATA_WIDTH);
    crossbar->data_in = (crossbar->data_in & ~mask) | (static_cast<uint32_t>(value) << (index * DATA_WIDTH));
}

uint8_t get_data_out(Vcrossbar_switch* crossbar, int index) {
    const int DATA_WIDTH = 8;
    return (crossbar->data_out >> (index * DATA_WIDTH)) & 0xFF;
}

void set_select(Vcrossbar_switch* crossbar, int output_index, uint8_t input_index) {
    const int NUM_INPUTS = 4;
    const int SELECT_WIDTH = static_cast<int>(std::log2(NUM_INPUTS));
    uint32_t mask = ((1 << SELECT_WIDTH) - 1) << (output_index * SELECT_WIDTH);
    crossbar->select = (crossbar->select & ~mask) | (static_cast<uint32_t>(input_index) << (output_index * SELECT_WIDTH));
}

uint8_t get_select(Vcrossbar_switch* crossbar, int output_index) {
    const int NUM_INPUTS = 4;
    const int SELECT_WIDTH = static_cast<int>(std::log2(NUM_INPUTS));
    return (crossbar->select >> (output_index * SELECT_WIDTH)) & ((1 << SELECT_WIDTH) - 1);
}

void check_crossbar_operation(std::unique_ptr<Vcrossbar_switch>& crossbar, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    // Parameters from the design
    const int NUM_INPUTS = 4;
    const int NUM_OUTPUTS = 4;
    const int DATA_WIDTH = 8;
    const int SELECT_WIDTH = static_cast<int>(std::log2(NUM_INPUTS));
    
    // Reset the crossbar
    crossbar->clk = 0;
    crossbar->rst_n = 0;
    crossbar->data_in = 0;
    crossbar->select = 0;
    crossbar->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    crossbar->clk = 1;
    crossbar->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    // Release reset
    crossbar->rst_n = 1;
    crossbar->clk = 0;
    crossbar->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    // Test 1: Basic routing test
    std::cout << "Test 1: Basic Routing Test" << std::endl;
    std::cout << "Setting unique values for each input" << std::endl;
    
    // Set unique values for each input
    set_data_in(crossbar.get(), 0, 0xA1);
    set_data_in(crossbar.get(), 1, 0xB2);
    set_data_in(crossbar.get(), 2, 0xC3);
    set_data_in(crossbar.get(), 3, 0xD4);
    
    std::cout << "Input values:" << std::endl;
    for (int i = 0; i < NUM_INPUTS; i++) {
        std::cout << "Input " << i << ": 0x" << std::hex << std::setw(2) << std::setfill('0') 
                  << static_cast<int>(get_data_in(crossbar.get(), i)) << std::endl;
    }
    
    // Test different routing configurations
    struct TestCase {
        uint8_t select[NUM_OUTPUTS];
        std::string description;
    };
    
    std::vector<TestCase> test_cases = {
        {{0, 1, 2, 3}, "Direct mapping (input i to output i)"},
        {{3, 2, 1, 0}, "Reverse mapping (input i to output NUM_OUTPUTS-1-i)"},
        {{0, 0, 0, 0}, "All outputs connected to input 0"},
        {{1, 1, 1, 1}, "All outputs connected to input 1"},
        {{2, 2, 2, 2}, "All outputs connected to input 2"},
        {{3, 3, 3, 3}, "All outputs connected to input 3"},
        {{0, 1, 0, 1}, "Alternating inputs 0 and 1"}
    };
    
    for (size_t tc = 0; tc < test_cases.size(); tc++) {
        std::cout << "\nTest Case " << tc + 1 << ": " << test_cases[tc].description << std::endl;
        
        // Set the selection matrix
        for (int i = 0; i < NUM_OUTPUTS; i++) {
            set_select(crossbar.get(), i, test_cases[tc].select[i]);
        }
        
        // Print selection configuration
        std::cout << "Selection configuration:" << std::endl;
        for (int i = 0; i < NUM_OUTPUTS; i++) {
            std::cout << "Output " << i << " connected to Input " << static_cast<int>(get_select(crossbar.get(), i)) 
                      << " (binary: " << to_binary(get_select(crossbar.get(), i), SELECT_WIDTH) << ")" << std::endl;
        }
        
        // Clock cycle to apply the selection
        crossbar->clk = 0;
        crossbar->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        crossbar->clk = 1;
        crossbar->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        // Check the outputs
        std::cout << "Results:" << std::endl;
        bool all_correct = true;
        for (int i = 0; i < NUM_OUTPUTS; i++) {
            int expected_value = get_data_in(crossbar.get(), test_cases[tc].select[i]);
            int actual_value = get_data_out(crossbar.get(), i);
            
            std::cout << "Output " << i << ": Expected 0x" << std::hex << std::setw(2) << std::setfill('0') 
                      << expected_value << ", Got 0x" << std::setw(2) << std::setfill('0') << actual_value;
            
            if (expected_value == actual_value) {
                std::cout << " ✓" << std::endl;
            } else {
                std::cout << " ✗ ERROR!" << std::endl;
                all_correct = false;
            }
        }
        
        if (all_correct) {
            std::cout << "Test Case " << tc + 1 << " PASSED" << std::endl;
        } else {
            std::cout << "Test Case " << tc + 1 << " FAILED" << std::endl;
        }
    }
    
    // Test 2: Dynamic routing changes
    std::cout << "\nTest 2: Dynamic Routing Changes" << std::endl;
    
    // Change input values
    set_data_in(crossbar.get(), 0, 0x11);
    set_data_in(crossbar.get(), 1, 0x22);
    set_data_in(crossbar.get(), 2, 0x33);
    set_data_in(crossbar.get(), 3, 0x44);
    
    std::cout << "New input values:" << std::endl;
    for (int i = 0; i < NUM_INPUTS; i++) {
        std::cout << "Input " << i << ": 0x" << std::hex << std::setw(2) << std::setfill('0') 
                  << static_cast<int>(get_data_in(crossbar.get(), i)) << std::endl;
    }
    
    // Perform multiple routing changes and check results
    uint8_t dynamic_selects[5][4] = {
        {0, 0, 0, 0},
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {3, 3, 3, 3},
        {3, 2, 1, 0}
    };
    
    for (int step = 0; step < 5; step++) {
        std::cout << "\nDynamic Step " << step + 1 << ":" << std::endl;
        
        // Set the selection matrix
        for (int i = 0; i < NUM_OUTPUTS; i++) {
            set_select(crossbar.get(), i, dynamic_selects[step][i]);
        }
        
        // Print selection configuration
        std::cout << "Selection configuration:" << std::endl;
        for (int i = 0; i < NUM_OUTPUTS; i++) {
            std::cout << "Output " << i << " connected to Input " << static_cast<int>(get_select(crossbar.get(), i)) << std::endl;
        }
        
        // Clock cycle to apply the selection
        crossbar->clk = 0;
        crossbar->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        crossbar->clk = 1;
        crossbar->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        // Check the outputs
        std::cout << "Results:" << std::endl;
        bool all_correct = true;
        for (int i = 0; i < NUM_OUTPUTS; i++) {
            int expected_value = get_data_in(crossbar.get(), dynamic_selects[step][i]);
            int actual_value = get_data_out(crossbar.get(), i);
            
            std::cout << "Output " << i << ": Expected 0x" << std::hex << std::setw(2) << std::setfill('0') 
                      << expected_value << ", Got 0x" << std::setw(2) << std::setfill('0') << actual_value;
            
            if (expected_value == actual_value) {
                std::cout << " ✓" << std::endl;
            } else {
                std::cout << " ✗ ERROR!" << std::endl;
                all_correct = false;
            }
        }
        
        if (all_correct) {
            std::cout << "Dynamic Step " << step + 1 << " PASSED" << std::endl;
        } else {
            std::cout << "Dynamic Step " << step + 1 << " FAILED" << std::endl;
        }
    }
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    std::unique_ptr<Vcrossbar_switch> crossbar = std::make_unique<Vcrossbar_switch>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    crossbar->trace(tfp.get(), 99);  // Trace 99 levels of hierarchy
    tfp->open("crossbar_switch_sim.vcd");
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Run tests
    check_crossbar_operation(crossbar, tfp.get(), sim_time);
    
    // Cleanup
    tfp->close();
    crossbar->final();
    
    std::cout << "\nSimulation completed successfully!" << std::endl;
    return 0;
} 