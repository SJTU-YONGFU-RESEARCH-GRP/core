#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vconfigurable_mesh_router.h"

#define MAX_SIM_TIME 1000
#define DATA_WIDTH 32
#define ADDR_WIDTH 8
#define X_ADDR_WIDTH 4
#define Y_ADDR_WIDTH 4
#define FIFO_DEPTH 4

vluint64_t sim_time = 0;
vluint64_t posedge_cnt = 0;

// Global test tracking variables
bool all_tests_pass = true;
int tests_passed = 0;
int total_tests = 0;

// Struct to hold packet data
struct Packet {
    uint32_t addr;
    uint32_t data;
    bool valid;
    
    Packet(uint32_t a = 0, uint32_t d = 0, bool v = false)
        : addr(a), data(d), valid(v) {}
};

// Custom test result checking - used to track if a packet has been observed
struct PacketObserved {
    bool was_observed;
    uint32_t data;
    uint32_t addr;
};

// Used to track observed packets on each output port
PacketObserved observed_north;
PacketObserved observed_east;
PacketObserved observed_south;
PacketObserved observed_west;
PacketObserved observed_local;

// Function to set router inputs
void setRouterInputs(Vconfigurable_mesh_router* router, 
                    const Packet& north, const Packet& east, 
                    const Packet& south, const Packet& west, 
                    const Packet& local) {
    // North port inputs
    router->north_valid_i = north.valid;
    router->north_data_i = north.data;
    router->north_addr_i = north.addr;
    
    // East port inputs
    router->east_valid_i = east.valid;
    router->east_data_i = east.data;
    router->east_addr_i = east.addr;
    
    // South port inputs
    router->south_valid_i = south.valid;
    router->south_data_i = south.data;
    router->south_addr_i = south.addr;
    
    // West port inputs
    router->west_valid_i = west.valid;
    router->west_data_i = west.data;
    router->west_addr_i = west.addr;
    
    // Local port inputs
    router->local_valid_i = local.valid;
    router->local_data_i = local.data;
    router->local_addr_i = local.addr;
}

// Function to set router ready signals
void setRouterReadySignals(Vconfigurable_mesh_router* router,
                          bool north_ready, bool east_ready,
                          bool south_ready, bool west_ready,
                          bool local_ready) {
    router->north_ready_i = north_ready;
    router->east_ready_i = east_ready;
    router->south_ready_i = south_ready;
    router->west_ready_i = west_ready;
    router->local_ready_i = local_ready;
}

// Function to print router outputs with proper formatting
void printRouterOutputs(Vconfigurable_mesh_router* router) {
    std::cout << "North: valid=" << (router->north_valid_o ? "1" : "0")
              << " data=0x" << std::hex << std::setw(8) << std::setfill('0') << router->north_data_o
              << " addr=0x" << std::setw(2) << std::setfill('0') << (unsigned)router->north_addr_o << std::dec
              << " ready=" << (router->north_ready_o ? "1" : "0") << std::endl;
              
    std::cout << "East: valid=" << (router->east_valid_o ? "1" : "0")
              << " data=0x" << std::hex << std::setw(8) << std::setfill('0') << router->east_data_o
              << " addr=0x" << std::setw(2) << std::setfill('0') << (unsigned)router->east_addr_o << std::dec
              << " ready=" << (router->east_ready_o ? "1" : "0") << std::endl;
              
    std::cout << "South: valid=" << (router->south_valid_o ? "1" : "0")
              << " data=0x" << std::hex << std::setw(8) << std::setfill('0') << router->south_data_o
              << " addr=0x" << std::setw(2) << std::setfill('0') << (unsigned)router->south_addr_o << std::dec
              << " ready=" << (router->south_ready_o ? "1" : "0") << std::endl;
              
    std::cout << "West: valid=" << (router->west_valid_o ? "1" : "0")
              << " data=0x" << std::hex << std::setw(8) << std::setfill('0') << router->west_data_o
              << " addr=0x" << std::setw(2) << std::setfill('0') << (unsigned)router->west_addr_o << std::dec
              << " ready=" << (router->west_ready_o ? "1" : "0") << std::endl;
              
    std::cout << "Local: valid=" << (router->local_valid_o ? "1" : "0")
              << " data=0x" << std::hex << std::setw(8) << std::setfill('0') << router->local_data_o
              << " addr=0x" << std::setw(2) << std::setfill('0') << (unsigned)router->local_addr_o << std::dec
              << " ready=" << (router->local_ready_o ? "1" : "0") << std::endl;
}

