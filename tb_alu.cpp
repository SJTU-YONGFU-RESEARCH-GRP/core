#include "Valu.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <vector>
#include <iomanip>

// Operation codes
enum OpCode {
    ADD = 0,
    SUB = 1,
    AND = 2,
    OR  = 3,
    XOR = 4,
    SHL = 5,
    SHR = 6,
    CMP = 7
};

// Test case structure
struct TestCase {
    uint8_t a;
    uint8_t b;
    OpCode op;
    uint8_t expected_result;
    bool expected_zero;
    bool expected_overflow;
};

void check_operation(std::unique_ptr<Valu>& alu, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    // Define test cases
    std::vector<TestCase> test_cases = {
        // ADD operations
        {10, 20, ADD, 30, false, false},
        {200, 100, ADD, 44, false, true},  // 200 + 100 = 300, overflow in 8-bit
        {0, 0, ADD, 0, true, false},
        
        // SUB operations
        {30, 10, SUB, 20, false, false},
        {10, 30, SUB, 236, false, false},  // 10 - 30 = -20 (unsigned: 236)
        {128, 1, SUB, 127, false, true},   // Overflow case
        
        // AND operations
        {0xFF, 0x0F, AND, 0x0F, false, false},
        {0x00, 0xFF, AND, 0x00, true, false},
        
        // OR operations
        {0xF0, 0x0F, OR, 0xFF, false, false},
        {0x00, 0x00, OR, 0x00, true, false},
        
        // XOR operations
        {0xFF, 0x0F, XOR, 0xF0, false, false},
        {0xFF, 0xFF, XOR, 0x00, true, false},
        
        // SHL operations
        {0x01, 0x01, SHL, 0x02, false, false},
        {0x01, 0x07, SHL, 0x80, false, false},
        
        // SHR operations
        {0x80, 0x01, SHR, 0x40, false, false},
        {0x80, 0x07, SHR, 0x01, false, false},
        
        // CMP operations
        {0x55, 0x55, CMP, 0x01, false, false},
        {0x55, 0xAA, CMP, 0x00, true, false}
    };
    
    // Reset the ALU
    alu->rst_n = 0;
    alu->clk = 0;
    alu->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    alu->clk = 1;
    alu->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    alu->rst_n = 1;
    
    // Run through test cases
    std::cout << "Running ALU test cases:" << std::endl;
    std::cout << "------------------------------------------------------------" << std::endl;
    std::cout << "| Test | A  | B  | Op | Expected | Result | Zero | Overflow |" << std::endl;
    std::cout << "------------------------------------------------------------" << std::endl;
    
    int test_num = 0;
    int pass_count = 0;
    
    for (const auto& test : test_cases) {
        // Set inputs
        alu->clk = 0;
        alu->a = test.a;
        alu->b = test.b;
        alu->op_code = static_cast<uint8_t>(test.op);
        alu->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        // Clock edge
        alu->clk = 1;
        alu->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        // Additional cycle to let the flags settle
        alu->clk = 0;
        alu->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        alu->clk = 1;
        alu->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        // Check results
        bool result_match = (alu->result == test.expected_result);
        bool zero_match = (alu->zero_flag == test.expected_zero);
        bool overflow_match = (alu->overflow_flag == test.expected_overflow);
        bool test_pass = result_match && zero_match && overflow_match;
        
        if (test_pass) {
            pass_count++;
        }
        
        // Print test results
        std::cout << "| " << std::setw(4) << test_num++ << " | "
                  << std::hex << std::setw(2) << static_cast<int>(test.a) << " | "
                  << std::hex << std::setw(2) << static_cast<int>(test.b) << " | "
                  << std::dec << std::setw(2) << static_cast<int>(test.op) << " | "
                  << std::hex << std::setw(8) << static_cast<int>(test.expected_result) << " | "
                  << std::hex << std::setw(6) << static_cast<int>(alu->result) << " | "
                  << std::setw(4) << (alu->zero_flag ? "1" : "0") << " | "
                  << std::setw(8) << (alu->overflow_flag ? "1" : "0") << " | "
                  << (test_pass ? "PASS" : "FAIL") << std::endl;
    }
    
    std::cout << "------------------------------------------------------------" << std::endl;
    std::cout << "Test Summary: " << pass_count << "/" << test_cases.size() 
              << " tests passed." << std::endl;
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    std::unique_ptr<Valu> alu = std::make_unique<Valu>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    alu->trace(tfp.get(), 99);  // Trace 99 levels of hierarchy
    tfp->open("alu_sim.vcd");
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Run tests
    check_operation(alu, tfp.get(), sim_time);
    
    // Cleanup
    tfp->close();
    alu->final();
    
    std::cout << "Simulation completed!" << std::endl;
    return 0;
} 