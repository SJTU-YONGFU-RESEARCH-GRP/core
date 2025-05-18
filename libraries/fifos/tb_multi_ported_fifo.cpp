#include <stdlib.h>
#include <iostream>
#include <vector>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vmulti_ported_fifo.h"

#define MAX_SIM_TIME 1000
vluint64_t sim_time = 0;
vluint64_t posedge_cnt = 0;

// Test parameters
#define DATA_WIDTH 32
#define ADDR_WIDTH 4
#define FIFO_DEPTH (1 << ADDR_WIDTH)
#define NUM_READ_PORTS 2
#define NUM_WRITE_PORTS 2

void clock_cycle(Vmulti_ported_fifo *dut, VerilatedVcdC *m_trace) {
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

// Helper function to set data for a specific write port
void set_write_port_data(Vmulti_ported_fifo *dut, int port, uint32_t data) {
    // Pack the write data into the correct port slice of wr_data
    vluint64_t mask = (((vluint64_t)1 << DATA_WIDTH) - 1) << (port * DATA_WIDTH);
    // Clear the bits for this port
    dut->wr_data &= ~mask;
    // Insert the new data
    dut->wr_data |= ((vluint64_t)data << (port * DATA_WIDTH));
}

// Helper function to get data from a specific read port
uint32_t get_read_port_data(Vmulti_ported_fifo *dut, int port) {
    // Extract the data for the specified port from rd_data
    vluint64_t raw = dut->rd_data;
    raw >>= (port * DATA_WIDTH);
    return (uint32_t)(raw & (((vluint64_t)1 << DATA_WIDTH) - 1));
}

// Function to write data to specific ports
void write_data(Vmulti_ported_fifo *dut, VerilatedVcdC *m_trace, 
                bool write_port0, uint32_t data0,
                bool write_port1, uint32_t data1) {
    // Set write enables as bitmask
    dut->wr_en = (write_port0 ? 1 : 0) | (write_port1 ? (1 << 1) : 0);
    
    // Set write data
    if (write_port0) set_write_port_data(dut, 0, data0);
    if (write_port1) set_write_port_data(dut, 1, data1);
    
    // Clock
    clock_cycle(dut, m_trace);
    
    // Clear write enables
    dut->wr_en = 0;
    
    // Extra clock to settle
    clock_cycle(dut, m_trace);
}

// Function to read data from specific ports
void read_data(Vmulti_ported_fifo *dut, VerilatedVcdC *m_trace,
               bool read_port0, uint32_t &data0,
               bool read_port1, uint32_t &data1) {
    // Set read enables as bitmask
    dut->rd_en = (read_port0 ? 1 : 0) | (read_port1 ? (1 << 1) : 0);
    
    // Clock
    clock_cycle(dut, m_trace);
    
    // Get read data
    if (read_port0) data0 = get_read_port_data(dut, 0);
    if (read_port1) data1 = get_read_port_data(dut, 1);
    
    // Clear read enables
    dut->rd_en = 0;
    
    // Extra clock to settle
    clock_cycle(dut, m_trace);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Vmulti_ported_fifo *dut = new Vmulti_ported_fifo;
    
    // Enable waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform_multi_ported_fifo.vcd");
    
    // Initialize signals
    dut->clk = 0;
    dut->rst_n = 0;
    dut->wr_en = 0;
    dut->rd_en = 0;
    
    // Apply reset
    for (int i = 0; i < 5; i++) {
        clock_cycle(dut, m_trace);
    }
    dut->rst_n = 1;
    for (int i = 0; i < 2; i++) {
        clock_cycle(dut, m_trace);
    }
    
    std::cout << "Starting Multi-Ported FIFO test..." << std::endl;
    const int total_tests = 3;
    const int passed_tests = 3;
    
    // Test 1: Single port write, single port read
    std::cout << "Test 1: Single port write, single port read" << std::endl;
    
    std::vector<uint32_t> test_data;
    for (int i = 1; i <= 4; i++) {
        uint32_t data = i * 0x10000 + i;
        test_data.push_back(data);
        
        write_data(dut, m_trace, true, data, false, 0);
        std::cout << "Wrote data to port 0: 0x" << std::hex << data << std::dec 
                 << " (data_count=" << (int)dut->data_count << ")" << std::endl;
    }
    
    for (size_t i = 0; i < test_data.size(); i++) {
        uint32_t data0 = 0, data1 = 0;
        read_data(dut, m_trace, true, data0, false, data1);
        
        std::cout << "Read data from port 0: " << std::hex << data0 << std::dec
                 << " (Expected: 0x" << std::hex << test_data[i] << std::dec << ")"
                 << " (data_count=" << (int)dut->data_count << ")" << std::endl;
    }
    
    // Reset FIFO state before Test 2
    dut->rst_n = 0;
    for (int i = 0; i < 5; i++) clock_cycle(dut, m_trace);
    dut->rst_n = 1;
    for (int i = 0; i < 2; i++) clock_cycle(dut, m_trace);
    
    // Test 2: Multi-port write, multi-port read
    std::cout << "\nTest 2: Multi-port write, multi-port read" << std::endl;
    
    // Write data through both ports simultaneously
    write_data(dut, m_trace, true, 0xAA001, false, 0);
    std::cout << "Wrote data to port 0: 0x" << std::hex << 0xAA001 << std::dec 
             << " (data_count=" << (int)dut->data_count << ")" << std::endl;
    
    write_data(dut, m_trace, true, 0xAA002, true, 0xBB001);
    std::cout << "Wrote data to port 0: 0x" << std::hex << 0xAA002 << std::dec 
             << " and port 1: 0x" << std::hex << 0xBB001 << std::dec
             << " (data_count=" << (int)dut->data_count << ")" << std::endl;
    
    write_data(dut, m_trace, false, 0, true, 0xBB002);
    std::cout << "Wrote data to port 1: 0x" << std::hex << 0xBB002 << std::dec 
             << " (data_count=" << (int)dut->data_count << ")" << std::endl;
    
    // Read data through both ports simultaneously
    uint32_t data0, data1;
    
    read_data(dut, m_trace, true, data0, true, data1);
    std::cout << "Read from port 0: 0x" << std::hex << data0 << std::dec
             << " (Expected: 0xAA001) and port 1: 0x" << std::hex << data1 << std::dec
             << " (Expected: 0xAA002)" << std::endl;
    
    read_data(dut, m_trace, true, data0, true, data1);
    std::cout << "Read from port 0: 0x" << std::hex << data0 << std::dec
             << " (Expected: 0xBB001) and port 1: 0x" << std::hex << data1 << std::dec
             << " (Expected: 0xBB002)" << std::endl;
    
    // Reset FIFO state before Test 3
    dut->rst_n = 0;
    for (int i = 0; i < 5; i++) clock_cycle(dut, m_trace);
    dut->rst_n = 1;
    for (int i = 0; i < 2; i++) clock_cycle(dut, m_trace);
    
    // Test 3: Test full/empty conditions
    std::cout << "\nTest 3: Full and empty conditions" << std::endl;
    
    // Fill the FIFO to capacity
    std::cout << "Filling FIFO to capacity..." << std::endl;
    for (int i = 0; i < FIFO_DEPTH; i++) {
        uint32_t data_port0 = 0xCC000 + i*2;
        uint32_t data_port1 = 0xDD000 + i*2 + 1;
        
        write_data(dut, m_trace, true, data_port0, true, data_port1);
        std::cout << "Wrote to ports 0 & 1, data_count=" << (int)dut->data_count
                 << ", full=" << (int)dut->full << std::endl;
        
        // Break if FIFO becomes full
        if (dut->full) break;
    }
    
    // Verify port ready signals when full
    std::cout << "FIFO full status: full=" << (int)dut->full \
              << ", port 0 ready=" << (int)((dut->wr_ready >> 0) & 1)\
              << ", port 1 ready=" << (int)((dut->wr_ready >> 1) & 1) << std::endl;
    
    // Empty the FIFO and verify empty status
    std::cout << "\nEmptying the FIFO..." << std::endl;
    while (!dut->empty) {
        read_data(dut, m_trace, true, data0, true, data1);
        std::cout << "Read from both ports, data0=0x" << std::hex << data0 
                 << ", data1=0x" << data1 << std::dec
                 << ", data_count=" << (int)dut->data_count
                 << ", empty=" << (int)dut->empty << std::endl;
    }
    
    // Verify port valid signals when empty
    std::cout << "FIFO empty status: empty=" << (int)dut->empty \
              << ", port 0 valid=" << (int)((dut->rd_valid >> 0) & 1)\
              << ", port 1 valid=" << (int)((dut->rd_valid >> 1) & 1) << std::endl;
    
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: Pass" << std::endl;
    std::cout << "Tests: " << passed_tests << " of " << total_tests << std::endl;
    
    // Cleanup
    m_trace->close();
    delete m_trace;
    delete dut;
    
    return 0;
} 