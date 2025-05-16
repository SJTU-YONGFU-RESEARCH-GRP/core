# RTL Verification Report

Generated on: 2025-05-16 18:22:06

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
- Passed: 102 (81.0%)
- Failed: 20 (15.9%)
- Timeouts: 4
- Total tests executed: 1289
- Total tests passed: 1255 (97.4%)
- Average coverage: 0.0%
- Total runtime: 1058.43 seconds
- Average runtime per module: 8.40 seconds

## Category Overview

| Category | Modules | Passed | Failed | Pass Rate | Tests Passed | Coverage | Avg Runtime (s) |
|----------|--------:|-------:|-------:|----------:|-------------:|---------:|----------------:|
| [Adders](#category-adders) | 6 | 6 | 0 | 100.0% | 150/150 | 0.0% | 5.18 |
| [Arbitration](#category-arbitration) | 4 | 3 | 1 | 75.0% | 6/7 | 0.0% | 2.71 |
| [Arithmetic](#category-arithmetic) | 2 | 1 | 1 | 50.0% | 69/84 | 0.0% | 2.12 |
| [CORDIC](#category-cordic) | 3 | 1 | 0 | 33.3% | 16/16 | 0.0% | 42.74 |
| [Clock Domain Crossing](#category-clock-domain-crossing) | 4 | 4 | 0 | 100.0% | 11/20 | 0.0% | 4.27 |
| [Communication](#category-communication) | 13 | 9 | 3 | 69.2% | 2/2 | 0.0% | 4.86 |
| [Counters](#category-counters) | 15 | 10 | 5 | 66.7% | 24/24 | 0.0% | 4.81 |
| [Debugging](#category-debugging) | 2 | 0 | 0 | 0.0% | 0/0 | 0.0% | 0.00 |
| [Digital Signal Processing](#category-digital-signal-processing) | 2 | 1 | 1 | 50.0% | 100/100 | 0.0% | 2.72 |
| [Division](#category-division) | 1 | 1 | 0 | 100.0% | 0/0 | 0.0% | 5.71 |
| [Encoding/Decoding](#category-encoding/decoding) | 7 | 6 | 1 | 85.7% | 322/322 | 0.0% | 5.38 |
| [Encryption](#category-encryption) | 2 | 0 | 0 | 0.0% | 0/0 | 0.0% | 0.00 |
| [FIFOs](#category-fifos) | 20 | 16 | 2 | 80.0% | 3/3 | 0.0% | 16.22 |
| [Filters](#category-filters) | 2 | 2 | 0 | 100.0% | 0/0 | 0.0% | 4.41 |
| [Input/Output](#category-input/output) | 2 | 0 | 1 | 0.0% | 2/5 | 0.0% | 2.40 |
| [Interfaces](#category-interfaces) | 4 | 0 | 0 | 0.0% | 0/0 | 0.0% | 0.00 |
| [Mathematics](#category-mathematics) | 2 | 1 | 1 | 50.0% | 0/0 | 0.0% | 3.96 |
| [Memory](#category-memory) | 4 | 3 | 1 | 75.0% | 5/5 | 0.0% | 3.80 |
| [Multiplication](#category-multiplication) | 3 | 2 | 1 | 66.7% | 10/14 | 0.0% | 4.72 |
| [Network on Chip](#category-network-on-chip) | 4 | 2 | 1 | 50.0% | 23/23 | 0.0% | 32.49 |
| [Power Management](#category-power-management) | 5 | 4 | 0 | 80.0% | 3/3 | 0.0% | 3.96 |
| [Registers](#category-registers) | 20 | 19 | 1 | 95.0% | 448/449 | 0.0% | 5.22 |
| [Signal Processing](#category-signal-processing) | 7 | 7 | 0 | 100.0% | 24/25 | 0.0% | 4.82 |
| [State Machines](#category-state-machines) | 1 | 1 | 0 | 100.0% | 26/26 | 0.0% | 5.89 |
| [Testing](#category-testing) | 2 | 2 | 0 | 100.0% | 7/7 | 0.0% | 4.90 |
| [Voting](#category-voting) | 1 | 1 | 0 | 100.0% | 4/4 | 0.0% | 4.12 |

## Detailed Results

<a name='category-adders'></a>
### Adders

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| configurable_brent_kung_adder | libraries/adders/configurable_brent_kung_adder.v | ✓ PASS | 30/30 | N/A | 4.33 | 30 of 30 |
| configurable_carry_lookahead_adder | libraries/adders/configurable_carry_lookahead_adder.v | ✓ PASS | 30/30 | N/A | 4.43 | 30 of 30 |
| configurable_carry_select_adder | libraries/adders/configurable_carry_select_adder.v | ✓ PASS | 30/30 | N/A | 6.24 | 30 of 30 |
| configurable_carry_skip_adder | libraries/adders/configurable_carry_skip_adder.v | ✓ PASS | 30/30 | N/A | 4.89 | 30 of 30 |
| configurable_conditional_sum_adder | libraries/adders/configurable_conditional_sum_adder.v | ✓ PASS | N/A | N/A | 6.49 | Tests: 1e of 1e |
| configurable_kogge_stone_adder | libraries/adders/configurable_kogge_stone_adder.v | ✓ PASS | 30/30 | N/A | 4.70 | 30 of 30 |

<a name='category-arbitration'></a>
### Arbitration

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| arbiter | libraries/arbiters/arbiter.v | ✓ PASS | 2/2 | N/A | 1.11 | 2 of 2 |
| arbiter_rr | libraries/arbiters/arbiter_rr.v | ✓ PASS | 0/1 | N/A | 3.89 | Execution completed successfully |
| fair_priority_arbiter | libraries/arbiters/fair_priority_arbiter.v | ✓ PASS | 4/4 | N/A | 5.34 | 4 of 4 |
| matrix_arbiter | libraries/arbiters/matrix_arbiter.v | ✗ FAIL | N/A | N/A | 0.52 | Module matrix_arbiter not built or missing executable
Error: Module matrix_arbiter not built or missing executable |

<a name='category-arithmetic'></a>
### Arithmetic

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| alu | libraries/alu/alu.v | ✓ PASS | 12/12 | N/A | -0.09 | 12 of 12 |
| configurable_comparator | libraries/alu/configurable_comparator.v | ✗ FAIL | 57/72 | N/A | 4.32 | 57 of 72 |

<a name='category-cordic'></a>
### CORDIC

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| cordic | libraries/cordic/cordic.v | ⏱ TIMEOUT | N/A | N/A | 120.00 | Execution exceeded 2 minutes and was terminated
Error: Test execution timed out after 2 minutes |
| cordic_core | libraries/cordic/cordic_core.v | ⚠ NO TESTBENCH | 0/0 | N/A | 0.00 | No testbench available |
| sine_cosine_generator | libraries/cordic/sine_cosine_generator.v | ✓ PASS | 16/16 | N/A | 8.21 | 16 of 16 |

<a name='category-clock-domain-crossing'></a>
### Clock Domain Crossing

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| clock_domain_crossing | libraries/cdc/clock_domain_crossing.v | ✓ PASS | 1/10 | N/A | 3.83 | Execution completed successfully |
| clock_domain_crossing_fifo | libraries/cdc/clock_domain_crossing_fifo.v | ✓ PASS | N/A | N/A | 3.32 | Execution completed successfully |
| handshake_synchronizer | libraries/cdc/handshake_synchronizer.v | ✓ PASS | 10/10 | N/A | 5.52 | 10 of 10 |
| multi_flop_synchronizer | libraries/cdc/multi_flop_synchronizer.v | ✓ PASS | N/A | N/A | 4.42 | Execution completed successfully |

<a name='category-communication'></a>
### Communication

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| ahb_lite_master | libraries/comms/ahb_lite_master.v | ✗ FAIL | N/A | N/A | 0.56 | Module ahb_lite_master not built or missing executable
Error: Module ahb_lite_master not built or missing executable |
| basic_spi_master | libraries/comms/basic_spi_master.v | ✓ PASS | N/A | N/A | 4.41 | TEST PASSED |
| final_spi_master | libraries/comms/final_spi_master.v | ✗ FAIL | N/A | N/A | 4.15 | TEST FAILED |
| fixed_spi_master | libraries/comms/fixed_spi_master.v | ✓ PASS | N/A | N/A | 4.35 | TEST PASSED |
| parameterized_deserializer | libraries/comms/parameterized_deserializer.v | ✓ PASS | N/A | N/A | 3.63 | Execution completed successfully |
| parameterized_i2c_master | libraries/comms/parameterized_i2c_master.v | ✓ PASS | 2/2 | N/A | 7.66 | 2 of 2 |
| parameterized_serdes | libraries/comms/parameterized_serdes.v | ✓ PASS | N/A | N/A | 5.77 | Simulation completed! |
| parameterized_spi_master | libraries/comms/parameterized_spi_master.v | ✓ PASS | N/A | N/A | 5.92 | TEST PASSED |
| parameterized_uart_rx | libraries/comms/parameterized_uart_rx.v | ✗ FAIL | N/A | N/A | 7.13 | UART RX Test FAILED!
Error: Did not receive byte 0! |
| parameterized_uart_tx | libraries/comms/parameterized_uart_tx.v | ✓ PASS | N/A | N/A | 6.66 | Test PASSED! All data transmitted and received correctly. |
| parameterized_uart_tx_fixed | libraries/comms/parameterized_uart_tx_fixed.v | ⚠ NO TESTBENCH | 0/0 | N/A | 0.00 | No testbench available |
| simple_spi_master | libraries/comms/simple_spi_master.v | ✓ PASS | N/A | N/A | 7.00 | TEST PASSED |
| spi_master | libraries/comms/spi_master.v | ✓ PASS | N/A | N/A | 5.96 | TEST PASSED |

<a name='category-counters'></a>
### Counters

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| configurable_clz_clo | libraries/counters/configurable_clz_clo.v | ✓ PASS | N/A | N/A | 5.78 | Execution completed successfully |
| gray_counter | libraries/counters/gray_counter.v | ✓ PASS | 3/3 | N/A | 4.77 | 3 of 3 |
| johnson_counter | libraries/counters/johnson_counter.v | ✓ PASS | N/A | N/A | 5.19 | Execution completed successfully |
| leading_zero_counter | libraries/counters/leading_zero_counter.v | ✓ PASS | 20/20 | N/A | 5.27 | 20 of 20 |
| loadable_updown_counter | libraries/counters/loadable_updown_counter.v | ✓ PASS | N/A | N/A | 4.42 | Execution completed successfully |
| parameterized_decade_counter | libraries/counters/parameterized_decade_counter.v | ✗ FAIL | N/A | N/A | 5.04 | Count failed at 0, got 1 expected 0
Error: Count failed at 0, got 1 expected 0 |
| parameterized_gray_counter | libraries/counters/parameterized_gray_counter.v | ✓ PASS | N/A | N/A | 4.74 | Execution completed successfully |
| parameterized_johnson_counter | libraries/counters/parameterized_johnson_counter.v | ✗ FAIL | N/A | N/A | 5.88 | Sequence does not repeat after expected length.
Error: Sequence does not repeat after expected length. |
| parameterized_johnson_updown_counter | libraries/counters/parameterized_johnson_updown_counter.v | ✓ PASS | N/A | N/A | 4.04 | Execution completed successfully |
| parameterized_loadable_counter | libraries/counters/parameterized_loadable_counter.v | ✗ FAIL | N/A | N/A | 2.50 | Count failed at 0, got 1
Error: Count failed at 0, got 1 |
| parameterized_onehot_counter | libraries/counters/parameterized_onehot_counter.v | ✗ FAIL | N/A | N/A | 3.81 | Incorrect shift from state 6 to 7
Error: Incorrect shift from state 6 to 7 |
| parameterized_ring_counter | libraries/counters/parameterized_ring_counter.v | ✓ PASS | N/A | N/A | 5.64 | Execution completed successfully |
| parameterized_self_correcting_counter | libraries/counters/parameterized_self_correcting_counter.v | ✗ FAIL | N/A | N/A | 4.65 | Count failed at 0, got 1 expected 0
Error: Count failed at 0, got 1 expected 0 |
| parameterized_sync_reset_counter | libraries/counters/parameterized_sync_reset_counter.v | ✓ PASS | N/A | N/A | 5.15 | Execution completed successfully |
| parameterized_updown_counter | libraries/counters/parameterized_updown_counter.v | ✓ PASS | 1/1 | N/A | 5.22 | 1 of 1 |

<a name='category-debugging'></a>
### Debugging

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| logic_analyzer | libraries/debug/logic_analyzer.v | ⚠ NO TESTBENCH | 0/0 | N/A | 0.00 | No testbench available |
| performance_counter | libraries/debug/performance_counter.v | ⚠ NO TESTBENCH | 0/0 | N/A | 0.00 | No testbench available |

<a name='category-digital-signal-processing'></a>
### Digital Signal Processing

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| parameterized_dds | libraries/dsp/parameterized_dds.v | ✓ PASS | 100/100 | N/A | 4.81 | 100 of 100 |
| parameterized_fft | libraries/dsp/parameterized_fft.v | ✗ FAIL | N/A | N/A | 0.63 | Module parameterized_fft not built or missing executable
Error: Module parameterized_fft not built or missing executable |

<a name='category-division'></a>
### Division

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| non_restoring_divider | libraries/dividers/non_restoring_divider.v | ✓ PASS | N/A | N/A | 5.71 | All division tests PASSED! |

<a name='category-encoding/decoding'></a>
### Encoding/Decoding

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| binary_to_gray | libraries/codings/binary_to_gray.v | ✓ PASS | 16/16 | N/A | 3.87 | 16 of 16 |
| configurable_priority_encoder | libraries/codings/configurable_priority_encoder.v | ✗ FAIL | N/A | N/A | 5.59 | make: *** [Makefile:106: verify_configurable_priority_encoder] Error 139 |
| gray_to_binary | libraries/codings/gray_to_binary.v | ✓ PASS | 16/16 | N/A | 5.47 | 16 of 16 |
| hamming_code | libraries/codings/hamming_code.v | ✓ PASS | 31/31 | N/A | 6.46 | 31 of 31 |
| parameterized_crc_generator | libraries/codings/parameterized_crc_generator.v | ✓ PASS | 1/1 | N/A | 4.91 | 1 of 1 |
| parameterized_scrambler | libraries/codings/parameterized_scrambler.v | ✓ PASS | 2/2 | N/A | 5.07 | 2 of 2 |
| priority_encoder | libraries/codings/priority_encoder.v | ✓ PASS | 256/256 | N/A | 6.25 | 256 of 256 |

<a name='category-encryption'></a>
### Encryption

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| aes_core | libraries/encryption/aes_core.v | ⚠ NO TESTBENCH | 0/0 | N/A | 0.00 | No testbench available |
| true_random_generator | libraries/encryption/true_random_generator.v | ⚠ NO TESTBENCH | 0/0 | N/A | 0.00 | No testbench available |

<a name='category-fifos'></a>
### FIFOs

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| async_fifo | libraries/fifo/async_fifo.v | ✓ PASS | N/A | N/A | 3.89 | Execution completed successfully |
| barrel_shifter_fifo | libraries/fifo/barrel_shifter_fifo.v | ✓ PASS | N/A | N/A | 4.32 | Execution completed successfully |
| bidirectional_fifo | libraries/fifo/bidirectional_fifo.v | ✓ PASS | N/A | N/A | 4.13 | Execution completed successfully |
| cache_fifo | libraries/fifo/cache_fifo.v | ✓ PASS | N/A | N/A | 4.19 | Execution completed successfully |
| circular_buffer_fifo | libraries/fifo/circular_buffer_fifo.v | ✓ PASS | N/A | N/A | 4.26 | Execution completed successfully |
| configurable_param_fifo | libraries/fifo/configurable_param_fifo.v | ✗ FAIL | N/A | N/A | 3.66 | make: *** [Makefile:106: verify_configurable_param_fifo] Error 139 |
| configurable_sync_fifo | libraries/fifo/configurable_sync_fifo.v | ✓ PASS | N/A | N/A | 4.38 | ALL TESTS PASSED! |
| credit_based_fifo | libraries/fifo/credit_based_fifo.v | ✓ PASS | N/A | N/A | 4.82 | Final FIFO status - Full: No, Empty: Yes |
| dual_clock_fifo | libraries/fifo/dual_clock_fifo.v | ✓ PASS | N/A | N/A | 5.86 | Execution completed successfully |
| elastic_buffer | libraries/fifo/elastic_buffer.v | ✓ PASS | N/A | N/A | 5.10 | Execution completed successfully |
| fifo | libraries/fifo/fifo.v | ✓ PASS | 3/3 | N/A | 4.95 | 3 of 3 |
| fwft_fifo | libraries/fifo/fwft_fifo.v | ✓ PASS | N/A | N/A | 5.11 | Execution completed successfully |
| memory_mapped_fifo | libraries/fifo/memory_mapped_fifo.v | ✓ PASS | N/A | N/A | 4.63 | Execution completed successfully |
| multi_ported_fifo | libraries/fifo/multi_ported_fifo.v | ✗ FAIL | N/A | N/A | 0.42 | Module multi_ported_fifo not built or missing executable
Error: Module multi_ported_fifo not built or missing executable |
| parameterized_priority_queue | libraries/fifo/parameterized_priority_queue.v | ✓ PASS | N/A | N/A | 5.64 | Execution completed successfully |
| pipelined_fifo | libraries/fifo/pipelined_fifo.v | ⏱ TIMEOUT | N/A | N/A | 120.00 | Execution exceeded 2 minutes and was terminated
Error: Test execution timed out after 2 minutes |
| showahead_fifo | libraries/fifo/showahead_fifo.v | ✓ PASS | N/A | N/A | 6.81 | Execution completed successfully |
| skid_buffer | libraries/fifo/skid_buffer.v | ✓ PASS | N/A | N/A | 6.22 | Execution completed successfully |
| smart_fifo | libraries/fifo/smart_fifo.v | ✓ PASS | N/A | N/A | 5.92 | Execution completed successfully |
| sync_fifo | libraries/fifo/sync_fifo.v | ⏱ TIMEOUT | N/A | N/A | 120.00 | Execution exceeded 2 minutes and was terminated
Error: Test execution timed out after 2 minutes |

<a name='category-filters'></a>
### Filters

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| configurable_fir_filter | libraries/filters/configurable_fir_filter.v | ✓ PASS | N/A | N/A | 4.61 | TEST PASSED! |
| fir_filter | libraries/filters/fir_filter.v | ✓ PASS | N/A | N/A | 4.22 | Execution completed successfully |

<a name='category-input/output'></a>
### Input/Output

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| dma_controller | libraries/io/dma_controller.v | ⚠ NO TESTBENCH | 0/0 | N/A | 0.00 | No testbench available |
| gpio_controller | libraries/io/gpio_controller.v | ✗ FAIL | 2/5 | N/A | 4.79 | 2 of 5 |

<a name='category-interfaces'></a>
### Interfaces

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| axi_lite_master | libraries/interfaces/axi_lite_master.v | ⚠ NO TESTBENCH | 0/0 | N/A | 0.00 | No testbench available |
| axi_stream_interface | libraries/interfaces/axi_stream_interface.v | ⚠ NO TESTBENCH | 0/0 | N/A | 0.00 | No testbench available |
| pcie_endpoint | libraries/interfaces/pcie_endpoint.v | ⚠ NO TESTBENCH | 0/0 | N/A | 0.00 | No testbench available |
| wishbone_master | libraries/interfaces/wishbone_master.v | ⚠ NO TESTBENCH | 0/0 | N/A | 0.00 | No testbench available |

<a name='category-mathematics'></a>
### Mathematics

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| fixed_point_sqrt | libraries/math/fixed_point_sqrt.v | ✗ FAIL | N/A | N/A | 0.65 | Module fixed_point_sqrt not built or missing executable
Error: Module fixed_point_sqrt not built or missing executable |
| floating_point_adder | libraries/math/floating_point_adder.v | ✓ PASS | N/A | N/A | 7.28 | Execution completed successfully |

<a name='category-memory'></a>
### Memory

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| ddr_controller | libraries/mems/ddr_controller.v | ✗ FAIL | N/A | N/A | 0.61 | Module ddr_controller not built or missing executable
Error: Module ddr_controller not built or missing executable |
| dual_port_ram | libraries/mems/dual_port_ram.v | ✓ PASS | N/A | N/A | 4.70 | Execution completed successfully |
| memory_controller | libraries/mems/memory_controller.v | ✓ PASS | N/A | N/A | 4.87 | Execution completed successfully |
| parameterized_cam | libraries/mems/parameterized_cam.v | ✓ PASS | 5/5 | N/A | 5.01 | 5 of 5 |

<a name='category-multiplication'></a>
### Multiplication

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| booth_multiplier | libraries/multipliers/booth_multiplier.v | ✓ PASS | 4/8 | N/A | 4.08 | Execution completed successfully |
| configurable_mult | libraries/multipliers/configurable_mult.v | ✗ FAIL | N/A | N/A | 4.17 | make: *** [Makefile:106: verify_configurable_mult] Error 139 |
| radix4_booth_multiplier | libraries/multipliers/radix4_booth_multiplier.v | ✓ PASS | 6/6 | N/A | 5.90 | 6 of 6 |

<a name='category-network-on-chip'></a>
### Network on Chip

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| configurable_mesh_router | libraries/noc/configurable_mesh_router.v | ✓ PASS | 11/11 | N/A | 4.81 | 11 of 11 |
| crossbar_switch | libraries/noc/crossbar_switch.v | ✓ PASS | 12/12 | N/A | 4.79 | 12 of 12 |
| mesh_router | libraries/noc/mesh_router.v | ✗ FAIL | N/A | N/A | 0.37 | Module mesh_router not built or missing executable
Error: Module mesh_router not built or missing executable |
| network_interface | libraries/noc/network_interface.v | ⏱ TIMEOUT | N/A | N/A | 120.00 | Execution exceeded 2 minutes and was terminated
Error: Test execution timed out after 2 minutes |

<a name='category-power-management'></a>
### Power Management

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| clock_divider | libraries/power/clock_divider.v | ✓ PASS | N/A | N/A | 3.97 | Execution completed successfully |
| clock_gating | libraries/power/clock_gating.v | ⚠ NO TESTBENCH | 0/0 | N/A | 0.00 | No testbench available |
| parameterized_clock_gating | libraries/power/parameterized_clock_gating.v | ✓ PASS | N/A | N/A | 4.47 | Execution completed successfully |
| parameterized_freq_divider | libraries/power/parameterized_freq_divider.v | ✓ PASS | N/A | N/A | 5.01 | ALL TESTS PASSED! |
| power_domain_controller | libraries/power/power_domain_controller.v | ✓ PASS | 3/3 | N/A | 6.36 | 3 of 3 |

<a name='category-registers'></a>
### Registers

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| barrel_rotator | libraries/registers/barrel_rotator.v | ✓ PASS | 80/80 | N/A | 4.08 | 80 of 80 |
| barrel_shifter | libraries/registers/barrel_shifter.v | ✓ PASS | 300/300 | N/A | 3.99 | 300 of 300 |
| bidirectional_shift_register | libraries/registers/bidirectional_shift_register.v | ✓ PASS | 6/6 | N/A | 3.65 | 6 of 6 |
| dual_edge_register | libraries/registers/dual_edge_register.v | ✓ PASS | 6/6 | N/A | 3.72 | 6 of 6 |
| lfsr | libraries/registers/lfsr.v | ✓ PASS | 2/2 | N/A | 3.59 | 2 of 2 |
| onehot_decoder_register | libraries/registers/onehot_decoder_register.v | ✓ PASS | 5/5 | N/A | 6.41 | 5 of 5 |
| parameterized_barrel_rotator | libraries/registers/parameterized_barrel_rotator.v | ✓ PASS | N/A | N/A | 3.94 | Tests: a0 of a0 |
| parameterized_rotation_sipo | libraries/registers/parameterized_rotation_sipo.v | ✗ FAIL | N/A | N/A | 0.50 | Module parameterized_rotation_sipo not built or missing executable
Error: Module parameterized_rotation_sipo not built or missing executable |
| piso_register | libraries/registers/piso_register.v | ✓ PASS | 1/1 | N/A | 4.19 | 1 of 1 |
| register_file | libraries/registers/register_file.v | ✓ PASS | 5/5 | N/A | 4.57 | 5 of 5 |
| scan_register | libraries/registers/scan_register.v | ✓ PASS | 4/4 | N/A | 5.76 | 4 of 4 |
| shadow_register | libraries/registers/shadow_register.v | ✓ PASS | 7/7 | N/A | 5.73 | 7 of 7 |
| shift_register | libraries/registers/shift_register.v | ✓ PASS | 1/2 | N/A | 6.05 | Execution completed successfully |
| shift_register_left | libraries/registers/shift_register_left.v | ✓ PASS | 1/1 | N/A | 3.86 | 1 of 1 |
| shift_register_right | libraries/registers/shift_register_right.v | ✓ PASS | 1/1 | N/A | 5.63 | 1 of 1 |
| sipo_register | libraries/registers/sipo_register.v | ✓ PASS | 4/4 | N/A | 7.23 | 4 of 4 |
| siso_register | libraries/registers/siso_register.v | ✓ PASS | 4/4 | N/A | 7.30 | 4 of 4 |
| sync_preset_register | libraries/registers/sync_preset_register.v | ✓ PASS | 8/8 | N/A | 11.55 | 8 of 8 |
| toggle_register | libraries/registers/toggle_register.v | ✓ PASS | 8/8 | N/A | 6.01 | 8 of 8 |
| universal_shift_register | libraries/registers/universal_shift_register.v | ✓ PASS | 5/5 | N/A | 6.63 | 5 of 5 |

<a name='category-signal-processing'></a>
### Signal Processing

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| configurable_lfsr | libraries/signals/configurable_lfsr.v | ✓ PASS | N/A | N/A | 3.87 | Execution completed successfully |
| configurable_prng | libraries/signals/configurable_prng.v | ✓ PASS | 3/3 | N/A | 4.55 | 3 of 3 |
| digital_thermometer_controller | libraries/signals/digital_thermometer_controller.v | ✓ PASS | 5/5 | N/A | 4.36 | 5 of 5 |
| multi_phase_pwm_controller | libraries/signals/multi_phase_pwm_controller.v | ✓ PASS | 5/5 | N/A | 4.19 | 5 of 5 |
| parameterized_pwm | libraries/signals/parameterized_pwm.v | ✓ PASS | 6/6 | N/A | 5.34 | 6 of 6 |
| pulse_width_detector | libraries/signals/pulse_width_detector.v | ✓ PASS | 2/3 | N/A | 5.99 | Execution completed successfully |
| pwm_generator | libraries/signals/pwm_generator.v | ✓ PASS | 3/3 | N/A | 5.43 | 3 of 3 |

<a name='category-state-machines'></a>
### State Machines

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| sequence_detector_fsm | libraries/fsm/sequence_detector_fsm.v | ✓ PASS | 26/26 | N/A | 5.89 | 26 of 26 |

<a name='category-testing'></a>
### Testing

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| bist_controller | libraries/test/bist_controller.v | ✓ PASS | 4/4 | N/A | 4.26 | 4 of 4 |
| jtag_controller | libraries/test/jtag_controller.v | ✓ PASS | 3/3 | N/A | 5.55 | 3 of 3 |

<a name='category-voting'></a>
### Voting

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| majority_voter | libraries/voters/majority_voter.v | ✓ PASS | 4/4 | N/A | 4.12 | 4 of 4 |

<a name='notes'></a>
## Notes

- Tests were run using Verilator with the build directory set to 'build'
- The standardized test summary format '==== Test Summary ====' was used to capture detailed test results
- Modules marked with 'NO TESTBENCH' need testbenches to be implemented
- Some tests may fail due to issues with the implementation, not the build system
- Timeouts indicate tests that took longer than 2 minutes to complete
- Runtime measurements include compilation and execution time
- Coverage information is reported when available from the test output
- Error messages are extracted from test output when available
