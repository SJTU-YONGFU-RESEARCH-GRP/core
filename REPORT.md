# RTL Verification Report

Generated on: 2025-05-15 01:41:49

## Table of Contents

1. [Summary](#summary)
2. [Category Overview](#category-overview)
3. [Adders](#category-adders)
4. [Arbitration](#category-arbitration)
5. [Arithmetic](#category-arithmetic)
6. [Communication](#category-communication)
7. [Counters](#category-counters)
8. [Division](#category-division)
9. [Encoding/Decoding](#category-encoding/decoding)
10. [FIFOs](#category-fifos)
11. [Filters](#category-filters)
12. [Memory](#category-memory)
13. [Multiplication](#category-multiplication)
14. [Registers](#category-registers)
15. [Signal Processing](#category-signal-processing)
16. [State Machines](#category-state-machines)
17. [Notes](#notes)

## Summary

- Total modules tested: 45
- Passed: 43 (95.6%)
- Failed: 2 (4.4%)
- Timeouts: 0
- Total runtime: 214.93 seconds
- Average runtime per module: 4.78 seconds

## Category Overview

| Category | Passed | Failed | Pass Rate | Avg Runtime (s) |
|----------|-------:|-------:|----------:|----------------:|
| [Adders](#category-adders) | 6 | 0 | 100.0% | 5.21 |
| [Arbitration](#category-arbitration) | 3 | 0 | 100.0% | 4.90 |
| [Arithmetic](#category-arithmetic) | 1 | 1 | 50.0% | 4.91 |
| [Communication](#category-communication) | 1 | 1 | 50.0% | 2.66 |
| [Counters](#category-counters) | 3 | 0 | 100.0% | 4.75 |
| [Division](#category-division) | 2 | 0 | 100.0% | 4.88 |
| [Encoding/Decoding](#category-encoding/decoding) | 7 | 0 | 100.0% | 5.04 |
| [FIFOs](#category-fifos) | 4 | 0 | 100.0% | 4.83 |
| [Filters](#category-filters) | 2 | 0 | 100.0% | 4.85 |
| [Memory](#category-memory) | 1 | 0 | 100.0% | 4.74 |
| [Multiplication](#category-multiplication) | 1 | 0 | 100.0% | 4.89 |
| [Registers](#category-registers) | 10 | 0 | 100.0% | 4.56 |
| [Signal Processing](#category-signal-processing) | 1 | 0 | 100.0% | 5.14 |
| [State Machines](#category-state-machines) | 1 | 0 | 100.0% | 5.11 |

## Detailed Results

<a name='category-adders'></a>
### Adders

[Back to top](#table-of-contents)

| Module | File Path | Status | Runtime (s) | Details |
|--------|-----------|:------:|------------:|----------|
| configurable_brent_kung_adder | libraries/adders/configurable_brent_kung_adder.v | ✓ PASS | 4.82 | All tests passed |
| configurable_carry_lookahead_adder | libraries/adders/configurable_carry_lookahead_adder.v | ✓ PASS | 5.08 | All tests passed |
| configurable_carry_select_adder | libraries/adders/configurable_carry_select_adder.v | ✓ PASS | 5.98 | All tests passed |
| configurable_carry_skip_adder | libraries/adders/configurable_carry_skip_adder.v | ✓ PASS | 4.99 | All tests passed |
| configurable_conditional_sum_adder | libraries/adders/configurable_conditional_sum_adder.v | ✓ PASS | 5.15 | All tests passed |
| configurable_kogge_stone_adder | libraries/adders/configurable_kogge_stone_adder.v | ✓ PASS | 5.26 | All tests passed |

<a name='category-arbitration'></a>
### Arbitration

[Back to top](#table-of-contents)

| Module | File Path | Status | Runtime (s) | Details |
|--------|-----------|:------:|------------:|----------|
| arbiter | libraries/arbiters/arbiter.v | ✓ PASS | 4.98 | Execution completed successfully |
| arbiter_rr | libraries/arbiters/arbiter_rr.v | ✓ PASS | 4.90 | Execution completed successfully |
| fair_priority_arbiter | libraries/arbiters/fair_priority_arbiter.v | ✓ PASS | 4.82 | Test passed |

<a name='category-arithmetic'></a>
### Arithmetic

[Back to top](#table-of-contents)

| Module | File Path | Status | Runtime (s) | Details |
|--------|-----------|:------:|------------:|----------|
| alu | libraries/alu/alu.v | ✓ PASS | 4.84 | Tests passed |
| configurable_fp_adder | configurable_fp_adder.v | ✗ FAIL | 4.98 | make: *** [Makefile:162: run_configurable_fp_adder] Error 1 |

<a name='category-communication'></a>
### Communication

[Back to top](#table-of-contents)

| Module | File Path | Status | Runtime (s) | Details |
|--------|-----------|:------:|------------:|----------|
| parameterized_serdes | libraries/comms/parameterized_serdes.v | ✓ PASS | 5.17 | Tests passed |
| parameterized_uart_tx | libraries/comms/parameterized_uart_tx.v | ✗ FAIL | 0.15 | make: *** [Makefile:193: run_parameterized_uart_tx] Error 1 |

<a name='category-counters'></a>
### Counters

[Back to top](#table-of-contents)

| Module | File Path | Status | Runtime (s) | Details |
|--------|-----------|:------:|------------:|----------|
| configurable_clz_clo | libraries/counters/configurable_clz_clo.v | ✓ PASS | 4.77 | Tests passed |
| gray_counter | libraries/counters/gray_counter.v | ✓ PASS | 4.75 | Tests passed |
| leading_zero_counter | libraries/counters/leading_zero_counter.v | ✓ PASS | 4.74 | Tests passed |

<a name='category-division'></a>
### Division

[Back to top](#table-of-contents)

| Module | File Path | Status | Runtime (s) | Details |
|--------|-----------|:------:|------------:|----------|
| clock_divider | libraries/dividers/clock_divider.v | ✓ PASS | 4.77 | Execution completed successfully |
| parameterized_freq_divider | libraries/dividers/parameterized_freq_divider.v | ✓ PASS | 4.99 | All tests passed |

<a name='category-encoding/decoding'></a>
### Encoding/Decoding

[Back to top](#table-of-contents)

| Module | File Path | Status | Runtime (s) | Details |
|--------|-----------|:------:|------------:|----------|
| binary_to_gray | libraries/codings/binary_to_gray.v | ✓ PASS | 4.70 | Tests passed |
| configurable_mesh_router | libraries/codings/configurable_mesh_router.v | ✓ PASS | 5.71 | Execution completed successfully |
| configurable_priority_encoder | libraries/codings/configurable_priority_encoder.v | ✓ PASS | 4.80 | All tests passed |
| crossbar_switch | libraries/codings/crossbar_switch.v | ✓ PASS | 4.83 | Tests passed |
| gray_to_binary | libraries/codings/gray_to_binary.v | ✓ PASS | 4.97 | Tests passed |
| hamming_code | libraries/codings/hamming_code.v | ✓ PASS | 4.90 | Tests passed |
| priority_encoder | libraries/codings/priority_encoder.v | ✓ PASS | 5.37 | Tests passed |

<a name='category-fifos'></a>
### FIFOs

[Back to top](#table-of-contents)

| Module | File Path | Status | Runtime (s) | Details |
|--------|-----------|:------:|------------:|----------|
| configurable_param_fifo | libraries/fifo/configurable_param_fifo.v | ✓ PASS | 4.78 | Tests passed |
| configurable_sync_fifo | libraries/fifo/configurable_sync_fifo.v | ✓ PASS | 4.87 | All tests passed |
| dual_clock_fifo | libraries/fifo/dual_clock_fifo.v | ✓ PASS | 4.95 | Execution completed successfully |
| fifo | libraries/fifo/fifo.v | ✓ PASS | 4.72 | Execution completed successfully |

<a name='category-filters'></a>
### Filters

[Back to top](#table-of-contents)

| Module | File Path | Status | Runtime (s) | Details |
|--------|-----------|:------:|------------:|----------|
| configurable_fir_filter | libraries/filters/configurable_fir_filter.v | ✓ PASS | 4.93 | Tests passed |
| fir_filter | libraries/filters/fir_filter.v | ✓ PASS | 4.78 | Execution completed successfully |

<a name='category-memory'></a>
### Memory

[Back to top](#table-of-contents)

| Module | File Path | Status | Runtime (s) | Details |
|--------|-----------|:------:|------------:|----------|
| dual_port_ram | libraries/mems/dual_port_ram.v | ✓ PASS | 4.74 | Execution completed successfully |

<a name='category-multiplication'></a>
### Multiplication

[Back to top](#table-of-contents)

| Module | File Path | Status | Runtime (s) | Details |
|--------|-----------|:------:|------------:|----------|
| configurable_mult | libraries/multipliers/configurable_mult.v | ✓ PASS | 4.89 | All tests passed |

<a name='category-registers'></a>
### Registers

[Back to top](#table-of-contents)

| Module | File Path | Status | Runtime (s) | Details |
|--------|-----------|:------:|------------:|----------|
| barrel_rotator | libraries/registers/barrel_rotator.v | ✓ PASS | 4.75 | Tests passed |
| barrel_shifter | libraries/registers/barrel_shifter.v | ✓ PASS | 5.10 | Tests passed |
| configurable_lfsr | libraries/registers/configurable_lfsr.v | ✓ PASS | 0.11 | Tests passed |
| lfsr | libraries/registers/lfsr.v | ✓ PASS | 4.86 | Tests passed |
| parameterized_barrel_rotator | libraries/registers/parameterized_barrel_rotator.v | ✓ PASS | 4.83 | Tests passed |
| piso_register | libraries/registers/piso_register.v | ✓ PASS | 5.04 | Tests passed |
| shift_register | libraries/registers/shift_register.v | ✓ PASS | 5.05 | Execution completed successfully |
| shift_register_left | libraries/registers/shift_register_left.v | ✓ PASS | 5.48 | Execution completed successfully |
| shift_register_right | libraries/registers/shift_register_right.v | ✓ PASS | 5.09 | Execution completed successfully |
| sipo_register | libraries/registers/sipo_register.v | ✓ PASS | 5.29 | Execution completed successfully |

<a name='category-signal-processing'></a>
### Signal Processing

[Back to top](#table-of-contents)

| Module | File Path | Status | Runtime (s) | Details |
|--------|-----------|:------:|------------:|----------|
| pwm_generator | libraries/signals/pwm_generator.v | ✓ PASS | 5.14 | Tests passed |

<a name='category-state-machines'></a>
### State Machines

[Back to top](#table-of-contents)

| Module | File Path | Status | Runtime (s) | Details |
|--------|-----------|:------:|------------:|----------|
| sequence_detector_fsm | libraries/fsm/sequence_detector_fsm.v | ✓ PASS | 5.11 | Tests passed |

<a name='notes'></a>
## Notes

- Tests were run using Verilator with the build directory set to 'build'
- Some tests may fail due to issues with the implementation, not the build system
- Timeouts indicate tests that took longer than 2 minutes to complete
- Runtime measurements include compilation and execution time
