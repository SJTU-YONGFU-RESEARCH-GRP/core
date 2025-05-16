#include <iostream>
#include <verilated.h>
#include "Vbist_controller.h"
#include <verilated_vcd_c.h>
#include <cstdint>
#include <memory>
#include <vector>

// Simple memory model for BIST testing
class MemoryModel {
private:
    static const int SIZE = 32; // Reduced size for faster testing (5-bit address)
    std::vector<uint32_t> mem;
    bool inject_error;
    uint32_t error_addr;
    uint32_t error_data;
    
public:
    MemoryModel() : mem(SIZE, 0), inject_error(false), error_addr(0), error_data(0) {}
    
    uint32_t read(uint32_t addr) {
        if (inject_error && addr == error_addr) {
            return error_data; // Return injected error data
        }
        
        if (addr < SIZE) {
            return mem[addr];
        }
        return 0xFFFFFFFF; // Invalid read
    }
    
    void write(uint32_t addr, uint32_t data) {
        if (addr < SIZE) {
            mem[addr] = data;
        }
    }
    
    // Method to inject errors for testing error detection
    void injectError(uint32_t addr, uint32_t data) {
        if (addr < SIZE) {
            inject_error = true;
            error_addr = addr;
            error_data = data;
            std::cout << "  Injected error at address " << addr << " with data 0x" << std::hex << data << std::dec << std::endl;
        }
    }
    
    void clearErrors() {
        inject_error = false;
    }
};

// Single clock tick function
void tickClock(Vbist_controller* bist, VerilatedVcdC* tfp, uint64_t& tickcount) {
    bist->clk = 1;
    bist->eval();
    if (tfp) tfp->dump(tickcount * 10 + 5);
    
    bist->clk = 0;
    bist->eval();
    if (tfp) tfp->dump(tickcount * 10 + 10);
    
    tickcount++;
}

// Wait for a specific condition
template<typename Func>
bool waitFor(Vbist_controller* bist, VerilatedVcdC* tfp, uint64_t& tickcount, Func condition, int timeout = 10000) {
    for (int i = 0; i < timeout; i++) {
        if (condition()) {
            return true;
        }
        tickClock(bist, tfp, tickcount);
    }
    return false;
}

