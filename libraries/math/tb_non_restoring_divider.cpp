#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vnon_restoring_divider.h"

vluint64_t sim_time = 0;

void tick(Vnon_restoring_divider *dut, VerilatedVcdC *vcd) {
    dut->clk = 1;
    dut->eval();
    sim_time++;
    vcd->dump(sim_time);
    dut->clk = 0;
    dut->eval();
    sim_time++;
    vcd->dump(sim_time);
}

bool test_division(Vnon_restoring_divider *dut, VerilatedVcdC *vcd, 
                  uint8_t dividend, uint8_t divisor) {
    
    std::cout << "Testing division: " << (int)dividend << " / " << (int)divisor << " = ";
    
    // Reset the divider
    dut->rst_n = 0;
    dut->start = 0;
    dut->dividend = 0;
    dut->divisor = 0;
    tick(dut, vcd);
    dut->rst_n = 1;
    tick(dut, vcd);
    
    // Start the division
    dut->dividend = dividend;
    dut->divisor = divisor;
    dut->start = 1;
    tick(dut, vcd);
    dut->start = 0;
    
    // Wait for the operation to complete
    int timeout = 50; // Reasonable timeout
    while (!dut->valid && !dut->error && timeout > 0) {
        tick(dut, vcd);
        timeout--;
    }
    
    // Check if division by zero
    if (divisor == 0) {
        if (dut->error) {
            std::cout << "Error (division by zero) - CORRECT" << std::endl;
            return true;
        } else {
            std::cout << "Failed to detect division by zero" << std::endl;
            return false;
        }
    }
    
    // Calculate expected values
    uint8_t expected_quotient = dividend / divisor;
    uint8_t expected_remainder = dividend % divisor;
    
    // Compare actual and expected values
    bool correct = (dut->quotient == expected_quotient) && (dut->remainder == expected_remainder);
    
    // Print actual and expected values
    std::cout << dut->quotient << " remainder " << dut->remainder;
    std::cout << " (Expected: " << (int)expected_quotient << " remainder " << (int)expected_remainder << ")" << std::endl;
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (correct ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << (correct ? "1" : "0") << " of 1" << std::endl;
    
    return correct;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vnon_restoring_divider *dut = new Vnon_restoring_divider;
    
    Verilated::traceEverOn(true);
    VerilatedVcdC *vcd = new VerilatedVcdC;
    dut->trace(vcd, 5);
    vcd->open("waveform.vcd");
    
    bool all_tests_passed = true;
    
    // Basic test cases
    all_tests_passed &= test_division(dut, vcd, 12, 3);    // 12/3 = 4 rem 0
    all_tests_passed &= test_division(dut, vcd, 13, 5);    // 13/5 = 2 rem 3
    all_tests_passed &= test_division(dut, vcd, 200, 15);  // 200/15 = 13 rem 5
    all_tests_passed &= test_division(dut, vcd, 7, 9);     // 7/9 = 0 rem 7
    
    // Edge cases
    all_tests_passed &= test_division(dut, vcd, 0, 5);     // 0/5 = 0 rem 0
    all_tests_passed &= test_division(dut, vcd, 255, 1);   // 255/1 = 255 rem 0
    all_tests_passed &= test_division(dut, vcd, 1, 1);     // 1/1 = 1 rem 0
    all_tests_passed &= test_division(dut, vcd, 254, 255); // 254/255 = 0 rem 254
    
    // Division by zero
    all_tests_passed &= test_division(dut, vcd, 42, 0);    // 42/0 = error
    
    if (all_tests_passed) {
        std::cout << "\nAll division tests PASSED!" << std::endl;
    } else {
        std::cout << "\nSome division tests FAILED!" << std::endl;
    }
    
    vcd->close();
    delete dut;
    delete vcd;
    
    return all_tests_passed ? 0 : 1;
}