// Function to create an address from X and Y coordinates
uint32_t createAddress(uint8_t x, uint8_t y) {
    // Properly format the address based on the router's expectations
    // Format: [X_ADDR(4 bits) | Y_ADDR(4 bits)]
    return ((uint32_t)x << Y_ADDR_WIDTH) | y;
}

// Function to run the clock for n cycles
void runClock(Vconfigurable_mesh_router* router, VerilatedVcdC* tfp, int cycles) {
    for (int i = 0; i < cycles; i++) {
        router->clk = 0;
        router->eval();
        if (tfp) tfp->dump(sim_time++);
        
        router->clk = 1;
        router->eval();
        if (tfp) tfp->dump(sim_time++);
        posedge_cnt++;
    }
}

// Function to observe router outputs and track packets
void observeOutputs(Vconfigurable_mesh_router* router) {
    // Check North port
    if (router->north_valid_o) {
        observed_north.was_observed = true;
        observed_north.data = router->north_data_o;
        observed_north.addr = router->north_addr_o;
    }
    
    // Check East port
    if (router->east_valid_o) {
        observed_east.was_observed = true;
        observed_east.data = router->east_data_o;
        observed_east.addr = router->east_addr_o;
    }
    
    // Check South port
    if (router->south_valid_o) {
        observed_south.was_observed = true;
        observed_south.data = router->south_data_o;
        observed_south.addr = router->south_addr_o;
    }
    
    // Check West port
    if (router->west_valid_o) {
        observed_west.was_observed = true;
        observed_west.data = router->west_data_o;
        observed_west.addr = router->west_addr_o;
    }
    
    // Check Local port
    if (router->local_valid_o) {
        observed_local.was_observed = true;
        observed_local.data = router->local_data_o;
        observed_local.addr = router->local_addr_o;
    }
}

// Reset observation trackers
void resetObservations() {
    observed_north = {false, 0, 0};
    observed_east = {false, 0, 0};
    observed_south = {false, 0, 0};
    observed_west = {false, 0, 0};
    observed_local = {false, 0, 0};
}

