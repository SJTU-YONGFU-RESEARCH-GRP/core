# RTL Verification Report

Generated on: 2025-05-17 01:54:31

## Table of Contents

1. [Summary](#summary)
2. [Category Overview](#category-overview)
3. [Adders](#category-adders)
4. [Arbitration](#category-arbitration)
5. [Arithmetic](#category-arithmetic)
6. [CORDIC](#category-cordic)
7. [Clock Domain Crossing](#category-clock-domain-crossing)
8. [Communication](#category-communication)
9. [Counters](#category-counters)
10. [Debugging](#category-debugging)
11. [Encoding/Decoding](#category-encoding/decoding)
12. [Encryption](#category-encryption)
13. [FIFOs](#category-fifos)
14. [Filters](#category-filters)
15. [Input/Output](#category-input/output)
16. [Interfaces](#category-interfaces)
17. [Mathematics](#category-mathematics)
18. [Memory](#category-memory)
19. [Multiplication](#category-multiplication)
20. [Network on Chip](#category-network-on-chip)
21. [Power Management](#category-power-management)
22. [Registers](#category-registers)
23. [Signal Processing](#category-signal-processing)
24. [State Machines](#category-state-machines)
25. [Testing](#category-testing)
26. [Voting](#category-voting)
27. [Notes](#notes)

## Summary

- Total modules scanned: 137
- Modules with missing testbenches: 11
- Total modules tested: 3
- Passed: 2 (66.7%)
- Failed: 1 (33.3%)
- Timeouts: 0
- Total tests executed: 10
- Total tests passed: 10 (100.0%)
- Total runtime: 5.74 seconds
- Average runtime per module: 1.91 seconds

## Category Overview

| Category | Modules | Passed | Failed | Pass Rate | Tests Passed | Runtime (s) |
|----------|--------:|-------:|-------:|----------:|-------------:|-----------:|
| [Adders](#category-adders) | 6 | 0 | 0 | 0.0% | 0/0 | 0.00 |
| [Arbitration](#category-arbitration) | 4 | 0 | 0 | 0.0% | 0/0 | 0.00 |
| [Arithmetic](#category-arithmetic) | 2 | 0 | 0 | 0.0% | 0/0 | 0.00 |
| [CORDIC](#category-cordic) | 3 | 0 | 0 | 0.0% | 0/0 | 0.00 |
| [Clock Domain Crossing](#category-clock-domain-crossing) | 4 | 0 | 0 | 0.0% | 0/0 | 0.00 |
| [Communication](#category-communication) | 12 | 0 | 0 | 0.0% | 0/0 | 0.00 |
| [Counters](#category-counters) | 15 | 0 | 0 | 0.0% | 0/0 | 0.00 |
| [Debugging](#category-debugging) | 2 | 0 | 0 | 0.0% | 0/0 | 0.00 |
| [Encoding/Decoding](#category-encoding/decoding) | 7 | 0 | 0 | 0.0% | 0/0 | 0.00 |
| [Encryption](#category-encryption) | 2 | 0 | 0 | 0.0% | 0/0 | 0.00 |
| [FIFOs](#category-fifos) | 20 | 0 | 0 | 0.0% | 0/0 | 0.00 |
| [Filters](#category-filters) | 2 | 0 | 0 | 0.0% | 0/0 | 0.00 |
| [Input/Output](#category-input/output) | 2 | 0 | 0 | 0.0% | 0/0 | 0.00 |
| [Interfaces](#category-interfaces) | 4 | 0 | 0 | 0.0% | 0/0 | 0.00 |
| [Mathematics](#category-mathematics) | 3 | 2 | 1 | 66.7% | 10/10 | 1.91 |
| [Memory](#category-memory) | 4 | 0 | 0 | 0.0% | 0/0 | 0.00 |
| [Multiplication](#category-multiplication) | 3 | 0 | 0 | 0.0% | 0/0 | 0.00 |
| [Network on Chip](#category-network-on-chip) | 4 | 0 | 0 | 0.0% | 0/0 | 0.00 |
| [Power Management](#category-power-management) | 5 | 0 | 0 | 0.0% | 0/0 | 0.00 |
| [Registers](#category-registers) | 20 | 0 | 0 | 0.0% | 0/0 | 0.00 |
| [Signal Processing](#category-signal-processing) | 9 | 0 | 0 | 0.0% | 0/0 | 0.00 |
| [State Machines](#category-state-machines) | 1 | 0 | 0 | 0.0% | 0/0 | 0.00 |
| [Testing](#category-testing) | 2 | 0 | 0 | 0.0% | 0/0 | 0.00 |
| [Voting](#category-voting) | 1 | 0 | 0 | 0.0% | 0/0 | 0.00 |

## Detailed Results

<a name='category-adders'></a>
### Adders

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| configurable_brent_kung_adder | libraries/adders/configurable_brent_kung_adder.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| configurable_carry_lookahead_adder | libraries/adders/configurable_carry_lookahead_adder.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| configurable_carry_select_adder | libraries/adders/configurable_carry_select_adder.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| configurable_carry_skip_adder | libraries/adders/configurable_carry_skip_adder.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| configurable_conditional_sum_adder | libraries/adders/configurable_conditional_sum_adder.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| configurable_kogge_stone_adder | libraries/adders/configurable_kogge_stone_adder.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |

<a name='category-arbitration'></a>
### Arbitration

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| arbiter | libraries/arbiters/arbiter.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| arbiter_rr | libraries/arbiters/arbiter_rr.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| fair_priority_arbiter | libraries/arbiters/fair_priority_arbiter.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| matrix_arbiter | libraries/arbiters/matrix_arbiter.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |

<a name='category-arithmetic'></a>
### Arithmetic

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| alu | libraries/alu/alu.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| configurable_comparator | libraries/alu/configurable_comparator.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |

<a name='category-cordic'></a>
### CORDIC

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| cordic | libraries/cordic/cordic.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| cordic_core | libraries/cordic/cordic_core.v | ⚠ NO TESTBENCH | 0/0 | 0.00 | No testbench available |
| sine_cosine_generator | libraries/cordic/sine_cosine_generator.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |

<a name='category-clock-domain-crossing'></a>
### Clock Domain Crossing

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| clock_domain_crossing | libraries/cdc/clock_domain_crossing.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| clock_domain_crossing_fifo | libraries/cdc/clock_domain_crossing_fifo.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| handshake_synchronizer | libraries/cdc/handshake_synchronizer.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| multi_flop_synchronizer | libraries/cdc/multi_flop_synchronizer.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |

<a name='category-communication'></a>
### Communication

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| ahb_lite_master | libraries/comms/ahb_lite_master.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| basic_spi_master | libraries/comms/basic_spi_master.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| final_spi_master | libraries/comms/final_spi_master.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| fixed_spi_master | libraries/comms/fixed_spi_master.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| parameterized_deserializer | libraries/comms/parameterized_deserializer.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| parameterized_i2c_master | libraries/comms/parameterized_i2c_master.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| parameterized_serdes | libraries/comms/parameterized_serdes.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| parameterized_spi_master | libraries/comms/parameterized_spi_master.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| parameterized_uart_rx | libraries/comms/parameterized_uart_rx.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| parameterized_uart_tx | libraries/comms/parameterized_uart_tx.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| simple_spi_master | libraries/comms/simple_spi_master.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| spi_master | libraries/comms/spi_master.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |

<a name='category-counters'></a>
### Counters

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| configurable_clz_clo | libraries/counters/configurable_clz_clo.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| gray_counter | libraries/counters/gray_counter.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| johnson_counter | libraries/counters/johnson_counter.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| leading_zero_counter | libraries/counters/leading_zero_counter.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| loadable_updown_counter | libraries/counters/loadable_updown_counter.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| parameterized_decade_counter | libraries/counters/parameterized_decade_counter.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| parameterized_gray_counter | libraries/counters/parameterized_gray_counter.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| parameterized_johnson_counter | libraries/counters/parameterized_johnson_counter.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| parameterized_johnson_updown_counter | libraries/counters/parameterized_johnson_updown_counter.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| parameterized_loadable_counter | libraries/counters/parameterized_loadable_counter.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| parameterized_onehot_counter | libraries/counters/parameterized_onehot_counter.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| parameterized_ring_counter | libraries/counters/parameterized_ring_counter.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| parameterized_self_correcting_counter | libraries/counters/parameterized_self_correcting_counter.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| parameterized_sync_reset_counter | libraries/counters/parameterized_sync_reset_counter.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| parameterized_updown_counter | libraries/counters/parameterized_updown_counter.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |

<a name='category-debugging'></a>
### Debugging

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| logic_analyzer | libraries/debug/logic_analyzer.v | ⚠ NO TESTBENCH | 0/0 | 0.00 | No testbench available |
| performance_counter | libraries/debug/performance_counter.v | ⚠ NO TESTBENCH | 0/0 | 0.00 | No testbench available |

<a name='category-encoding/decoding'></a>
### Encoding/Decoding

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| binary_to_gray | libraries/codings/binary_to_gray.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| configurable_priority_encoder | libraries/codings/configurable_priority_encoder.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| gray_to_binary | libraries/codings/gray_to_binary.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| hamming_code | libraries/codings/hamming_code.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| parameterized_crc_generator | libraries/codings/parameterized_crc_generator.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| parameterized_scrambler | libraries/codings/parameterized_scrambler.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| priority_encoder | libraries/codings/priority_encoder.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |

<a name='category-encryption'></a>
### Encryption

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| aes_core | libraries/encryption/aes_core.v | ⚠ NO TESTBENCH | 0/0 | 0.00 | No testbench available |
| true_random_generator | libraries/encryption/true_random_generator.v | ⚠ NO TESTBENCH | 0/0 | 0.00 | No testbench available |

<a name='category-fifos'></a>
### FIFOs

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| async_fifo | libraries/fifos/async_fifo.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| barrel_shifter_fifo | libraries/fifos/barrel_shifter_fifo.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| bidirectional_fifo | libraries/fifos/bidirectional_fifo.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| cache_fifo | libraries/fifos/cache_fifo.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| circular_buffer_fifo | libraries/fifos/circular_buffer_fifo.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| configurable_param_fifo | libraries/fifos/configurable_param_fifo.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| configurable_sync_fifo | libraries/fifos/configurable_sync_fifo.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| credit_based_fifo | libraries/fifos/credit_based_fifo.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| dual_clock_fifo | libraries/fifos/dual_clock_fifo.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| elastic_buffer | libraries/fifos/elastic_buffer.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| fifo | libraries/fifos/fifo.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| fwft_fifo | libraries/fifos/fwft_fifo.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| memory_mapped_fifo | libraries/fifos/memory_mapped_fifo.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| multi_ported_fifo | libraries/fifos/multi_ported_fifo.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| parameterized_priority_queue | libraries/fifos/parameterized_priority_queue.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| pipelined_fifo | libraries/fifos/pipelined_fifo.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| showahead_fifo | libraries/fifos/showahead_fifo.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| skid_buffer | libraries/fifos/skid_buffer.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| smart_fifo | libraries/fifos/smart_fifo.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| sync_fifo | libraries/fifos/sync_fifo.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |

<a name='category-filters'></a>
### Filters

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| configurable_fir_filter | libraries/filters/configurable_fir_filter.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| fir_filter | libraries/filters/fir_filter.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |

<a name='category-input/output'></a>
### Input/Output

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| dma_controller | libraries/io/dma_controller.v | ⚠ NO TESTBENCH | 0/0 | 0.00 | No testbench available |
| gpio_controller | libraries/io/gpio_controller.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |

<a name='category-interfaces'></a>
### Interfaces

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| axi_lite_master | libraries/interfaces/axi_lite_master.v | ⚠ NO TESTBENCH | 0/0 | 0.00 | No testbench available |
| axi_stream_interface | libraries/interfaces/axi_stream_interface.v | ⚠ NO TESTBENCH | 0/0 | 0.00 | No testbench available |
| pcie_endpoint | libraries/interfaces/pcie_endpoint.v | ⚠ NO TESTBENCH | 0/0 | 0.00 | No testbench available |
| wishbone_master | libraries/interfaces/wishbone_master.v | ⚠ NO TESTBENCH | 0/0 | 0.00 | No testbench available |

<a name='category-mathematics'></a>
### Mathematics

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| fixed_point_sqrt | libraries/math/fixed_point_sqrt.v | ✓ PASS | 10/10 | 0.07 | 10 of 10 |
| floating_point_adder | libraries/math/floating_point_adder.v | ✓ PASS | N/A | 5.13 | Execution completed successfully |
| non_restoring_divider | libraries/math/non_restoring_divider.v | ✗ FAIL | N/A | 0.54 | Build failed: MODULE="non_restoring_divider"; VERILOG_FILE=$(find libraries -name "$MODULE.v"); TESTBENCH_FILE=$(find libraries -name "tb_$MODULE.cpp"); if [ -n "$VERILOG_FILE" ] && [ -n "$TESTBENCH_FILE" ]; then echo "Building $MODULE from $(dirname $VERILOG_FILE)..."; verilator -Wall -Wno-EOFNEWLINE --trace --cc --build -j --Mdir build -Wno-EOFNEWLINE -Wno-UNUSEDSIGNAL -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-UNUSEDPARAM --exe "$VERILOG_FILE" "$TESTBENCH_FILE"; touch build/.$MODULE.built; else echo "Module $MODULE not found or missing testbench"; echo "  Verilog file: $VERILOG_FILE"; echo "  Testbench file: $TESTBENCH_FILE"; exit 1; fi

Error output sample:
../libraries/math/tb_non_restoring_divider.cpp: In function ‘bool test_division(Vnon_restoring_divider*, VerilatedVcdC*, uint8_t, uint8_t)’:
../libraries/math/tb_non_restoring_divider.cpp:64:33: error: ‘correct’ was not declared in this scope
   64 |     std::cout << "Result: " << (correct ? "Pass" : "Fail") << std::endl;
      |                                 ^~~~~~~
make[1]: *** [Vnon_restoring_divider.mk:61: tb_non_restoring_divider.o] Error 1
%Error: make -C build -f Vnon_restoring_divider.mk exited with 2
%Error: Command Failed ulimit -s unlimited 2>/dev/null; exec /usr/bin/verilator_bin -Wall -Wno-EOFNEWLINE --trace --cc --build -j --Mdir build -Wno-EOFNEWLINE -Wno-UNUSEDSIGNAL -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-UNUSEDPARAM --exe libraries/math/non_restoring_divider.v libraries/math/tb_non_restoring_divider.cpp
make: *** [Makefile:106: verify_non_restoring_divider] Error 1
Error: Module non_restoring_divider not built or missing executable |

<a name='category-memory'></a>
### Memory

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| ddr_controller | libraries/mems/ddr_controller.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| dual_port_ram | libraries/mems/dual_port_ram.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| memory_controller | libraries/mems/memory_controller.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| parameterized_cam | libraries/mems/parameterized_cam.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |

<a name='category-multiplication'></a>
### Multiplication

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| booth_multiplier | libraries/multipliers/booth_multiplier.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| configurable_mult | libraries/multipliers/configurable_mult.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| radix4_booth_multiplier | libraries/multipliers/radix4_booth_multiplier.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |

<a name='category-network-on-chip'></a>
### Network on Chip

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| configurable_mesh_router | libraries/noc/configurable_mesh_router.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| crossbar_switch | libraries/noc/crossbar_switch.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| mesh_router | libraries/noc/mesh_router.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| network_interface | libraries/noc/network_interface.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |

<a name='category-power-management'></a>
### Power Management

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| clock_divider | libraries/power/clock_divider.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| clock_gating | libraries/power/clock_gating.v | ⚠ NO TESTBENCH | 0/0 | 0.00 | No testbench available |
| parameterized_clock_gating | libraries/power/parameterized_clock_gating.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| parameterized_freq_divider | libraries/power/parameterized_freq_divider.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| power_domain_controller | libraries/power/power_domain_controller.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |

<a name='category-registers'></a>
### Registers

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| barrel_rotator | libraries/registers/barrel_rotator.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| barrel_shifter | libraries/registers/barrel_shifter.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| bidirectional_shift_register | libraries/registers/bidirectional_shift_register.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| dual_edge_register | libraries/registers/dual_edge_register.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| lfsr | libraries/registers/lfsr.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| onehot_decoder_register | libraries/registers/onehot_decoder_register.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| parameterized_barrel_rotator | libraries/registers/parameterized_barrel_rotator.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| parameterized_rotation_sipo | libraries/registers/parameterized_rotation_sipo.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| piso_register | libraries/registers/piso_register.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| register_file | libraries/registers/register_file.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| scan_register | libraries/registers/scan_register.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| shadow_register | libraries/registers/shadow_register.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| shift_register | libraries/registers/shift_register.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| shift_register_left | libraries/registers/shift_register_left.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| shift_register_right | libraries/registers/shift_register_right.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| sipo_register | libraries/registers/sipo_register.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| siso_register | libraries/registers/siso_register.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| sync_preset_register | libraries/registers/sync_preset_register.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| toggle_register | libraries/registers/toggle_register.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| universal_shift_register | libraries/registers/universal_shift_register.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |

<a name='category-signal-processing'></a>
### Signal Processing

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| configurable_lfsr | libraries/signals/configurable_lfsr.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| configurable_prng | libraries/signals/configurable_prng.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| digital_thermometer_controller | libraries/signals/digital_thermometer_controller.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| multi_phase_pwm_controller | libraries/signals/multi_phase_pwm_controller.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| parameterized_dds | libraries/signals/parameterized_dds.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| parameterized_fft | libraries/signals/parameterized_fft.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| parameterized_pwm | libraries/signals/parameterized_pwm.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| pulse_width_detector | libraries/signals/pulse_width_detector.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| pwm_generator | libraries/signals/pwm_generator.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |

<a name='category-state-machines'></a>
### State Machines

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| sequence_detector_fsm | libraries/fsm/sequence_detector_fsm.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |

<a name='category-testing'></a>
### Testing

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| bist_controller | libraries/test/bist_controller.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |
| jtag_controller | libraries/test/jtag_controller.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |

<a name='category-voting'></a>
### Voting

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| majority_voter | libraries/voters/majority_voter.v | - NOT TESTED | 0/0 | 0.00 | Module was not tested |

<a name='notes'></a>
## Notes

- Tests were run using Verilator with the build directory set to 'build'
- The standardized test summary format '==== Test Summary ====' was used to capture detailed test results
- Modules marked with 'NO TESTBENCH' need testbenches to be implemented
- Some tests may fail due to issues with the implementation, not the build system
- Timeouts indicate tests that took longer than 2 minutes to complete
- Runtime measurements include compilation and execution time
- Error messages are extracted from test output when available
