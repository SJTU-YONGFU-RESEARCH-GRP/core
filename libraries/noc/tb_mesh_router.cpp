#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vmesh_router.h"

#define MAX_SIM_TIME 1000
vluint64_t sim_time = 0;
vluint64_t posedge_cnt = 0;

// Test configuration
#define DATA_WIDTH 32
#define TEST_COUNT 10
#define MESH_SIZE_X 4
#define MESH_SIZE_Y 4
#define ROUTER_X 1
#define ROUTER_Y 1

void clock_cycle(Vmesh_router *dut, VerilatedVcdC *m_trace);
void wait_cycles(Vmesh_router *dut, VerilatedVcdC *m_trace, int cycles);

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Vmesh_router *dut = new Vmesh_router;
    
    // Enable waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("mesh_router_sim.vcd");
    
    // Initialize signals
    dut->clk = 0;
    dut->rst_n = 0;
    
    // Initialize input ports
    dut->north_in_valid = 0;
    dut->east_in_valid = 0;
    dut->south_in_valid = 0;
    dut->west_in_valid = 0;
    dut->local_in_valid = 0;
    
    dut->north_in_data = 0;
    dut->east_in_data = 0;
    dut->south_in_data = 0;
    dut->west_in_data = 0;
    dut->local_in_data = 0;
    
    // Initialize output ready signals
    dut->north_out_ready = 1;
    dut->east_out_ready = 1;
    dut->south_out_ready = 1;
    dut->west_out_ready = 1;
    dut->local_out_ready = 1;
    
    // Reset sequence
    wait_cycles(dut, m_trace, 5);
    dut->rst_n = 1;
    wait_cycles(dut, m_trace, 5);
    
    // Test variables
    int passed_tests = 0;
    uint32_t test_data[TEST_COUNT];
    
    // Generate test data
    for (int i = 0; i < TEST_COUNT; i++) {
        test_data[i] = rand() & 0x00FFFFFF; // Lower 24 bits for data
    }
    
    // Test 1: Local to North routing
    // Destination is (1,0) - North of current router (1,1)
    uint8_t dest_id_north = 0 * MESH_SIZE_X + 1; // y=0, x=1
    
    std::cout << "Debug: Test 1 - Local to North routing" << std::endl;
    std::cout << "Debug: Router coordinates (X,Y): (" << ROUTER_X << "," << ROUTER_Y << ")" << std::endl;
    std::cout << "Debug: Destination coordinates (X,Y): (1,0)" << std::endl;
    std::cout << "Debug: Destination ID: " << (int)dest_id_north << std::endl;
    
    dut->local_in_data = (dest_id_north << 24) | test_data[0];
    dut->local_in_valid = 1;
    
    std::cout << "Debug: Sending packet with data: 0x" << std::hex << dut->local_in_data << std::dec << std::endl;
    
    // Wait for input to be accepted
    while (!dut->local_in_ready) {
        clock_cycle(dut, m_trace);
    }
    
    // Complete the handshake
    clock_cycle(dut, m_trace);
    dut->local_in_valid = 0;
    
    // Check if packet appears at north output
    bool north_test_passed = false;
    for (int i = 0; i < 20; i++) {
        std::cout << "Debug: Cycle " << i << " - north_out_valid=" << dut->north_out_valid 
                 << " north_out_data=0x" << std::hex << dut->north_out_data << std::dec << std::endl;
                 
        if (dut->north_out_valid && dut->north_out_data == ((dest_id_north << 24) | test_data[0])) {
            north_test_passed = true;
            passed_tests++;
            break;
        }
        clock_cycle(dut, m_trace);
    }
    
    if (!north_test_passed) {
        std::cout << "Local to North routing test failed" << std::endl;
    } else {
        std::cout << "Local to North routing test passed" << std::endl;
    }
    
    // Test 2: Local to East routing
    // Destination is (2,1) - East of current router (1,1)
    uint8_t dest_id_east = 1 * MESH_SIZE_X + 2; // y=1, x=2
    
    std::cout << "Debug: Test 2 - Local to East routing" << std::endl;
    std::cout << "Debug: Destination coordinates (X,Y): (2,1)" << std::endl;
    std::cout << "Debug: Destination ID: " << (int)dest_id_east << std::endl;
    
    dut->local_in_data = (dest_id_east << 24) | test_data[1];
    dut->local_in_valid = 1;
    
    // Wait for input to be accepted
    while (!dut->local_in_ready) {
        clock_cycle(dut, m_trace);
    }
    
    // Complete the handshake
    clock_cycle(dut, m_trace);
    dut->local_in_valid = 0;
    
    // Check if packet appears at east output
    bool east_test_passed = false;
    for (int i = 0; i < 10; i++) {
        if (dut->east_out_valid && dut->east_out_data == ((dest_id_east << 24) | test_data[1])) {
            east_test_passed = true;
            passed_tests++;
            break;
        }
        clock_cycle(dut, m_trace);
    }
    
    if (!east_test_passed) {
        std::cout << "Local to East routing test failed" << std::endl;
    }
    
    // Test 3: Local to South routing
    // Destination is (1,2) - South of current router (1,1)
    uint8_t dest_id_south = 2 * MESH_SIZE_X + 1; // y=2, x=1
    
    std::cout << "Debug: Test 3 - Local to South routing" << std::endl;
    std::cout << "Debug: Destination coordinates (X,Y): (1,2)" << std::endl;
    std::cout << "Debug: Destination ID: " << (int)dest_id_south << std::endl;
    
    dut->local_in_data = (dest_id_south << 24) | test_data[2];
    dut->local_in_valid = 1;
    
    // Wait for input to be accepted
    while (!dut->local_in_ready) {
        clock_cycle(dut, m_trace);
    }
    
    // Complete the handshake
    clock_cycle(dut, m_trace);
    dut->local_in_valid = 0;
    
    // Check if packet appears at south output
    bool south_test_passed = false;
    for (int i = 0; i < 10; i++) {
        if (dut->south_out_valid && dut->south_out_data == ((dest_id_south << 24) | test_data[2])) {
            south_test_passed = true;
            passed_tests++;
            break;
        }
        clock_cycle(dut, m_trace);
    }
    
    if (!south_test_passed) {
        std::cout << "Local to South routing test failed" << std::endl;
    }
    
    // Test 4: Local to West routing
    // Destination is (0,1) - West of current router (1,1)
    uint8_t dest_id_west = 1 * MESH_SIZE_X + 0; // y=1, x=0
    
    dut->local_in_data = (dest_id_west << 24) | test_data[3];
    dut->local_in_valid = 1;
    
    // Wait for input to be accepted
    while (!dut->local_in_ready) {
        clock_cycle(dut, m_trace);
    }
    
    // Complete the handshake
    clock_cycle(dut, m_trace);
    dut->local_in_valid = 0;
    
    // Check if packet appears at west output
    bool west_test_passed = false;
    for (int i = 0; i < 10; i++) {
        if (dut->west_out_valid && dut->west_out_data == ((dest_id_west << 24) | test_data[3])) {
            west_test_passed = true;
            passed_tests++;
            break;
        }
        clock_cycle(dut, m_trace);
    }
    
    if (!west_test_passed) {
        std::cout << "Local to West routing test failed" << std::endl;
    }
    
    // Test 5: Local to Local routing (loopback)
    // Destination is (1,1) - Same as current router
    uint8_t dest_id_local = 1 * MESH_SIZE_X + 1; // y=1, x=1
    
    dut->local_in_data = (dest_id_local << 24) | test_data[4];
    dut->local_in_valid = 1;
    
    // Wait for input to be accepted
    while (!dut->local_in_ready) {
        clock_cycle(dut, m_trace);
    }
    
    // Complete the handshake
    clock_cycle(dut, m_trace);
    dut->local_in_valid = 0;
    
    // Check if packet appears at local output
    bool local_test_passed = false;
    for (int i = 0; i < 10; i++) {
        if (dut->local_out_valid && dut->local_out_data == ((dest_id_local << 24) | test_data[4])) {
            local_test_passed = true;
            passed_tests++;
            break;
        }
        clock_cycle(dut, m_trace);
    }
    
    if (!local_test_passed) {
        std::cout << "Local to Local routing test failed" << std::endl;
    }
    
    // Additional tests for other directions (North to South, etc.)
    // North to South test
    dut->north_in_data = (dest_id_south << 24) | test_data[5];
    dut->north_in_valid = 1;
    
    // Wait for input to be accepted
    while (!dut->north_in_ready) {
        clock_cycle(dut, m_trace);
    }
    
    // Complete the handshake
    clock_cycle(dut, m_trace);
    dut->north_in_valid = 0;
    
    // Check if packet appears at south output
    bool north_south_test_passed = false;
    for (int i = 0; i < 10; i++) {
        if (dut->south_out_valid && dut->south_out_data == ((dest_id_south << 24) | test_data[5])) {
            north_south_test_passed = true;
            passed_tests++;
            break;
        }
        clock_cycle(dut, m_trace);
    }
    
    if (!north_south_test_passed) {
        std::cout << "North to South routing test failed" << std::endl;
    }
    
    // East to West test
    dut->east_in_data = (dest_id_west << 24) | test_data[6];
    dut->east_in_valid = 1;
    
    // Wait for input to be accepted
    while (!dut->east_in_ready) {
        clock_cycle(dut, m_trace);
    }
    
    // Complete the handshake
    clock_cycle(dut, m_trace);
    dut->east_in_valid = 0;
    
    // Check if packet appears at west output
    bool east_west_test_passed = false;
    for (int i = 0; i < 10; i++) {
        if (dut->west_out_valid && dut->west_out_data == ((dest_id_west << 24) | test_data[6])) {
            east_west_test_passed = true;
            passed_tests++;
            break;
        }
        clock_cycle(dut, m_trace);
    }
    
    if (!east_west_test_passed) {
        std::cout << "East to West routing test failed" << std::endl;
    }
    
    // Print test results in the standardized format
    std::cout << "==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (passed_tests == 7 ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << passed_tests << " of 7" << std::endl;
    
    // Clean up
    m_trace->close();
    delete m_trace;
    delete dut;
    
    return 0;
}

// Generate a clock cycle
void clock_cycle(Vmesh_router *dut, VerilatedVcdC *m_trace) {
    dut->clk = 0;
    dut->eval();
    m_trace->dump(sim_time++);
    
    dut->clk = 1;
    dut->eval();
    m_trace->dump(sim_time++);
    
    posedge_cnt++;
}

// Wait for multiple clock cycles
void wait_cycles(Vmesh_router *dut, VerilatedVcdC *m_trace, int cycles) {
    for (int i = 0; i < cycles; i++) {
        clock_cycle(dut, m_trace);
    }
} 