// Test cases
void runBasicXYRoutingTest(Vconfigurable_mesh_router* router, VerilatedVcdC* tfp) {
    std::cout << "\n=== Running Basic XY Routing Test ===\n";
    
    bool test_pass = true;
    int test_passed = 0;
    int num_tests = 4; // 4 routing tests
    
    // Local router coordinates (1,1)
    router->local_x_addr = 1;
    router->local_y_addr = 1;
    
    // Test 1: Route from Local to North (1,0)
    std::cout << "\nTest 1: Route from Local to North (1,0)\n";
    resetObservations();
    Packet local_pkt(createAddress(1, 0), 0xA0A0A0A0, true);
    setRouterInputs(router, Packet(), Packet(), Packet(), Packet(), local_pkt);
    setRouterReadySignals(router, true, true, true, true, true);
    
    // Run simulation for multiple cycles, observing outputs each cycle
    for (int i = 0; i < 10; i++) {
        runClock(router, tfp, 1);
        observeOutputs(router);
        
        // Once the packet is transmitted, set local_valid_i to 0
        if (router->local_ready_o && local_pkt.valid) {
            local_pkt.valid = false;
            setRouterInputs(router, Packet(), Packet(), Packet(), Packet(), local_pkt);
        }
    }
    
    std::cout << "Final outputs:\n";
    printRouterOutputs(router);
    
    // Check if packet appeared at the north port at any time during simulation
    bool test1_pass = observed_north.was_observed && 
                     observed_north.data == 0xA0A0A0A0 && 
                     observed_north.addr == createAddress(1, 0);
    if (test1_pass) {
        std::cout << "Test 1 PASSED: Packet correctly routed to North\n";
        test_passed++;
    } else {
        std::cout << "Test 1 FAILED: Packet not correctly routed to North\n";
        test_pass = false;
    }
    
    // Test 2: Route from West to East (2,1)
    std::cout << "\nTest 2: Route from West to East (2,1)\n";
    resetObservations();
    Packet west_pkt(createAddress(2, 1), 0xBBBBBBBB, true);
    setRouterInputs(router, Packet(), Packet(), Packet(), west_pkt, Packet());
    setRouterReadySignals(router, true, true, true, true, true);
    
    // Run simulation for multiple cycles, observing outputs each cycle
    for (int i = 0; i < 10; i++) {
        runClock(router, tfp, 1);
        observeOutputs(router);
        
        // Once the packet is transmitted, set west_valid_i to 0
        if (router->west_ready_o && west_pkt.valid) {
            west_pkt.valid = false;
            setRouterInputs(router, Packet(), Packet(), Packet(), west_pkt, Packet());
        }
    }
    
    std::cout << "Final outputs:\n";
    printRouterOutputs(router);
    
    // Check if packet appeared at the east port at any time during simulation
    bool test2_pass = observed_east.was_observed && 
                     observed_east.data == 0xBBBBBBBB && 
                     observed_east.addr == createAddress(2, 1);
    if (test2_pass) {
        std::cout << "Test 2 PASSED: Packet correctly routed to East\n";
        test_passed++;
    } else {
        std::cout << "Test 2 FAILED: Packet not correctly routed to East\n";
        test_pass = false;
    }
    
    // Test 3: Route from North to South (1,2)
    std::cout << "\nTest 3: Route from North to South (1,2)\n";
    resetObservations();
    Packet north_pkt(createAddress(1, 2), 0xCCCCCCCC, true);
    setRouterInputs(router, north_pkt, Packet(), Packet(), Packet(), Packet());
    setRouterReadySignals(router, true, true, true, true, true);
    
    // Run simulation for multiple cycles, observing outputs each cycle
    for (int i = 0; i < 10; i++) {
        runClock(router, tfp, 1);
        observeOutputs(router);
        
        // Once the packet is transmitted, set north_valid_i to 0
        if (router->north_ready_o && north_pkt.valid) {
            north_pkt.valid = false;
            setRouterInputs(router, north_pkt, Packet(), Packet(), Packet(), Packet());
        }
    }
    
    std::cout << "Final outputs:\n";
    printRouterOutputs(router);
    
    // Check if packet appeared at the south port at any time during simulation
    bool test3_pass = observed_south.was_observed && 
                     observed_south.data == 0xCCCCCCCC && 
                     observed_south.addr == createAddress(1, 2);
    if (test3_pass) {
        std::cout << "Test 3 PASSED: Packet correctly routed to South\n";
        test_passed++;
    } else {
        std::cout << "Test 3 FAILED: Packet not correctly routed to South\n";
        test_pass = false;
    }
    
    // Test 4: Route from East to Local (1,1) - packet destined for the router itself
    std::cout << "\nTest 4: Route from East to Local (1,1)\n";
    resetObservations();
    Packet east_pkt(createAddress(1, 1), 0xDDDDDDDD, true);
    setRouterInputs(router, Packet(), east_pkt, Packet(), Packet(), Packet());
    setRouterReadySignals(router, true, true, true, true, true);
    
    // Run simulation for multiple cycles, observing outputs each cycle
    for (int i = 0; i < 10; i++) {
        runClock(router, tfp, 1);
        observeOutputs(router);
        
        // Once the packet is transmitted, set east_valid_i to 0
        if (router->east_ready_o && east_pkt.valid) {
            east_pkt.valid = false;
            setRouterInputs(router, Packet(), east_pkt, Packet(), Packet(), Packet());
        }
    }
    
    std::cout << "Final outputs:\n";
    printRouterOutputs(router);
    
    // Check if packet appeared at the local port at any time during simulation
    bool test4_pass = observed_local.was_observed && 
                     observed_local.data == 0xDDDDDDDD && 
                     observed_local.addr == createAddress(1, 1);
    if (test4_pass) {
        std::cout << "Test 4 PASSED: Packet correctly routed to Local\n";
        test_passed++;
    } else {
        std::cout << "Test 4 FAILED: Packet not correctly routed to Local\n";
        test_pass = false;
    }
    
    // Update global test counters
    tests_passed += test_passed;
    total_tests += num_tests;
    if (!test_pass) all_tests_pass = false;
    
    std::cout << "\nBasic XY Routing Test: " << test_passed << " of " << num_tests << " tests passed\n";
}

