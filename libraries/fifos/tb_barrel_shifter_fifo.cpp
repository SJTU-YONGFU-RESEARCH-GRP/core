#include <stdlib.h>
#include <iostream>
#include <vector>
#include <iomanip>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vbarrel_shifter_fifo.h"

#define MAX_SIM_TIME 1000
vluint64_t sim_time = 0;
vluint64_t posedge_cnt = 0;

// Test parameters
#define DATA_WIDTH 8
#define DEPTH 8
#define ADDR_WIDTH 3  // Log2 of DEPTH

// Clock tick function
void clock_tick(Vbarrel_shifter_fifo* dut, VerilatedVcdC* tfp) {
    dut->clk = 0;
    dut->eval();
    if (tfp) tfp->dump(sim_time++);
    
    dut->clk = 1;
    dut->eval();
    if (tfp) tfp->dump(sim_time++);
}

// Reset function
void reset(Vbarrel_shifter_fifo* dut, VerilatedVcdC* tfp) {
    dut->rst_n = 0;
    clock_tick(dut, tfp);
    dut->rst_n = 1;
    clock_tick(dut, tfp);
}

// Function to write data to the FIFO
bool write_data_to_fifo(Vbarrel_shifter_fifo *dut, VerilatedVcdC *m_trace, uint8_t data) {
    if (dut->full) {
        std::cout << "FIFO is full, cannot write" << std::endl;
        return false;
    }
    
    dut->wr_en = 1;
    dut->wr_data = data;
    clock_tick(dut, m_trace);
    dut->wr_en = 0;
    clock_tick(dut, m_trace);
    
    return true;
}

// Function to read data from the FIFO
bool read_data_from_fifo(Vbarrel_shifter_fifo *dut, VerilatedVcdC *m_trace, uint8_t &data) {
    if (dut->empty) {
        std::cout << "FIFO is empty, cannot read" << std::endl;
        return false;
    }
    
    data = dut->rd_data;  // Capture current head data
    dut->rd_en = 1;
    clock_tick(dut, m_trace);
    dut->rd_en = 0;
    clock_tick(dut, m_trace);
    
    return true;
}

