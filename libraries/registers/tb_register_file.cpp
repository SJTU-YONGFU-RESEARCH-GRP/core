#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vregister_file.h"

#define MAX_SIM_TIME 300
vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vregister_file* dut = new Vregister_file;
    
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    // Test tracking variables
    int total_tests = 5; // 5 test cases
    int passed_tests = 0;
    bool pass = true;
    
    // Initialize inputs
    dut->clk = 0;
    dut->rst_n = 0;
    dut->write_en = 0;
    dut->write_addr = 0;
    dut->write_data = 0;
    dut->read_en1 = 0;
    dut->read_addr1 = 0;
    dut->read_en2 = 0;
    dut->read_addr2 = 0;
    
    // Reset sequence
    for (int i = 0; i < 5; i++) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
    }
    dut->rst_n = 1;
    
    // Test case 1: Write to multiple registers
    std::cout << "Test Case 1: Write to Multiple Registers" << std::endl;
    
    // Write to register 0
    dut->write_en = 1;
    dut->write_addr = 0;
    dut->write_data = 0xAAAAAAAA;
    
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    
    // Write to register 1
    dut->write_addr = 1;
    dut->write_data = 0xBBBBBBBB;
    
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    
    // Write to register 2
    dut->write_addr = 2;
    dut->write_data = 0xCCCCCCCC;
    
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    
    // Write to register 31 (last register)
    dut->write_addr = 31;
    dut->write_data = 0xDDDDDDDD;
    
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    
    // Disable write
    dut->write_en = 0;
    
    // Test case 1 passes if we get here (no crashes)
    passed_tests++;
    
    // Test case 2: Read from port 1
    std::cout << "Test Case 2: Read from Port 1" << std::endl;
    dut->read_en1 = 1;
    
    bool test2_pass = true;
    
    // Read from register 0
    dut->read_addr1 = 0;
    
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    
    std::cout << "Read from register 0 (port 1): 0x" << std::hex << dut->read_data1 << std::dec << std::endl;
    if (dut->read_data1 != 0xAAAAAAAA) {
        test2_pass = false;
        std::cout << "ERROR: Expected 0xAAAAAAAA" << std::endl;
    }
    
    // Read from register 1
    dut->read_addr1 = 1;
    
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    
    std::cout << "Read from register 1 (port 1): 0x" << std::hex << dut->read_data1 << std::dec << std::endl;
    if (dut->read_data1 != 0xBBBBBBBB) {
        test2_pass = false;
        std::cout << "ERROR: Expected 0xBBBBBBBB" << std::endl;
    }
    
    // Read from register 31
    dut->read_addr1 = 31;
    
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    
    std::cout << "Read from register 31 (port 1): 0x" << std::hex << dut->read_data1 << std::dec << std::endl;
    if (dut->read_data1 != 0xDDDDDDDD) {
        test2_pass = false;
        std::cout << "ERROR: Expected 0xDDDDDDDD" << std::endl;
    }
    
    if (test2_pass) {
        passed_tests++;
    } else {
        pass = false;
    }
    
    // Test case 3: Read from port 2
    std::cout << "Test Case 3: Read from Port 2" << std::endl;
    dut->read_en2 = 1;
    
    // Read from register 2
    dut->read_addr2 = 2;
    
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    
    std::cout << "Read from register 2 (port 2): 0x" << std::hex << dut->read_data2 << std::dec << std::endl;
    
    if (dut->read_data2 == 0xCCCCCCCC) {
        passed_tests++;
    } else {
        pass = false;
        std::cout << "ERROR: Expected 0xCCCCCCCC" << std::endl;
    }
    
    // Test case 4: Simultaneous read from both ports
    std::cout << "Test Case 4: Simultaneous Read from Both Ports" << std::endl;
    dut->read_addr1 = 0;
    dut->read_addr2 = 1;
    
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    
    std::cout << "Read from register 0 (port 1): 0x" << std::hex << dut->read_data1 << std::dec << std::endl;
    std::cout << "Read from register 1 (port 2): 0x" << std::hex << dut->read_data2 << std::dec << std::endl;
    
    if (dut->read_data1 == 0xAAAAAAAA && dut->read_data2 == 0xBBBBBBBB) {
        passed_tests++;
    } else {
        pass = false;
        if (dut->read_data1 != 0xAAAAAAAA)
            std::cout << "ERROR: Expected 0xAAAAAAAA on port 1" << std::endl;
        if (dut->read_data2 != 0xBBBBBBBB)
            std::cout << "ERROR: Expected 0xBBBBBBBB on port 2" << std::endl;
    }
    
    // Test case 5: Write and read in the same cycle
    std::cout << "Test Case 5: Write and Read in the Same Cycle" << std::endl;
    dut->write_en = 1;
    dut->write_addr = 5;
    dut->write_data = 0xEEEEEEEE;
    dut->read_addr1 = 5;  // Read from the same address we're writing to
    
    // First clock cycle: write to register 5
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    
    // Second clock cycle: read from register 5
    dut->write_en = 0;
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    
    std::cout << "Read from register 5 after write (port 1): 0x" << std::hex << dut->read_data1 << std::dec << std::endl;
    
    if (dut->read_data1 == 0xEEEEEEEE) {
        passed_tests++;
    } else {
        pass = false;
        std::cout << "ERROR: Expected 0xEEEEEEEE" << std::endl;
    }
    
    // Print test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (pass ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << passed_tests << " of " << total_tests << std::endl;
    
    m_trace->close();
    delete dut;
    delete m_trace;
    
    return pass ? EXIT_SUCCESS : EXIT_FAILURE;
} 