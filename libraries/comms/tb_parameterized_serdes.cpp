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
const bool MSB_FIRST = true;     // Must match the parameter in Verilog

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
    
    // Run a few clock cycles with reset active
    for (int i = 0; i < 5; i++) {
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
    serdes->clk = !serdes->clk;
    serdes->eval();
    if (tfp) tfp->dump(sim_time++);
    serdes->clk = !serdes->clk;
    serdes->eval();
    if (tfp) tfp->dump(sim_time++);
    
    // Release load
    serdes->load = 0;
    
    // Print the expected output bits
    std::cout << "Expected bits: ";
    for (int i = 0; i < DATA_WIDTH; i++) {
        bool expected_bit = MSB_FIRST ? 
            ((test.data >> (DATA_WIDTH - 1 - i)) & 1) : 
            ((test.data >> i) & 1);
        std::cout << expected_bit;
    }
    std::cout << std::endl;
    
    // Capture serialized bits (one bit per clock cycle)
    std::vector<bool> serial_bits;
    
    // First capture the initial bit state right after load (before any shifts)
    bool first_bit = serdes->serial_out;
    std::cout << "Initial serial bit: " << first_bit << std::endl;
    
    for (int i = 0; i < DATA_WIDTH; i++) {
        // One complete clock cycle to advance to next bit
        serdes->clk = !serdes->clk;
        serdes->eval();
        if (tfp) tfp->dump(sim_time++);
        serdes->clk = !serdes->clk;
        serdes->eval();
        if (tfp) tfp->dump(sim_time++);
        
        // Capture bit on positive edge
        bool bit_value = serdes->serial_out;
        if (i < DATA_WIDTH - 1) {  // Skip the last captured bit (after all bits shifted)
            serial_bits.push_back(bit_value);
            std::cout << "Serial bit " << i << ": " << bit_value << std::endl;
        }
    }
    
    // Add the first bit to complete the sequence
    serial_bits.insert(serial_bits.begin(), first_bit);
    
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
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (!error ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << (!error ? "1" : "0") << " of 1" << std::endl;
    
    // Check tx_done is asserted at the end
    serdes->clk = !serdes->clk;
    serdes->eval();
    if (tfp) tfp->dump(sim_time++);
    serdes->clk = !serdes->clk;
    serdes->eval();
    if (tfp) tfp->dump(sim_time++);
    
    if (serdes->tx_done) {
        std::cout << "tx_done is correctly asserted" << std::endl;
    } else {
        std::cout << "ERROR: tx_done not asserted when expected" << std::endl;
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
    
    // Run a few clock cycles with reset active
    for (int i = 0; i < 5; i++) {
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
    
    // Signal start of reception
    serdes->load = 1;
    serdes->clk = !serdes->clk;
    serdes->eval();
    if (tfp) tfp->dump(sim_time++);
    serdes->clk = !serdes->clk;
    serdes->eval();
    if (tfp) tfp->dump(sim_time++);
    serdes->load = 0;
    
    // Send bits serially one bit per clock cycle
    for (int i = 0; i < DATA_WIDTH; i++) {
        // Calculate the bit value based on MSB_FIRST setting
        bool bit_value = MSB_FIRST ? 
            ((test.data >> (DATA_WIDTH - 1 - i)) & 1) : 
            ((test.data >> i) & 1);
            
        std::cout << "Sending bit " << i << ": " << bit_value << std::endl;
        serdes->serial_in = bit_value;
        
        // One clock cycle per bit
        serdes->clk = !serdes->clk;
        serdes->eval();
        if (tfp) tfp->dump(sim_time++);
        serdes->clk = !serdes->clk;
        serdes->eval();
        if (tfp) tfp->dump(sim_time++);
    }
    
    // Additional cycles to ensure completion
    for (int i = 0; i < 2; i++) {
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
    
    // Check rx_done is asserted
    if (serdes->rx_done) {
        std::cout << "rx_done is correctly asserted" << std::endl;
    } else {
        std::cout << "ERROR: rx_done not asserted when expected" << std::endl;
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
    
    // Track test results
    int total_tests = 0;
    int passed_tests = 0;
    
    // Run serializer tests
    for (const auto& test : test_cases) {
        total_tests++;
        test_serializer(serdes, tfp.get(), sim_time, test);
        // Check if test passed based on error flag in test_serializer
        if (!error) passed_tests++;
    }
    
    // Run deserializer tests
    for (const auto& test : test_cases) {
        total_tests++;
        test_deserializer(serdes, tfp.get(), sim_time, test);
        // Check if test passed based on received_data matching test.data
        if (received_data == test.data) passed_tests++;
    }
    
    // Cleanup
    tfp->close();
    serdes->final();
    
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (passed_tests == total_tests ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << passed_tests << " of " << total_tests << std::endl;
    
    return (passed_tests == total_tests) ? 0 : 1;
}