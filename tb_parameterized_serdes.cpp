#include "Vparameterized_serdes.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <string>
#include <iomanip>
#include <vector>
#include <bitset>

// Test case structure
struct TestCase {
    uint32_t data;       // Test data
    std::string name;    // Test case name
};

// Constants for the module
const int DATA_WIDTH = 8;        // Must match the parameter in Verilog
const int CLOCK_DIV = 4;         // Must match the parameter in Verilog
const bool MSB_FIRST = true;     // Must match the parameter in Verilog
const int CYCLES_PER_BIT = CLOCK_DIV * 2;  // Number of cycles for each bit transfer

// Helper function to get bit at specific position
bool get_bit(uint32_t data, int position, bool msb_first, int data_width) {
    if (msb_first) {
        return (data >> (data_width - 1 - position)) & 1;
    } else {
        return (data >> position) & 1;
    }
}

void test_serializer(std::unique_ptr<Vparameterized_serdes>& serdes, VerilatedVcdC* tfp, vluint64_t& sim_time, const TestCase& test) {
    std::cout << "\n===== Testing Serializer with " << test.name << " =====" << std::endl;
    std::cout << "Input data: 0x" << std::hex << std::setw(2) << std::setfill('0') << test.data
              << " (" << std::bitset<8>(test.data) << ")" << std::endl;

    // Reset the module
    serdes->rst_n = 0;
    serdes->clk = 0;
    serdes->enable = 0;
    serdes->mode = 0;  // Serializer mode
    serdes->load = 0;
    serdes->parallel_in = 0;
    serdes->serial_in = 0;
    
    // Apply reset for a few clock cycles
    for (int i = 0; i < 10; i++) {
        serdes->clk = !serdes->clk;
        serdes->eval();
        if (tfp) tfp->dump(sim_time++);
        serdes->clk = !serdes->clk;
        serdes->eval();
        if (tfp) tfp->dump(sim_time++);
    }
    
    // Release reset and enable the module
    serdes->rst_n = 1;
    serdes->enable = 1;
    
    // Run a few clock cycles to stabilize
    for (int i = 0; i < 5; i++) {
        serdes->clk = !serdes->clk;
        serdes->eval();
        if (tfp) tfp->dump(sim_time++);
        serdes->clk = !serdes->clk;
        serdes->eval();
        if (tfp) tfp->dump(sim_time++);
    }
    
    // Load parallel data
    serdes->parallel_in = test.data;
    serdes->load = 1;
    
    // Clock for load
    serdes->clk = !serdes->clk;
    serdes->eval();
    if (tfp) tfp->dump(sim_time++);
    serdes->clk = !serdes->clk;
    serdes->eval();
    if (tfp) tfp->dump(sim_time++);
    
    // Release load
    serdes->load = 0;
    
    // Wait for a few clock cycles to ensure the load has been registered
    for (int i = 0; i < 5; i++) {
        serdes->clk = !serdes->clk;
        serdes->eval();
        if (tfp) tfp->dump(sim_time++);
        serdes->clk = !serdes->clk;
        serdes->eval();
        if (tfp) tfp->dump(sim_time++);
    }
    
    std::vector<bool> serial_bits;
    
    // Since we can't access the internal serial_clk, we'll sample at regular intervals
    // based on the clock division factor
    for (int bit = 0; bit < DATA_WIDTH; bit++) {
        // For each bit, we need to wait for CYCLES_PER_BIT / 2 cycles to reach the midpoint
        for (int i = 0; i < CYCLES_PER_BIT / 2; i++) {
            serdes->clk = !serdes->clk;
            serdes->eval();
            if (tfp) tfp->dump(sim_time++);
            serdes->clk = !serdes->clk;
            serdes->eval();
            if (tfp) tfp->dump(sim_time++);
        }
        
        // Sample the bit at the midpoint of the bit time
        serial_bits.push_back(serdes->serial_out);
        std::cout << "Serial bit " << bit << ": " << serdes->serial_out << std::endl;
        
        // Complete the remaining cycles for this bit
        for (int i = 0; i < CYCLES_PER_BIT / 2; i++) {
            serdes->clk = !serdes->clk;
            serdes->eval();
            if (tfp) tfp->dump(sim_time++);
            serdes->clk = !serdes->clk;
            serdes->eval();
            if (tfp) tfp->dump(sim_time++);
        }
    }
    
    // Wait for a few more cycles to ensure all bits are processed
    for (int i = 0; i < 10; i++) {
        serdes->clk = !serdes->clk;
        serdes->eval();
        if (tfp) tfp->dump(sim_time++);
        serdes->clk = !serdes->clk;
        serdes->eval();
        if (tfp) tfp->dump(sim_time++);
    }
    
    // Verify serialized data
    bool error = false;
    
    std::cout << "Serialized bits (" << serial_bits.size() << "): ";
    for (size_t i = 0; i < serial_bits.size(); i++) {
        std::cout << serial_bits[i];
    }
    std::cout << std::endl;
    
    if (serial_bits.size() != DATA_WIDTH) {
        std::cout << "ERROR: Expected " << DATA_WIDTH << " bits, got " << serial_bits.size() << std::endl;
        error = true;
    } else {
        // For MSB_FIRST, the first bit should be the MSB of the input
        for (size_t i = 0; i < DATA_WIDTH; i++) {
            bool expected_bit = MSB_FIRST ? 
                ((test.data >> (DATA_WIDTH - 1 - i)) & 1) : 
                ((test.data >> i) & 1);
                
            if (serial_bits[i] != expected_bit) {
                std::cout << "ERROR at bit " << i << ": Expected " << expected_bit 
                         << ", got " << serial_bits[i] << std::endl;
                error = true;
            }
        }
    }
    
    if (!error) {
        std::cout << "Serializer test PASSED for " << test.name << std::endl;
    } else {
        std::cout << "Serializer test FAILED for " << test.name << std::endl;
    }
}

