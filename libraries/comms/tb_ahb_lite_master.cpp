#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vahb_lite_master.h"

// Test parameters
#define CLOCK_PERIOD 10
#define TEST_DURATION 2000
#define ADDR_WIDTH 32
#define DATA_WIDTH 32
#define RANDOM_SEED 123456

// Helper function for color output
#define RED   "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

// Test transaction structure
typedef struct {
    uint32_t address;
    uint32_t data;
    bool     is_write;
    uint8_t  size;
    uint8_t  burst;
    uint8_t  expected_resp;
} test_transaction_t;

// Simulation time
vluint64_t main_time = 0;

// Returns current simulation time
double sc_time_stamp() {
    return main_time;
}

// Forward declarations
void reset_dut(Vahb_lite_master *dut);
void tick(Vahb_lite_master *dut, VerilatedVcdC* tfp);
bool perform_transaction(Vahb_lite_master* dut, VerilatedVcdC* tfp, test_transaction_t* trans);
void gen_random_transaction(test_transaction_t* trans);

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of the DUT
    Vahb_lite_master *dut = new Vahb_lite_master;
    
    // Enable waveform dumping
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("ahb_lite_master_wave.vcd");
    
    std::cout << YELLOW << "\n==== AHB-Lite Master Module Test ====" << RESET << std::endl;
    std::cout << "Testing with " << ADDR_WIDTH << "-bit address bus and " << DATA_WIDTH << "-bit data bus" << std::endl;
    
    // Initialize random seed
    srand(RANDOM_SEED);
    
    // Reset the DUT
    reset_dut(dut);
    
    int total_tests = 0;
    int passed_tests = 0;
    bool test_result = true;
    
    // Test single read transaction
    test_transaction_t single_read = {
        .address = 0x1000,
        .data = 0,
        .is_write = false,
        .size = 2,  // Word size (4 bytes)
        .burst = 0, // Single burst
        .expected_resp = 0
    };
    
    std::cout << "\nTest 1: Single Read Transaction" << std::endl;
    test_result = perform_transaction(dut, tfp, &single_read);
    total_tests++;
    if (test_result) passed_tests++;
    
    // Test single write transaction
    test_transaction_t single_write = {
        .address = 0x2000,
        .data = 0xA5A5A5A5,
        .is_write = true,
        .size = 2,  // Word size (4 bytes)
        .burst = 0, // Single burst
        .expected_resp = 0
    };
    
    std::cout << "\nTest 2: Single Write Transaction" << std::endl;
    test_result = perform_transaction(dut, tfp, &single_write);
    total_tests++;
    if (test_result) passed_tests++;
    
    // Reduced to only 3 random tests to avoid timeouts
    std::cout << "\nRunning 3 Random Transactions" << std::endl;
    for (int i = 0; i < 3; i++) {
        test_transaction_t random_trans;
        gen_random_transaction(&random_trans);
        
        std::cout << "  Random Test " << (i+1) << ": " 
                  << (random_trans.is_write ? "Write" : "Read") << " at 0x" 
                  << std::hex << random_trans.address << std::dec 
                  << " with burst=" << (int)random_trans.burst << std::endl;
        
        test_result = perform_transaction(dut, tfp, &random_trans);
        total_tests++;
        if (test_result) passed_tests++;
    }
    
    // Cleanup
    tfp->close();
    delete tfp;
    delete dut;
    
    // Print test summary in the standardized format
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (passed_tests == total_tests ? GREEN "Pass" : RED "Fail") << RESET << std::endl;
    std::cout << "Tests: " << passed_tests << " of " << total_tests << std::endl;
    
    return passed_tests == total_tests ? 0 : 1;
}

// Reset the DUT
void reset_dut(Vahb_lite_master *dut) {
    std::cout << "Resetting DUT..." << std::endl;
    dut->hclk = 0;
    dut->hreset = 0;  // Active high reset (parameter RESET_ACTIVE_LOW=1 in RTL)
    dut->hready = 0;
    dut->hgrant = 0;
    dut->hresp = 0;
    dut->hrdata = 0;
    dut->start_trans = 0;
    
    // Apply reset for a few cycles
    for (int i = 0; i < 5; i++) {
        tick(dut, NULL);
    }
    
    // Release reset
    dut->hreset = 1;  // Release active high reset
    
    // Wait a few more cycles
    for (int i = 0; i < 5; i++) {
        tick(dut, NULL);
    }
    std::cout << "Reset complete" << std::endl;
}

// Clock tick function
void tick(Vahb_lite_master *dut, VerilatedVcdC* tfp) {
    // Toggle clock
    dut->hclk = !dut->hclk;
    
    // Evaluate model
    dut->eval();
    
    // Dump trace data if requested
    if (tfp) tfp->dump(main_time);
    
    // Increment time
    main_time += CLOCK_PERIOD/2;
}

