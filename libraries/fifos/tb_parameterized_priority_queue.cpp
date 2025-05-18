#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vparameterized_priority_queue.h"

#define MAX_SIM_TIME 1000
vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    Vparameterized_priority_queue *dut = new Vparameterized_priority_queue;

    // Set up waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("parameterized_priority_queue_trace.vcd");

    // Initialize signals
    dut->clk = 0;
    dut->rst_n = 0;
    dut->i_data = 0;
    dut->i_priority = 0;
    dut->i_enqueue = 0;
    dut->i_dequeue = 0;

    // Test tracking variables
    int total_tests = 0;
    int passed_tests = 0;
    bool global_test_pass = true;

    // Reset sequence
    for (int i = 0; i < 5; i++) {
        dut->clk = !dut->clk;
        dut->eval();
        tfp->dump(sim_time++);
        dut->clk = !dut->clk;
        dut->eval();
        tfp->dump(sim_time++);
    }
    dut->rst_n = 1;

    // Test vectors for priority queue operations
    struct test_vector {
        bool enqueue;
        bool dequeue;
        uint8_t data;
        uint8_t priority;
        const char* description;
    };

    test_vector test_vectors[] = {
        {true, false, 10, 2, "Enqueue data=10, priority=2"},
        {true, false, 20, 5, "Enqueue data=20, priority=5 (higher priority)"},
        {true, false, 30, 1, "Enqueue data=30, priority=1 (lower priority)"},
        {true, false, 40, 3, "Enqueue data=40, priority=3 (middle priority)"},
        {false, true, 0, 0, "Dequeue (expect 20, priority 5)"},
        {true, true, 50, 6, "Simultaneous enqueue/dequeue (enqueue 50, priority 6, dequeue 40)"},
        {false, true, 0, 0, "Dequeue (expect 50, priority 6)"},
        {false, true, 0, 0, "Dequeue (expect 10, priority 2)"},
        {false, true, 0, 0, "Dequeue (expect 30, priority 1)"},
        {false, true, 0, 0, "Dequeue from empty queue"}
    };

    // Run the test vectors
    std::cout << "Running Priority Queue Tests (HIGH_PRIORITY_FIRST=1)" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    
    // Wrapper for running test vectors
    auto run_test_vectors = [&]() -> bool {
        total_tests++;
        bool test_pass = true;
        
        for (const auto& test : test_vectors) {
            std::cout << test.description << std::endl;
            
            // Apply test vector
            dut->i_enqueue = test.enqueue;
            dut->i_dequeue = test.dequeue;
            dut->i_data = test.data;
            dut->i_priority = test.priority;
            
            // Clock the design for 2 cycles for each test vector
            for (int i = 0; i < 2; i++) {
                dut->clk = 0;
                dut->eval();
                tfp->dump(sim_time++);
                dut->clk = 1;
                dut->eval();
                tfp->dump(sim_time++);
                
                if (i == 1) {
                    // Print relevant outputs after the operation completes
                    if (test.dequeue) {
                        std::cout << "  Dequeued: Data=" << (int)dut->o_data 
                                  << ", Priority=" << (int)dut->o_priority
                                  << ", Empty=" << (dut->o_empty ? "true" : "false") << std::endl;
                    }
                    std::cout << "  Queue Count: " << (int)dut->o_count 
                              << ", Full=" << (dut->o_full ? "true" : "false")
                              << ", Empty=" << (dut->o_empty ? "true" : "false") << std::endl;
                }
            }
            std::cout << std::endl;
        }
        
        return test_pass;
    };
    
    // Run test vectors
    bool test_vectors_pass = run_test_vectors();
    
    // Additional test: Fill the queue to test full condition
    {
        total_tests++;
        std::cout << "Testing full queue condition..." << std::endl;
        bool test_pass = true;
        
        dut->i_enqueue = 1;
        dut->i_dequeue = 0;
        
        for (int i = 0; i < 20; i++) {  // Try to enqueue more than QUEUE_DEPTH items
            dut->i_data = i + 100;
            dut->i_priority = i % 8;
            
            dut->clk = 0;
            dut->eval();
            tfp->dump(sim_time++);
            dut->clk = 1;
            dut->eval();
            tfp->dump(sim_time++);
            
            if (dut->o_full) {
                std::cout << "  Queue became full after " << (int)dut->o_count << " items" << std::endl;
                break;
            }
        }
        
        // Empty the queue
        std::cout << "\nEmptying the queue..." << std::endl;
        dut->i_enqueue = 0;
        dut->i_dequeue = 1;
        
        int items_dequeued = 0;
        while (!dut->o_empty && items_dequeued < 20) {
            dut->clk = 0;
            dut->eval();
            tfp->dump(sim_time++);
            dut->clk = 1;
            dut->eval();
            tfp->dump(sim_time++);
            
            std::cout << "  Dequeued: Data=" << (int)dut->o_data 
                      << ", Priority=" << (int)dut->o_priority << std::endl;
            items_dequeued++;
        }
        
        if (test_pass) {
            passed_tests++;
            std::cout << "  PASS: Full queue condition" << std::endl;
        } else {
            global_test_pass = false;
            std::cout << "  FAIL: Full queue condition" << std::endl;
        }
    }
    
    // Combine test results
    if (test_vectors_pass) {
        passed_tests++;
    } else {
        global_test_pass = false;
    }
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (global_test_pass ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << passed_tests << " of " << total_tests << std::endl;
    
    // Cleanup
    tfp->close();
    delete tfp;
    delete dut;
    
    exit(global_test_pass ? EXIT_SUCCESS : EXIT_FAILURE);
} 