// Test concurrent packet routing from multiple ports
void runConcurrentRoutingTest(Vconfigurable_mesh_router* router, VerilatedVcdC* tfp) {
    std::cout << "\n=== Running Concurrent Routing Test ===\n";
    
    bool test_pass = true;
    int test_passed = 0;
    int num_tests = 5; // 5 concurrent routing tests
    
    // Local router coordinates (2,2)
    router->local_x_addr = 2;
    router->local_y_addr = 2;
    
    // Reset observation trackers
    resetObservations();
    
    // Multiple packets arriving at the same time
    Packet north_pkt(createAddress(2, 3), 0x11111111, true);  // Goes to South
    Packet east_pkt(createAddress(1, 2), 0x22222222, true);   // Goes to West
    Packet south_pkt(createAddress(2, 1), 0x33333333, true);  // Goes to North
    Packet west_pkt(createAddress(3, 2), 0x44444444, true);   // Goes to East
    Packet local_pkt(createAddress(2, 2), 0x55555555, true);  // Goes to Local
    
    setRouterInputs(router, north_pkt, east_pkt, south_pkt, west_pkt, local_pkt);
    setRouterReadySignals(router, true, true, true, true, true);
    
    // Run simulation for multiple cycles, observing outputs each cycle
    for (int i = 0; i < 20; i++) {
        runClock(router, tfp, 1);
        observeOutputs(router);
        
        // Clear inputs once they've been accepted to avoid overwriting the FIFOs
        if (router->north_ready_o && north_pkt.valid) north_pkt.valid = false;
        if (router->east_ready_o && east_pkt.valid) east_pkt.valid = false;
        if (router->south_ready_o && south_pkt.valid) south_pkt.valid = false;
        if (router->west_ready_o && west_pkt.valid) west_pkt.valid = false;
        if (router->local_ready_o && local_pkt.valid) local_pkt.valid = false;
        
        setRouterInputs(router, north_pkt, east_pkt, south_pkt, west_pkt, local_pkt);
    }
    
    std::cout << "Final outputs:\n";
    printRouterOutputs(router);
    
    // Check routing results - verify packets were observed on the correct ports
    bool test1_pass = observed_south.was_observed && 
                      observed_south.data == 0x11111111 && 
                      observed_south.addr == createAddress(2, 3);
    
    bool test2_pass = observed_west.was_observed && 
                      observed_west.data == 0x22222222 && 
                      observed_west.addr == createAddress(1, 2);
    
    bool test3_pass = observed_north.was_observed && 
                      observed_north.data == 0x33333333 && 
                      observed_north.addr == createAddress(2, 1);
    
    bool test4_pass = observed_east.was_observed && 
                      observed_east.data == 0x44444444 && 
                      observed_east.addr == createAddress(3, 2);
    
    bool test5_pass = observed_local.was_observed && 
                      observed_local.data == 0x55555555 && 
                      observed_local.addr == createAddress(2, 2);
    
    if (test1_pass) {
        std::cout << "Concurrent Test 1 PASSED: North to South routing successful\n";
        test_passed++;
    } else {
        std::cout << "Concurrent Test 1 FAILED: North to South routing failed\n";
        test_pass = false;
    }
    
    if (test2_pass) {
        std::cout << "Concurrent Test 2 PASSED: East to West routing successful\n";
        test_passed++;
    } else {
        std::cout << "Concurrent Test 2 FAILED: East to West routing failed\n";
        test_pass = false;
    }
    
    if (test3_pass) {
        std::cout << "Concurrent Test 3 PASSED: South to North routing successful\n";
        test_passed++;
    } else {
        std::cout << "Concurrent Test 3 FAILED: South to North routing failed\n";
        test_pass = false;
    }
    
    if (test4_pass) {
        std::cout << "Concurrent Test 4 PASSED: West to East routing successful\n";
        test_passed++;
    } else {
        std::cout << "Concurrent Test 4 FAILED: West to East routing failed\n";
        test_pass = false;
    }
    
    if (test5_pass) {
        std::cout << "Concurrent Test 5 PASSED: Local loopback routing successful\n";
        test_passed++;
    } else {
        std::cout << "Concurrent Test 5 FAILED: Local loopback routing failed\n";
        test_pass = false;
    }
    
    // Update global test counters
    tests_passed += test_passed;
    total_tests += num_tests;
    if (!test_pass) all_tests_pass = false;
    
    std::cout << "\nConcurrent Routing Test: " << test_passed << " of " << num_tests << " tests passed\n";
}

