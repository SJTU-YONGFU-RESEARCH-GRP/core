#include <stdlib.h>
#include <iostream>
#include <vector>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vmemory_mapped_fifo.h"

#define MAX_SIM_TIME 1000
vluint64_t sim_time = 0;
vluint64_t posedge_cnt = 0;

// Test parameters
#define DATA_WIDTH 32
#define ADDR_WIDTH 4
#define FIFO_DEPTH (1 << ADDR_WIDTH)

// Memory-mapped register addresses
#define FIFO_DATA_REG     0x0  // Read: pop data, Write: push data
#define FIFO_STATUS_REG   0x4  // Read: FIFO status
#define FIFO_CONTROL_REG  0x8  // Write: control operations
#define FIFO_COUNT_REG    0xC  // Read: number of entries

// Control register bits
#define CTRL_RESET_BIT    0    // Reset FIFO
#define CTRL_FLUSH_BIT    1    // Flush FIFO

// Status register bits
#define STATUS_EMPTY_BIT      0
#define STATUS_FULL_BIT       1
#define STATUS_ALMOST_EMPTY_BIT 2
#define STATUS_ALMOST_FULL_BIT 3

void clock_cycle(Vmemory_mapped_fifo *dut, VerilatedVcdC *m_trace) {
    dut->clk = 0;
    dut->eval();
    sim_time++;
    m_trace->dump(sim_time);
    
    dut->clk = 1;
    dut->eval();
    sim_time++;
    m_trace->dump(sim_time);
    posedge_cnt++;
}

// Function to write to a memory-mapped register
void mem_write(Vmemory_mapped_fifo *dut, VerilatedVcdC *m_trace, uint32_t addr, uint32_t data) {
    dut->mem_valid = 1;
    dut->mem_write = 1;
    dut->mem_addr = addr;
    dut->mem_wdata = data;
    clock_cycle(dut, m_trace);
    
    // Wait for ready
    while (!dut->mem_ready) {
        clock_cycle(dut, m_trace);
    }
    
    dut->mem_valid = 0;
    dut->mem_write = 0;
    clock_cycle(dut, m_trace);
}

// Function to read from a memory-mapped register
uint32_t mem_read(Vmemory_mapped_fifo *dut, VerilatedVcdC *m_trace, uint32_t addr) {
    dut->mem_valid = 1;
    dut->mem_write = 0;
    dut->mem_addr = addr;
    clock_cycle(dut, m_trace);
    
    // Wait for ready
    while (!dut->mem_ready) {
        clock_cycle(dut, m_trace);
    }
    
    uint32_t result = dut->mem_rdata;
    
    dut->mem_valid = 0;
    clock_cycle(dut, m_trace);
    
    return result;
}

// Function to write data to the FIFO using external interface
bool ext_write_data(Vmemory_mapped_fifo *dut, VerilatedVcdC *m_trace, uint32_t data) {
    if (dut->ext_full) {
        return false;
    }
    
    dut->ext_wr_en = 1;
    dut->ext_wr_data = data;
    clock_cycle(dut, m_trace);
    dut->ext_wr_en = 0;
    clock_cycle(dut, m_trace);
    
    return true;
}

