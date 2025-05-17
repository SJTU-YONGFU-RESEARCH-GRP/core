#include "Vwishbone_master.h"
#include "verilated.h"
#include <iostream>
#include <vector>
#include <string>

// Class for testing the Wishbone Master
class WishboneMasterTester {
private:
    Vwishbone_master* m_dut;
    vluint64_t m_tickcount;
    int m_test_count;
    int m_test_passed;
    
public:
    WishboneMasterTester(Vwishbone_master* dut) : 
        m_dut(dut), m_tickcount(0), m_test_count(0), m_test_passed(0) {}
    
    ~WishboneMasterTester() {
        delete m_dut;
    }
    
    // Reset the DUT
    void reset() {
        m_dut->rst_n = 0;
        
        // Reset inputs from both sides (user and slave)
        m_dut->wb_dat_i = 0;
        m_dut->wb_ack_i = 0;
        m_dut->wb_err_i = 0;
        m_dut->wb_rty_i = 0;
        m_dut->wb_tgd_i = 0;
        
        m_dut->write_req = 0;
        m_dut->write_addr = 0;
        m_dut->write_data = 0;
        m_dut->write_sel = 0;
        
        m_dut->read_req = 0;
        m_dut->read_addr = 0;
        m_dut->read_sel = 0;
        
        // Hold reset for 10 clock cycles
        for (int i = 0; i < 10; i++) {
            tick();
        }
        m_dut->rst_n = 1;
        tick();
    }
    
    // Clock tick with evaluation
    void tick() {
        m_dut->clk = 0;
        m_dut->eval();
        m_tickcount++;
        
        m_dut->clk = 1;
        m_dut->eval();
        m_tickcount++;
    }
    
    // Print all relevant signals (for debugging)
    void printSignals(const char* prefix) {
        std::cout << prefix << ": "
                  << "cyc=" << (m_dut->wb_cyc_o ? 1 : 0)
                  << " stb=" << (m_dut->wb_stb_o ? 1 : 0)
                  << " we=" << (m_dut->wb_we_o ? 1 : 0)
                  << " ack=" << (m_dut->wb_ack_i ? 1 : 0)
                  << " wr_done=" << (m_dut->write_done ? 1 : 0)
                  << " rd_done=" << (m_dut->read_done ? 1 : 0)
                  << " addr=0x" << std::hex << m_dut->wb_adr_o << std::dec
                  << "\n";
    }
    
    // Basic write transaction test
    bool test_write_transaction() {
        m_test_count++;
        std::cout << "Test #" << m_test_count << ": Basic Write Transaction" << std::endl;
        
        uint32_t addr = 0x12345678;
        uint32_t data = 0xABCDEF01;
        uint8_t select = 0xF; // All bytes
        
        // Start write transaction
        m_dut->write_req = 1;
        m_dut->write_addr = addr;
        m_dut->write_data = data;
        m_dut->write_sel = select;
        tick();
        printSignals("After write_req");
        
        // Clear request
        m_dut->write_req = 0;
        tick();
        printSignals("After clear req");
        
        // Wait for a few cycles
        for (int i = 0; i < 3; i++) {
            tick();
            printSignals("Wait cycle");
        }
        
        // Provide ack
        m_dut->wb_ack_i = 1;
        tick();
        printSignals("Provide ack");
        
        // Clear ack and wait for done
        m_dut->wb_ack_i = 0;
        tick();
        printSignals("After clearing ack");
        
        // Check the result
        bool success = m_dut->write_done;
        if (success) {
            std::cout << "Write transaction successful!" << std::endl;
            m_test_passed++;
            return true;
        } else {
            std::cout << "Error: Write transaction failed - write_done not asserted" << std::endl;
            return false;
        }
    }
    
    // Basic read transaction test
    bool test_read_transaction() {
        m_test_count++;
        std::cout << "Test #" << m_test_count << ": Basic Read Transaction" << std::endl;
        
        uint32_t addr = 0x87654321;
        uint32_t expected_data = 0x10FEDCBA;
        uint8_t select = 0xF; // All bytes
        
        // Start read transaction
        m_dut->read_req = 1;
        m_dut->read_addr = addr;
        m_dut->read_sel = select;
        tick();
        printSignals("After read_req");
        
        // Clear request
        m_dut->read_req = 0;
        tick();
        printSignals("After clear req");
        
        // Wait for a few cycles
        for (int i = 0; i < 3; i++) {
            tick();
            printSignals("Wait cycle");
        }
        
        // Provide response data and ack
        m_dut->wb_dat_i = expected_data;
        m_dut->wb_ack_i = 1;
        tick();
        printSignals("Provide data & ack");
        
        // Clear ack
        m_dut->wb_ack_i = 0;
        tick();
        printSignals("After clearing ack");
        
        // Extra cycle to allow read_done to propagate
        tick();
        printSignals("Extra cycle");
        
        // Check the result
        if (!m_dut->read_done) {
            std::cout << "Error: Read transaction failed - read_done not asserted" << std::endl;
            return false;
        }
        
        if (m_dut->read_data != expected_data) {
            std::cout << "Error: Read data mismatch. Expected: 0x" << std::hex << expected_data 
                      << ", Got: 0x" << m_dut->read_data << std::dec << std::endl;
            return false;
        }
        
        std::cout << "Read transaction successful!" << std::endl;
        m_test_passed++;
        return true;
    }
    