// Test backpressure handling
void runBackpressureTest(Vconfigurable_mesh_router* router, VerilatedVcdC* tfp) {
    std::cout << "\n=== Running Backpressure Test ===\n";
    
    bool test_pass = true;
    int test_passed = 0;
    int num_tests = 2; // 2 backpressure tests (backpressure and draining)
    
    // Local router coordinates (1,1)
    router->local_x_addr = 1;
    router->local_y_addr = 1;
    
    // Reset observations
    resetObservations();
    
    // Multiple packets going to the same output port (East)
    Packet north_pkt(createAddress(2, 1), 0xAAAAAAAA, true);
    Packet south_pkt(createAddress(2, 1), 0xBBBBBBBB, true);
    Packet west_pkt(createAddress(2, 1), 0xCCCCCCCC, true);
    Packet local_pkt(createAddress(2, 1), 0xDDDDDDDD, true);
    
    setRouterInputs(router, north_pkt, Packet(), south_pkt, west_pkt, local_pkt);
    
    // Set East port to not ready (backpressure)
    setRouterReadySignals(router, true, false, true, true, true);
    
    std::cout << "Initial state with East port not ready:\n";
    
    // Run a few cycles with east port blocked, checking outputs each cycle
    for (int i = 0; i < 3; i++) {
        runClock(router, tfp, 1);
        observeOutputs(router);
    }
    
    std::cout << "Cycle " << posedge_cnt << " outputs:\n";
    printRouterOutputs(router);
    
    // Test 1: Verify backpressure - no data should have been observed on east port
    bool test1_pass = !observed_east.was_observed;
    if (test1_pass) {
        std::cout << "Backpressure Test 1 PASSED: East port correctly blocked\n";
        test_passed++;
    } else {
        std::cout << "Backpressure Test 1 FAILED: East port showing valid data despite backpressure\n";
        test_pass = false;
    }
    
    // Reset observations before testing draining
    resetObservations();
    
    // Run more cycles - after 5 cycles, set East ready to true to drain the FIFOs
    runClock(router, tfp, 5);
    std::cout << "Setting East port ready to drain FIFOs\n";
    setRouterReadySignals(router, true, true, true, true, true);
    
    // Run more cycles and observe draining, checking outputs each cycle
    for (int i = 0; i < 13; i++) {
        runClock(router, tfp, 1);
        observeOutputs(router);
    }
    
    std::cout << "Cycle " << posedge_cnt << " outputs (after enabling East port):\n";
    printRouterOutputs(router);
    
    // Test 2: Verify draining works after backpressure is released
    bool test2_pass = observed_east.was_observed;
    if (test2_pass) {
        std::cout << "Backpressure Test 2 PASSED: FIFOs successfully drained\n";
        test_passed++;
    } else {
        std::cout << "Backpressure Test 2 FAILED: FIFOs not draining correctly\n";
        test_pass = false;
    }
    
    // Update global test counters
    tests_passed += test_passed;
    total_tests += num_tests;
    if (!test_pass) all_tests_pass = false;
    
    std::cout << "\nBackpressure Test: " << test_passed << " of " << num_tests << " tests passed\n";
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vconfigurable_mesh_router* router = new Vconfigurable_mesh_router;
    
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    router->trace(tfp, 99);
    tfp->open("configurable_mesh_router_sim.vcd");
    
    // Reset the router
    router->rst_n = 0;
    runClock(router, tfp, 5);
    router->rst_n = 1;
    
    // Run different test scenarios
    runBasicXYRoutingTest(router, tfp);
    
    // Reset the router before next test
    router->rst_n = 0;
    runClock(router, tfp, 5);
    router->rst_n = 1;
    
    runConcurrentRoutingTest(router, tfp);
    
    // Reset the router before next test
    router->rst_n = 0;
    runClock(router, tfp, 5);
    router->rst_n = 1;
    
    runBackpressureTest(router, tfp);
    
    // Final simulation steps and cleanup
    runClock(router, tfp, 10);
    
    router->final();
    if (tfp) tfp->close();
    
    delete router;
    delete tfp;
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (all_tests_pass ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << tests_passed << " of " << total_tests << std::endl;
    
    return all_tests_pass ? 0 : 1;
} 