// Function to read data from the FIFO using external interface
bool ext_read_data(Vmemory_mapped_fifo *dut, VerilatedVcdC *m_trace, uint32_t &data) {
    if (dut->ext_empty) {
        return false;
    }
    
    dut->ext_rd_en = 1;
    clock_cycle(dut, m_trace);
    data = dut->ext_rd_data;
    dut->ext_rd_en = 0;
    clock_cycle(dut, m_trace);
    
    return true;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Vmemory_mapped_fifo *dut = new Vmemory_mapped_fifo;
    
    // Enable waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform_memory_mapped_fifo.vcd");
    
    // Initialize signals
    dut->clk = 0;
    dut->rst_n = 0;
    dut->mem_valid = 0;
    dut->mem_write = 0;
    dut->mem_addr = 0;
    dut->mem_wdata = 0;
    dut->ext_rd_en = 0;
    dut->ext_wr_en = 0;
    dut->ext_wr_data = 0;
    
    // Test tracking variables
    int total_tests = 0;
    int passed_tests = 0;
    bool global_test_pass = true;
    
    std::cout << "Starting Memory-Mapped FIFO test..." << std::endl;
    
    // Apply reset
    for (int i = 0; i < 5; i++) {
        clock_cycle(dut, m_trace);
    }
    dut->rst_n = 1;
    for (int i = 0; i < 2; i++) {
        clock_cycle(dut, m_trace);
    }
    
    // Test 1: Memory-mapped interface
    {
        total_tests++;
        std::cout << "Test 1: Memory-mapped interface" << std::endl;
        bool test_pass = true;
        
        // Check initial status
        uint32_t status = mem_read(dut, m_trace, FIFO_STATUS_REG);
        std::cout << "Initial status: 0x" << std::hex << status << std::dec << std::endl;
        std::cout << "  Empty: " << ((status >> STATUS_EMPTY_BIT) & 1) << std::endl;
        std::cout << "  Full: " << ((status >> STATUS_FULL_BIT) & 1) << std::endl;
        
        // Write data using memory-mapped interface
        std::vector<uint32_t> test_data;
        for (int i = 1; i <= 8; i++) {
            uint32_t data = i * 0x100 + i;
            test_data.push_back(data);
            
            std::cout << "Writing data via memory-mapped interface: 0x" << std::hex << data << std::dec << std::endl;
            mem_write(dut, m_trace, FIFO_DATA_REG, data);
        }
        
        // Check FIFO count
        uint32_t count = mem_read(dut, m_trace, FIFO_COUNT_REG);
        std::cout << "FIFO count after writes: " << (int)count << std::endl;
        
        // Read data using memory-mapped interface
        std::cout << "\nReading data via memory-mapped interface:" << std::endl;
        for (int i = 0; i < 4; i++) {
            uint32_t data = mem_read(dut, m_trace, FIFO_DATA_REG);
            std::cout << "Read data: 0x" << std::hex << data << std::dec;
            std::cout << " (Expected: 0x" << std::hex << test_data[i] << std::dec << ")" << std::endl;
            
            if (data != test_data[i]) {
                test_pass = false;
            }
        }
        
        // Check FIFO count again
        count = mem_read(dut, m_trace, FIFO_COUNT_REG);
        std::cout << "FIFO count after reads: " << (int)count << std::endl;
        
        if (test_pass) {
            passed_tests++;
            std::cout << "  PASS: Memory-mapped interface" << std::endl;
        } else {
            global_test_pass = false;
            std::cout << "  FAIL: Memory-mapped interface" << std::endl;
        }
    }
    
    // Test 2: External interface
    {
        total_tests++;
        std::cout << "\nTest 2: External interface" << std::endl;
        bool test_pass = true;
        
        // Read remaining data using external interface
        std::cout << "Reading remaining data via external interface:" << std::endl;
        std::vector<uint32_t> test_data = {0x505, 0x606, 0x707, 0x808};
        for (int i = 0; i < 4; i++) {
            uint32_t data;
            if (ext_read_data(dut, m_trace, data)) {
                std::cout << "Read data: 0x" << std::hex << data << std::dec;
                std::cout << " (Expected: 0x" << std::hex << test_data[i] << std::dec << ")" << std::endl;
                
                if (data != test_data[i]) {
                    test_pass = false;
                }
            } else {
                std::cout << "Failed to read data (FIFO empty)" << std::endl;
                test_pass = false;
                break;
            }
        }
        
        // Write data using external interface
        std::cout << "\nWriting data via external interface:" << std::endl;
        std::vector<uint32_t> write_data = {0xA00A, 0xB00B, 0xC00C, 0xD00D};
        for (uint32_t data : write_data) {
            if (ext_write_data(dut, m_trace, data)) {
                std::cout << "Wrote data: 0x" << std::hex << data << std::dec << std::endl;
            } else {
                std::cout << "Failed to write data (FIFO full)" << std::endl;
                test_pass = false;
                break;
            }
        }
        
        // Read data using memory-mapped interface
        std::cout << "\nReading data via memory-mapped interface:" << std::endl;
        for (uint32_t expected : write_data) {
            uint32_t data = mem_read(dut, m_trace, FIFO_DATA_REG);
            std::cout << "Read data: 0x" << std::hex << data << std::dec << std::endl;
            
            if (data != expected) {
                test_pass = false;
            }
        }
        
        if (test_pass) {
            passed_tests++;
            std::cout << "  PASS: External interface" << std::endl;
        } else {
            global_test_pass = false;
            std::cout << "  FAIL: External interface" << std::endl;
        }
    }
    
    // Test 3: Control operations
    {
        total_tests++;
        std::cout << "\nTest 3: Control operations" << std::endl;
        bool test_pass = true;
        
        // Write some data
        for (int i = 0; i < 4; i++) {
            mem_write(dut, m_trace, FIFO_DATA_REG, 0xDEADBEEF + i);
        }
        
        // Check count
        uint32_t count = mem_read(dut, m_trace, FIFO_COUNT_REG);
        std::cout << "FIFO count before flush: " << (int)count << std::endl;
        
        // Flush the FIFO
        std::cout << "Flushing FIFO..." << std::endl;
        mem_write(dut, m_trace, FIFO_CONTROL_REG, (1 << CTRL_FLUSH_BIT));
        
        // Check count again
        count = mem_read(dut, m_trace, FIFO_COUNT_REG);
        std::cout << "FIFO count after flush: " << (int)count << std::endl;
        
        if (count != 0) {
            test_pass = false;
        }
        
        // Write more data
        for (int i = 0; i < 4; i++) {
            mem_write(dut, m_trace, FIFO_DATA_REG, 0xCAFEBABE + i);
        }
        
        // Reset the FIFO
        std::cout << "Resetting FIFO..." << std::endl;
        mem_write(dut, m_trace, FIFO_CONTROL_REG, (1 << CTRL_RESET_BIT));
        
        // Check count again
        count = mem_read(dut, m_trace, FIFO_COUNT_REG);
        std::cout << "FIFO count after reset: " << (int)count << std::endl;
        
        if (count != 0) {
            test_pass = false;
        }
        
        if (test_pass) {
            passed_tests++;
            std::cout << "  PASS: Control operations" << std::endl;
        } else {
            global_test_pass = false;
            std::cout << "  FAIL: Control operations" << std::endl;
        }
    }
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (global_test_pass ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << passed_tests << " of " << total_tests << std::endl;
    
    // Cleanup
    m_trace->close();
    delete m_trace;
    delete dut;
    
    return global_test_pass ? 0 : 1;
} 