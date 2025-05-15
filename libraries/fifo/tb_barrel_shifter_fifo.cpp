#include <stdlib.h>
#include <iostream>
#include <vector>
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

void clock_cycle(Vbarrel_shifter_fifo *dut, VerilatedVcdC *m_trace) {
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

// Function to write data to the FIFO
bool write_data(Vbarrel_shifter_fifo *dut, VerilatedVcdC *m_trace, uint8_t data) {
    if (dut->full) {
        return false;
    }
    
    dut->wr_en = 1;
    dut->wr_data = data;
    clock_cycle(dut, m_trace);
    dut->wr_en = 0;
    clock_cycle(dut, m_trace);
    
    return true;
}

// Function to read data from the FIFO
bool read_data(Vbarrel_shifter_fifo *dut, VerilatedVcdC *m_trace, uint8_t &data) {
    if (dut->empty) {
        return false;
    }
    
    data = dut->rd_data;  // Capture current head data
    dut->rd_en = 1;
    clock_cycle(dut, m_trace);
    dut->rd_en = 0;
    clock_cycle(dut, m_trace);
    
    return true;
}

// Function to rotate the FIFO
void rotate_fifo(Vbarrel_shifter_fifo *dut, VerilatedVcdC *m_trace, uint8_t amount, bool direction) {
    dut->rotate_en = 1;
    dut->rotate_amount = amount;
    dut->rotate_direction = direction;
    clock_cycle(dut, m_trace);
    dut->rotate_en = 0;
    clock_cycle(dut, m_trace);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Vbarrel_shifter_fifo *dut = new Vbarrel_shifter_fifo;
    
    // Enable waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform_barrel_shifter_fifo.vcd");
    
    // Initialize signals
    dut->clk = 0;
    dut->rst_n = 0;
    dut->wr_en = 0;
    dut->rd_en = 0;
    dut->rotate_en = 0;
    dut->rotate_amount = 0;
    dut->rotate_direction = 0;
    dut->wr_data = 0;
    
    // Apply reset
    for (int i = 0; i < 5; i++) {
        clock_cycle(dut, m_trace);
    }
    dut->rst_n = 1;
    for (int i = 0; i < 2; i++) {
        clock_cycle(dut, m_trace);
    }
    
    std::cout << "Starting Barrel Shifter FIFO test..." << std::endl;
    
    // Test 1: Basic write and read operations
    std::cout << "Test 1: Basic write and read operations" << std::endl;
    std::vector<uint8_t> test_data;
    
    // Write data to the FIFO
    for (int i = 1; i <= 6; i++) {
        uint8_t data = i * 0x10 + i;
        test_data.push_back(data);
        
        if (write_data(dut, m_trace, data)) {
            std::cout << "Wrote data: 0x" << std::hex << (int)data << std::dec;
            std::cout << " (data_count=" << (int)dut->data_count << ")" << std::endl;
        } else {
            std::cout << "Failed to write data: 0x" << std::hex << (int)data << std::dec << " (FIFO full)" << std::endl;
        }
    }
    
    // Read data from the FIFO
    std::cout << "\nReading data:" << std::endl;
    for (int i = 0; i < 3; i++) {
        uint8_t data;
        if (read_data(dut, m_trace, data)) {
            std::cout << "Read data: 0x" << std::hex << (int)data << std::dec;
            std::cout << " (Expected: 0x" << std::hex << (int)test_data[i] << std::dec << ")";
            std::cout << " (data_count=" << (int)dut->data_count << ")" << std::endl;
        } else {
            std::cout << "Failed to read data (FIFO empty)" << std::endl;
        }
    }
    
    // Test 2: Rotate left
    std::cout << "\nTest 2: Rotate left" << std::endl;
    
    // Check current head data
    std::cout << "Current head data: 0x" << std::hex << (int)dut->rd_data << std::dec;
    std::cout << " (Expected: 0x" << std::hex << (int)test_data[3] << std::dec << ")" << std::endl;
    
    // Rotate left by 2 positions
    std::cout << "Rotating left by 2 positions..." << std::endl;
    rotate_fifo(dut, m_trace, 2, 0);  // 0 = left
    
    // Check new head data after rotation
    std::cout << "New head data after left rotation: 0x" << std::hex << (int)dut->rd_data << std::dec;
    std::cout << " (Expected: 0x" << std::hex << (int)test_data[5] << std::dec << ")" << std::endl;
    
    // Read data after rotation
    std::cout << "\nReading data after left rotation:" << std::endl;
    for (int i = 0; i < 3; i++) {
        uint8_t data;
        if (read_data(dut, m_trace, data)) {
            std::cout << "Read data: 0x" << std::hex << (int)data << std::dec;
            std::cout << " (data_count=" << (int)dut->data_count << ")" << std::endl;
        } else {
            std::cout << "Failed to read data (FIFO empty)" << std::endl;
        }
    }
    
    // Test 3: Rotate right
    std::cout << "\nTest 3: Rotate right" << std::endl;
    
    // Ensure FIFO has data to work with
    for (int i = 0xA1; i <= 0xA4; i++) {
        write_data(dut, m_trace, i);
    }
    
    // Check current head data
    std::cout << "Current head data: 0x" << std::hex << (int)dut->rd_data << std::dec << std::endl;
    
    // Rotate right by 1 position
    std::cout << "Rotating right by 1 position..." << std::endl;
    rotate_fifo(dut, m_trace, 1, 1);  // 1 = right
    
    // Check new head data after rotation
    std::cout << "New head data after right rotation: 0x" << std::hex << (int)dut->rd_data << std::dec << std::endl;
    
    // Read data after rotation
    std::cout << "\nReading data after right rotation:" << std::endl;
    for (int i = 0; i < 3; i++) {
        uint8_t data;
        if (read_data(dut, m_trace, data)) {
            std::cout << "Read data: 0x" << std::hex << (int)data << std::dec;
            std::cout << " (data_count=" << (int)dut->data_count << ")" << std::endl;
        } else {
            std::cout << "Failed to read data (FIFO empty)" << std::endl;
        }
    }
    
    // Test 4: Operate at edge conditions
    std::cout << "\nTest 4: Operation at edge conditions" << std::endl;
    
    // Reset FIFO
    dut->rst_n = 0;
    for (int i = 0; i < 5; i++) {
        clock_cycle(dut, m_trace);
    }
    dut->rst_n = 1;
    for (int i = 0; i < 2; i++) {
        clock_cycle(dut, m_trace);
    }
    
    // Try to rotate empty FIFO
    std::cout << "Trying to rotate empty FIFO..." << std::endl;
    rotate_fifo(dut, m_trace, 2, 0);
    
    // Fill FIFO to capacity
    std::cout << "Filling FIFO to capacity..." << std::endl;
    for (int i = 0; i < DEPTH; i++) {
        uint8_t data = 0xB0 + i;
        if (write_data(dut, m_trace, data)) {
            std::cout << "Wrote data: 0x" << std::hex << (int)data << std::dec;
            std::cout << " (data_count=" << (int)dut->data_count << ")" << std::endl;
        } else {
            std::cout << "Failed to write data: 0x" << std::hex << (int)data << std::dec << " (FIFO full)" << std::endl;
        }
    }
    
    // Try to write to full FIFO
    std::cout << "Trying to write to full FIFO..." << std::endl;
    if (!write_data(dut, m_trace, 0xFF)) {
        std::cout << "Write correctly failed on full FIFO" << std::endl;
    }
    
    // Rotate full FIFO
    std::cout << "Rotating full FIFO by 3 positions left..." << std::endl;
    rotate_fifo(dut, m_trace, 3, 0);
    
    // Read all data after rotation
    std::cout << "\nReading all data after rotation of full FIFO:" << std::endl;
    for (int i = 0; i < DEPTH; i++) {
        uint8_t data;
        if (read_data(dut, m_trace, data)) {
            std::cout << "Read data: 0x" << std::hex << (int)data << std::dec;
            std::cout << " (Expected in rotated order)" << std::endl;
        } else {
            std::cout << "Failed to read data (FIFO empty)" << std::endl;
        }
    }
    
    // Try to read from empty FIFO
    std::cout << "Trying to read from empty FIFO..." << std::endl;
    uint8_t dummy_data;
    if (!read_data(dut, m_trace, dummy_data)) {
        std::cout << "Read correctly failed on empty FIFO" << std::endl;
    }
    
    std::cout << "\nBarrel Shifter FIFO test completed!" << std::endl;
    
    // Cleanup
    m_trace->close();
    delete m_trace;
    delete dut;
    
    return 0;
} 