// Main testbench
int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of the model
    Vbist_controller* bist = new Vbist_controller;
    
    // Create tracing file if requested
    VerilatedVcdC* tfp = nullptr;
    Verilated::traceEverOn(true);
    tfp = new VerilatedVcdC;
    bist->trace(tfp, 99);
    tfp->open("bist_controller.vcd");
    
    // Create memory model
    MemoryModel mem;
    
    // Initialize signals
    bist->clk = 0;
    bist->rst_n = 0;
    bist->bist_start = 0;
    bist->mem_rdata = 0;
    
    // Test tracking
    int total_tests = 4;
    int passed_tests = 0;
    uint64_t tickcount = 0;
    
    // Dump initial values
    if (tfp) tfp->dump(0);
    
    // Reset sequence
    bist->eval();
    bist->rst_n = 0;
    for (int i = 0; i < 5; i++) {
        tickClock(bist, tfp, tickcount);
    }
    bist->rst_n = 1;
    tickClock(bist, tfp, tickcount);
    
    std::cout << "Starting BIST controller tests..." << std::endl;
    
    // TEST 1: Normal operation without errors
    bool test1_passed = true;
    std::cout << "Test 1: Normal operation without errors" << std::endl;
    
    // Start BIST
    bist->bist_start = 1;
    tickClock(bist, tfp, tickcount);
    bist->bist_start = 0;
    
    // Run until BIST is done or timeout
    int timeout = 10000;
    int count = 0;
    while (!bist->bist_done && count < timeout) {
        if (bist->mem_enable) {
            if (bist->mem_write) {
                // Write operation
                mem.write(bist->mem_addr, bist->mem_wdata);
            } else {
                // Read operation
                bist->mem_rdata = mem.read(bist->mem_addr);
            }
        }
        tickClock(bist, tfp, tickcount);
        count++;
    }
    
    // Check results
    if (bist->bist_done && bist->bist_pass && bist->error_count == 0) {
        std::cout << "  Pass: BIST completed successfully with no errors" << std::endl;
        passed_tests++;
    } else if (count >= timeout) {
        std::cout << "  Fail: BIST timed out" << std::endl;
        test1_passed = false;
    } else {
        std::cout << "  Fail: BIST should have passed but didn't" << std::endl;
        test1_passed = false;
    }
    
    // Reset for next test
    bist->rst_n = 0;
    for (int i = 0; i < 5; i++) {
        tickClock(bist, tfp, tickcount);
    }
    bist->rst_n = 1;
    tickClock(bist, tfp, tickcount);
    
    // TEST 2: Operation with a single error
    bool test2_passed = true;
    std::cout << "Test 2: Operation with a single error" << std::endl;
    
    // Initialize all memory to 0
    for (int i = 0; i < 32; i++) {
        mem.write(i, 0);
    }
    
    // Inject an error - when we read address 5, return 0xFFFFFFFF instead of 0
    mem.injectError(5, 0xFFFFFFFF);
    
    // Start BIST
    bist->bist_start = 1;
    tickClock(bist, tfp, tickcount);
    bist->bist_start = 0;
    
    // Run until BIST is done or timeout
    count = 0;
    while (!bist->bist_done && count < timeout) {
        if (bist->mem_enable) {
            if (bist->mem_write) {
                // Write operation
                mem.write(bist->mem_addr, bist->mem_wdata);
            } else {
                // Read operation
                bist->mem_rdata = mem.read(bist->mem_addr);
            }
        }
        tickClock(bist, tfp, tickcount);
        count++;
    }
    
    // Check results
    if (bist->bist_done && !bist->bist_pass && bist->error_count > 0) {
        std::cout << "  Pass: BIST correctly detected errors" << std::endl;
        std::cout << "  Error count: " << bist->error_count << std::endl;
        passed_tests++;
    } else if (count >= timeout) {
        std::cout << "  Fail: BIST timed out" << std::endl;
        test2_passed = false;
    } else {
        std::cout << "  Fail: BIST should have detected errors but didn't" << std::endl;
        test2_passed = false;
    }
    
    // Reset for next test
    bist->rst_n = 0;
    mem.clearErrors();
    for (int i = 0; i < 5; i++) {
        tickClock(bist, tfp, tickcount);
    }
    bist->rst_n = 1;
    tickClock(bist, tfp, tickcount);
    
    // TEST 3: Reset during operation
    bool test3_passed = true;
    std::cout << "Test 3: Reset during operation" << std::endl;
    
    // Clean memory
    for (int i = 0; i < 32; i++) {
        mem.write(i, 0);
    }
    
    // Start BIST
    bist->bist_start = 1;
    tickClock(bist, tfp, tickcount);
    bist->bist_start = 0;
    
    // Run for a while
    for (int i = 0; i < 50; i++) {
        if (bist->mem_enable) {
            if (bist->mem_write) {
                mem.write(bist->mem_addr, bist->mem_wdata);
            } else {
                bist->mem_rdata = mem.read(bist->mem_addr);
            }
        }
        tickClock(bist, tfp, tickcount);
    }
    
    // Reset in the middle
    bist->rst_n = 0;
    for (int i = 0; i < 5; i++) {
        tickClock(bist, tfp, tickcount);
    }
    bist->rst_n = 1;
    tickClock(bist, tfp, tickcount);
    
    // Verify reset state
    if (bist->bist_done == 0 && bist->mem_enable == 0) {
        std::cout << "  Pass: BIST correctly reset to idle state" << std::endl;
        passed_tests++;
    } else {
        std::cout << "  Fail: BIST didn't reset properly" << std::endl;
        test3_passed = false;
    }
    
    // TEST 4: Multiple consecutive runs
    bool test4_passed = true;
    std::cout << "Test 4: Multiple consecutive runs" << std::endl;
    
    // First run
    bist->bist_start = 1;
    tickClock(bist, tfp, tickcount);
    bist->bist_start = 0;
    
    // Run until BIST is done or timeout
    count = 0;
    while (!bist->bist_done && count < timeout) {
        if (bist->mem_enable) {
            if (bist->mem_write) {
                mem.write(bist->mem_addr, bist->mem_wdata);
            } else {
                bist->mem_rdata = mem.read(bist->mem_addr);
            }
        }
        tickClock(bist, tfp, tickcount);
        count++;
    }
    
    if (count >= timeout) {
        std::cout << "  Fail: First BIST run timed out" << std::endl;
        test4_passed = false;
    } else {
        // Start second run immediately
        bist->bist_start = 1;
        tickClock(bist, tfp, tickcount);
        bist->bist_start = 0;
        
        // Run until BIST is done or timeout
        count = 0;
        while (!bist->bist_done && count < timeout) {
            if (bist->mem_enable) {
                if (bist->mem_write) {
                    mem.write(bist->mem_addr, bist->mem_wdata);
                } else {
                    bist->mem_rdata = mem.read(bist->mem_addr);
                }
            }
            tickClock(bist, tfp, tickcount);
            count++;
        }
        
        // Check results
        if (bist->bist_done && bist->bist_pass && bist->error_count == 0) {
            std::cout << "  Pass: Multiple consecutive BIST runs completed successfully" << std::endl;
            passed_tests++;
        } else if (count >= timeout) {
            std::cout << "  Fail: Second BIST run timed out" << std::endl;
            test4_passed = false;
        } else {
            std::cout << "  Fail: Multiple consecutive BIST runs failed" << std::endl;
            test4_passed = false;
        }
    }
    
    // Print test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (passed_tests == total_tests ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << passed_tests << " of " << total_tests << std::endl;
    
    // Cleanup
    if (tfp) {
        tfp->close();
        delete tfp;
    }
    
    delete bist;
    
    return 0;
}