    // Test error response
    bool test_error_response() {
        m_test_count++;
        std::cout << "Test #" << m_test_count << ": Error Response Handling" << std::endl;
        
        // Test write with error
        m_dut->write_req = 1;
        m_dut->write_addr = 0xDEADBEEF;
        m_dut->write_data = 0x12345678;
        m_dut->write_sel = 0xF;
        tick();
        printSignals("After write_req");
        
        // Clear request
        m_dut->write_req = 0;
        tick();
        printSignals("After clear req");
        
        // Wait for a few cycles
        for (int i = 0; i < 2; i++) {
            tick();
            printSignals("Wait cycle");
        }
        
        // Provide error response
        m_dut->wb_err_i = 1;
        tick();
        printSignals("Provide error");
        
        // Clear error
        m_dut->wb_err_i = 0;
        tick();
        printSignals("After clearing error");
        
        // Extra cycle to allow error to propagate
        tick();
        printSignals("Extra cycle");
        
        // Check result
        bool write_error_detected = m_dut->write_err;
        if (!write_error_detected) {
            std::cout << "Error: Write error not detected" << std::endl;
            return false;
        }
        
        // Wait a few cycles before next test
        for (int i = 0; i < 5; i++) {
            tick();
        }
        
        // Test read with error
        m_dut->read_req = 1;
        m_dut->read_addr = 0xBADCAFE;
        m_dut->read_sel = 0xF;
        tick();
        printSignals("After read_req");
        
        // Clear request
        m_dut->read_req = 0;
        tick();
        printSignals("After clear req");
        
        // Wait for a few cycles
        for (int i = 0; i < 2; i++) {
            tick();
            printSignals("Wait cycle");
        }
        
        // Provide error response
        m_dut->wb_err_i = 1;
        tick();
        printSignals("Provide error");
        
        // Clear error
        m_dut->wb_err_i = 0;
        tick();
        printSignals("After clearing error");
        
        // Extra cycle to allow error to propagate
        tick();
        printSignals("Extra cycle");
        
        // Check result
        bool read_error_detected = m_dut->read_err;
        if (!read_error_detected) {
            std::cout << "Error: Read error not detected" << std::endl;
            return false;
        }
        
        std::cout << "Error response handling successful!" << std::endl;
        m_test_passed++;
        return true;
    }
    
    // Test retry response
    bool test_retry_response() {
        m_test_count++;
        std::cout << "Test #" << m_test_count << ": Retry Response Handling" << std::endl;
        
        // Start write transaction that will encounter retries
        m_dut->write_req = 1;
        m_dut->write_addr = 0x55555555;
        m_dut->write_data = 0xAAAAAAAA;
        m_dut->write_sel = 0xF;
        tick();
        printSignals("After write_req");
        
        // Clear request
        m_dut->write_req = 0;
        tick();
        printSignals("After clear req");
        
        // Wait for a few cycles
        for (int i = 0; i < 2; i++) {
            tick();
            printSignals("Wait cycle");
        }
        
        // First retry
        m_dut->wb_rty_i = 1;
        tick();
        printSignals("Provide retry 1");
        
        // Clear retry
        m_dut->wb_rty_i = 0;
        tick();
        printSignals("After clearing retry 1");
        
        // Wait for a few cycles - should see bus signals reasserted
        for (int i = 0; i < 3; i++) {
            tick();
            printSignals("Wait for retry");
        }
        
        // Second retry
        m_dut->wb_rty_i = 1;
        tick();
        printSignals("Provide retry 2");
        
        // Clear retry
        m_dut->wb_rty_i = 0;
        tick();
        printSignals("After clearing retry 2");
        
        // Wait for a few cycles - should see bus signals reasserted
        for (int i = 0; i < 3; i++) {
            tick();
            printSignals("Wait for retry");
        }
        
        // Now send ACK for the final attempt
        m_dut->wb_ack_i = 1;
        tick();
        printSignals("Provide ack");
        
        // Clear ack
        m_dut->wb_ack_i = 0;
        tick();
        printSignals("After clearing ack");
        
        // Extra cycle to allow done to propagate
        tick();
        printSignals("Extra cycle");
        
        // Check the result
        bool success = m_dut->write_done;
        if (!success) {
            std::cout << "Error: Write transaction failed after retries" << std::endl;
            return false;
        }
        
        std::cout << "Retry response handling successful!" << std::endl;
        m_test_passed++;
        return true;
    }
    
    // Run all tests
    void run_tests() {
        reset();
        test_write_transaction();
        test_read_transaction();
        test_error_response();
        test_retry_response();
        print_summary();
    }
    
    // Print test summary
    void print_summary() {
        std::cout << std::endl << "==== Test Summary ====" << std::endl;
        std::cout << "Result: " << (m_test_passed == m_test_count ? "Pass" : "Fail") << std::endl;
        std::cout << "Tests: " << m_test_passed << " of " << m_test_count << std::endl;
    }
};

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create DUT
    Vwishbone_master* dut = new Vwishbone_master;
    
    // Create and run tests
    WishboneMasterTester tester(dut);
    tester.run_tests();
    
    // Done
    return 0;
} 