// Function to rotate the FIFO
void rotate_fifo(Vbarrel_shifter_fifo *dut, VerilatedVcdC *m_trace, uint8_t amount, bool direction) {
    dut->rotate_en = 1;
    dut->rotate_amount = amount;
    dut->rotate_direction = direction;
    clock_tick(dut, m_trace);
    dut->rotate_en = 0;
    clock_tick(dut, m_trace);
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of the DUT
    Vbarrel_shifter_fifo* dut = new Vbarrel_shifter_fifo;
    
    // Enable waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("barrel_shifter_fifo_sim.vcd");
    
    // Test tracking variables
    int total_tests = 0;
    int passed_tests = 0;
    bool global_test_pass = true;
    
    // Test 1: Basic Write and Read
    {
        std::cout << "Test 1: Basic Write and Read" << std::endl;
        total_tests++;
        reset(dut, tfp);
        
        // Write multiple data
        std::vector<uint8_t> write_data = {0x11, 0x22, 0x33, 0x44};
        for (auto data : write_data) {
            if (!write_data_to_fifo(dut, tfp, data)) {
                std::cout << "Failed to write data: 0x" << std::hex << (int)data << std::endl;
                global_test_pass = false;
                break;
            }
        }
        
        // Read and verify data
        std::vector<uint8_t> read_data;
        for (size_t i = 0; i < write_data.size(); ++i) {
            uint8_t read_val;
            if (!read_data_from_fifo(dut, tfp, read_val)) {
                std::cout << "Failed to read data at index " << i << std::endl;
                global_test_pass = false;
                break;
            }
            read_data.push_back(read_val);
        }
        
        // Verify read data matches written data
        bool test_pass = (write_data == read_data);
        if (test_pass) {
            passed_tests++;
            std::cout << "  PASS: Basic write and read" << std::endl;
        } else {
            global_test_pass = false;
            std::cout << "  FAIL: Basic write and read" << std::endl;
            
            // Print detailed comparison
            std::cout << "  Written data: ";
            for (auto val : write_data) 
                std::cout << "0x" << std::hex << (int)val << " ";
            std::cout << std::endl;
            
            std::cout << "  Read data:    ";
            for (auto val : read_data) 
                std::cout << "0x" << std::hex << (int)val << " ";
            std::cout << std::endl;
        }
    }
    
    // Test 2: Rotation with Multiple Scenarios
    {
        std::cout << "\nTest 2: FIFO Rotation" << std::endl;
        
        // Test scenarios for rotation
        struct RotationTest {
            std::vector<uint8_t> initial_data;
            uint8_t rotate_amount;
            bool rotate_direction;
            std::vector<uint8_t> expected_result;
        };
        
        std::vector<RotationTest> rotation_tests = {
            // Left rotation by 1
            {
                {0x44, 0x55, 0x66, 0x77},  // Initial data
                1,                         // Rotate amount
                0,                         // Left rotation
                {0x55, 0x66, 0x77, 0x44}   // Expected result
            },
            // Right rotation by 1
            {
                {0x44, 0x55, 0x66, 0x77},  // Initial data
                1,                         // Rotate amount
                1,                         // Right rotation
                {0x77, 0x44, 0x55, 0x66}   // Expected result
            }
        };
        
        for (const auto& test_case : rotation_tests) {
            total_tests++;
            reset(dut, tfp);
            
            // Write initial data
            std::cout << "\nWriting initial data:" << std::endl;
            for (size_t i = 0; i < test_case.initial_data.size(); ++i) {
                if (!write_data_to_fifo(dut, tfp, test_case.initial_data[i])) {
                    std::cout << "Failed to write initial data" << std::endl;
                    global_test_pass = false;
                    break;
                }
                std::cout << "  Wrote: 0x" << std::hex << (int)test_case.initial_data[i] 
                          << ", Count: " << std::dec << (int)dut->data_count 
                          << ", Full: " << (dut->full ? "YES" : "NO")
                          << ", Empty: " << (dut->empty ? "YES" : "NO")
                          << ", WR_PTR: " << (int)dut->debug_wr_ptr
                          << ", RD_PTR: " << (int)dut->debug_rd_ptr << std::endl;
            }
            
            // Perform rotation
            std::cout << "\nPerforming rotation:" << std::endl;
            std::cout << "  Direction: " << (test_case.rotate_direction ? "Right" : "Left")
                      << ", Amount: " << (int)test_case.rotate_amount 
                      << ", Current Count: " << (int)dut->data_count << std::endl;
            
            rotate_fifo(dut, tfp, test_case.rotate_amount, test_case.rotate_direction);
            
            // Check rotation debug signal
            std::cout << "  Rotation Active: " << (dut->debug_rotation_active ? "YES" : "NO") << std::endl;
            
            // Read after rotation
            std::cout << "\nReading after rotation:" << std::endl;
            std::vector<uint8_t> read_after_rotation;
            for (int i = 0; i < test_case.initial_data.size(); ++i) {
                uint8_t read_val;
                if (!read_data_from_fifo(dut, tfp, read_val)) {
                    std::cout << "Failed to read data after rotation" << std::endl;
                    global_test_pass = false;
                    break;
                }
                read_after_rotation.push_back(read_val);
                std::cout << "  Read: 0x" << std::hex << (int)read_val 
                          << ", Count: " << std::dec << (int)dut->data_count 
                          << ", Full: " << (dut->full ? "YES" : "NO")
                          << ", Empty: " << (dut->empty ? "YES" : "NO")
                          << ", WR_PTR: " << (int)dut->debug_wr_ptr
                          << ", RD_PTR: " << (int)dut->debug_rd_ptr << std::endl;
            }
            
            // Validate rotation
            bool test_pass = (read_after_rotation == test_case.expected_result);
            
            std::cout << "\nValidation:" << std::endl;
            std::cout << "  Expected After Rotation: ";
            for (auto val : test_case.expected_result) 
                std::cout << "0x" << std::hex << (int)val << " ";
            std::cout << std::endl;
            
            std::cout << "  Actual After Rotation:   ";
            for (auto val : read_after_rotation) 
                std::cout << "0x" << std::hex << (int)val << " ";
            std::cout << std::endl;
            
            if (test_pass) {
                std::cout << "  PASS: Rotation successful" << std::endl;
                passed_tests++;
            } else {
                std::cout << "  FAIL: Rotation did not produce expected results" << std::endl;
                global_test_pass = false;
            }
        }
    }
    
    // Test 3: Full and Empty Conditions
    {
        std::cout << "\nTest 3: Full and Empty Conditions" << std::endl;
        total_tests++;
        reset(dut, tfp);
        
        // Fill FIFO to capacity
        std::cout << "Filling FIFO:" << std::endl;
        for (int i = 0; i < DEPTH; i++) {
            if (!write_data_to_fifo(dut, tfp, 0xA0 + i)) {
                std::cout << "Failed to fill FIFO at index " << i << std::endl;
                global_test_pass = false;
                break;
            }
        }
        
        // Check full condition
        bool test_pass = dut->full == 1;
        std::cout << "Full condition: " << (dut->full ? "FULL" : "NOT FULL") << std::endl;
        
        // Attempt to write when full
        dut->wr_en = 1;
        dut->wr_data = 0xFF;
        clock_tick(dut, tfp);
        test_pass &= dut->full == 1;
        
        // Read all data
        std::cout << "\nReading all data:" << std::endl;
        dut->wr_en = 0;
        dut->rd_en = 1;
        for (int i = 0; i < DEPTH; i++) {
            uint8_t read_val;
            if (!read_data_from_fifo(dut, tfp, read_val)) {
                std::cout << "Failed to read data at index " << i << std::endl;
                global_test_pass = false;
                break;
            }
        }
        
        // Check empty condition
        test_pass &= dut->empty == 1;
        std::cout << "Empty condition: " << (dut->empty ? "EMPTY" : "NOT EMPTY") << std::endl;
        
        if (test_pass) {
            passed_tests++;
            std::cout << "  PASS: Full and Empty Conditions" << std::endl;
        } else {
            global_test_pass = false;
            std::cout << "  FAIL: Full and Empty Conditions" << std::endl;
        }
    }
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (global_test_pass ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << passed_tests << " of " << total_tests << std::endl;
    
    // Cleanup
    tfp->close();
    delete tfp;
    delete dut;
    
    return global_test_pass ? 0 : 1;
} 