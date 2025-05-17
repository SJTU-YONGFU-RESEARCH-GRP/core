#include "Vaxi_stream_interface.h"
#include "verilated.h"
#include <iostream>
#include <vector>
#include <string>
#include <cstdint>

// Structure to represent test data for AXI Stream
struct AXIStreamTestData {
    uint32_t data;
    bool last;
    uint8_t strb;
    uint8_t keep;
    uint8_t user;
    uint8_t dest;
    uint8_t id;
    std::string description;
};

// Class for testing the AXI Stream Interface
class AXIStreamTester {
private:
    Vaxi_stream_interface* m_dut;
    vluint64_t m_tickcount;
    int m_test_count;
    int m_test_passed;
    
public:
    AXIStreamTester(Vaxi_stream_interface* dut) : 
        m_dut(dut), m_tickcount(0), m_test_count(0), m_test_passed(0) {}
    
    ~AXIStreamTester() {
        delete m_dut;
    }
    
    // Reset the DUT
    void reset() {
        m_dut->rst_n = 0;
        // Hold reset for 10 clock cycles
        for (int i = 0; i < 10; i++) {
            tick();
        }
        m_dut->rst_n = 1;
        tick();
    }
    
    // Clock tick
    void tick() {
        m_dut->clk = 0;
        m_dut->eval();
        m_tickcount++;
        
        m_dut->clk = 1;
        m_dut->eval();
        m_tickcount++;
    }
    
    // Send data through the AXI Stream interface
    bool send_data(const std::vector<AXIStreamTestData>& test_data) {
        m_test_count++;
        std::cout << "Test #" << m_test_count << ": Transfer data through AXI Stream Interface" << std::endl;
        
        bool success = true;
        int transferred = 0;
        
        // Initialize both interfaces
        m_dut->m_tready = 1;
        m_dut->s_tvalid = 0;
        
        // Ensure all input signals are initialized
        m_dut->s_tdata = 0;
        m_dut->s_tlast = 0;
        m_dut->s_tstrb = 0;
        m_dut->s_tkeep = 0;
        m_dut->s_tuser = 0;
        m_dut->s_tdest = 0;
        m_dut->s_tid = 0;
        
        // Cycle a few times to get to stable state
        for (int i = 0; i < 5; i++) {
            tick();
        }
        
        // Process each packet
        for (size_t i = 0; i < test_data.size(); i++) {
            const auto& td = test_data[i];
            std::cout << "Sending packet #" << (i+1) << ": " << td.description << std::endl;
            
            // Set input data on slave interface
            m_dut->s_tdata = td.data;
            m_dut->s_tlast = td.last;
            m_dut->s_tstrb = td.strb;
            m_dut->s_tkeep = td.keep;
            m_dut->s_tuser = td.user;
            m_dut->s_tdest = td.dest;
            m_dut->s_tid = td.id;
            m_dut->s_tvalid = 1;
            
            // Wait for slave interface to be ready
            while (!m_dut->s_tready) {
                tick();
            }
            
            // At this point downstream might get the data
            tick();
            
            // Check if data was received at the master interface
            bool transfer_completed = false;
            uint32_t timeout = 10;  // Limited timeout
            
            while (!transfer_completed && timeout > 0) {
                if (m_dut->m_tvalid && m_dut->m_tready) {
                    // Verify data integrity
                    if (m_dut->m_tdata != td.data) {
                        std::cout << "Error: Data mismatch. Expected: 0x" << std::hex << td.data
                                  << ", Got: 0x" << m_dut->m_tdata << std::dec << std::endl;
                        success = false;
                    } else if (m_dut->m_tlast != td.last) {
                        std::cout << "Error: TLAST mismatch. Expected: " << (td.last ? "1" : "0")
                                  << ", Got: " << (m_dut->m_tlast ? "1" : "0") << std::endl;
                        success = false;
                    } else if (m_dut->m_tstrb != td.strb) {
                        std::cout << "Error: TSTRB mismatch. Expected: 0x" << std::hex << (int)td.strb
                                  << ", Got: 0x" << (int)m_dut->m_tstrb << std::dec << std::endl;
                        success = false;
                    } else if (m_dut->m_tkeep != td.keep) {
                        std::cout << "Error: TKEEP mismatch. Expected: 0x" << std::hex << (int)td.keep
                                  << ", Got: 0x" << (int)m_dut->m_tkeep << std::dec << std::endl;
                        success = false;
                    } else if (m_dut->m_tuser != td.user) {
                        std::cout << "Error: TUSER mismatch. Expected: 0x" << std::hex << (int)td.user
                                  << ", Got: 0x" << (int)m_dut->m_tuser << std::dec << std::endl;
                        success = false;
                    } else if (m_dut->m_tdest != td.dest) {
                        std::cout << "Error: TDEST mismatch. Expected: 0x" << std::hex << (int)td.dest
                                  << ", Got: 0x" << (int)m_dut->m_tdest << std::dec << std::endl;
                        success = false;
                    } else if (m_dut->m_tid != td.id) {
                        std::cout << "Error: TID mismatch. Expected: 0x" << std::hex << (int)td.id
                                  << ", Got: 0x" << (int)m_dut->m_tid << std::dec << std::endl;
                        success = false;
                    } else {
                        std::cout << "Packet verified successfully!" << std::endl;
                    }
                    
                    transferred++;
                    transfer_completed = true;
                } else {
                    tick();
                    timeout--;
                }
            }
            
            if (!transfer_completed) {
                std::cout << "Error: Transfer timed out for packet #" << (i+1) << std::endl;
                success = false;
            }
            
            // Test backpressure on every other packet
            if (i % 2 == 0) {
                // Apply backpressure for a few cycles
                m_dut->m_tready = 0;
                for (int j = 0; j < 3; j++) {
                    tick();
                }
                m_dut->m_tready = 1;
            }
            
            // Deassert valid
            m_dut->s_tvalid = 0;
            
            // Add some idle cycles between transfers
            for (int j = 0; j < 5; j++) {
                tick();
            }
        }
        
        if (success) {
            std::cout << "Successfully transferred " << transferred << " packets!" << std::endl;
            m_test_passed++;
        }
        
        return success;
    }
    