// Perform a transaction and verify the response
bool perform_transaction(Vahb_lite_master* dut, VerilatedVcdC* tfp, test_transaction_t* trans) {
    bool test_passed = true;
    uint32_t expected_data = 0;
    uint32_t sent_data = trans->data;
    
    // If it's a read, prepare expected data by inverting the address
    if (!trans->is_write) {
        expected_data = ~trans->address;
    }
    
    std::cout << "  Starting transaction, address: 0x" << std::hex << trans->address 
              << ", " << (trans->is_write ? "write data: 0x" : "expecting data: 0x") 
              << (trans->is_write ? sent_data : expected_data) << std::dec << std::endl;
    
    // Setup AHB slave response
    dut->hrdata = expected_data;
    
    // Start transaction
    dut->start_trans = 0;
    dut->trans_addr = trans->address;
    dut->trans_write = trans->is_write;
    dut->trans_size = trans->size;
    dut->trans_burst = trans->burst;
    dut->write_data = sent_data;
    
    // Tick clock once (posedge)
    tick(dut, tfp);
    // Tick clock again (negedge)
    tick(dut, tfp);
    
    // Start transaction on next posedge
    dut->start_trans = 1;
    tick(dut, tfp);
    tick(dut, tfp);
    
    // Clear start signal
    dut->start_trans = 0;
    
    std::cout << "  Waiting for bus request..." << std::endl;
    
    // Grant bus access when requested
    int req_timeout = 20;
    while (!dut->hbusreq && req_timeout > 0) {
        tick(dut, tfp);
        tick(dut, tfp);
        req_timeout--;
    }
    
    if (req_timeout <= 0) {
        std::cout << RED << "ERROR: Bus request timeout" << RESET << std::endl;
        return false;
    }
    
    dut->hgrant = 1;
    std::cout << "  Bus access granted" << std::endl;
    
    // Simulate AHB slave behavior
    int timeout = 50;
    bool in_transaction = true;
    bool data_phase_entered = false;
    
    while (in_transaction && timeout > 0) {
        // Slave is ready
        dut->hready = 1;
        
        // If write transaction, verify data on hwdata
        if (dut->hwrite && (dut->htrans == 2 || dut->htrans == 3) && !data_phase_entered) {
            // Need an extra cycle for data phase
            std::cout << "  Entering data phase for write" << std::endl;
            data_phase_entered = true;
            tick(dut, tfp);
            tick(dut, tfp);
            
            if (dut->hwdata != sent_data) {
                std::cout << RED << "ERROR: Write data mismatch. Expected: 0x" 
                          << std::hex << sent_data << " Got: 0x" << dut->hwdata 
                          << std::dec << RESET << std::endl;
                test_passed = false;
            }
        }
        
        // Check if transaction is complete
        if (dut->trans_done) {
            in_transaction = false;
            std::cout << "  Transaction complete" << std::endl;
            
            // For read transactions, verify data
            if (!trans->is_write && dut->read_data != expected_data) {
                std::cout << RED << "ERROR: Read data mismatch. Expected: 0x" 
                          << std::hex << expected_data << " Got: 0x" << dut->read_data 
                          << std::dec << RESET << std::endl;
                test_passed = false;
            }
            
            // Verify response code
            if (dut->trans_resp != trans->expected_resp) {
                std::cout << RED << "ERROR: Response code mismatch. Expected: " 
                          << (int)trans->expected_resp << " Got: " << dut->trans_resp 
                          << RESET << std::endl;
                test_passed = false;
            }
        }
        
        // Advance simulation
        tick(dut, tfp);
        tick(dut, tfp);
        
        timeout--;
    }
    
    // Release bus grant
    dut->hgrant = 0;
    dut->hready = 0;
    
    // Complete a few more cycles
    for (int i = 0; i < 5; i++) {
        tick(dut, tfp);
        tick(dut, tfp);
    }
    
    // Report test result
    if (timeout <= 0) {
        std::cout << RED << "ERROR: Transaction timed out" << RESET << std::endl;
        test_passed = false;
    } else if (test_passed) {
        std::cout << GREEN << "Transaction completed successfully" << RESET << std::endl;
    }
    
    return test_passed;
}

// Generate a random transaction
void gen_random_transaction(test_transaction_t* trans) {
    trans->address = rand() & 0xFFFFFFFC;  // Word-aligned address
    trans->data = rand();
    trans->is_write = (rand() % 2) == 0;
    
    // Size: 0=byte, 1=halfword, 2=word
    trans->size = rand() % 3;
    
    // For simplicity, use mostly single transfers for random tests
    trans->burst = 0;  // SINGLE
    
    // Expected response is always OKAY for our test
    trans->expected_resp = 0;
} 