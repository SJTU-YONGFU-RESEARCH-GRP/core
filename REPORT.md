# RTL Verification Report

Generated on: 2025-05-16 16:59:48

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
- Passed: 11 (8.7%)
- Failed: 115 (91.3%)
- Timeouts: 0
- Total tests executed: 417
- Total tests passed: 416 (99.8%)
- Average coverage: 0.0%
- Total runtime: 59.45 seconds
- Average runtime per module: 0.47 seconds

## Category Overview

| Category | Modules | Passed | Failed | Pass Rate | Tests Passed | Coverage | Avg Runtime (s) |
|----------|--------:|-------:|-------:|----------:|-------------:|---------:|----------------:|
| [Adders](#category-adders) | 6 | 0 | 6 | 0.0% | 0/0 | 0.0% | 0.06 |
| [Arbitration](#category-arbitration) | 4 | 2 | 2 | 50.0% | 2/3 | 0.0% | 2.39 |
| [Arithmetic](#category-arithmetic) | 2 | 1 | 1 | 50.0% | 12/12 | 0.0% | 2.12 |
| [CORDIC](#category-cordic) | 3 | 0 | 2 | 0.0% | 0/0 | 0.0% | 0.04 |
| [Clock Domain Crossing](#category-clock-domain-crossing) | 4 | 0 | 4 | 0.0% | 0/0 | 0.0% | 0.06 |
| [Communication](#category-communication) | 13 | 1 | 11 | 7.7% | 0/0 | 0.0% | 0.43 |
| [Counters](#category-counters) | 15 | 0 | 15 | 0.0% | 0/0 | 0.0% | 0.06 |
| [Debugging](#category-debugging) | 2 | 0 | 0 | 0.0% | 0/0 | 0.0% | 0.00 |
| [Digital Signal Processing](#category-digital-signal-processing) | 2 | 0 | 2 | 0.0% | 0/0 | 0.0% | 0.06 |
| [Division](#category-division) | 1 | 0 | 1 | 0.0% | 0/0 | 0.0% | 0.06 |
| [Encoding/Decoding](#category-encoding/decoding) | 7 | 1 | 6 | 14.3% | 16/16 | 0.0% | 0.76 |
| [Encryption](#category-encryption) | 2 | 0 | 0 | 0.0% | 0/0 | 0.0% | 0.00 |
| [FIFOs](#category-fifos) | 20 | 3 | 17 | 15.0% | 0/0 | 0.0% | 0.78 |
| [Filters](#category-filters) | 2 | 0 | 2 | 0.0% | 0/0 | 0.0% | 0.06 |
| [Input/Output](#category-input/output) | 2 | 0 | 1 | 0.0% | 0/0 | 0.0% | 0.03 |
| [Interfaces](#category-interfaces) | 4 | 0 | 0 | 0.0% | 0/0 | 0.0% | 0.00 |
| [Mathematics](#category-mathematics) | 2 | 0 | 2 | 0.0% | 0/0 | 0.0% | 0.06 |
| [Memory](#category-memory) | 4 | 0 | 4 | 0.0% | 0/0 | 0.0% | 0.06 |
| [Multiplication](#category-multiplication) | 3 | 0 | 3 | 0.0% | 0/0 | 0.0% | 0.06 |
| [Network on Chip](#category-network-on-chip) | 4 | 0 | 4 | 0.0% | 0/0 | 0.0% | 0.06 |
| [Power Management](#category-power-management) | 5 | 0 | 4 | 0.0% | 0/0 | 0.0% | 0.05 |
| [Registers](#category-registers) | 20 | 3 | 17 | 15.0% | 386/386 | 0.0% | 0.78 |
| [Signal Processing](#category-signal-processing) | 7 | 0 | 7 | 0.0% | 0/0 | 0.0% | 0.06 |
| [State Machines](#category-state-machines) | 1 | 0 | 1 | 0.0% | 0/0 | 0.0% | 0.06 |
| [Testing](#category-testing) | 2 | 0 | 2 | 0.0% | 0/0 | 0.0% | 0.06 |
| [Voting](#category-voting) | 1 | 0 | 1 | 0.0% | 0/0 | 0.0% | 0.06 |

## Detailed Results

<a name='category-adders'></a>
### Adders

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| configurable_brent_kung_adder | libraries/adders/configurable_brent_kung_adder.v | ✗ FAIL | N/A | N/A | 0.08 | Module configurable_brent_kung_adder not built or missing executable
Error: Module configurable_brent_kung_adder not built or missing executable |
| configurable_carry_lookahead_adder | libraries/adders/configurable_carry_lookahead_adder.v | ✗ FAIL | N/A | N/A | 0.06 | Module configurable_carry_lookahead_adder not built or missing executable
Error: Module configurable_carry_lookahead_adder not built or missing executable |
| configurable_carry_select_adder | libraries/adders/configurable_carry_select_adder.v | ✗ FAIL | N/A | N/A | 0.06 | Module configurable_carry_select_adder not built or missing executable
Error: Module configurable_carry_select_adder not built or missing executable |
| configurable_carry_skip_adder | libraries/adders/configurable_carry_skip_adder.v | ✗ FAIL | N/A | N/A | 0.06 | Module configurable_carry_skip_adder not built or missing executable
Error: Module configurable_carry_skip_adder not built or missing executable |
| configurable_conditional_sum_adder | libraries/adders/configurable_conditional_sum_adder.v | ✗ FAIL | N/A | N/A | 0.06 | Module configurable_conditional_sum_adder not built or missing executable
Error: Module configurable_conditional_sum_adder not built or missing executable |
| configurable_kogge_stone_adder | libraries/adders/configurable_kogge_stone_adder.v | ✗ FAIL | N/A | N/A | 0.06 | Module configurable_kogge_stone_adder not built or missing executable
Error: Module configurable_kogge_stone_adder not built or missing executable |

<a name='category-arbitration'></a>
### Arbitration

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| arbiter | libraries/arbiters/arbiter.v | ✓ PASS | 2/2 | N/A | 4.72 | 2 of 2 |
| arbiter_rr | libraries/arbiters/arbiter_rr.v | ✓ PASS | 0/1 | N/A | 4.70 | Execution completed successfully |
| fair_priority_arbiter | libraries/arbiters/fair_priority_arbiter.v | ✗ FAIL | N/A | N/A | 0.06 | Module fair_priority_arbiter not built or missing executable
Error: Module fair_priority_arbiter not built or missing executable |
| matrix_arbiter | libraries/arbiters/matrix_arbiter.v | ✗ FAIL | N/A | N/A | 0.06 | Module matrix_arbiter not built or missing executable
Error: Module matrix_arbiter not built or missing executable |

<a name='category-arithmetic'></a>
### Arithmetic

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| alu | libraries/alu/alu.v | ✓ PASS | 12/12 | N/A | 4.17 | 12 of 12 |
| configurable_comparator | libraries/alu/configurable_comparator.v | ✗ FAIL | N/A | N/A | 0.06 | Module configurable_comparator not built or missing executable
Error: Module configurable_comparator not built or missing executable |

<a name='category-cordic'></a>
### CORDIC

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| cordic | libraries/cordic/cordic.v | ✗ FAIL | N/A | N/A | 0.06 | Module cordic not built or missing executable
Error: Module cordic not built or missing executable |
| cordic_core | libraries/cordic/cordic_core.v | ⚠ NO TESTBENCH | 0/0 | N/A | 0.00 | No testbench available |
| sine_cosine_generator | libraries/cordic/sine_cosine_generator.v | ✗ FAIL | N/A | N/A | 0.06 | Invalid option: --no-warn-fatal
Error: Invalid option: --no-warn-fatal |

<a name='category-clock-domain-crossing'></a>
### Clock Domain Crossing

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| clock_domain_crossing | libraries/cdc/clock_domain_crossing.v | ✗ FAIL | N/A | N/A | 0.06 | Module clock_domain_crossing not built or missing executable
Error: Module clock_domain_crossing not built or missing executable |
| clock_domain_crossing_fifo | libraries/cdc/clock_domain_crossing_fifo.v | ✗ FAIL | N/A | N/A | 0.06 | Module clock_domain_crossing_fifo not built or missing executable
Error: Module clock_domain_crossing_fifo not built or missing executable |
| handshake_synchronizer | libraries/cdc/handshake_synchronizer.v | ✗ FAIL | N/A | N/A | 0.06 | Module handshake_synchronizer not built or missing executable
Error: Module handshake_synchronizer not built or missing executable |
| multi_flop_synchronizer | libraries/cdc/multi_flop_synchronizer.v | ✗ FAIL | N/A | N/A | 0.06 | Module multi_flop_synchronizer not built or missing executable
Error: Module multi_flop_synchronizer not built or missing executable |

<a name='category-communication'></a>
### Communication

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| ahb_lite_master | libraries/comms/ahb_lite_master.v | ✗ FAIL | N/A | N/A | 0.06 | Module ahb_lite_master not built or missing executable
Error: Module ahb_lite_master not built or missing executable |
| basic_spi_master | libraries/comms/basic_spi_master.v | ✓ PASS | N/A | N/A | 4.97 | TEST PASSED |
| final_spi_master | libraries/comms/final_spi_master.v | ✗ FAIL | N/A | N/A | 0.06 | Module final_spi_master not built or missing executable
Error: Module final_spi_master not built or missing executable |
| fixed_spi_master | libraries/comms/fixed_spi_master.v | ✗ FAIL | N/A | N/A | 0.06 | Module fixed_spi_master not built or missing executable
Error: Module fixed_spi_master not built or missing executable |
| parameterized_deserializer | libraries/comms/parameterized_deserializer.v | ✗ FAIL | N/A | N/A | 0.06 | Module parameterized_deserializer not built or missing executable
Error: Module parameterized_deserializer not built or missing executable |
| parameterized_i2c_master | libraries/comms/parameterized_i2c_master.v | ✗ FAIL | N/A | N/A | 0.05 | Module parameterized_i2c_master not built or missing executable
Error: Module parameterized_i2c_master not built or missing executable |
| parameterized_serdes | libraries/comms/parameterized_serdes.v | ✗ FAIL | N/A | N/A | 0.06 | Module parameterized_serdes not built or missing executable
Error: Module parameterized_serdes not built or missing executable |
| parameterized_spi_master | libraries/comms/parameterized_spi_master.v | ✗ FAIL | N/A | N/A | 0.06 | Module parameterized_spi_master not built or missing executable
Error: Module parameterized_spi_master not built or missing executable |
| parameterized_uart_rx | libraries/comms/parameterized_uart_rx.v | ✗ FAIL | N/A | N/A | 0.06 | Module parameterized_uart_rx not built or missing executable
Error: Module parameterized_uart_rx not built or missing executable |
| parameterized_uart_tx | libraries/comms/parameterized_uart_tx.v | ✗ FAIL | N/A | N/A | 0.06 | Module parameterized_uart_tx not built or missing executable
Error: Module parameterized_uart_tx not built or missing executable |
| parameterized_uart_tx_fixed | libraries/comms/parameterized_uart_tx_fixed.v | ⚠ NO TESTBENCH | 0/0 | N/A | 0.00 | No testbench available |
| simple_spi_master | libraries/comms/simple_spi_master.v | ✗ FAIL | N/A | N/A | 0.06 | Module simple_spi_master not built or missing executable
Error: Module simple_spi_master not built or missing executable |
| spi_master | libraries/comms/spi_master.v | ✗ FAIL | N/A | N/A | 0.06 | Module spi_master not built or missing executable
Error: Module spi_master not built or missing executable |

<a name='category-counters'></a>
### Counters

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| configurable_clz_clo | libraries/counters/configurable_clz_clo.v | ✗ FAIL | N/A | N/A | 0.06 | Module configurable_clz_clo not built or missing executable
Error: Module configurable_clz_clo not built or missing executable |
| gray_counter | libraries/counters/gray_counter.v | ✗ FAIL | N/A | N/A | 0.06 | Module gray_counter not built or missing executable
Error: Module gray_counter not built or missing executable |
| johnson_counter | libraries/counters/johnson_counter.v | ✗ FAIL | N/A | N/A | 0.06 | Module johnson_counter not built or missing executable
Error: Module johnson_counter not built or missing executable |
| leading_zero_counter | libraries/counters/leading_zero_counter.v | ✗ FAIL | N/A | N/A | 0.06 | Module leading_zero_counter not built or missing executable
Error: Module leading_zero_counter not built or missing executable |
| loadable_updown_counter | libraries/counters/loadable_updown_counter.v | ✗ FAIL | N/A | N/A | 0.06 | Module loadable_updown_counter not built or missing executable
Error: Module loadable_updown_counter not built or missing executable |
| parameterized_decade_counter | libraries/counters/parameterized_decade_counter.v | ✗ FAIL | N/A | N/A | 0.06 | Module parameterized_decade_counter not built or missing executable
Error: Module parameterized_decade_counter not built or missing executable |
| parameterized_gray_counter | libraries/counters/parameterized_gray_counter.v | ✗ FAIL | N/A | N/A | 0.06 | Module parameterized_gray_counter not built or missing executable
Error: Module parameterized_gray_counter not built or missing executable |
| parameterized_johnson_counter | libraries/counters/parameterized_johnson_counter.v | ✗ FAIL | N/A | N/A | 0.06 | Module parameterized_johnson_counter not built or missing executable
Error: Module parameterized_johnson_counter not built or missing executable |
| parameterized_johnson_updown_counter | libraries/counters/parameterized_johnson_updown_counter.v | ✗ FAIL | N/A | N/A | 0.06 | Module parameterized_johnson_updown_counter not built or missing executable
Error: Module parameterized_johnson_updown_counter not built or missing executable |
| parameterized_loadable_counter | libraries/counters/parameterized_loadable_counter.v | ✗ FAIL | N/A | N/A | 0.06 | Module parameterized_loadable_counter not built or missing executable
Error: Module parameterized_loadable_counter not built or missing executable |
| parameterized_onehot_counter | libraries/counters/parameterized_onehot_counter.v | ✗ FAIL | N/A | N/A | 0.06 | Module parameterized_onehot_counter not built or missing executable
Error: Module parameterized_onehot_counter not built or missing executable |
| parameterized_ring_counter | libraries/counters/parameterized_ring_counter.v | ✗ FAIL | N/A | N/A | 0.06 | Module parameterized_ring_counter not built or missing executable
Error: Module parameterized_ring_counter not built or missing executable |
| parameterized_self_correcting_counter | libraries/counters/parameterized_self_correcting_counter.v | ✗ FAIL | N/A | N/A | 0.06 | Module parameterized_self_correcting_counter not built or missing executable
Error: Module parameterized_self_correcting_counter not built or missing executable |
| parameterized_sync_reset_counter | libraries/counters/parameterized_sync_reset_counter.v | ✗ FAIL | N/A | N/A | 0.06 | Module parameterized_sync_reset_counter not built or missing executable
Error: Module parameterized_sync_reset_counter not built or missing executable |
| parameterized_updown_counter | libraries/counters/parameterized_updown_counter.v | ✗ FAIL | N/A | N/A | 0.06 | Module parameterized_updown_counter not built or missing executable
Error: Module parameterized_updown_counter not built or missing executable |

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
| parameterized_dds | libraries/dsp/parameterized_dds.v | ✗ FAIL | N/A | N/A | 0.06 | Module parameterized_dds not built or missing executable
Error: Module parameterized_dds not built or missing executable |
| parameterized_fft | libraries/dsp/parameterized_fft.v | ✗ FAIL | N/A | N/A | 0.06 | Module parameterized_fft not built or missing executable
Error: Module parameterized_fft not built or missing executable |

<a name='category-division'></a>
### Division

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| non_restoring_divider | libraries/dividers/non_restoring_divider.v | ✗ FAIL | N/A | N/A | 0.06 | Module non_restoring_divider not built or missing executable
Error: Module non_restoring_divider not built or missing executable |

<a name='category-encoding/decoding'></a>
### Encoding/Decoding

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| binary_to_gray | libraries/codings/binary_to_gray.v | ✓ PASS | 16/16 | N/A | 4.93 | 16 of 16 |
| configurable_priority_encoder | libraries/codings/configurable_priority_encoder.v | ✗ FAIL | N/A | N/A | 0.06 | Module configurable_priority_encoder not built or missing executable
Error: Module configurable_priority_encoder not built or missing executable |
| gray_to_binary | libraries/codings/gray_to_binary.v | ✗ FAIL | N/A | N/A | 0.06 | Module gray_to_binary not built or missing executable
Error: Module gray_to_binary not built or missing executable |
| hamming_code | libraries/codings/hamming_code.v | ✗ FAIL | N/A | N/A | 0.06 | Module hamming_code not built or missing executable
Error: Module hamming_code not built or missing executable |
| parameterized_crc_generator | libraries/codings/parameterized_crc_generator.v | ✗ FAIL | N/A | N/A | 0.06 | Module parameterized_crc_generator not built or missing executable
Error: Module parameterized_crc_generator not built or missing executable |
| parameterized_scrambler | libraries/codings/parameterized_scrambler.v | ✗ FAIL | N/A | N/A | 0.06 | Module parameterized_scrambler not built or missing executable
Error: Module parameterized_scrambler not built or missing executable |
| priority_encoder | libraries/codings/priority_encoder.v | ✗ FAIL | N/A | N/A | 0.06 | Module priority_encoder not built or missing executable
Error: Module priority_encoder not built or missing executable |

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
| async_fifo | libraries/fifo/async_fifo.v | ✓ PASS | N/A | N/A | 4.81 | Execution completed successfully |
| barrel_shifter_fifo | libraries/fifo/barrel_shifter_fifo.v | ✓ PASS | N/A | N/A | 4.94 | Execution completed successfully |
| bidirectional_fifo | libraries/fifo/bidirectional_fifo.v | ✓ PASS | N/A | N/A | 4.83 | Execution completed successfully |
| cache_fifo | libraries/fifo/cache_fifo.v | ✗ FAIL | N/A | N/A | 0.06 | Module cache_fifo not built or missing executable
Error: Module cache_fifo not built or missing executable |
| circular_buffer_fifo | libraries/fifo/circular_buffer_fifo.v | ✗ FAIL | N/A | N/A | 0.06 | Module circular_buffer_fifo not built or missing executable
Error: Module circular_buffer_fifo not built or missing executable |
| configurable_param_fifo | libraries/fifo/configurable_param_fifo.v | ✗ FAIL | N/A | N/A | 0.06 | Module configurable_param_fifo not built or missing executable
Error: Module configurable_param_fifo not built or missing executable |
| configurable_sync_fifo | libraries/fifo/configurable_sync_fifo.v | ✗ FAIL | N/A | N/A | 0.06 | Module configurable_sync_fifo not built or missing executable
Error: Module configurable_sync_fifo not built or missing executable |
| credit_based_fifo | libraries/fifo/credit_based_fifo.v | ✗ FAIL | N/A | N/A | 0.06 | Module credit_based_fifo not built or missing executable
Error: Module credit_based_fifo not built or missing executable |
| dual_clock_fifo | libraries/fifo/dual_clock_fifo.v | ✗ FAIL | N/A | N/A | 0.06 | Module dual_clock_fifo not built or missing executable
Error: Module dual_clock_fifo not built or missing executable |
| elastic_buffer | libraries/fifo/elastic_buffer.v | ✗ FAIL | N/A | N/A | 0.06 | Module elastic_buffer not built or missing executable
Error: Module elastic_buffer not built or missing executable |
| fifo | libraries/fifo/fifo.v | ✗ FAIL | N/A | N/A | 0.06 | Module fifo not built or missing executable
Error: Module fifo not built or missing executable |
| fwft_fifo | libraries/fifo/fwft_fifo.v | ✗ FAIL | N/A | N/A | 0.06 | Module fwft_fifo not built or missing executable
Error: Module fwft_fifo not built or missing executable |
| memory_mapped_fifo | libraries/fifo/memory_mapped_fifo.v | ✗ FAIL | N/A | N/A | 0.06 | Module memory_mapped_fifo not built or missing executable
Error: Module memory_mapped_fifo not built or missing executable |
| multi_ported_fifo | libraries/fifo/multi_ported_fifo.v | ✗ FAIL | N/A | N/A | 0.06 | Module multi_ported_fifo not built or missing executable
Error: Module multi_ported_fifo not built or missing executable |
| parameterized_priority_queue | libraries/fifo/parameterized_priority_queue.v | ✗ FAIL | N/A | N/A | 0.06 | Module parameterized_priority_queue not built or missing executable
Error: Module parameterized_priority_queue not built or missing executable |
| pipelined_fifo | libraries/fifo/pipelined_fifo.v | ✗ FAIL | N/A | N/A | 0.06 | Module pipelined_fifo not built or missing executable
Error: Module pipelined_fifo not built or missing executable |
| showahead_fifo | libraries/fifo/showahead_fifo.v | ✗ FAIL | N/A | N/A | 0.06 | Module showahead_fifo not built or missing executable
Error: Module showahead_fifo not built or missing executable |
| skid_buffer | libraries/fifo/skid_buffer.v | ✗ FAIL | N/A | N/A | 0.06 | Module skid_buffer not built or missing executable
Error: Module skid_buffer not built or missing executable |
| smart_fifo | libraries/fifo/smart_fifo.v | ✗ FAIL | N/A | N/A | 0.06 | Module smart_fifo not built or missing executable
Error: Module smart_fifo not built or missing executable |
| sync_fifo | libraries/fifo/sync_fifo.v | ✗ FAIL | N/A | N/A | 0.06 | Module sync_fifo not built or missing executable
Error: Module sync_fifo not built or missing executable |

<a name='category-filters'></a>
### Filters

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| configurable_fir_filter | libraries/filters/configurable_fir_filter.v | ✗ FAIL | N/A | N/A | 0.06 | Module configurable_fir_filter not built or missing executable
Error: Module configurable_fir_filter not built or missing executable |
| fir_filter | libraries/filters/fir_filter.v | ✗ FAIL | N/A | N/A | 0.06 | Module fir_filter not built or missing executable
Error: Module fir_filter not built or missing executable |

<a name='category-input/output'></a>
### Input/Output

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| dma_controller | libraries/io/dma_controller.v | ⚠ NO TESTBENCH | 0/0 | N/A | 0.00 | No testbench available |
| gpio_controller | libraries/io/gpio_controller.v | ✗ FAIL | N/A | N/A | 0.06 | Module gpio_controller not built or missing executable
Error: Module gpio_controller not built or missing executable |

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
| fixed_point_sqrt | libraries/math/fixed_point_sqrt.v | ✗ FAIL | N/A | N/A | 0.06 | Module fixed_point_sqrt not built or missing executable
Error: Module fixed_point_sqrt not built or missing executable |
| floating_point_adder | libraries/math/floating_point_adder.v | ✗ FAIL | N/A | N/A | 0.06 | Module floating_point_adder not built or missing executable
Error: Module floating_point_adder not built or missing executable |

<a name='category-memory'></a>
### Memory

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| ddr_controller | libraries/mems/ddr_controller.v | ✗ FAIL | N/A | N/A | 0.06 | Module ddr_controller not built or missing executable
Error: Module ddr_controller not built or missing executable |
| dual_port_ram | libraries/mems/dual_port_ram.v | ✗ FAIL | N/A | N/A | 0.06 | Module dual_port_ram not built or missing executable
Error: Module dual_port_ram not built or missing executable |
| memory_controller | libraries/mems/memory_controller.v | ✗ FAIL | N/A | N/A | 0.06 | Module memory_controller not built or missing executable
Error: Module memory_controller not built or missing executable |
| parameterized_cam | libraries/mems/parameterized_cam.v | ✗ FAIL | N/A | N/A | 0.05 | Module parameterized_cam not built or missing executable
Error: Module parameterized_cam not built or missing executable |

<a name='category-multiplication'></a>
### Multiplication

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| booth_multiplier | libraries/multipliers/booth_multiplier.v | ✗ FAIL | N/A | N/A | 0.06 | Module booth_multiplier not built or missing executable
Error: Module booth_multiplier not built or missing executable |
| configurable_mult | libraries/multipliers/configurable_mult.v | ✗ FAIL | N/A | N/A | 0.06 | Module configurable_mult not built or missing executable
Error: Module configurable_mult not built or missing executable |
| radix4_booth_multiplier | libraries/multipliers/radix4_booth_multiplier.v | ✗ FAIL | N/A | N/A | 0.06 | Module radix4_booth_multiplier not built or missing executable
Error: Module radix4_booth_multiplier not built or missing executable |

<a name='category-network-on-chip'></a>
### Network on Chip

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| configurable_mesh_router | libraries/noc/configurable_mesh_router.v | ✗ FAIL | N/A | N/A | 0.06 | Module configurable_mesh_router not built or missing executable
Error: Module configurable_mesh_router not built or missing executable |
| crossbar_switch | libraries/noc/crossbar_switch.v | ✗ FAIL | N/A | N/A | 0.06 | Module crossbar_switch not built or missing executable
Error: Module crossbar_switch not built or missing executable |
| mesh_router | libraries/noc/mesh_router.v | ✗ FAIL | N/A | N/A | 0.06 | Module mesh_router not built or missing executable
Error: Module mesh_router not built or missing executable |
| network_interface | libraries/noc/network_interface.v | ✗ FAIL | N/A | N/A | 0.06 | Module network_interface not built or missing executable
Error: Module network_interface not built or missing executable |

<a name='category-power-management'></a>
### Power Management

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| clock_divider | libraries/power/clock_divider.v | ✗ FAIL | N/A | N/A | 0.06 | Module clock_divider not built or missing executable
Error: Module clock_divider not built or missing executable |
| clock_gating | libraries/power/clock_gating.v | ⚠ NO TESTBENCH | 0/0 | N/A | 0.00 | No testbench available |
| parameterized_clock_gating | libraries/power/parameterized_clock_gating.v | ✗ FAIL | N/A | N/A | 0.06 | Module parameterized_clock_gating not built or missing executable
Error: Module parameterized_clock_gating not built or missing executable |
| parameterized_freq_divider | libraries/power/parameterized_freq_divider.v | ✗ FAIL | N/A | N/A | 0.06 | Module parameterized_freq_divider not built or missing executable
Error: Module parameterized_freq_divider not built or missing executable |
| power_domain_controller | libraries/power/power_domain_controller.v | ✗ FAIL | N/A | N/A | 0.06 | Module power_domain_controller not built or missing executable
Error: Module power_domain_controller not built or missing executable |

<a name='category-registers'></a>
### Registers

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| barrel_rotator | libraries/registers/barrel_rotator.v | ✓ PASS | 80/80 | N/A | 4.84 | 80 of 80 |
| barrel_shifter | libraries/registers/barrel_shifter.v | ✓ PASS | 300/300 | N/A | 4.91 | 300 of 300 |
| bidirectional_shift_register | libraries/registers/bidirectional_shift_register.v | ✓ PASS | 6/6 | N/A | 4.87 | 6 of 6 |
| dual_edge_register | libraries/registers/dual_edge_register.v | ✗ FAIL | N/A | N/A | 0.06 | Module dual_edge_register not built or missing executable
Error: Module dual_edge_register not built or missing executable |
| lfsr | libraries/registers/lfsr.v | ✗ FAIL | N/A | N/A | 0.05 | Module lfsr not built or missing executable
Error: Module lfsr not built or missing executable |
| onehot_decoder_register | libraries/registers/onehot_decoder_register.v | ✗ FAIL | N/A | N/A | 0.06 | Module onehot_decoder_register not built or missing executable
Error: Module onehot_decoder_register not built or missing executable |
| parameterized_barrel_rotator | libraries/registers/parameterized_barrel_rotator.v | ✗ FAIL | N/A | N/A | 0.06 | Module parameterized_barrel_rotator not built or missing executable
Error: Module parameterized_barrel_rotator not built or missing executable |
| parameterized_rotation_sipo | libraries/registers/parameterized_rotation_sipo.v | ✗ FAIL | N/A | N/A | 0.06 | Module parameterized_rotation_sipo not built or missing executable
Error: Module parameterized_rotation_sipo not built or missing executable |
| piso_register | libraries/registers/piso_register.v | ✗ FAIL | N/A | N/A | 0.06 | Module piso_register not built or missing executable
Error: Module piso_register not built or missing executable |
| register_file | libraries/registers/register_file.v | ✗ FAIL | N/A | N/A | 0.06 | Module register_file not built or missing executable
Error: Module register_file not built or missing executable |
| scan_register | libraries/registers/scan_register.v | ✗ FAIL | N/A | N/A | 0.06 | Module scan_register not built or missing executable
Error: Module scan_register not built or missing executable |
| shadow_register | libraries/registers/shadow_register.v | ✗ FAIL | N/A | N/A | 0.06 | Module shadow_register not built or missing executable
Error: Module shadow_register not built or missing executable |
| shift_register | libraries/registers/shift_register.v | ✗ FAIL | N/A | N/A | 0.06 | Module shift_register not built or missing executable
Error: Module shift_register not built or missing executable |
| shift_register_left | libraries/registers/shift_register_left.v | ✗ FAIL | N/A | N/A | 0.06 | Module shift_register_left not built or missing executable
Error: Module shift_register_left not built or missing executable |
| shift_register_right | libraries/registers/shift_register_right.v | ✗ FAIL | N/A | N/A | 0.06 | Module shift_register_right not built or missing executable
Error: Module shift_register_right not built or missing executable |
| sipo_register | libraries/registers/sipo_register.v | ✗ FAIL | N/A | N/A | 0.06 | Module sipo_register not built or missing executable
Error: Module sipo_register not built or missing executable |
| siso_register | libraries/registers/siso_register.v | ✗ FAIL | N/A | N/A | 0.06 | Module siso_register not built or missing executable
Error: Module siso_register not built or missing executable |
| sync_preset_register | libraries/registers/sync_preset_register.v | ✗ FAIL | N/A | N/A | 0.06 | Module sync_preset_register not built or missing executable
Error: Module sync_preset_register not built or missing executable |
| toggle_register | libraries/registers/toggle_register.v | ✗ FAIL | N/A | N/A | 0.06 | Module toggle_register not built or missing executable
Error: Module toggle_register not built or missing executable |
| universal_shift_register | libraries/registers/universal_shift_register.v | ✗ FAIL | N/A | N/A | 0.06 | Module universal_shift_register not built or missing executable
Error: Module universal_shift_register not built or missing executable |

<a name='category-signal-processing'></a>
### Signal Processing

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| configurable_lfsr | libraries/signals/configurable_lfsr.v | ✗ FAIL | N/A | N/A | 0.06 | Module configurable_lfsr not built or missing executable
Error: Module configurable_lfsr not built or missing executable |
| configurable_prng | libraries/signals/configurable_prng.v | ✗ FAIL | N/A | N/A | 0.06 | Module configurable_prng not built or missing executable
Error: Module configurable_prng not built or missing executable |
| digital_thermometer_controller | libraries/signals/digital_thermometer_controller.v | ✗ FAIL | N/A | N/A | 0.06 | Module digital_thermometer_controller not built or missing executable
Error: Module digital_thermometer_controller not built or missing executable |
| multi_phase_pwm_controller | libraries/signals/multi_phase_pwm_controller.v | ✗ FAIL | N/A | N/A | 0.06 | Module multi_phase_pwm_controller not built or missing executable
Error: Module multi_phase_pwm_controller not built or missing executable |
| parameterized_pwm | libraries/signals/parameterized_pwm.v | ✗ FAIL | N/A | N/A | 0.06 | Module parameterized_pwm not built or missing executable
Error: Module parameterized_pwm not built or missing executable |
| pulse_width_detector | libraries/signals/pulse_width_detector.v | ✗ FAIL | N/A | N/A | 0.06 | Module pulse_width_detector not built or missing executable
Error: Module pulse_width_detector not built or missing executable |
| pwm_generator | libraries/signals/pwm_generator.v | ✗ FAIL | N/A | N/A | 0.06 | Module pwm_generator not built or missing executable
Error: Module pwm_generator not built or missing executable |

<a name='category-state-machines'></a>
### State Machines

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| sequence_detector_fsm | libraries/fsm/sequence_detector_fsm.v | ✗ FAIL | N/A | N/A | 0.06 | Module sequence_detector_fsm not built or missing executable
Error: Module sequence_detector_fsm not built or missing executable |

<a name='category-testing'></a>
### Testing

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| bist_controller | libraries/test/bist_controller.v | ✗ FAIL | N/A | N/A | 0.06 | Module bist_controller not built or missing executable
Error: Module bist_controller not built or missing executable |
| jtag_controller | libraries/test/jtag_controller.v | ✗ FAIL | N/A | N/A | 0.06 | Module jtag_controller not built or missing executable
Error: Module jtag_controller not built or missing executable |

<a name='category-voting'></a>
### Voting

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| majority_voter | libraries/voters/majority_voter.v | ✗ FAIL | N/A | N/A | 0.06 | Module majority_voter not built or missing executable
Error: Module majority_voter not built or missing executable |

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
