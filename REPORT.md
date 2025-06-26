# RTL Verification Report

Generated on: 2025-06-19 02:32:46

## Tool Versions

| Tool | Version |
|------|----------|
| Verilator | Verilator 5.036 2025-04-27 rev v5.036 |
| Icarus Verilog | Unknown |
| Python | 3.10.12 |
| GTKWave | Unknown |

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
- Passed: 137 (100.0%)
- Failed: 0 (0.0%)
- Timeouts: 0
- Total tests executed: 1921
- Total tests passed: 1921 (100.0%)
- Total runtime: 74.11 seconds
- Average runtime per module: 0.54 seconds

## Category Overview

| Category | Modules | Passed | Failed | Pass Rate | Tests Passed | Runtime (s) |
|----------|--------:|-------:|-------:|----------:|-------------:|-----------:|
| [Adders](#adders) | 6 | 6 | 0 | 100.0% | 180/180 | 0.47 |
| [Arbitration](#arbitration) | 4 | 4 | 0 | 100.0% | 11/11 | 0.47 |
| [Arithmetic](#arithmetic) | 2 | 2 | 0 | 100.0% | 84/84 | 0.49 |
| [CORDIC](#cordic) | 3 | 3 | 0 | 100.0% | 34/34 | 0.71 |
| [Clock Domain Crossing](#clock-domain-crossing) | 6 | 6 | 0 | 100.0% | 122/122 | 0.48 |
| [Communication](#communication) | 12 | 12 | 0 | 100.0% | 41/41 | 0.63 |
| [Counters](#counters) | 15 | 15 | 0 | 100.0% | 84/84 | 0.67 |
| [Debugging](#debugging) | 2 | 2 | 0 | 100.0% | 9/9 | 0.49 |
| [Encoding/Decoding](#encoding-decoding) | 7 | 7 | 0 | 100.0% | 335/335 | 0.56 |
| [Encryption](#encryption) | 1 | 1 | 0 | 100.0% | 4/4 | 0.49 |
| [FIFOs](#fifos) | 20 | 20 | 0 | 100.0% | 64/64 | 0.49 |
| [Filters](#filters) | 2 | 2 | 0 | 100.0% | 2/2 | 0.53 |
| [Input/Output](#input-output) | 2 | 2 | 0 | 100.0% | 8/8 | 0.47 |
| [Interfaces](#interfaces) | 4 | 4 | 0 | 100.0% | 16/16 | 0.48 |
| [Mathematics](#mathematics) | 3 | 3 | 0 | 100.0% | 11/11 | 0.46 |
| [Memory](#memory) | 4 | 4 | 0 | 100.0% | 13/13 | 0.48 |
| [Multiplication](#multiplication) | 3 | 3 | 0 | 100.0% | 26/26 | 0.47 |
| [Network on Chip](#network-on-chip) | 5 | 5 | 0 | 100.0% | 45/45 | 0.52 |
| [Power Management](#power-management) | 5 | 5 | 0 | 100.0% | 26/26 | 0.48 |
| [Registers](#registers) | 19 | 19 | 0 | 100.0% | 609/609 | 0.57 |
| [Signal Processing](#signal-processing) | 9 | 9 | 0 | 100.0% | 165/165 | 0.53 |
| [State Machines](#state-machines) | 1 | 1 | 0 | 100.0% | 26/26 | 0.48 |
| [Testing](#testing) | 2 | 2 | 0 | 100.0% | 7/7 | 0.46 |
| [Voting](#voting) | 1 | 1 | 0 | 100.0% | 4/4 | 0.57 |

## Detailed Results

## Adders

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| configurable_brent_kung_adder | libraries/adders/configurable_brent_kung_adder.v | ✓ PASS | 30/30 | 0.48 | 30 of 30 |
| configurable_carry_lookahead_adder | libraries/adders/configurable_carry_lookahead_adder.v | ✓ PASS | 30/30 | 0.45 | 30 of 30 |
| configurable_carry_select_adder | libraries/adders/configurable_carry_select_adder.v | ✓ PASS | 30/30 | 0.46 | 30 of 30 |
| configurable_carry_skip_adder | libraries/adders/configurable_carry_skip_adder.v | ✓ PASS | 30/30 | 0.45 | 30 of 30 |
| configurable_conditional_sum_adder | libraries/adders/configurable_conditional_sum_adder.v | ✓ PASS | 30/30 | 0.48 | 30 of 30 |
| configurable_kogge_stone_adder | libraries/adders/configurable_kogge_stone_adder.v | ✓ PASS | 30/30 | 0.48 | 30 of 30 |

## Arbitration

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| arbiter | libraries/arbiters/arbiter.v | ✓ PASS | 2/2 | 0.47 | 2 of 2 |
| arbiter_rr | libraries/arbiters/arbiter_rr.v | ✓ PASS | 1/1 | 0.46 | 1 of 1 |
| fair_priority_arbiter | libraries/arbiters/fair_priority_arbiter.v | ✓ PASS | 4/4 | 0.49 | 4 of 4 |
| matrix_arbiter | libraries/arbiters/matrix_arbiter.v | ✓ PASS | 4/4 | 0.48 | 4 of 4 |

## Arithmetic

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| alu | libraries/alu/alu.v | ✓ PASS | 12/12 | 0.51 | 12 of 12 |
| configurable_comparator | libraries/alu/configurable_comparator.v | ✓ PASS | 72/72 | 0.47 | 72 of 72 |

## CORDIC

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| cordic | libraries/cordic/cordic.v | ✓ PASS | 9/9 | 1.05 | 9 of 9 |
| cordic_core | libraries/cordic/cordic_core.v | ✓ PASS | 9/9 | 0.47 | 9 of 9 |
| sine_cosine_generator | libraries/cordic/sine_cosine_generator.v | ✓ PASS | 16/16 | 0.62 | 16 of 16 |

## Clock Domain Crossing

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| bsg_async_credit_counter | libraries/cdc/bsg_async_credit_counter.v | ✓ PASS | 16/16 | 0.45 | 16 of 16 |
| clock_domain_crossing | libraries/cdc/clock_domain_crossing.v | ✓ PASS | 10/10 | 0.46 | 10 of 10 |
| clock_domain_crossing_fifo | libraries/cdc/clock_domain_crossing_fifo.v | ✓ PASS | 76/76 | 0.44 | 76 of 76 |
| handshake_synchronizer | libraries/cdc/handshake_synchronizer.v | ✓ PASS | 10/10 | 0.45 | 10 of 10 |
| multi_flop_synchronizer | libraries/cdc/multi_flop_synchronizer.v | ✓ PASS | 5/5 | 0.48 | 5 of 5 |
| network_interface_cdc | libraries/noc/network_interface_cdc.v | ✓ PASS | 5/5 | 0.61 | 5 of 5 |

## Communication

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| ahb_lite_master | libraries/comms/ahb_lite_master.v | ✓ PASS | 5/5 | 0.54 | Execution completed successfully |
| basic_spi_master | libraries/comms/basic_spi_master.v | ✓ PASS | 1/1 | 0.46 | 1 of 1 |
| final_spi_master | libraries/comms/final_spi_master.v | ✓ PASS | 1/1 | 0.46 | 1 of 1 |
| fixed_spi_master | libraries/comms/fixed_spi_master.v | ✓ PASS | 1/1 | 0.47 | 1 of 1 |
| parameterized_deserializer | libraries/comms/parameterized_deserializer.v | ✓ PASS | 4/4 | 0.48 | 4 of 4 |
| parameterized_i2c_master | libraries/comms/parameterized_i2c_master.v | ✓ PASS | 2/2 | 0.50 | 2 of 2 |
| parameterized_serdes | libraries/comms/parameterized_serdes.v | ✓ PASS | 12/12 | 0.67 | 12 of 12 |
| parameterized_spi_master | libraries/comms/parameterized_spi_master.v | ✓ PASS | 1/1 | 0.99 | 1 of 1 |
| parameterized_uart_rx | libraries/comms/parameterized_uart_rx.v | ✓ PASS | 5/5 | 1.43 | 5 of 5 |
| parameterized_uart_tx | libraries/comms/parameterized_uart_tx.v | ✓ PASS | 5/5 | 0.64 | 5 of 5 |
| simple_spi_master | libraries/comms/simple_spi_master.v | ✓ PASS | 1/1 | 0.49 | 1 of 1 |
| spi_master | libraries/comms/spi_master.v | ✓ PASS | 3/3 | 0.46 | 3 of 3 |

## Counters

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| configurable_clz_clo | libraries/counters/configurable_clz_clo.v | ✓ PASS | 24/24 | 0.46 | 24 of 24 |
| gray_counter | libraries/counters/gray_counter.v | ✓ PASS | 3/3 | 0.44 | 3 of 3 |
| johnson_counter | libraries/counters/johnson_counter.v | ✓ PASS | 4/4 | 2.00 | 4 of 4 |
| leading_zero_counter | libraries/counters/leading_zero_counter.v | ✓ PASS | 20/20 | 0.45 | 20 of 20 |
| loadable_updown_counter | libraries/counters/loadable_updown_counter.v | ✓ PASS | 6/6 | 0.46 | 6 of 6 |
| parameterized_decade_counter | libraries/counters/parameterized_decade_counter.v | ✓ PASS | 2/2 | 0.48 | 2 of 2 |
| parameterized_gray_counter | libraries/counters/parameterized_gray_counter.v | ✓ PASS | 3/3 | 0.50 | 3 of 3 |
| parameterized_johnson_counter | libraries/counters/parameterized_johnson_counter.v | ✓ PASS | 4/4 | 0.77 | 4 of 4 |
| parameterized_johnson_updown_counter | libraries/counters/parameterized_johnson_updown_counter.v | ✓ PASS | 1/1 | 0.51 | 1 of 1 |
| parameterized_loadable_counter | libraries/counters/parameterized_loadable_counter.v | ✓ PASS | 3/3 | 0.48 | 3 of 3 |
| parameterized_onehot_counter | libraries/counters/parameterized_onehot_counter.v | ✓ PASS | 4/4 | 0.48 | 4 of 4 |
| parameterized_ring_counter | libraries/counters/parameterized_ring_counter.v | ✓ PASS | 4/4 | 0.49 | 4 of 4 |
| parameterized_self_correcting_counter | libraries/counters/parameterized_self_correcting_counter.v | ✓ PASS | 2/2 | 0.90 | 2 of 2 |
| parameterized_sync_reset_counter | libraries/counters/parameterized_sync_reset_counter.v | ✓ PASS | 3/3 | 1.11 | 3 of 3 |
| parameterized_updown_counter | libraries/counters/parameterized_updown_counter.v | ✓ PASS | 1/1 | 0.50 | 1 of 1 |

## Debugging

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| logic_analyzer | libraries/debug/logic_analyzer.v | ✓ PASS | 5/5 | 0.51 | 5 of 5 |
| performance_counter | libraries/debug/performance_counter.v | ✓ PASS | 4/4 | 0.47 | 4 of 4 |

## Encoding/Decoding

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| binary_to_gray | libraries/codings/binary_to_gray.v | ✓ PASS | 16/16 | 0.46 | 16 of 16 |
| configurable_priority_encoder | libraries/codings/configurable_priority_encoder.v | ✓ PASS | 13/13 | 0.99 | 13 of 13 |
| gray_to_binary | libraries/codings/gray_to_binary.v | ✓ PASS | 16/16 | 0.46 | 16 of 16 |
| hamming_code | libraries/codings/hamming_code.v | ✓ PASS | 31/31 | 0.44 | 31 of 31 |
| parameterized_crc_generator | libraries/codings/parameterized_crc_generator.v | ✓ PASS | 1/1 | 0.54 | 1 of 1 |
| parameterized_scrambler | libraries/codings/parameterized_scrambler.v | ✓ PASS | 2/2 | 0.52 | 2 of 2 |
| priority_encoder | libraries/codings/priority_encoder.v | ✓ PASS | 256/256 | 0.47 | 256 of 256 |

## Encryption

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| true_random_generator | libraries/encryption/true_random_generator.v | ✓ PASS | 4/4 | 0.49 | 4 of 4 |

## FIFOs

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| async_fifo | libraries/fifos/async_fifo.v | ✓ PASS | 4/4 | 0.48 | 4 of 4 |
| barrel_shifter_fifo | libraries/fifos/barrel_shifter_fifo.v | ✓ PASS | 4/4 | 0.55 | 4 of 4 |
| bidirectional_fifo | libraries/fifos/bidirectional_fifo.v | ✓ PASS | 4/4 | 0.48 | 4 of 4 |
| cache_fifo | libraries/fifos/cache_fifo.v | ✓ PASS | 2/2 | 0.45 | 2 of 2 |
| circular_buffer_fifo | libraries/fifos/circular_buffer_fifo.v | ✓ PASS | 6/6 | 0.45 | 6 of 6 |
| configurable_param_fifo | libraries/fifos/configurable_param_fifo.v | ✓ PASS | 3/3 | 0.66 | 3 of 3 |
| configurable_sync_fifo | libraries/fifos/configurable_sync_fifo.v | ✓ PASS | 1/1 | 0.46 | 1 of 1 |
| credit_based_fifo | libraries/fifos/credit_based_fifo.v | ✓ PASS | 1/1 | 0.48 | 1 of 1 |
| dual_clock_fifo | libraries/fifos/dual_clock_fifo.v | ✓ PASS | 1/1 | 0.48 | 1 of 1 |
| elastic_buffer | libraries/fifos/elastic_buffer.v | ✓ PASS | 4/4 | 0.46 | 4 of 4 |
| fifo | libraries/fifos/fifo.v | ✓ PASS | 3/3 | 0.47 | 3 of 3 |
| fwft_fifo | libraries/fifos/fwft_fifo.v | ✓ PASS | 4/4 | 0.44 | 4 of 4 |
| memory_mapped_fifo | libraries/fifos/memory_mapped_fifo.v | ✓ PASS | 3/3 | 0.59 | 3 of 3 |
| multi_ported_fifo | libraries/fifos/multi_ported_fifo.v | ✓ PASS | 3/3 | 0.57 | 3 of 3 |
| parameterized_priority_queue | libraries/fifos/parameterized_priority_queue.v | ✓ PASS | 2/2 | 0.50 | 2 of 2 |
| pipelined_fifo | libraries/fifos/pipelined_fifo.v | ✓ PASS | 4/4 | 0.48 | 4 of 4 |
| showahead_fifo | libraries/fifos/showahead_fifo.v | ✓ PASS | 5/5 | 0.47 | 5 of 5 |
| skid_buffer | libraries/fifos/skid_buffer.v | ✓ PASS | 3/3 | 0.46 | 3 of 3 |
| smart_fifo | libraries/fifos/smart_fifo.v | ✓ PASS | 4/4 | 0.47 | 4 of 4 |
| sync_fifo | libraries/fifos/sync_fifo.v | ✓ PASS | 3/3 | 0.46 | 3 of 3 |

## Filters

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| configurable_fir_filter | libraries/filters/configurable_fir_filter.v | ✓ PASS | 1/1 | 0.62 | 1 of 1 |
| fir_filter | libraries/filters/fir_filter.v | ✓ PASS | 1/1 | 0.45 | 1 of 1 |

## Input/Output

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| dma_controller | libraries/io/dma_controller.v | ✓ PASS | 3/3 | 0.46 | 3 of 3 |
| gpio_controller | libraries/io/gpio_controller.v | ✓ PASS | 5/5 | 0.47 | 5 of 5 |

## Interfaces

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| axi_lite_master | libraries/interfaces/axi_lite_master.v | ✓ PASS | 6/6 | 0.48 | 6 of 6 |
| axi_stream_interface | libraries/interfaces/axi_stream_interface.v | ✓ PASS | 2/2 | 0.45 | 2 of 2 |
| pcie_endpoint | libraries/interfaces/pcie_endpoint.v | ✓ PASS | 4/4 | 0.52 | 4 of 4 |
| wishbone_master | libraries/interfaces/wishbone_master.v | ✓ PASS | 4/4 | 0.47 | 4 of 4 |

## Mathematics

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| fixed_point_sqrt | libraries/math/fixed_point_sqrt.v | ✓ PASS | 10/10 | 0.45 | 10 of 10 |
| floating_point_adder | libraries/math/floating_point_adder.v | ✓ PASS | N/A | 0.45 | Execution completed successfully |
| non_restoring_divider | libraries/math/non_restoring_divider.v | ✓ PASS | 1/1 | 0.49 | 1 of 1 |

## Memory

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| ddr_controller | libraries/mems/ddr_controller.v | ✓ PASS | 5/5 | 0.47 | 5 of 5 |
| dual_port_ram | libraries/mems/dual_port_ram.v | ✓ PASS | 2/2 | 0.47 | 2 of 2 |
| memory_controller | libraries/mems/memory_controller.v | ✓ PASS | 1/1 | 0.47 | 1 of 1 |
| parameterized_cam | libraries/mems/parameterized_cam.v | ✓ PASS | 5/5 | 0.49 | 5 of 5 |

## Multiplication

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| booth_multiplier | libraries/multipliers/booth_multiplier.v | ✓ PASS | 10/10 | 0.43 | 10 of 10 |
| configurable_mult | libraries/multipliers/configurable_mult.v | ✓ PASS | 6/6 | 0.47 | 6 of 6 |
| radix4_booth_multiplier | libraries/multipliers/radix4_booth_multiplier.v | ✓ PASS | 10/10 | 0.50 | 10 of 10 |

## Network on Chip

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| configurable_mesh_router | libraries/noc/configurable_mesh_router.v | ✓ PASS | 11/11 | 0.47 | 11 of 11 |
| crossbar_switch | libraries/noc/crossbar_switch.v | ✓ PASS | 12/12 | 0.47 | 12 of 12 |
| mesh_router | libraries/noc/mesh_router.v | ✓ PASS | 7/7 | 0.47 | 7 of 7 |
| network_interface | libraries/noc/network_interface.v | ✓ PASS | 10/10 | 0.57 | 10 of 10 |
| network_interface_cdc | libraries/noc/network_interface_cdc.v | ✓ PASS | 5/5 | 0.61 | 5 of 5 |

## Power Management

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| clock_divider | libraries/power/clock_divider.v | ✓ PASS | 5/5 | 0.46 | 5 of 5 |
| clock_gating | libraries/power/clock_gating.v | ✓ PASS | 4/4 | 0.45 | 4 of 4 |
| parameterized_clock_gating | libraries/power/parameterized_clock_gating.v | ✓ PASS | 4/4 | 0.52 | 4 of 4 |
| parameterized_freq_divider | libraries/power/parameterized_freq_divider.v | ✓ PASS | 10/10 | 0.50 | 10 of 10 |
| power_domain_controller | libraries/power/power_domain_controller.v | ✓ PASS | 3/3 | 0.49 | 3 of 3 |

## Registers

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| barrel_rotator | libraries/registers/barrel_rotator.v | ✓ PASS | 80/80 | 0.47 | 80 of 80 |
| barrel_shifter | libraries/registers/barrel_shifter.v | ✓ PASS | 300/300 | 0.47 | 300 of 300 |
| bidirectional_shift_register | libraries/registers/bidirectional_shift_register.v | ✓ PASS | 6/6 | 0.46 | 6 of 6 |
| dual_edge_register | libraries/registers/dual_edge_register.v | ✓ PASS | 6/6 | 0.48 | 6 of 6 |
| lfsr | libraries/registers/lfsr.v | ✓ PASS | 2/2 | 0.45 | 2 of 2 |
| onehot_decoder_register | libraries/registers/onehot_decoder_register.v | ✓ PASS | 5/5 | 0.58 | 5 of 5 |
| parameterized_barrel_rotator | libraries/registers/parameterized_barrel_rotator.v | ✓ PASS | 160/160 | 0.53 | 160 of 160 |
| parameterized_rotation_sipo | libraries/registers/parameterized_rotation_sipo.v | ✓ PASS | 2/2 | 0.50 | 2 of 2 |
| piso_register | libraries/registers/piso_register.v | ✓ PASS | 1/1 | 0.47 | 1 of 1 |
| register_file | libraries/registers/register_file.v | ✓ PASS | 5/5 | 0.48 | 5 of 5 |
| scan_register | libraries/registers/scan_register.v | ✓ PASS | 4/4 | 0.47 | 4 of 4 |
| shadow_register | libraries/registers/shadow_register.v | ✓ PASS | 7/7 | 0.48 | 7 of 7 |
| shift_register_left | libraries/registers/shift_register_left.v | ✓ PASS | 1/1 | 2.08 | 1 of 1 |
| shift_register_right | libraries/registers/shift_register_right.v | ✓ PASS | 1/1 | 0.45 | 1 of 1 |
| sipo_register | libraries/registers/sipo_register.v | ✓ PASS | 4/4 | 0.50 | 4 of 4 |
| siso_register | libraries/registers/siso_register.v | ✓ PASS | 4/4 | 0.47 | 4 of 4 |
| sync_preset_register | libraries/registers/sync_preset_register.v | ✓ PASS | 8/8 | 0.48 | 8 of 8 |
| toggle_register | libraries/registers/toggle_register.v | ✓ PASS | 8/8 | 0.48 | 8 of 8 |
| universal_shift_register | libraries/registers/universal_shift_register.v | ✓ PASS | 5/5 | 0.48 | 5 of 5 |

## Signal Processing

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| configurable_lfsr | libraries/signals/configurable_lfsr.v | ✓ PASS | 32/32 | 0.59 | 32 of 32 |
| configurable_prng | libraries/signals/configurable_prng.v | ✓ PASS | 3/3 | 0.48 | 3 of 3 |
| digital_thermometer_controller | libraries/signals/digital_thermometer_controller.v | ✓ PASS | 5/5 | 0.46 | 5 of 5 |
| multi_phase_pwm_controller | libraries/signals/multi_phase_pwm_controller.v | ✓ PASS | 5/5 | 0.58 | 5 of 5 |
| parameterized_dds | libraries/signals/parameterized_dds.v | ✓ PASS | 100/100 | 0.56 | 100 of 100 |
| parameterized_fft | libraries/signals/parameterized_fft.v | ✓ PASS | 8/8 | 0.62 | 8 of 8 |
| parameterized_pwm | libraries/signals/parameterized_pwm.v | ✓ PASS | 6/6 | 0.56 | 6 of 6 |
| pulse_width_detector | libraries/signals/pulse_width_detector.v | ✓ PASS | 3/3 | 0.48 | 3 of 3 |
| pwm_generator | libraries/signals/pwm_generator.v | ✓ PASS | 3/3 | 0.46 | 3 of 3 |

## State Machines

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| sequence_detector_fsm | libraries/fsm/sequence_detector_fsm.v | ✓ PASS | 26/26 | 0.48 | 26 of 26 |

## Testing

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| bist_controller | libraries/test/bist_controller.v | ✓ PASS | 4/4 | 0.48 | 4 of 4 |
| jtag_controller | libraries/test/jtag_controller.v | ✓ PASS | 3/3 | 0.43 | 3 of 3 |

## Voting

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Runtime (s) | Details |
|--------|-----------|:------:|------:|-----------:|----------:|
| majority_voter | libraries/voters/majority_voter.v | ✓ PASS | 4/4 | 0.57 | 4 of 4 |

## Notes

- Tests were run using Verilator with the build directory set to 'build'
- The standardized test summary format '==== Test Summary ====' was used to capture detailed test results
- Modules marked with 'NO TESTBENCH' need testbenches to be implemented
- Some tests may fail due to issues with the implementation, not the build system
- Timeouts indicate tests that took longer than 2 minutes to complete
- Runtime measurements include compilation and execution time
- Error messages are extracted from test output when available