void test_deserializer(std::unique_ptr<Vparameterized_serdes>& serdes, VerilatedVcdC* tfp, vluint64_t& sim_time, const TestCase& test) {
    std::cout << "\n===== Testing Deserializer with " << test.name << " =====" << std::endl;
    std::cout << "Input data: 0x" << std::hex << std::setw(2) << std::setfill('0') << test.data
              << " (" << std::bitset<8>(test.data) << ")" << std::endl;

    // Reset the module
    serdes->rst_n = 0;
    serdes->clk = 0;
    serdes->enable = 0;
    serdes->mode = 1;  // Deserializer mode
    serdes->load = 0;
    serdes->parallel_in = 0;
    serdes->serial_in = 0;
    
    // Apply reset for a few clock cycles
    for (int i = 0; i < 10; i++) {
        serdes->clk = !serdes->clk;
        serdes->eval();
        if (tfp) tfp->dump(sim_time++);
        serdes->clk = !serdes->clk;
        serdes->eval();
        if (tfp) tfp->dump(sim_time++);
    }
    
    // Release reset and enable the module
    serdes->rst_n = 1;
    serdes->enable = 1;
    
    // Run a few clock cycles to stabilize
    for (int i = 0; i < 5; i++) {
        serdes->clk = !serdes->clk;
        serdes->eval();
        if (tfp) tfp->dump(sim_time++);
        serdes->clk = !serdes->clk;
        serdes->eval();
        if (tfp) tfp->dump(sim_time++);
    }
    
    // Signal start of reception
    serdes->load = 1;
    serdes->clk = !serdes->clk;
    serdes->eval();
    if (tfp) tfp->dump(sim_time++);
    serdes->clk = !serdes->clk;
    serdes->eval();
    if (tfp) tfp->dump(sim_time++);
    serdes->load = 0;
    
    // Wait a few cycles before sending data
    for (int i = 0; i < 10; i++) {
        serdes->clk = !serdes->clk;
        serdes->eval();
        if (tfp) tfp->dump(sim_time++);
        serdes->clk = !serdes->clk;
        serdes->eval();
        if (tfp) tfp->dump(sim_time++);
    }
    
    // Send bits serially, waiting CYCLES_PER_BIT cycles for each bit
    for (int bit = 0; bit < DATA_WIDTH; bit++) {
        // Calculate the bit value based on MSB_FIRST setting
        bool bit_value = MSB_FIRST ? 
            ((test.data >> (DATA_WIDTH - 1 - bit)) & 1) : 
            ((test.data >> bit) & 1);
            
        std::cout << "Sending bit " << bit << ": " << bit_value << std::endl;
        serdes->serial_in = bit_value;
        
        // Wait for a complete bit time (CYCLES_PER_BIT system clock cycles)
        for (int i = 0; i < CYCLES_PER_BIT; i++) {
            serdes->clk = !serdes->clk;
            serdes->eval();
            if (tfp) tfp->dump(sim_time++);
            serdes->clk = !serdes->clk;
            serdes->eval();
            if (tfp) tfp->dump(sim_time++);
        }
    }
    
    // Additional cycles to ensure completion
    for (int i = 0; i < CYCLES_PER_BIT * 3; i++) {
        serdes->clk = !serdes->clk;
        serdes->eval();
        if (tfp) tfp->dump(sim_time++);
        serdes->clk = !serdes->clk;
        serdes->eval();
        if (tfp) tfp->dump(sim_time++);
    }
    
    // Verify deserialized data
    uint32_t received_data = serdes->parallel_out;
    std::cout << "Received data: 0x" << std::hex << std::setw(2) << std::setfill('0') << received_data
              << " (" << std::bitset<8>(received_data) << ")" << std::endl;
    
    if (received_data == test.data) {
        std::cout << "Deserializer test PASSED for " << test.name << std::endl;
    } else {
        std::cout << "Deserializer test FAILED for " << test.name << ". Expected: 0x" 
                  << std::hex << std::setw(2) << std::setfill('0') << test.data
                  << ", Got: 0x" << std::hex << std::setw(2) << std::setfill('0') << received_data << std::endl;
    }
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of the module
    std::unique_ptr<Vparameterized_serdes> serdes = std::make_unique<Vparameterized_serdes>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    serdes->trace(tfp.get(), 99);  // Trace 99 levels of hierarchy
    tfp->open("parameterized_serdes_sim.vcd");
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Define test cases
    std::vector<TestCase> test_cases = {
        {0x01, "Single Bit (LSB)"},
        {0x80, "Single Bit (MSB)"},
        {0x55, "Alternating Pattern (0x55)"},
        {0xAA, "Alternating Pattern (0xAA)"},
        {0xFF, "All Bits Set"},
        {0x3C, "Pattern 0x3C"}
    };
    
    // Run serializer tests
    for (const auto& test : test_cases) {
        test_serializer(serdes, tfp.get(), sim_time, test);
    }
    
    // Run deserializer tests
    for (const auto& test : test_cases) {
        test_deserializer(serdes, tfp.get(), sim_time, test);
    }
    
    // Cleanup
    tfp->close();
    serdes->final();
    
    std::cout << "\nSimulation completed!" << std::endl;
    return 0;
} 