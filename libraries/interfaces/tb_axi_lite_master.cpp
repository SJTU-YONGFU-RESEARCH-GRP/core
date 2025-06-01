#include "Vaxi_lite_master.h"
#include "verilated.h"
#include <iostream>
#include <vector>
#include <string>

// Test case structure
struct TestCase {
    bool is_write;              // true for write, false for read
    uint32_t address;           // address to read/write
    uint32_t data;              // data to write or expected data for read
    uint8_t strb;               // write strobe (only for write)
    std::string description;    // test description
};

// Class for testing the AXI Lite Master
class AXILiteMasterTester {
private:
    Vaxi_lite_master* m_dut;
    vluint64_t m_tickcount;
    int m_test_count;
    int m_test_passed;
    
public:
    AXILiteMasterTester(Vaxi_lite_master* dut) : 
        m_dut(dut), m_tickcount(0), m_test_count(0), m_test_passed(0) {}
    
    ~AXILiteMasterTester() {
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
    
    // Perform a write transaction
    bool write_transaction(uint32_t address, uint32_t data, uint8_t strb, const std::string& description) {
        m_test_count++;
        std::cout << "Test #" << m_test_count << ": " << description << std::endl;
        
        // Assert the write request and set up write data
        m_dut->write_req = 1;
        m_dut->write_addr = address;
        m_dut->write_data = data;
        m_dut->write_strb = strb;
        tick();
        m_dut->write_req = 0;
        
        // Configure the AXI slave responses
        // In this simulation, we'll act as the slave
        // We'll wait for the master to assert awvalid, then respond with awready
        uint32_t timeout = 100;  // Prevent infinite loops
        
        // Wait for write address
        while (!m_dut->awvalid && timeout > 0) {
            tick();
            timeout--;
        }
        if (timeout == 0) {
            std::cout << "Error: Timeout waiting for awvalid" << std::endl;
            return false;
        }
        
        // Check address
        if (m_dut->awaddr != address) {
            std::cout << "Error: Address mismatch. Expected: 0x" << std::hex << address
                      << ", Got: 0x" << m_dut->awaddr << std::dec << std::endl;
            return false;
        }
        
        // Respond with awready
        m_dut->awready = 1;
        tick();
        m_dut->awready = 0;
        
        // Wait for write data
        timeout = 100;
        while (!m_dut->wvalid && timeout > 0) {
            tick();
            timeout--;
        }
        if (timeout == 0) {
            std::cout << "Error: Timeout waiting for wvalid" << std::endl;
            return false;
        }
        
        // Check data
        if (m_dut->wdata != data) {
            std::cout << "Error: Data mismatch. Expected: 0x" << std::hex << data
                      << ", Got: 0x" << m_dut->wdata << std::dec << std::endl;
            return false;
        }
        
        // Check strobe
        if (m_dut->wstrb != strb) {
            std::cout << "Error: Strobe mismatch. Expected: 0x" << std::hex << (int)strb
                      << ", Got: 0x" << (int)m_dut->wstrb << std::dec << std::endl;
            return false;
        }
        
        // Respond with wready
        m_dut->wready = 1;
        tick();
        m_dut->wready = 0;
        
        // Send response
        m_dut->bresp = 0;  // OKAY response
        m_dut->bvalid = 1;
        
        // Wait for bready
        timeout = 100;
        while (!m_dut->bready && timeout > 0) {
            tick();
            timeout--;
        }
        if (timeout == 0) {
            std::cout << "Error: Timeout waiting for bready" << std::endl;
            return false;
        }
        
        // Complete the transaction
        tick();
        m_dut->bvalid = 0;
        
        // Check write_done signal
        if (!m_dut->write_done) {
            std::cout << "Error: write_done not asserted" << std::endl;
            return false;
        }
        
        // Clear write_done
        tick();
        
        std::cout << "Write transaction successful!" << std::endl;
        m_test_passed++;
        return true;
    }
    
    // Perform a read transaction
    bool read_transaction(uint32_t address, uint32_t expected_data, const std::string& description) {
        m_test_count++;
        std::cout << "Test #" << m_test_count << ": " << description << std::endl;
        
        // Assert the read request
        m_dut->read_req = 1;
        m_dut->read_addr = address;
        tick();
        m_dut->read_req = 0;
        
        // Wait for read address
        uint32_t timeout = 100;
        while (!m_dut->arvalid && timeout > 0) {
            tick();
            timeout--;
        }
        if (timeout == 0) {
            std::cout << "Error: Timeout waiting for arvalid" << std::endl;
            return false;
        }
        
        // Check address
        if (m_dut->araddr != address) {
            std::cout << "Error: Address mismatch. Expected: 0x" << std::hex << address
                      << ", Got: 0x" << m_dut->araddr << std::dec << std::endl;
            return false;
        }
        
        // Respond with arready
        m_dut->arready = 1;
        tick();
        m_dut->arready = 0;
        
        // Wait a cycle or two
        tick();
        
        // Send read data
        m_dut->rdata = expected_data;
        m_dut->rresp = 0;  // OKAY response
        m_dut->rvalid = 1;
        
        // Wait for rready
        timeout = 100;
        while (!m_dut->rready && timeout > 0) {
            tick();
            timeout--;
        }
        if (timeout == 0) {
            std::cout << "Error: Timeout waiting for rready" << std::endl;
            return false;
        }
        
        // Complete the transaction
        tick();
        m_dut->rvalid = 0;
        
        // Wait for read_done
        timeout = 10;
        while (!m_dut->read_done && timeout > 0) {
            tick();
            timeout--;
        }
        if (timeout == 0) {
            std::cout << "Error: read_done not asserted" << std::endl;
            return false;
        }
        
        // Check the read data
        if (m_dut->read_data != expected_data) {
            std::cout << "Error: Read data mismatch. Expected: 0x" << std::hex << expected_data
                      << ", Got: 0x" << m_dut->read_data << std::dec << std::endl;
            return false;
        }
        
        // Clear read_done
        tick();
        
        std::cout << "Read transaction successful!" << std::endl;
        m_test_passed++;
        return true;
    }
    
    // Run all test cases
    void run_tests() {
        std::vector<TestCase> test_cases = {
            // Write transactions
            {true, 0x1000, 0xABCD1234, 0xF, "Write to address 0x1000"},
            {true, 0x2000, 0x55AA55AA, 0xF, "Write to address 0x2000"},
            {true, 0x3000, 0x12345678, 0x5, "Write with partial byte enable"},
            
            // Read transactions
            {false, 0x1000, 0xABCD1234, 0, "Read from address 0x1000"},
            {false, 0x2000, 0x55AA55AA, 0, "Read from address 0x2000"},
            {false, 0x4000, 0xDEADBEEF, 0, "Read from address 0x4000"}
        };
        
        reset();
        
        for (const auto& test : test_cases) {
            if (test.is_write) {
                write_transaction(test.address, test.data, test.strb, test.description);
            } else {
                read_transaction(test.address, test.data, test.description);
            }
            
            // Add some idle cycles between tests
            for (int i = 0; i < 5; i++) {
                tick();
            }
        }
        
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
    Vaxi_lite_master* dut = new Vaxi_lite_master;
    
    // Create tester
    AXILiteMasterTester tester(dut);
    
    // Initialize signals
    dut->clk = 0;
    dut->rst_n = 0;
    dut->write_req = 0;
    dut->read_req = 0;
    dut->awready = 0;
    dut->wready = 0;
    dut->bvalid = 0;
    dut->arready = 0;
    dut->rvalid = 0;
    
    // Run the tests
    tester.run_tests();
    
    // Finish
    return 0;
}
