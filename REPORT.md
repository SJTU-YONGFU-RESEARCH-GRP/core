# RTL Verification Report

Generated on: 2025-06-18 23:23:57

## Tool Versions

| Tool | Version |
|------|----------|
| Verilator | Verilator 5.036 2025-04-27 rev v5.036-48-g0dc93c1d5 |
| Icarus Verilog | Icarus Verilog version 11.0 (stable) () |
| Python | 3.10.12 |
| GTKWave | GTKWave Analyzer v3.3.104 (w)1999-2020 BSI |

## Table of Contents

1. [Summary](#summary)
2. [Category Overview](#category-overview)
3. [Adders](#adders)
4. [Arbitration](#arbitration)
5. [Arithmetic](#arithmetic)
6. [CORDIC](#cordic)
7. [Clock Domain Crossing](#clock-domain-crossing)
8. [Communication](#communication)
9. [Counters](#counters)
10. [Debugging](#debugging)
11. [Encoding/Decoding](#encoding-decoding)
12. [Encryption](#encryption)
13. [FIFOs](#fifos)
14. [Filters](#filters)
15. [Input/Output](#input-output)
16. [Interfaces](#interfaces)
17. [Mathematics](#mathematics)
18. [Memory](#memory)
19. [Multiplication](#multiplication)
20. [Network on Chip](#network-on-chip)
21. [Power Management](#power-management)
22. [Registers](#registers)
23. [Signal Processing](#signal-processing)
24. [State Machines](#state-machines)
25. [Testing](#testing)
26. [Voting](#voting)
27. [Notes](#notes)

## Summary

- Total modules scanned: 137
- Modules with missing testbenches: 0
- Total modules tested: 137
- Passed: 136 (99.3%)
- Failed: 1 (0.7%)
- Timeouts: 0
- Total tests executed: 1921
- Total tests passed: 1917 (99.8%)
- Total runtime: 890.86 seconds
- Average runtime per module: 6.50 seconds

## Category Overview

| Category | Modules | Passed | Failed | Pass Rate | Tests Passed | Runtime (s) |
|----------|--------:|-------:|-------:|----------:|-------------:|-----------:|
| [Adders](#adders) | 6 | 6 | 0 | 100.0% | 180/180 | 4.92 |
| [Arbitration](#arbitration) | 4 | 4 | 0 | 100.0% | 11/11 | 5.44 |
| [Arithmetic](#arithmetic) | 2 | 2 | 0 | 100.0% | 84/84 | 5.07 |
| [CORDIC](#cordic) | 3 | 3 | 0 | 100.0% | 34/34 | 43.03 |
| [Clock Domain Crossing](#clock-domain-crossing) | 6 | 5 | 1 | 83.3% | 118/122 | 5.19 |
| [Communication](#communication) | 12 | 12 | 0 | 100.0% | 41/41 | 5.87 |
| [Counters](#counters) | 15 | 15 | 0 | 100.0% | 84/84 | 6.00 |
| [Debugging](#debugging) | 2 | 2 | 0 | 100.0% | 9/9 | 6.05 |
| [Encoding/Decoding](#encoding-decoding) | 7 | 7 | 0 | 100.0% | 335/335 | 6.13 |
| [Encryption](#encryption) | 1 | 1 | 0 | 100.0% | 4/4 | 9.25 |
| [FIFOs](#fifos) | 20 | 20 | 0 | 100.0% | 64/64 | 5.52 |
| [Filters](#filters) | 2 | 2 | 0 | 100.0% | 2/2 | 5.02 |
| [Input/Output](#input-output) | 2 | 2 | 0 | 100.0% | 8/8 | 4.65 |
| [Interfaces](#interfaces) | 4 | 4 | 0 | 100.0% | 16/16 | 5.13 |
| [Mathematics](#mathematics) | 3 | 3 | 0 | 100.0% | 11/11 | 5.17 |
| [Memory](#memory) | 4 | 4 | 0 | 100.0% | 13/13 | 7.20 |
| [Multiplication](#multiplication) | 3 | 3 | 0 | 100.0% | 26/26 | 5.34 |
| [Network on Chip](#network-on-chip) | 5 | 5 | 0 | 100.0% | 45/45 | 5.40 |
| [Power Management](#power-management) | 5 | 5 | 0 | 100.0% | 26/26 | 5.60 |
| [Registers](#registers) | 19 | 19 | 0 | 100.0% | 609/609 | 5.98 |
| [Signal Processing](#signal-processing) | 9 | 9 | 0 | 100.0% | 165/165 | 5.48 |
| [State Machines](#state-machines) | 1 | 1 | 0 | 100.0% | 26/26 | 7.53 |
| [Testing](#testing) | 2 | 2 | 0 | 100.0% | 7/7 | 4.86 |
| [Voting](#voting) | 1 | 1 | 0 | 100.0% | 4/4 | 5.31 |

## Detailed Results

## Adders

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| configurable_brent_kung_adder | libraries/adders/configurable_brent_kung_adder.v | ✓ PASS | 30/30 | 6.10 | 30 of 30 |
| configurable_carry_lookahead_adder | libraries/adders/configurable_carry_lookahead_adder.v | ✓ PASS | 30/30 | 4.73 | 30 of 30 |
| configurable_carry_select_adder | libraries/adders/configurable_carry_select_adder.v | ✓ PASS | 30/30 | 4.53 | 30 of 30 |
| configurable_carry_skip_adder | libraries/adders/configurable_carry_skip_adder.v | ✓ PASS | 30/30 | 4.58 | 30 of 30 |
| configurable_conditional_sum_adder | libraries/adders/configurable_conditional_sum_adder.v | ✓ PASS | 30/30 | 4.60 | 30 of 30 |
| configurable_kogge_stone_adder | libraries/adders/configurable_kogge_stone_adder.v | ✓ PASS | 30/30 | 5.00 | 30 of 30 |

## Arbitration

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| arbiter | libraries/arbiters/arbiter.v | ✓ PASS | 2/2 | 4.24 | 2 of 2 |
| arbiter_rr | libraries/arbiters/arbiter_rr.v | ✓ PASS | 1/1 | 3.87 | 1 of 1 |
| fair_priority_arbiter | libraries/arbiters/fair_priority_arbiter.v | ✓ PASS | 4/4 | 4.91 | 4 of 4 |
| matrix_arbiter | libraries/arbiters/matrix_arbiter.v | ✓ PASS | 4/4 | 8.76 | 4 of 4 |

## Arithmetic

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| alu | libraries/alu/alu.v | ✓ PASS | 12/12 | 5.31 | 12 of 12 |
| configurable_comparator | libraries/alu/configurable_comparator.v | ✓ PASS | 72/72 | 4.83 | 72 of 72 |

## CORDIC

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| cordic | libraries/cordic/cordic.v | ✓ PASS | 9/9 | 55.97 | 9 of 9 |
| cordic_core | libraries/cordic/cordic_core.v | ✓ PASS | 9/9 | 4.81 | 9 of 9 |
| sine_cosine_generator | libraries/cordic/sine_cosine_generator.v | ✓ PASS | 16/16 | 68.31 | 16 of 16 |

## Clock Domain Crossing

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| bsg_async_credit_counter | libraries/cdc/bsg_async_credit_counter.v | ✗ FAIL | 12/16 | 4.81 | 12 of 16

Error output sample:
make: *** [Makefile:140: verify_bsg_async_credit_counter] Error 1 |
| clock_domain_crossing | libraries/cdc/clock_domain_crossing.v | ✓ PASS | 10/10 | 4.53 | 10 of 10 |
| clock_domain_crossing_fifo | libraries/cdc/clock_domain_crossing_fifo.v | ✓ PASS | 76/76 | 4.61 | 76 of 76 |
| handshake_synchronizer | libraries/cdc/handshake_synchronizer.v | ✓ PASS | 10/10 | 5.24 | 10 of 10 |
| multi_flop_synchronizer | libraries/cdc/multi_flop_synchronizer.v | ✓ PASS | 5/5 | 5.33 | 5 of 5 |
| network_interface_cdc | libraries/noc/network_interface_cdc.v | ✓ PASS | 5/5 | 6.66 | 5 of 5 |

## Communication

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| ahb_lite_master | libraries/comms/ahb_lite_master.v | ✓ PASS | 5/5 | 5.60 | Execution completed successfully |
| basic_spi_master | libraries/comms/basic_spi_master.v | ✓ PASS | 1/1 | 5.27 | 1 of 1 |
| final_spi_master | libraries/comms/final_spi_master.v | ✓ PASS | 1/1 | 5.07 | 1 of 1 |
| fixed_spi_master | libraries/comms/fixed_spi_master.v | ✓ PASS | 1/1 | 4.87 | 1 of 1 |
| parameterized_deserializer | libraries/comms/parameterized_deserializer.v | ✓ PASS | 4/4 | 5.65 | 4 of 4 |
| parameterized_i2c_master | libraries/comms/parameterized_i2c_master.v | ✓ PASS | 2/2 | 8.06 | 2 of 2 |
| parameterized_serdes | libraries/comms/parameterized_serdes.v | ✓ PASS | 12/12 | 5.58 | 12 of 12 |
| parameterized_spi_master | libraries/comms/parameterized_spi_master.v | ✓ PASS | 1/1 | 5.72 | 1 of 1 |
| parameterized_uart_rx | libraries/comms/parameterized_uart_rx.v | ✓ PASS | 5/5 | 5.59 | 5 of 5 |
| parameterized_uart_tx | libraries/comms/parameterized_uart_tx.v | ✓ PASS | 5/5 | 7.12 | 5 of 5 |
| simple_spi_master | libraries/comms/simple_spi_master.v | ✓ PASS | 1/1 | 5.60 | 1 of 1 |
| spi_master | libraries/comms/spi_master.v | ✓ PASS | 3/3 | 6.30 | 3 of 3 |

## Counters

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| configurable_clz_clo | libraries/counters/configurable_clz_clo.v | ✓ PASS | 24/24 | 6.95 | 24 of 24 |
| gray_counter | libraries/counters/gray_counter.v | ✓ PASS | 3/3 | 4.66 | 3 of 3 |
| johnson_counter | libraries/counters/johnson_counter.v | ✓ PASS | 4/4 | 4.90 | 4 of 4 |
| leading_zero_counter | libraries/counters/leading_zero_counter.v | ✓ PASS | 20/20 | 4.76 | 20 of 20 |
| loadable_updown_counter | libraries/counters/loadable_updown_counter.v | ✓ PASS | 6/6 | 5.04 | 6 of 6 |
| parameterized_decade_counter | libraries/counters/parameterized_decade_counter.v | ✓ PASS | 2/2 | 6.20 | 2 of 2 |
| parameterized_gray_counter | libraries/counters/parameterized_gray_counter.v | ✓ PASS | 3/3 | 8.52 | 3 of 3 |
| parameterized_johnson_counter | libraries/counters/parameterized_johnson_counter.v | ✓ PASS | 4/4 | 6.68 | 4 of 4 |
| parameterized_johnson_updown_counter | libraries/counters/parameterized_johnson_updown_counter.v | ✓ PASS | 1/1 | 7.42 | 1 of 1 |
| parameterized_loadable_counter | libraries/counters/parameterized_loadable_counter.v | ✓ PASS | 3/3 | 5.61 | 3 of 3 |
| parameterized_onehot_counter | libraries/counters/parameterized_onehot_counter.v | ✓ PASS | 4/4 | 6.07 | 4 of 4 |
| parameterized_ring_counter | libraries/counters/parameterized_ring_counter.v | ✓ PASS | 4/4 | 6.48 | 4 of 4 |
| parameterized_self_correcting_counter | libraries/counters/parameterized_self_correcting_counter.v | ✓ PASS | 2/2 | 5.53 | 2 of 2 |
| parameterized_sync_reset_counter | libraries/counters/parameterized_sync_reset_counter.v | ✓ PASS | 3/3 | 5.75 | 3 of 3 |
| parameterized_updown_counter | libraries/counters/parameterized_updown_counter.v | ✓ PASS | 1/1 | 5.49 | 1 of 1 |

## Debugging

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| logic_analyzer | libraries/debug/logic_analyzer.v | ✓ PASS | 5/5 | 4.72 | 5 of 5 |
| performance_counter | libraries/debug/performance_counter.v | ✓ PASS | 4/4 | 7.38 | 4 of 4 |

## Encoding/Decoding

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| binary_to_gray | libraries/codings/binary_to_gray.v | ✓ PASS | 16/16 | 6.10 | 16 of 16 |
| configurable_priority_encoder | libraries/codings/configurable_priority_encoder.v | ✓ PASS | 13/13 | 7.46 | 13 of 13 |
| gray_to_binary | libraries/codings/gray_to_binary.v | ✓ PASS | 16/16 | 5.83 | 16 of 16 |
| hamming_code | libraries/codings/hamming_code.v | ✓ PASS | 31/31 | 5.36 | 31 of 31 |
| parameterized_crc_generator | libraries/codings/parameterized_crc_generator.v | ✓ PASS | 1/1 | 6.56 | 1 of 1 |
| parameterized_scrambler | libraries/codings/parameterized_scrambler.v | ✓ PASS | 2/2 | 5.07 | 2 of 2 |
| priority_encoder | libraries/codings/priority_encoder.v | ✓ PASS | 256/256 | 6.56 | 256 of 256 |

## Encryption

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| true_random_generator | libraries/encryption/true_random_generator.v | ✓ PASS | 4/4 | 9.25 | 4 of 4 |

## FIFOs

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| async_fifo | libraries/fifos/async_fifo.v | ✓ PASS | 4/4 | 4.71 | 4 of 4 |
| barrel_shifter_fifo | libraries/fifos/barrel_shifter_fifo.v | ✓ PASS | 4/4 | 4.94 | 4 of 4 |
| bidirectional_fifo | libraries/fifos/bidirectional_fifo.v | ✓ PASS | 4/4 | 5.70 | 4 of 4 |
| cache_fifo | libraries/fifos/cache_fifo.v | ✓ PASS | 2/2 | 4.81 | 2 of 2 |
| circular_buffer_fifo | libraries/fifos/circular_buffer_fifo.v | ✓ PASS | 6/6 | 4.95 | 6 of 6 |
| configurable_param_fifo | libraries/fifos/configurable_param_fifo.v | ✓ PASS | 3/3 | 5.21 | 3 of 3 |
| configurable_sync_fifo | libraries/fifos/configurable_sync_fifo.v | ✓ PASS | 1/1 | 4.59 | 1 of 1 |
| credit_based_fifo | libraries/fifos/credit_based_fifo.v | ✓ PASS | 1/1 | 4.73 | 1 of 1 |
| dual_clock_fifo | libraries/fifos/dual_clock_fifo.v | ✓ PASS | 1/1 | 4.78 | 1 of 1 |
| elastic_buffer | libraries/fifos/elastic_buffer.v | ✓ PASS | 4/4 | 5.51 | 4 of 4 |
| fifo | libraries/fifos/fifo.v | ✓ PASS | 3/3 | 5.07 | 3 of 3 |
| fwft_fifo | libraries/fifos/fwft_fifo.v | ✓ PASS | 4/4 | 4.59 | 4 of 4 |
| memory_mapped_fifo | libraries/fifos/memory_mapped_fifo.v | ✓ PASS | 3/3 | 6.46 | 3 of 3 |
| multi_ported_fifo | libraries/fifos/multi_ported_fifo.v | ✓ PASS | 3/3 | 5.84 | 3 of 3 |
| parameterized_priority_queue | libraries/fifos/parameterized_priority_queue.v | ✓ PASS | 2/2 | 5.86 | 2 of 2 |
| pipelined_fifo | libraries/fifos/pipelined_fifo.v | ✓ PASS | 4/4 | 5.98 | 4 of 4 |
| showahead_fifo | libraries/fifos/showahead_fifo.v | ✓ PASS | 5/5 | 5.98 | 5 of 5 |
| skid_buffer | libraries/fifos/skid_buffer.v | ✓ PASS | 3/3 | 7.19 | 3 of 3 |
| smart_fifo | libraries/fifos/smart_fifo.v | ✓ PASS | 4/4 | 6.70 | 4 of 4 |
| sync_fifo | libraries/fifos/sync_fifo.v | ✓ PASS | 3/3 | 6.71 | 3 of 3 |

## Filters

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| configurable_fir_filter | libraries/filters/configurable_fir_filter.v | ✓ PASS | 1/1 | 5.04 | 1 of 1 |
| fir_filter | libraries/filters/fir_filter.v | ✓ PASS | 1/1 | 5.00 | 1 of 1 |

## Input/Output

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| dma_controller | libraries/io/dma_controller.v | ✓ PASS | 3/3 | 4.82 | 3 of 3 |
| gpio_controller | libraries/io/gpio_controller.v | ✓ PASS | 5/5 | 4.48 | 5 of 5 |

## Interfaces

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| axi_lite_master | libraries/interfaces/axi_lite_master.v | ✓ PASS | 6/6 | 4.61 | 6 of 6 |
| axi_stream_interface | libraries/interfaces/axi_stream_interface.v | ✓ PASS | 2/2 | 4.61 | 2 of 2 |
| pcie_endpoint | libraries/interfaces/pcie_endpoint.v | ✓ PASS | 4/4 | 5.65 | 4 of 4 |
| wishbone_master | libraries/interfaces/wishbone_master.v | ✓ PASS | 4/4 | 5.67 | 4 of 4 |

## Mathematics

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| fixed_point_sqrt | libraries/math/fixed_point_sqrt.v | ✓ PASS | 10/10 | 4.94 | 10 of 10 |
| floating_point_adder | libraries/math/floating_point_adder.v | ✓ PASS | N/A | 4.80 | Execution completed successfully |
| non_restoring_divider | libraries/math/non_restoring_divider.v | ✓ PASS | 1/1 | 5.78 | 1 of 1 |

## Memory

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| ddr_controller | libraries/mems/ddr_controller.v | ✓ PASS | 5/5 | 4.68 | 5 of 5 |
| dual_port_ram | libraries/mems/dual_port_ram.v | ✓ PASS | 2/2 | 5.70 | 2 of 2 |
| memory_controller | libraries/mems/memory_controller.v | ✓ PASS | 1/1 | 11.90 | 1 of 1 |
| parameterized_cam | libraries/mems/parameterized_cam.v | ✓ PASS | 5/5 | 6.53 | 5 of 5 |

## Multiplication

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| booth_multiplier | libraries/multipliers/booth_multiplier.v | ✓ PASS | 10/10 | 4.68 | 10 of 10 |
| configurable_mult | libraries/multipliers/configurable_mult.v | ✓ PASS | 6/6 | 5.25 | 6 of 6 |
| radix4_booth_multiplier | libraries/multipliers/radix4_booth_multiplier.v | ✓ PASS | 10/10 | 6.10 | 10 of 10 |

## Network on Chip

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| configurable_mesh_router | libraries/noc/configurable_mesh_router.v | ✓ PASS | 11/11 | 4.50 | 11 of 11 |
| crossbar_switch | libraries/noc/crossbar_switch.v | ✓ PASS | 12/12 | 4.54 | 12 of 12 |
| mesh_router | libraries/noc/mesh_router.v | ✓ PASS | 7/7 | 5.57 | 7 of 7 |
| network_interface | libraries/noc/network_interface.v | ✓ PASS | 10/10 | 5.72 | 10 of 10 |
| network_interface_cdc | libraries/noc/network_interface_cdc.v | ✓ PASS | 5/5 | 6.66 | 5 of 5 |

## Power Management

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| clock_divider | libraries/power/clock_divider.v | ✓ PASS | 5/5 | 4.68 | 5 of 5 |
| clock_gating | libraries/power/clock_gating.v | ✓ PASS | 4/4 | 5.78 | 4 of 4 |
| parameterized_clock_gating | libraries/power/parameterized_clock_gating.v | ✓ PASS | 4/4 | 5.67 | 4 of 4 |
| parameterized_freq_divider | libraries/power/parameterized_freq_divider.v | ✓ PASS | 10/10 | 5.62 | 10 of 10 |
| power_domain_controller | libraries/power/power_domain_controller.v | ✓ PASS | 3/3 | 6.24 | 3 of 3 |

## Registers

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| barrel_rotator | libraries/registers/barrel_rotator.v | ✓ PASS | 80/80 | 4.61 | 80 of 80 |
| barrel_shifter | libraries/registers/barrel_shifter.v | ✓ PASS | 300/300 | 4.62 | 300 of 300 |
| bidirectional_shift_register | libraries/registers/bidirectional_shift_register.v | ✓ PASS | 6/6 | 4.70 | 6 of 6 |
| dual_edge_register | libraries/registers/dual_edge_register.v | ✓ PASS | 6/6 | 4.66 | 6 of 6 |
| lfsr | libraries/registers/lfsr.v | ✓ PASS | 2/2 | 4.55 | 2 of 2 |
| onehot_decoder_register | libraries/registers/onehot_decoder_register.v | ✓ PASS | 5/5 | 6.35 | 5 of 5 |
| parameterized_barrel_rotator | libraries/registers/parameterized_barrel_rotator.v | ✓ PASS | 160/160 | 7.45 | 160 of 160 |
| parameterized_rotation_sipo | libraries/registers/parameterized_rotation_sipo.v | ✓ PASS | 2/2 | 8.42 | 2 of 2 |
| piso_register | libraries/registers/piso_register.v | ✓ PASS | 1/1 | 8.02 | 1 of 1 |
| register_file | libraries/registers/register_file.v | ✓ PASS | 5/5 | 6.13 | 5 of 5 |
| scan_register | libraries/registers/scan_register.v | ✓ PASS | 4/4 | 6.38 | 4 of 4 |
| shadow_register | libraries/registers/shadow_register.v | ✓ PASS | 7/7 | 5.68 | 7 of 7 |
| shift_register_left | libraries/registers/shift_register_left.v | ✓ PASS | 1/1 | 5.80 | 1 of 1 |
| shift_register_right | libraries/registers/shift_register_right.v | ✓ PASS | 1/1 | 5.97 | 1 of 1 |
| sipo_register | libraries/registers/sipo_register.v | ✓ PASS | 4/4 | 5.83 | 4 of 4 |
| siso_register | libraries/registers/siso_register.v | ✓ PASS | 4/4 | 5.97 | 4 of 4 |
| sync_preset_register | libraries/registers/sync_preset_register.v | ✓ PASS | 8/8 | 6.79 | 8 of 8 |
| toggle_register | libraries/registers/toggle_register.v | ✓ PASS | 8/8 | 6.20 | 8 of 8 |
| universal_shift_register | libraries/registers/universal_shift_register.v | ✓ PASS | 5/5 | 5.55 | 5 of 5 |

## Signal Processing

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| configurable_lfsr | libraries/signals/configurable_lfsr.v | ✓ PASS | 32/32 | 4.62 | 32 of 32 |
| configurable_prng | libraries/signals/configurable_prng.v | ✓ PASS | 3/3 | 4.79 | 3 of 3 |
| digital_thermometer_controller | libraries/signals/digital_thermometer_controller.v | ✓ PASS | 5/5 | 4.65 | 5 of 5 |
| multi_phase_pwm_controller | libraries/signals/multi_phase_pwm_controller.v | ✓ PASS | 5/5 | 6.04 | 5 of 5 |
| parameterized_dds | libraries/signals/parameterized_dds.v | ✓ PASS | 100/100 | 5.69 | 100 of 100 |
| parameterized_fft | libraries/signals/parameterized_fft.v | ✓ PASS | 8/8 | 5.77 | 8 of 8 |
| parameterized_pwm | libraries/signals/parameterized_pwm.v | ✓ PASS | 6/6 | 6.18 | 6 of 6 |
| pulse_width_detector | libraries/signals/pulse_width_detector.v | ✓ PASS | 3/3 | 5.75 | 3 of 3 |
| pwm_generator | libraries/signals/pwm_generator.v | ✓ PASS | 3/3 | 5.86 | 3 of 3 |

## State Machines

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| sequence_detector_fsm | libraries/fsm/sequence_detector_fsm.v | ✓ PASS | 26/26 | 7.53 | 26 of 26 |

## Testing

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| bist_controller | libraries/test/bist_controller.v | ✓ PASS | 4/4 | 5.04 | 4 of 4 |
| jtag_controller | libraries/test/jtag_controller.v | ✓ PASS | 3/3 | 4.68 | 3 of 3 |

## Voting

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| majority_voter | libraries/voters/majority_voter.v | ✓ PASS | 4/4 | 5.31 | 4 of 4 |

## Notes

- Tests were run using Verilator with the build directory set to 'build'
- The standardized test summary format '==== Test Summary ====' was used to capture detailed test results
- Modules marked with 'NO TESTBENCH' need testbenches to be implemented
- Some tests may fail due to issues with the implementation, not the build system
- Timeouts indicate tests that took longer than 2 minutes to complete
- Runtime measurements include compilation and execution time
- Error messages are extracted from test output when available