    // Test backpressure handling
    bool test_backpressure() {
        m_test_count++;
        std::cout << "Test #" << m_test_count << ": Backpressure handling" << std::endl;
        
        bool success = true;
        
        // Reset DUT state
        m_dut->m_tready = 1;
        m_dut->s_tvalid = 0;
        
        for (int i = 0; i < 5; i++) {
            tick();
        }
        
        // Set up test data
        m_dut->s_tdata = 0xABCD1234;
        m_dut->s_tvalid = 1;
        m_dut->s_tlast = 0;
        m_dut->s_tstrb = 0xF;
        m_dut->s_tkeep = 0xF;
        m_dut->s_tuser = 0;
        m_dut->s_tdest = 0;
        m_dut->s_tid = 0;
        
        // Make sure data gets through
        tick();
        
        // Now apply backpressure
        m_dut->m_tready = 0;
        
        // Wait a few cycles with backpressure
        for (int i = 0; i < 5; i++) {
            tick();
        }
        
        // Verify that downstream valid is still asserted during backpressure
        if (!m_dut->m_tvalid) {
            std::cout << "Error: Master valid deasserted during backpressure" << std::endl;
            success = false;
        }
        
        // Verify upstream handshake - slave should not be ready due to backpressure
        if (m_dut->s_tready) {
            std::cout << "Error: Slave ready asserted during backpressure" << std::endl;
            success = false;
        }
        
        // Release backpressure
        m_dut->m_tready = 1;
        tick();
        
        // Verify data transfer happens
        if (!m_dut->m_tvalid) {
            std::cout << "Error: Master valid not asserted after backpressure released" << std::endl;
            success = false;
        }
        
        if (m_dut->m_tdata != 0xABCD1234) {
            std::cout << "Error: Data corrupted during backpressure. Expected: 0xABCD1234, Got: 0x" 
                      << std::hex << m_dut->m_tdata << std::dec << std::endl;
            success = false;
        }
        
        // Complete the transfer
        tick();
        
        // Clear signals
        m_dut->s_tvalid = 0;
        for (int i = 0; i < 5; i++) {
            tick();
        }
        
        if (success) {
            std::cout << "Backpressure handling test passed!" << std::endl;
            m_test_passed++;
        }
        
        return success;
    }
    
    // Run all test cases
    void run_tests() {
        // Define test data
        std::vector<AXIStreamTestData> test_data = {
            {0x12345678, 0, 0xF, 0xF, 0, 0, 0, "Normal packet 1"},
            {0xABCDEF01, 0, 0xF, 0xF, 1, 0, 0, "Normal packet 2"},
            {0x55AA55AA, 1, 0xF, 0xF, 0, 1, 0, "End of frame packet"},
            {0xDEADBEEF, 0, 0x5, 0x5, 0, 0, 1, "Partial byte enable packet"},
            {0x01234567, 1, 0xF, 0xF, 1, 1, 1, "Final packet with all fields set"}
        };
        
        reset();
        
        // Test data transfer
        send_data(test_data);
        
        // Reset again for backpressure test
        reset();
        
        // Test backpressure handling
        test_backpressure();
        
        print_summary();
    }
    
    // Print test summary
    void print_summary() {
        std::cout << "\n==== Test Summary ====" << std::endl;
        std::cout << "Result: " << (m_test_passed == m_test_count ? "Pass" : "Fail") << std::endl;
        std::cout << "Tests: " << m_test_passed << " of " << m_test_count << std::endl;
    }
};

// Main function
int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create the DUT instance
    Vaxi_stream_interface* dut = new Vaxi_stream_interface;
    
    // Create tester
    AXIStreamTester tester(dut);
    
    // Initialize signals
    dut->clk = 0;
    dut->rst_n = 0;
    dut->s_tvalid = 0;
    dut->m_tready = 0;
    
    // Run the tests
    tester.run_tests();
    
    // Finish
    return 0;
} 