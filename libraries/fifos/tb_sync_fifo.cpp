#include <stdlib.h>
#include <iostream>
#include <vector>
#include <verilated.h>
#include "Vsync_fifo.h"

#define DATA_WIDTH 8
#define ADDR_WIDTH 4
#define FIFO_DEPTH (1<<ADDR_WIDTH)

// Clock tick function
void clock_tick(Vsync_fifo* dut) {
    dut->clk = 0;
    dut->eval();
    dut->clk = 1;
    dut->eval();
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vsync_fifo* dut = new Vsync_fifo;

    // Initialize signals
    dut->clk = 0;
    dut->rst_n = 0;
    dut->wr_en = 0;
    dut->rd_en = 0;
    dut->wr_data = 0;

    // Reset
    for (int i = 0; i < 2; i++) clock_tick(dut);
    dut->rst_n = 1;
    clock_tick(dut);

    int total_tests = 3;
    int passed_tests = 0;

    // Test 1: Basic write and read
    {
        std::cout << "Test 1: Basic write and read" << std::endl;
        std::vector<uint8_t> write_data = {1, 2, 3, 4, 5};
        std::vector<uint8_t> read_data;

        // Write
        for (auto v : write_data) {
            dut->wr_en = 1;
            dut->wr_data = v;
            clock_tick(dut);
        }
        dut->wr_en = 0;
        clock_tick(dut);

        // Read
        for (size_t i = 0; i < write_data.size(); i++) {
            dut->rd_en = 1;
            clock_tick(dut);
            read_data.push_back(dut->rd_data);
        }
        dut->rd_en = 0;
        clock_tick(dut);

        if (write_data == read_data) {
            std::cout << "  PASS" << std::endl;
            passed_tests++;
        } else {
            std::cout << "  FAIL" << std::endl;
        }
    }

    // Test 2: Full and empty flags
    {
        std::cout << "Test 2: Full and empty flags" << std::endl;
        // Fill FIFO
        for (int i = 0; i < FIFO_DEPTH; i++) {
            dut->wr_en = 1;
            dut->wr_data = i;
            clock_tick(dut);
        }
        dut->wr_en = 0;
        clock_tick(dut);

        bool full_ok = dut->full == 1;

        // Empty by reading all
        bool empty_ok = true;
        for (int i = 0; i < FIFO_DEPTH; i++) {
            dut->rd_en = 1;
            clock_tick(dut);
        }
        dut->rd_en = 0;
        clock_tick(dut);
        empty_ok = (dut->empty == 1);

        if (full_ok && empty_ok) {
            std::cout << "  PASS" << std::endl;
            passed_tests++;
        } else {
            std::cout << "  FAIL" << std::endl;
        }
    }

    // Test 3: Almost full / empty thresholds
    {
        std::cout << "Test 3: Almost flags" << std::endl;
        // Clear FIFO
        while (!dut->empty) {
            dut->rd_en = 1;
            clock_tick(dut);
        }
        dut->rd_en = 0;
        clock_tick(dut);

        // Fill until almost_full threshold
        int threshold = FIFO_DEPTH - 2; // default threshold
        for (int i = 0; i < threshold; i++) {
            dut->wr_en = 1;
            dut->wr_data = i;
            clock_tick(dut);
        }
        dut->wr_en = 0;
        clock_tick(dut);

        bool almost_full_ok = dut->almost_full == 1;

        // Read until almost_empty threshold
        int empty_th = 2;
        for (int i = 0; i < threshold - empty_th; i++) {
            dut->rd_en = 1;
            clock_tick(dut);
        }
        dut->rd_en = 0;
        clock_tick(dut);

        bool almost_empty_ok = dut->almost_empty == 1;

        if (almost_full_ok && almost_empty_ok) {
            std::cout << "  PASS" << std::endl;
            passed_tests++;
        } else {
            std::cout << "  FAIL" << std::endl;
        }
    }

    // Summary
    std::cout << "\n==== Test Summary ====\n";
    std::cout << "Result: " << (passed_tests==total_tests ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << passed_tests << " of " << total_tests << std::endl;

    delete dut;
    return (passed_tests==total_tests) ? 0 : 1;
} 