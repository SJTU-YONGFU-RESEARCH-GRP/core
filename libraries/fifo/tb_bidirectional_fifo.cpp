#include <stdlib.h>
#include <iostream>
#include <vector>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vbidirectional_fifo.h"

#define MAX_SIM_TIME 1000
vluint64_t sim_time = 0;
vluint64_t posedge_cnt = 0;

// Test parameters
#define DATA_WIDTH 8
#define ADDR_WIDTH 4
#define FIFO_DEPTH (1 << ADDR_WIDTH)

void clock_cycle(Vbidirectional_fifo *dut, VerilatedVcdC *m_trace) {
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

// Function to write data from port A to B
bool write_a_to_b(Vbidirectional_fifo *dut, VerilatedVcdC *m_trace, uint8_t data) {
    if (dut->b_full) {
        return false;
    }
    
    dut->a_wr_en = 1;
    dut->a_wr_data = data;
    clock_cycle(dut, m_trace);
    dut->a_wr_en = 0;
    
    return true;
}

// Function to write data from port B to A
bool write_b_to_a(Vbidirectional_fifo *dut, VerilatedVcdC *m_trace, uint8_t data) {
    if (dut->a_full) {
        return false;
    }
    
    dut->b_wr_en = 1;
    dut->b_wr_data = data;
    clock_cycle(dut, m_trace);
    dut->b_wr_en = 0;
    
    return true;
}

// Function to read data at port A (from B to A direction)
bool read_at_a(Vbidirectional_fifo *dut, VerilatedVcdC *m_trace, uint8_t &data) {
    if (dut->a_empty) {
        return false;
    }
    
    dut->a_rd_en = 1;
    clock_cycle(dut, m_trace);
    data = dut->a_rd_data;
    dut->a_rd_en = 0;
    clock_cycle(dut, m_trace);  // Extra cycle to account for registered output
    
    return true;
}

// Function to read data at port B (from A to B direction)
bool read_at_b(Vbidirectional_fifo *dut, VerilatedVcdC *m_trace, uint8_t &data) {
    if (dut->b_empty) {
        return false;
    }
    
    dut->b_rd_en = 1;
    clock_cycle(dut, m_trace);
    data = dut->b_rd_data;
    dut->b_rd_en = 0;
    clock_cycle(dut, m_trace);  // Extra cycle to account for registered output
    
    return true;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Vbidirectional_fifo *dut = new Vbidirectional_fifo;
    
    // Enable waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    // Initialize signals
    dut->clk = 0;
    dut->rst_n = 0;
    dut->a_wr_en = 0;
    dut->a_rd_en = 0;
    dut->b_wr_en = 0;
    dut->b_rd_en = 0;
    dut->a_wr_data = 0;
    dut->b_wr_data = 0;
    
    // Apply reset
    for (int i = 0; i < 5; i++) {
        clock_cycle(dut, m_trace);
    }
    dut->rst_n = 1;
    for (int i = 0; i < 2; i++) {
        clock_cycle(dut, m_trace);
    }
    
    std::cout << "Starting Bidirectional FIFO test..." << std::endl;
    
    // Test 1: A to B direction
    std::cout << "Test 1: A to B direction" << std::endl;
    std::vector<uint8_t> a_to_b_data;
    
    // Write data from A to B
    for (int i = 1; i <= FIFO_DEPTH; i++) {
        uint8_t data = i;
        a_to_b_data.push_back(data);
        
        if (write_a_to_b(dut, m_trace, data)) {
            std::cout << "Wrote A->B data: " << (int)data;
            std::cout << " (a_to_b_count=" << (int)dut->a_to_b_count << ")" << std::endl;
        } else {
            std::cout << "Failed to write A->B data: " << (int)data << " (FIFO full)" << std::endl;
        }
    }
    
    // Read data at B
    std::cout << "\nReading data at B port:" << std::endl;
    for (int i = 0; i < FIFO_DEPTH; i++) {
        uint8_t data;
        if (read_at_b(dut, m_trace, data)) {
            std::cout << "Read at B: " << (int)data;
            std::cout << " (Expected: " << (int)a_to_b_data[i] << ")";
            std::cout << " (a_to_b_count=" << (int)dut->a_to_b_count << ")" << std::endl;
        } else {
            std::cout << "Failed to read at B (FIFO empty)" << std::endl;
        }
    }
    
    // Test 2: B to A direction
    std::cout << "\nTest 2: B to A direction" << std::endl;
    std::vector<uint8_t> b_to_a_data;
    
    // Write data from B to A
    for (int i = 101; i <= 100 + FIFO_DEPTH; i++) {
        uint8_t data = i;
        b_to_a_data.push_back(data);
        
        if (write_b_to_a(dut, m_trace, data)) {
            std::cout << "Wrote B->A data: " << (int)data;
            std::cout << " (b_to_a_count=" << (int)dut->b_to_a_count << ")" << std::endl;
        } else {
            std::cout << "Failed to write B->A data: " << (int)data << " (FIFO full)" << std::endl;
        }
    }
    
    // Read data at A
    std::cout << "\nReading data at A port:" << std::endl;
    for (int i = 0; i < FIFO_DEPTH; i++) {
        uint8_t data;
        if (read_at_a(dut, m_trace, data)) {
            std::cout << "Read at A: " << (int)data;
            std::cout << " (Expected: " << (int)b_to_a_data[i] << ")";
            std::cout << " (b_to_a_count=" << (int)dut->b_to_a_count << ")" << std::endl;
        } else {
            std::cout << "Failed to read at A (FIFO empty)" << std::endl;
        }
    }
    
    // Test 3: Bidirectional simultaneous operation
    std::cout << "\nTest 3: Bidirectional simultaneous operation" << std::endl;
    a_to_b_data.clear();
    b_to_a_data.clear();
    
    // Perform simultaneous writes in both directions
    for (int i = 0; i < FIFO_DEPTH/2; i++) {
        uint8_t a_data = 50 + i;
        uint8_t b_data = 150 + i;
        
        a_to_b_data.push_back(a_data);
        b_to_a_data.push_back(b_data);
        
        // Set up both write enables
        dut->a_wr_en = 1;
        dut->a_wr_data = a_data;
        dut->b_wr_en = 1;
        dut->b_wr_data = b_data;
        
        // Perform clock cycle
        clock_cycle(dut, m_trace);
        
        // Clear write enables
        dut->a_wr_en = 0;
        dut->b_wr_en = 0;
        
        std::cout << "Simultaneous write: A->B=" << (int)a_data << ", B->A=" << (int)b_data;
        std::cout << " (a_to_b_count=" << (int)dut->a_to_b_count;
        std::cout << ", b_to_a_count=" << (int)dut->b_to_a_count << ")" << std::endl;
    }
    
    // Perform simultaneous reads from both directions
    std::cout << "\nSimultaneous reads:" << std::endl;
    for (int i = 0; i < FIFO_DEPTH/2; i++) {
        uint8_t a_data, b_data;
        
        // Set up both read enables
        dut->a_rd_en = 1;
        dut->b_rd_en = 1;
        
        // Perform clock cycle
        clock_cycle(dut, m_trace);
        
        // Capture data
        a_data = dut->a_rd_data;
        b_data = dut->b_rd_data;
        
        // Clear read enables
        dut->a_rd_en = 0;
        dut->b_rd_en = 0;
        
        // Extra cycle for registered output
        clock_cycle(dut, m_trace);
        
        std::cout << "Simultaneous read: at A=" << (int)a_data;
        std::cout << " (Expected: " << (int)b_to_a_data[i] << ")";
        std::cout << ", at B=" << (int)b_data;
        std::cout << " (Expected: " << (int)a_to_b_data[i] << ")";
        std::cout << " (a_to_b_count=" << (int)dut->a_to_b_count;
        std::cout << ", b_to_a_count=" << (int)dut->b_to_a_count << ")" << std::endl;
    }
    
    // Test 4: Check almost_full and almost_empty flags
    std::cout << "\nTest 4: Check almost_full and almost_empty flags" << std::endl;
    
    // Fill A to B direction to almost full
    while (!dut->b_almost_full) {
        write_a_to_b(dut, m_trace, 200);
    }
    
    std::cout << "A->B almost full: a_to_b_count=" << (int)dut->a_to_b_count 
              << ", b_almost_full=" << (int)dut->b_almost_full << std::endl;
    
    // Fill B to A direction to almost full
    while (!dut->a_almost_full) {
        write_b_to_a(dut, m_trace, 200);
    }
    
    std::cout << "B->A almost full: b_to_a_count=" << (int)dut->b_to_a_count 
              << ", a_almost_full=" << (int)dut->a_almost_full << std::endl;
    
    // Read from B until almost empty
    while (!dut->b_almost_empty) {
        uint8_t data;
        read_at_b(dut, m_trace, data);
    }
    
    std::cout << "A->B almost empty: a_to_b_count=" << (int)dut->a_to_b_count 
              << ", b_almost_empty=" << (int)dut->b_almost_empty << std::endl;
    
    // Read from A until almost empty
    while (!dut->a_almost_empty) {
        uint8_t data;
        read_at_a(dut, m_trace, data);
    }
    
    std::cout << "B->A almost empty: b_to_a_count=" << (int)dut->b_to_a_count 
              << ", a_almost_empty=" << (int)dut->a_almost_empty << std::endl;
    
    std::cout << "\nBidirectional FIFO test completed successfully!" << std::endl;
    
    // Cleanup
    m_trace->close();
    delete m_trace;
    delete dut;
    
    return 0;
} 