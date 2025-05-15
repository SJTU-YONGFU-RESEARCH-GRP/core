#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vparameterized_cam.h"

#define SIM_TIME 100

void tick(int tickcount, Vparameterized_cam *tb, VerilatedVcdC *tfp) {
    tb->eval();
    if (tfp)
        tfp->dump(tickcount * 10 - 2);
    tb->clk = 1;
    tb->eval();
    if (tfp)
        tfp->dump(tickcount * 10);
    tb->clk = 0;
    tb->eval();
    if (tfp)
        tfp->dump(tickcount * 10 + 5);
}

int main(int argc, char **argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of the test bench
    Vparameterized_cam *tb = new Vparameterized_cam;
    
    // Initialize VCD tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    tb->trace(tfp, 99);
    tfp->open("parameterized_cam.vcd");
    
    // Initialize simulation inputs
    tb->clk = 0;
    tb->rst_n = 0;
    tb->write_enable = 0;
    tb->write_addr = 0;
    tb->write_data = 0;
    tb->compare_enable = 0;
    tb->compare_data = 0;
    
    // Reset the design
    for (int i = 0; i < 5; i++) {
        tick(i + 1, tb, tfp);
    }
    tb->rst_n = 1;
    
    // Define test parameters
    const int DATA_WIDTH = 8;
    const int ADDR_WIDTH = 4;
    const int NUM_ENTRIES = 16;
    
    int tickcount = 5;
    int tests_passed = 0;
    int total_tests = 5;
    
    std::cout << "Parameterized CAM Testbench Starting...\n";
    
    // Test 1: Write some data to the CAM
    std::cout << "Writing test data to CAM...\n";
    for (int i = 0; i < 8; i++) {
        // Write data (addr = i, data = i*10)
        tb->write_enable = 1;
        tb->write_addr = i;
        tb->write_data = i * 10;
        tick(++tickcount, tb, tfp);
    }
    tb->write_enable = 0;
    
    // Test 2: Compare data that exists in the CAM
    std::cout << "Testing matches on existing data...\n";
    
    // Should match at address 3 (data = 30)
    tb->compare_enable = 1;
    tb->compare_data = 30;
    tick(++tickcount, tb, tfp);
    
    if (tb->match && tb->valid && tb->match_addr == 3) {
        std::cout << "PASS: Found match for data=30 at address=" << +tb->match_addr << std::endl;
        tests_passed++;
    } else {
        std::cout << "FAIL: Match for data=30 not found or incorrect address. ";
        std::cout << "match=" << +tb->match << ", valid=" << +tb->valid;
        std::cout << ", match_addr=" << +tb->match_addr << std::endl;
    }
    
    // Should match at address 5 (data = 50)
    tb->compare_data = 50;
    tick(++tickcount, tb, tfp);
    
    if (tb->match && tb->valid && tb->match_addr == 5) {
        std::cout << "PASS: Found match for data=50 at address=" << +tb->match_addr << std::endl;
        tests_passed++;
    } else {
        std::cout << "FAIL: Match for data=50 not found or incorrect address. ";
        std::cout << "match=" << +tb->match << ", valid=" << +tb->valid;
        std::cout << ", match_addr=" << +tb->match_addr << std::endl;
    }
    
    // Test 3: Compare data that doesn't exist
    std::cout << "Testing non-matches...\n";
    tb->compare_data = 25; // This value doesn't exist
    tick(++tickcount, tb, tfp);
    
    if (!tb->match && tb->valid) {
        std::cout << "PASS: Correctly reported no match for data=25\n";
        tests_passed++;
    } else {
        std::cout << "FAIL: Incorrectly found match for data=25. ";
        std::cout << "match=" << +tb->match << ", valid=" << +tb->valid;
        std::cout << ", match_addr=" << +tb->match_addr << std::endl;
    }
    
    // Test 4: Write duplicate data and test priority
    std::cout << "Testing priority encoding...\n";
    
    // Write duplicate data (addr = 10, data = 30) - now 30 is at both address 3 and 10
    tb->compare_enable = 0;
    tb->write_enable = 1;
    tb->write_addr = 10;
    tb->write_data = 30;
    tick(++tickcount, tb, tfp);
    tb->write_enable = 0;
    
    // Should match at address 3 (lowest addr)
    tb->compare_enable = 1;
    tb->compare_data = 30;
    tick(++tickcount, tb, tfp);
    
    if (tb->match && tb->valid && tb->match_addr == 3) {
        std::cout << "PASS: Priority encoding - matched data=30 at lowest address=" << +tb->match_addr << std::endl;
        tests_passed++;
    } else {
        std::cout << "FAIL: Priority encoding - expected match at address 3 for data=30. ";
        std::cout << "match=" << +tb->match << ", valid=" << +tb->valid;
        std::cout << ", match_addr=" << +tb->match_addr << std::endl;
    }
    
    // Test 5: Disable compare and check valid goes low
    std::cout << "Testing compare disable...\n";
    tb->compare_enable = 0;
    tick(++tickcount, tb, tfp);
    
    if (!tb->valid) {
        std::cout << "PASS: Valid signal went low when compare_enable=0\n";
        tests_passed++;
    } else {
        std::cout << "FAIL: Valid signal stayed high when compare_enable=0\n";
    }
    
    // Cleanup
    tick(++tickcount, tb, tfp);
    tfp->close();
    delete tfp;
    delete tb;
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (tests_passed == total_tests ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << tests_passed << " of " << total_tests << std::endl;
    
    return 0;
} 