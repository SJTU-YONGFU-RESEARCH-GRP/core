# RTL Verification Report

Generated on: 2025-05-16 14:06:20

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
11. [Digital Signal Processing](#category-digital-signal-processing)
12. [Division](#category-division)
13. [Encoding/Decoding](#category-encoding/decoding)
14. [Encryption](#category-encryption)
15. [FIFOs](#category-fifos)
16. [Filters](#category-filters)
17. [Input/Output](#category-input/output)
18. [Interfaces](#category-interfaces)
19. [Mathematics](#category-mathematics)
20. [Memory](#category-memory)
21. [Multiplication](#category-multiplication)
22. [Network on Chip](#category-network-on-chip)
23. [Power Management](#category-power-management)
24. [Registers](#category-registers)
25. [Signal Processing](#category-signal-processing)
26. [State Machines](#category-state-machines)
27. [Testing](#category-testing)
28. [Voting](#category-voting)
29. [Notes](#notes)

## Summary

- Total modules scanned: 138
- Modules with missing testbenches: 12
- Total modules tested: 126
- Passed: 105 (83.3%)
- Failed: 18 (14.3%)
- Timeouts: 3
- Total tests executed: 1152
- Total tests passed: 1122 (97.4%)
- Total runtime: 1025.73 seconds
- Average runtime per module: 8.14 seconds

## Category Overview

| Category | Modules | Passed | Failed | Pass Rate | Tests Passed | Avg Runtime (s) |
|----------|--------:|-------:|-------:|----------:|-------------:|----------------:|
| [Adders](#category-adders) | 6 | 6 | 0 | 100.0% | 30/30 | 6.38 |
| [Arbitration](#category-arbitration) | 4 | 3 | 1 | 75.0% | 6/7 | 4.81 |
| [Arithmetic](#category-arithmetic) | 2 | 2 | 0 | 100.0% | 48/48 | 3.87 |
| [CORDIC](#category-cordic) | 3 | 2 | 0 | 66.7% | 16/25 | 4.27 |
| [Clock Domain Crossing](#category-clock-domain-crossing) | 4 | 4 | 0 | 100.0% | 11/20 | 5.93 |
| [Communication](#category-communication) | 13 | 9 | 3 | 69.2% | 2/2 | 5.38 |
| [Counters](#category-counters) | 15 | 10 | 5 | 66.7% | 24/24 | 4.50 |
| [Debugging](#category-debugging) | 2 | 0 | 0 | 0.0% | 0/0 | 0.00 |
| [Digital Signal Processing](#category-digital-signal-processing) | 2 | 1 | 1 | 50.0% | 100/100 | 3.67 |
| [Division](#category-division) | 1 | 1 | 0 | 100.0% | 0/0 | 6.45 |
| [Encoding/Decoding](#category-encoding/decoding) | 7 | 7 | 0 | 100.0% | 322/322 | 6.19 |
| [Encryption](#category-encryption) | 2 | 0 | 0 | 0.0% | 0/0 | 0.00 |
| [FIFOs](#category-fifos) | 20 | 17 | 1 | 85.0% | 3/3 | 17.13 |
| [Filters](#category-filters) | 2 | 2 | 0 | 100.0% | 0/0 | 6.18 |
| [Input/Output](#category-input/output) | 2 | 0 | 1 | 0.0% | 2/5 | 3.21 |
| [Interfaces](#category-interfaces) | 4 | 0 | 0 | 0.0% | 0/0 | 0.00 |
| [Mathematics](#category-mathematics) | 2 | 1 | 1 | 50.0% | 0/0 | 3.61 |
| [Memory](#category-memory) | 4 | 3 | 1 | 75.0% | 5/5 | 4.84 |
| [Multiplication](#category-multiplication) | 3 | 3 | 0 | 100.0% | 16/20 | 6.34 |
| [Network on Chip](#category-network-on-chip) | 4 | 2 | 1 | 50.0% | 23/23 | 33.46 |
| [Power Management](#category-power-management) | 5 | 4 | 0 | 80.0% | 3/3 | 5.04 |
| [Registers](#category-registers) | 20 | 17 | 3 | 85.0% | 446/449 | 4.90 |
| [Signal Processing](#category-signal-processing) | 7 | 7 | 0 | 100.0% | 19/20 | 6.45 |
| [State Machines](#category-state-machines) | 1 | 1 | 0 | 100.0% | 26/26 | 7.03 |
| [Testing](#category-testing) | 2 | 2 | 0 | 100.0% | 16/16 | 3.52 |
| [Voting](#category-voting) | 1 | 1 | 0 | 100.0% | 4/4 | 5.96 |

## Detailed Results

<a name='category-adders'></a>
### Adders

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|------------:|----------:|
| configurable_brent_kung_adder | libraries/adders/configurable_brent_kung_adder.v | ✓ PASS | N/A | 5.95 | Tests: 1e of 1e |
| configurable_carry_lookahead_adder | libraries/adders/configurable_carry_lookahead_adder.v | ✓ PASS | 30/30 | 6.22 | 30 of 30 |
| configurable_carry_select_adder | libraries/adders/configurable_carry_select_adder.v | ✓ PASS | N/A | 7.19 | Test Summary: ALL TESTS PASSED |
| configurable_carry_skip_adder | libraries/adders/configurable_carry_skip_adder.v | ✓ PASS | N/A | 6.15 | Tests: 1e of 1e |
| configurable_conditional_sum_adder | libraries/adders/configurable_conditional_sum_adder.v | ✓ PASS | N/A | 6.44 | Tests: 1e of 1e |
| configurable_kogge_stone_adder | libraries/adders/configurable_kogge_stone_adder.v | ✓ PASS | N/A | 6.33 | Test Summary: ALL TESTS PASSED |

<a name='category-arbitration'></a>
### Arbitration

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|------------:|----------:|
| arbiter | libraries/arbiters/arbiter.v | ✓ PASS | 2/2 | 5.92 | 2 of 2 |
| arbiter_rr | libraries/arbiters/arbiter_rr.v | ✓ PASS | 0/1 | 5.91 | Execution completed successfully |
| fair_priority_arbiter | libraries/arbiters/fair_priority_arbiter.v | ✓ PASS | 4/4 | 6.22 | 4 of 4 |
| matrix_arbiter | libraries/arbiters/matrix_arbiter.v | ✗ FAIL | N/A | 1.21 | %Error: Exiting due to 2 warning(s) |

<a name='category-arithmetic'></a>
### Arithmetic

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|------------:|----------:|
| alu | libraries/alu/alu.v | ✓ PASS | 12/12 | 1.63 | 12 of 12 |
| configurable_comparator | libraries/alu/configurable_comparator.v | ✓ PASS | 36/36 | 6.10 | 36 of 36 |

<a name='category-cordic'></a>
### CORDIC

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|------------:|----------:|
| cordic | libraries/cordic/cordic.v | ✓ PASS | 0/9 | 5.93 | Execution completed successfully |
| cordic_core | libraries/cordic/cordic_core.v | ⚠ NO TESTBENCH | 0/0 | 0.00 | No testbench available |
| sine_cosine_generator | libraries/cordic/sine_cosine_generator.v | ✓ PASS | 16/16 | 6.88 | 16 of 16 |

<a name='category-clock-domain-crossing'></a>
### Clock Domain Crossing

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|------------:|----------:|
| clock_domain_crossing | libraries/cdc/clock_domain_crossing.v | ✓ PASS | 1/10 | 5.76 | Execution completed successfully |
| clock_domain_crossing_fifo | libraries/cdc/clock_domain_crossing_fifo.v | ✓ PASS | N/A | 5.89 | Execution completed successfully |
| handshake_synchronizer | libraries/cdc/handshake_synchronizer.v | ✓ PASS | 10/10 | 6.14 | 10 of 10 |
| multi_flop_synchronizer | libraries/cdc/multi_flop_synchronizer.v | ✓ PASS | N/A | 5.93 | Execution completed successfully |

<a name='category-communication'></a>
### Communication

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|------------:|----------:|
| ahb_lite_master | libraries/comms/ahb_lite_master.v | ✗ FAIL | N/A | 0.98 | %Error: Exiting due to 3 warning(s) |
| basic_spi_master | libraries/comms/basic_spi_master.v | ✓ PASS | N/A | 5.80 | TEST PASSED |
| final_spi_master | libraries/comms/final_spi_master.v | ✗ FAIL | N/A | 6.04 | TEST FAILED |
| fixed_spi_master | libraries/comms/fixed_spi_master.v | ✓ PASS | N/A | 5.99 | TEST PASSED |
| parameterized_deserializer | libraries/comms/parameterized_deserializer.v | ✓ PASS | N/A | 6.19 | Execution completed successfully |
| parameterized_i2c_master | libraries/comms/parameterized_i2c_master.v | ✓ PASS | 2/2 | 6.54 | 2 of 2 |
| parameterized_serdes | libraries/comms/parameterized_serdes.v | ✓ PASS | N/A | 5.81 | Simulation completed! |
| parameterized_spi_master | libraries/comms/parameterized_spi_master.v | ✓ PASS | N/A | 6.26 | TEST PASSED |
| parameterized_uart_rx | libraries/comms/parameterized_uart_rx.v | ✗ FAIL | N/A | 6.34 | UART RX Test FAILED! |
| parameterized_uart_tx | libraries/comms/parameterized_uart_tx.v | ✓ PASS | N/A | 5.58 | Test PASSED! All data transmitted and received correctly. |
| parameterized_uart_tx_fixed | libraries/comms/parameterized_uart_tx_fixed.v | ⚠ NO TESTBENCH | 0/0 | 0.00 | No testbench available |
| simple_spi_master | libraries/comms/simple_spi_master.v | ✓ PASS | N/A | 6.74 | TEST PASSED |
| spi_master | libraries/comms/spi_master.v | ✓ PASS | N/A | 7.70 | TEST PASSED |

<a name='category-counters'></a>
### Counters

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|------------:|----------:|
| configurable_clz_clo | libraries/counters/configurable_clz_clo.v | ✓ PASS | N/A | 6.09 | Execution completed successfully |
| gray_counter | libraries/counters/gray_counter.v | ✓ PASS | 3/3 | 1.11 | 3 of 3 |
| johnson_counter | libraries/counters/johnson_counter.v | ✓ PASS | N/A | 1.10 | Execution completed successfully |
| leading_zero_counter | libraries/counters/leading_zero_counter.v | ✓ PASS | 20/20 | 1.09 | 20 of 20 |
| loadable_updown_counter | libraries/counters/loadable_updown_counter.v | ✓ PASS | N/A | 1.10 | Execution completed successfully |
| parameterized_decade_counter | libraries/counters/parameterized_decade_counter.v | ✗ FAIL | N/A | 1.17 | make: *** [Makefile:107: run_parameterized_decade_counter] Error 1 |
| parameterized_gray_counter | libraries/counters/parameterized_gray_counter.v | ✓ PASS | N/A | 6.46 | Execution completed successfully |
| parameterized_johnson_counter | libraries/counters/parameterized_johnson_counter.v | ✗ FAIL | N/A | 6.38 | make: *** [Makefile:107: run_parameterized_johnson_counter] Error 1 |
| parameterized_johnson_updown_counter | libraries/counters/parameterized_johnson_updown_counter.v | ✓ PASS | N/A | 6.29 | Execution completed successfully |
| parameterized_loadable_counter | libraries/counters/parameterized_loadable_counter.v | ✗ FAIL | N/A | 6.49 | make: *** [Makefile:107: run_parameterized_loadable_counter] Error 1 |
| parameterized_onehot_counter | libraries/counters/parameterized_onehot_counter.v | ✗ FAIL | N/A | 7.00 | make: *** [Makefile:107: run_parameterized_onehot_counter] Error 1 |
| parameterized_ring_counter | libraries/counters/parameterized_ring_counter.v | ✓ PASS | N/A | 5.45 | Execution completed successfully |
| parameterized_self_correcting_counter | libraries/counters/parameterized_self_correcting_counter.v | ✗ FAIL | N/A | 6.18 | make: *** [Makefile:107: run_parameterized_self_correcting_counter] Error 1 |
| parameterized_sync_reset_counter | libraries/counters/parameterized_sync_reset_counter.v | ✓ PASS | N/A | 5.45 | Execution completed successfully |
| parameterized_updown_counter | libraries/counters/parameterized_updown_counter.v | ✓ PASS | 1/1 | 6.20 | 1 of 1 |

<a name='category-debugging'></a>
### Debugging

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|------------:|----------:|
| logic_analyzer | libraries/debug/logic_analyzer.v | ⚠ NO TESTBENCH | 0/0 | 0.00 | No testbench available |
| performance_counter | libraries/debug/performance_counter.v | ⚠ NO TESTBENCH | 0/0 | 0.00 | No testbench available |

<a name='category-digital-signal-processing'></a>
### Digital Signal Processing

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|------------:|----------:|
| parameterized_dds | libraries/dsp/parameterized_dds.v | ✓ PASS | 100/100 | 6.33 | 100 of 100 |
| parameterized_fft | libraries/dsp/parameterized_fft.v | ✗ FAIL | N/A | 1.00 | %Error: Exiting due to 1 warning(s) |

<a name='category-division'></a>
### Division

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|------------:|----------:|
| non_restoring_divider | libraries/dividers/non_restoring_divider.v | ✓ PASS | N/A | 6.45 | All division tests PASSED! |

<a name='category-encoding/decoding'></a>
### Encoding/Decoding

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|------------:|----------:|
| binary_to_gray | libraries/codings/binary_to_gray.v | ✓ PASS | 16/16 | 6.04 | 16 of 16 |
| configurable_priority_encoder | libraries/codings/configurable_priority_encoder.v | ✓ PASS | N/A | 6.14 | ALL TESTS PASSED! |
| gray_to_binary | libraries/codings/gray_to_binary.v | ✓ PASS | 16/16 | 6.15 | 16 of 16 |
| hamming_code | libraries/codings/hamming_code.v | ✓ PASS | 31/31 | 6.32 | 31 of 31 |
| parameterized_crc_generator | libraries/codings/parameterized_crc_generator.v | ✓ PASS | 1/1 | 6.45 | 1 of 1 |
| parameterized_scrambler | libraries/codings/parameterized_scrambler.v | ✓ PASS | 2/2 | 5.51 | 2 of 2 |
| priority_encoder | libraries/codings/priority_encoder.v | ✓ PASS | 256/256 | 6.71 | 256 of 256 |

<a name='category-encryption'></a>
### Encryption

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|------------:|----------:|
| aes_core | libraries/encryption/aes_core.v | ⚠ NO TESTBENCH | 0/0 | 0.00 | No testbench available |
| true_random_generator | libraries/encryption/true_random_generator.v | ⚠ NO TESTBENCH | 0/0 | 0.00 | No testbench available |

<a name='category-fifos'></a>
### FIFOs

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|------------:|----------:|
| async_fifo | libraries/fifo/async_fifo.v | ✓ PASS | N/A | 5.77 | Execution completed successfully |
| barrel_shifter_fifo | libraries/fifo/barrel_shifter_fifo.v | ✓ PASS | N/A | 1.06 | Execution completed successfully |
| bidirectional_fifo | libraries/fifo/bidirectional_fifo.v | ✓ PASS | N/A | 5.98 | Execution completed successfully |
| cache_fifo | libraries/fifo/cache_fifo.v | ✓ PASS | N/A | 6.00 | Execution completed successfully |
| circular_buffer_fifo | libraries/fifo/circular_buffer_fifo.v | ✓ PASS | N/A | 5.86 | Execution completed successfully |
| configurable_param_fifo | libraries/fifo/configurable_param_fifo.v | ✓ PASS | N/A | 6.15 | All tests PASSED! |
| configurable_sync_fifo | libraries/fifo/configurable_sync_fifo.v | ✓ PASS | N/A | 5.98 | ALL TESTS PASSED! |
| credit_based_fifo | libraries/fifo/credit_based_fifo.v | ✓ PASS | N/A | 6.07 | Final FIFO status - Full: No, Empty: Yes |
| dual_clock_fifo | libraries/fifo/dual_clock_fifo.v | ✓ PASS | N/A | 6.25 | Execution completed successfully |
| elastic_buffer | libraries/fifo/elastic_buffer.v | ✓ PASS | N/A | 6.15 | Execution completed successfully |
| fifo | libraries/fifo/fifo.v | ✓ PASS | 3/3 | 6.12 | 3 of 3 |
| fwft_fifo | libraries/fifo/fwft_fifo.v | ✓ PASS | N/A | 6.18 | Execution completed successfully |
| memory_mapped_fifo | libraries/fifo/memory_mapped_fifo.v | ✓ PASS | N/A | 6.03 | Execution completed successfully |
| multi_ported_fifo | libraries/fifo/multi_ported_fifo.v | ✗ FAIL | N/A | 0.98 | %Error: libraries/fifo/multi_ported_fifo.v:134:21: syntax error, unexpected IDENTIFIER, expecting "'{" |
| parameterized_priority_queue | libraries/fifo/parameterized_priority_queue.v | ✓ PASS | N/A | 6.45 | Execution completed successfully |
| pipelined_fifo | libraries/fifo/pipelined_fifo.v | ⏱ TIMEOUT | N/A | 120.00 | Execution exceeded 2 minutes and was terminated |
| showahead_fifo | libraries/fifo/showahead_fifo.v | ✓ PASS | N/A | 7.22 | Execution completed successfully |
| skid_buffer | libraries/fifo/skid_buffer.v | ✓ PASS | N/A | 7.00 | Execution completed successfully |
| smart_fifo | libraries/fifo/smart_fifo.v | ✓ PASS | N/A | 7.36 | Execution completed successfully |
| sync_fifo | libraries/fifo/sync_fifo.v | ⏱ TIMEOUT | N/A | 120.00 | Execution exceeded 2 minutes and was terminated |

<a name='category-filters'></a>
### Filters

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|------------:|----------:|
| configurable_fir_filter | libraries/filters/configurable_fir_filter.v | ✓ PASS | N/A | 6.21 | TEST PASSED! |
| fir_filter | libraries/filters/fir_filter.v | ✓ PASS | N/A | 6.16 | Execution completed successfully |

<a name='category-input/output'></a>
### Input/Output

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|------------:|----------:|
| dma_controller | libraries/io/dma_controller.v | ⚠ NO TESTBENCH | 0/0 | 0.00 | No testbench available |
| gpio_controller | libraries/io/gpio_controller.v | ✗ FAIL | 2/5 | 6.42 | 2 of 5 |

<a name='category-interfaces'></a>
### Interfaces

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|------------:|----------:|
| axi_lite_master | libraries/interfaces/axi_lite_master.v | ⚠ NO TESTBENCH | 0/0 | 0.00 | No testbench available |
| axi_stream_interface | libraries/interfaces/axi_stream_interface.v | ⚠ NO TESTBENCH | 0/0 | 0.00 | No testbench available |
| pcie_endpoint | libraries/interfaces/pcie_endpoint.v | ⚠ NO TESTBENCH | 0/0 | 0.00 | No testbench available |
| wishbone_master | libraries/interfaces/wishbone_master.v | ⚠ NO TESTBENCH | 0/0 | 0.00 | No testbench available |

<a name='category-mathematics'></a>
### Mathematics

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|------------:|----------:|
| fixed_point_sqrt | libraries/math/fixed_point_sqrt.v | ✗ FAIL | N/A | 1.01 | %Error: Exiting due to 3 warning(s) |
| floating_point_adder | libraries/math/floating_point_adder.v | ✓ PASS | N/A | 6.21 | Execution completed successfully |

<a name='category-memory'></a>
### Memory

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|------------:|----------:|
| ddr_controller | libraries/mems/ddr_controller.v | ✗ FAIL | N/A | 0.99 | %Error: Exiting due to 3 warning(s) |
| dual_port_ram | libraries/mems/dual_port_ram.v | ✓ PASS | N/A | 6.08 | Execution completed successfully |
| memory_controller | libraries/mems/memory_controller.v | ✓ PASS | N/A | 5.97 | Execution completed successfully |
| parameterized_cam | libraries/mems/parameterized_cam.v | ✓ PASS | 5/5 | 6.34 | 5 of 5 |

<a name='category-multiplication'></a>
### Multiplication

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|------------:|----------:|
| booth_multiplier | libraries/multipliers/booth_multiplier.v | ✓ PASS | 4/8 | 6.14 | Execution completed successfully |
| configurable_mult | libraries/multipliers/configurable_mult.v | ✓ PASS | 6/6 | 6.17 | 6 of 6 |
| radix4_booth_multiplier | libraries/multipliers/radix4_booth_multiplier.v | ✓ PASS | 6/6 | 6.71 | 6 of 6 |

<a name='category-network-on-chip'></a>
### Network on Chip

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|------------:|----------:|
| configurable_mesh_router | libraries/noc/configurable_mesh_router.v | ✓ PASS | 11/11 | 6.71 | 11 of 11 |
| crossbar_switch | libraries/noc/crossbar_switch.v | ✓ PASS | 12/12 | 6.12 | 12 of 12 |
| mesh_router | libraries/noc/mesh_router.v | ✗ FAIL | N/A | 1.01 | %Error: Exiting due to 2 warning(s) |
| network_interface | libraries/noc/network_interface.v | ⏱ TIMEOUT | N/A | 120.00 | Execution exceeded 2 minutes and was terminated |

<a name='category-power-management'></a>
### Power Management

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|------------:|----------:|
| clock_divider | libraries/power/clock_divider.v | ✓ PASS | N/A | 5.82 | Execution completed successfully |
| clock_gating | libraries/power/clock_gating.v | ⚠ NO TESTBENCH | 0/0 | 0.00 | No testbench available |
| parameterized_clock_gating | libraries/power/parameterized_clock_gating.v | ✓ PASS | N/A | 6.18 | Execution completed successfully |
| parameterized_freq_divider | libraries/power/parameterized_freq_divider.v | ✓ PASS | N/A | 6.53 | ALL TESTS PASSED! |
| power_domain_controller | libraries/power/power_domain_controller.v | ✓ PASS | 3/3 | 6.70 | 3 of 3 |

<a name='category-registers'></a>
### Registers

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|------------:|----------:|
| barrel_rotator | libraries/registers/barrel_rotator.v | ✓ PASS | 80/80 | 1.07 | 80 of 80 |
| barrel_shifter | libraries/registers/barrel_shifter.v | ✓ PASS | 300/300 | 1.10 | 300 of 300 |
| bidirectional_shift_register | libraries/registers/bidirectional_shift_register.v | ✓ PASS | 6/6 | 1.16 | 6 of 6 |
| dual_edge_register | libraries/registers/dual_edge_register.v | ✓ PASS | 6/6 | 1.12 | 6 of 6 |
| lfsr | libraries/registers/lfsr.v | ✓ PASS | 2/2 | 1.10 | 2 of 2 |
| onehot_decoder_register | libraries/registers/onehot_decoder_register.v | ✓ PASS | 5/5 | 1.19 | 5 of 5 |
| parameterized_barrel_rotator | libraries/registers/parameterized_barrel_rotator.v | ✓ PASS | N/A | 6.33 | Tests: a0 of a0 |
| parameterized_rotation_sipo | libraries/registers/parameterized_rotation_sipo.v | ✗ FAIL | N/A | 1.12 | %Error: Exiting due to 1 warning(s) |
| piso_register | libraries/registers/piso_register.v | ✓ PASS | 1/1 | 6.69 | 1 of 1 |
| register_file | libraries/registers/register_file.v | ✓ PASS | 5/5 | 6.74 | 5 of 5 |
| scan_register | libraries/registers/scan_register.v | ✗ FAIL | 3/4 | 6.81 | 3 of 4 |
| shadow_register | libraries/registers/shadow_register.v | ✓ PASS | 7/7 | 6.79 | 7 of 7 |
| shift_register | libraries/registers/shift_register.v | ✓ PASS | 1/2 | 6.90 | Execution completed successfully |
| shift_register_left | libraries/registers/shift_register_left.v | ✓ PASS | 1/1 | 6.84 | 1 of 1 |
| shift_register_right | libraries/registers/shift_register_right.v | ✓ PASS | 1/1 | 6.98 | 1 of 1 |
| sipo_register | libraries/registers/sipo_register.v | ✓ PASS | 4/4 | 7.08 | 4 of 4 |
| siso_register | libraries/registers/siso_register.v | ✓ PASS | 4/4 | 6.85 | 4 of 4 |
| sync_preset_register | libraries/registers/sync_preset_register.v | ✓ PASS | 8/8 | 7.37 | 8 of 8 |
| toggle_register | libraries/registers/toggle_register.v | ✓ PASS | 8/8 | 7.48 | 8 of 8 |
| universal_shift_register | libraries/registers/universal_shift_register.v | ✗ FAIL | 4/5 | 7.32 | 4 of 5 |

<a name='category-signal-processing'></a>
### Signal Processing

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|------------:|----------:|
| configurable_lfsr | libraries/signals/configurable_lfsr.v | ✓ PASS | N/A | 6.07 | Execution completed successfully |
| configurable_prng | libraries/signals/configurable_prng.v | ✓ PASS | 3/3 | 6.92 | 3 of 3 |
| digital_thermometer_controller | libraries/signals/digital_thermometer_controller.v | ✓ PASS | 5/5 | 6.01 | 5 of 5 |
| multi_phase_pwm_controller | libraries/signals/multi_phase_pwm_controller.v | ✓ PASS | N/A | 5.94 | Execution completed successfully |
| parameterized_pwm | libraries/signals/parameterized_pwm.v | ✓ PASS | 6/6 | 6.23 | 6 of 6 |
| pulse_width_detector | libraries/signals/pulse_width_detector.v | ✓ PASS | 2/3 | 7.03 | Execution completed successfully |
| pwm_generator | libraries/signals/pwm_generator.v | ✓ PASS | 3/3 | 6.98 | 3 of 3 |

<a name='category-state-machines'></a>
### State Machines

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|------------:|----------:|
| sequence_detector_fsm | libraries/fsm/sequence_detector_fsm.v | ✓ PASS | 26/26 | 7.03 | 26 of 26 |

<a name='category-testing'></a>
### Testing

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|------------:|----------:|
| bist_controller | libraries/test/bist_controller.v | ✓ PASS | 4/4 | 1.05 | 4 of 4 |
| jtag_controller | libraries/test/jtag_controller.v | ✓ PASS | 12/12 | 6.00 | 12 of 12 |

<a name='category-voting'></a>
### Voting

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|------------:|----------:|
| majority_voter | libraries/voters/majority_voter.v | ✓ PASS | 4/4 | 5.96 | 4 of 4 |

<a name='notes'></a>
## Notes

- Tests were run using Verilator with the build directory set to 'build'
- The standardized test summary format '==== Test Summary ====' was used to capture detailed test results
- Modules marked with 'NO TESTBENCH' need testbenches to be implemented
- Some tests may fail due to issues with the implementation, not the build system
- Timeouts indicate tests that took longer than 2 minutes to complete
- Runtime measurements include compilation and execution time
