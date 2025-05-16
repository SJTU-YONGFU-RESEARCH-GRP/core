# RTL Verification Report

Generated on: 2025-05-16 21:03:03

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
- Failed: 17 (13.5%)
- Timeouts: 4
- Total tests executed: 1445
- Total tests passed: 1427 (98.8%)
- Average coverage: 0.0%
- Total runtime: 1043.29 seconds
- Average runtime per module: 8.28 seconds

## Category Overview

| Category | Modules | Passed | Failed | Pass Rate | Tests Passed | Coverage | Avg Runtime (s) |
|----------|--------:|-------:|-------:|----------:|-------------:|---------:|----------------:|
| [Adders](#category-adders) | 6 | 6 | 0 | 100.0% | 180/180 | 0.0% | 5.15 |
| [Arbitration](#category-arbitration) | 4 | 4 | 0 | 100.0% | 11/11 | 0.0% | 3.62 |
| [Arithmetic](#category-arithmetic) | 2 | 2 | 0 | 100.0% | 84/84 | 0.0% | 4.80 |
| [CORDIC](#category-cordic) | 3 | 1 | 0 | 33.3% | 16/16 | 0.0% | 41.90 |
| [Clock Domain Crossing](#category-clock-domain-crossing) | 4 | 3 | 1 | 75.0% | 77/86 | 0.0% | 3.65 |
| [Communication](#category-communication) | 13 | 11 | 1 | 84.6% | 22/22 | 0.0% | 4.51 |
| [Counters](#category-counters) | 15 | 9 | 6 | 60.0% | 24/24 | 0.0% | 4.40 |
| [Debugging](#category-debugging) | 2 | 0 | 0 | 0.0% | 0/0 | 0.0% | 0.00 |
| [Digital Signal Processing](#category-digital-signal-processing) | 2 | 1 | 1 | 50.0% | 100/100 | 0.0% | 2.57 |
| [Division](#category-division) | 1 | 0 | 1 | 0.0% | 0/0 | 0.0% | 0.62 |
| [Encoding/Decoding](#category-encoding/decoding) | 7 | 7 | 0 | 100.0% | 352/352 | 0.0% | 5.09 |
| [Encryption](#category-encryption) | 2 | 0 | 0 | 0.0% | 0/0 | 0.0% | 0.00 |
| [FIFOs](#category-fifos) | 20 | 16 | 2 | 80.0% | 3/3 | 0.0% | 16.03 |
| [Filters](#category-filters) | 2 | 2 | 0 | 100.0% | 0/0 | 0.0% | 4.85 |
| [Input/Output](#category-input/output) | 2 | 0 | 1 | 0.0% | 2/5 | 0.0% | 2.44 |
| [Interfaces](#category-interfaces) | 4 | 0 | 0 | 0.0% | 0/0 | 0.0% | 0.00 |
| [Mathematics](#category-mathematics) | 2 | 1 | 1 | 50.0% | 0/0 | 0.0% | 2.47 |
| [Memory](#category-memory) | 4 | 3 | 1 | 75.0% | 5/5 | 0.0% | 3.66 |
| [Multiplication](#category-multiplication) | 3 | 3 | 0 | 100.0% | 16/20 | 0.0% | 5.05 |
| [Network on Chip](#category-network-on-chip) | 4 | 2 | 1 | 50.0% | 23/23 | 0.0% | 32.56 |
| [Power Management](#category-power-management) | 5 | 4 | 0 | 80.0% | 3/3 | 0.0% | 4.22 |
| [Registers](#category-registers) | 20 | 19 | 1 | 95.0% | 448/449 | 0.0% | 5.24 |
| [Signal Processing](#category-signal-processing) | 7 | 7 | 0 | 100.0% | 24/25 | 0.0% | 5.15 |
| [State Machines](#category-state-machines) | 1 | 1 | 0 | 100.0% | 26/26 | 0.0% | 5.87 |
| [Testing](#category-testing) | 2 | 2 | 0 | 100.0% | 7/7 | 0.0% | 4.72 |
| [Voting](#category-voting) | 1 | 1 | 0 | 100.0% | 4/4 | 0.0% | 4.71 |

## Detailed Results

<a name='category-adders'></a>
### Adders

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| configurable_brent_kung_adder | libraries/adders/configurable_brent_kung_adder.v | ✓ PASS | 30/30 | N/A | 4.79 | 30 of 30 |
| configurable_carry_lookahead_adder | libraries/adders/configurable_carry_lookahead_adder.v | ✓ PASS | 30/30 | N/A | 5.07 | 30 of 30 |
| configurable_carry_select_adder | libraries/adders/configurable_carry_select_adder.v | ✓ PASS | 30/30 | N/A | 5.92 | 30 of 30 |
| configurable_carry_skip_adder | libraries/adders/configurable_carry_skip_adder.v | ✓ PASS | 30/30 | N/A | 4.95 | 30 of 30 |
| configurable_conditional_sum_adder | libraries/adders/configurable_conditional_sum_adder.v | ✓ PASS | 30/30 | N/A | 5.12 | 30 of 30 |
| configurable_kogge_stone_adder | libraries/adders/configurable_kogge_stone_adder.v | ✓ PASS | 30/30 | N/A | 5.02 | 30 of 30 |

<a name='category-arbitration'></a>
### Arbitration

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| arbiter | libraries/arbiters/arbiter.v | ✓ PASS | 2/2 | N/A | 4.73 | 2 of 2 |
| arbiter_rr | libraries/arbiters/arbiter_rr.v | ✓ PASS | 1/1 | N/A | 4.72 | 1 of 1 |
| fair_priority_arbiter | libraries/arbiters/fair_priority_arbiter.v | ✓ PASS | 4/4 | N/A | 4.84 | 4 of 4 |
| matrix_arbiter | libraries/arbiters/matrix_arbiter.v | ✓ PASS | 4/4 | N/A | 0.17 | 4 of 4 |

<a name='category-arithmetic'></a>
### Arithmetic

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| alu | libraries/alu/alu.v | ✓ PASS | 12/12 | N/A | 4.74 | 12 of 12 |
| configurable_comparator | libraries/alu/configurable_comparator.v | ✓ PASS | 72/72 | N/A | 4.86 | 72 of 72 |

<a name='category-cordic'></a>
### CORDIC

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| cordic | libraries/cordic/cordic.v | ⏱ TIMEOUT | N/A | N/A | 120.00 | Execution exceeded 2 minutes and was terminated
Error: Test execution timed out after 2 minutes |
| cordic_core | libraries/cordic/cordic_core.v | ⚠ NO TESTBENCH | 0/0 | N/A | 0.00 | No testbench available |
| sine_cosine_generator | libraries/cordic/sine_cosine_generator.v | ✓ PASS | 16/16 | N/A | 5.71 | 16 of 16 |

<a name='category-clock-domain-crossing'></a>
### Clock Domain Crossing

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| clock_domain_crossing | libraries/cdc/clock_domain_crossing.v | ✓ PASS | 1/10 | N/A | 4.63 | Execution completed successfully |
| clock_domain_crossing_fifo | libraries/cdc/clock_domain_crossing_fifo.v | ✓ PASS | 76/76 | N/A | 4.70 | 76 of 76 |
| handshake_synchronizer | libraries/cdc/handshake_synchronizer.v | ✗ FAIL | N/A | N/A | 0.56 | Build failed: MODULE="handshake_synchronizer"; VERILOG_FILE=$(find libraries -name "$MODULE.v"); TESTBENCH_FILE=$(find libraries -name "tb_$MODULE.cpp"); if [ -n "$VERILOG_FILE" ] && [ -n "$TESTBENCH_FILE" ]; then echo "Building $MODULE from $(dirname $VERILOG_FILE)..."; verilator -Wall -Wno-EOFNEWLINE --trace --cc --build -j --Mdir build -Wno-EOFNEWLINE -Wno-UNUSEDSIGNAL -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-UNUSEDPARAM --exe "$VERILOG_FILE" "$TESTBENCH_FILE"; touch build/.$MODULE.built; else echo "Module $MODULE not found or missing testbench"; echo "  Verilog file: $VERILOG_FILE"; echo "  Testbench file: $TESTBENCH_FILE"; exit 1; fi

Error output sample:
../libraries/cdc/tb_handshake_synchronizer.cpp: In function ‘int main(int, char**)’:
../libraries/cdc/tb_handshake_synchronizer.cpp:103:27: error: ‘setw’ is not a member of ‘std’
  103 |         std::cout << std::setw(5) << i << " | "
      |                           ^~~~
../libraries/cdc/tb_handshake_synchronizer.cpp:6:1: note: ‘std::setw’ is defined in header ‘<iomanip>’; did you forget to ‘#include <iomanip>’?
    5 | #include "Vhandshake_synchronizer.h"
  +++ |+#include <iomanip>
    6 | 
../libraries/cdc/tb_handshake_synchronizer.cpp:104:27: error: ‘setw’ is not a member of ‘std’
  104 |                   << std::setw(9) << test_data[i] << " | "
Error: Module handshake_synchronizer not built or missing executable |
| multi_flop_synchronizer | libraries/cdc/multi_flop_synchronizer.v | ✓ PASS | N/A | N/A | 4.71 | Execution completed successfully |

<a name='category-communication'></a>
### Communication

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| ahb_lite_master | libraries/comms/ahb_lite_master.v | ✓ PASS | 5/5 | N/A | 4.76 | Execution completed successfully |
| basic_spi_master | libraries/comms/basic_spi_master.v | ✓ PASS | 1/1 | N/A | 4.63 | 1 of 1 |
| final_spi_master | libraries/comms/final_spi_master.v | ✓ PASS | 1/1 | N/A | 4.72 | 1 of 1 |
| fixed_spi_master | libraries/comms/fixed_spi_master.v | ✓ PASS | 1/1 | N/A | 4.69 | 1 of 1 |
| parameterized_deserializer | libraries/comms/parameterized_deserializer.v | ✓ PASS | 4/4 | N/A | 5.16 | 4 of 4 |
| parameterized_i2c_master | libraries/comms/parameterized_i2c_master.v | ✓ PASS | 2/2 | N/A | 5.61 | 2 of 2 |
| parameterized_serdes | libraries/comms/parameterized_serdes.v | ✓ PASS | 1/1 | N/A | 5.47 | 1 of 1 |
| parameterized_spi_master | libraries/comms/parameterized_spi_master.v | ✗ FAIL | N/A | N/A | 0.68 | Build failed: MODULE="parameterized_spi_master"; VERILOG_FILE=$(find libraries -name "$MODULE.v"); TESTBENCH_FILE=$(find libraries -name "tb_$MODULE.cpp"); if [ -n "$VERILOG_FILE" ] && [ -n "$TESTBENCH_FILE" ]; then echo "Building $MODULE from $(dirname $VERILOG_FILE)..."; verilator -Wall -Wno-EOFNEWLINE --trace --cc --build -j --Mdir build -Wno-EOFNEWLINE -Wno-UNUSEDSIGNAL -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-UNUSEDPARAM --exe "$VERILOG_FILE" "$TESTBENCH_FILE"; touch build/.$MODULE.built; else echo "Module $MODULE not found or missing testbench"; echo "  Verilog file: $VERILOG_FILE"; echo "  Testbench file: $TESTBENCH_FILE"; exit 1; fi

Error output sample:
../libraries/comms/tb_parameterized_spi_master.cpp:149:5: error: ‘vcd_trace’ does not name a type
  149 |     vcd_trace->close();
      |     ^~~~~~~~~
../libraries/comms/tb_parameterized_spi_master.cpp:150:5: error: expected unqualified-id before ‘delete’
  150 |     delete vcd_trace;
      |     ^~~~~~
../libraries/comms/tb_parameterized_spi_master.cpp:151:5: error: expected unqualified-id before ‘delete’
  151 |     delete spi_master;
      |     ^~~~~~
../libraries/comms/tb_parameterized_spi_master.cpp:153:5: error: expected unqualified-id before ‘return’
Error: Module parameterized_spi_master not built or missing executable |
| parameterized_uart_rx | libraries/comms/parameterized_uart_rx.v | ✓ PASS | 5/5 | N/A | 5.33 | 5 of 5 |
| parameterized_uart_tx | libraries/comms/parameterized_uart_tx.v | ✓ PASS | N/A | N/A | 5.51 | Test PASSED! All data transmitted and received correctly. |
| parameterized_uart_tx_fixed | libraries/comms/parameterized_uart_tx_fixed.v | ⚠ NO TESTBENCH | 0/0 | N/A | 0.00 | No testbench available |
| simple_spi_master | libraries/comms/simple_spi_master.v | ✓ PASS | 1/1 | N/A | 5.97 | 1 of 1 |
| spi_master | libraries/comms/spi_master.v | ✓ PASS | 1/1 | N/A | 6.13 | 1 of 1 |

<a name='category-counters'></a>
### Counters

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| configurable_clz_clo | libraries/counters/configurable_clz_clo.v | ✓ PASS | N/A | N/A | 4.66 | Execution completed successfully |
| gray_counter | libraries/counters/gray_counter.v | ✓ PASS | 3/3 | N/A | 4.75 | 3 of 3 |
| johnson_counter | libraries/counters/johnson_counter.v | ✓ PASS | N/A | N/A | 4.67 | Execution completed successfully |
| leading_zero_counter | libraries/counters/leading_zero_counter.v | ✓ PASS | 20/20 | N/A | 4.76 | 20 of 20 |
| loadable_updown_counter | libraries/counters/loadable_updown_counter.v | ✓ PASS | N/A | N/A | 4.71 | Execution completed successfully |
| parameterized_decade_counter | libraries/counters/parameterized_decade_counter.v | ✗ FAIL | N/A | N/A | 5.09 | Count failed at 0, got 1 expected 0

Error output sample:
make: *** [Makefile:106: verify_parameterized_decade_counter] Error 1
Error: Count failed at 0, got 1 expected 0 |
| parameterized_gray_counter | libraries/counters/parameterized_gray_counter.v | ✓ PASS | N/A | N/A | 5.07 | Execution completed successfully |
| parameterized_johnson_counter | libraries/counters/parameterized_johnson_counter.v | ✗ FAIL | N/A | N/A | 5.30 | Sequence does not repeat after expected length.

Error output sample:
make: *** [Makefile:106: verify_parameterized_johnson_counter] Error 1
Error: Sequence does not repeat after expected length. |
| parameterized_johnson_updown_counter | libraries/counters/parameterized_johnson_updown_counter.v | ✗ FAIL | N/A | N/A | 0.64 | Build failed: MODULE="parameterized_johnson_updown_counter"; VERILOG_FILE=$(find libraries -name "$MODULE.v"); TESTBENCH_FILE=$(find libraries -name "tb_$MODULE.cpp"); if [ -n "$VERILOG_FILE" ] && [ -n "$TESTBENCH_FILE" ]; then echo "Building $MODULE from $(dirname $VERILOG_FILE)..."; verilator -Wall -Wno-EOFNEWLINE --trace --cc --build -j --Mdir build -Wno-EOFNEWLINE -Wno-UNUSEDSIGNAL -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-UNUSEDPARAM --exe "$VERILOG_FILE" "$TESTBENCH_FILE"; touch build/.$MODULE.built; else echo "Module $MODULE not found or missing testbench"; echo "  Verilog file: $VERILOG_FILE"; echo "  Testbench file: $TESTBENCH_FILE"; exit 1; fi

Error output sample:
../libraries/counters/tb_parameterized_johnson_updown_counter.cpp:239:5: error: expected unqualified-id before ‘delete’
  239 |     delete[] up_sequence;
      |     ^~~~~~
../libraries/counters/tb_parameterized_johnson_updown_counter.cpp:240:5: error: expected unqualified-id before ‘delete’
  240 |     delete[] down_sequence;
      |     ^~~~~~
../libraries/counters/tb_parameterized_johnson_updown_counter.cpp:241:5: error: ‘m_trace’ does not name a type
  241 |     m_trace->close();
      |     ^~~~~~~
../libraries/counters/tb_parameterized_johnson_updown_counter.cpp:242:5: error: expected unqualified-id before ‘delete’
Error: Module parameterized_johnson_updown_counter not built or missing executable |
| parameterized_loadable_counter | libraries/counters/parameterized_loadable_counter.v | ✗ FAIL | N/A | N/A | 5.04 | Count failed at 0, got 1

Error output sample:
make: *** [Makefile:106: verify_parameterized_loadable_counter] Error 1
Error: Count failed at 0, got 1 |
| parameterized_onehot_counter | libraries/counters/parameterized_onehot_counter.v | ✗ FAIL | N/A | N/A | 5.15 | Incorrect shift from state 6 to 7

Error output sample:
make: *** [Makefile:106: verify_parameterized_onehot_counter] Error 1
Error: Incorrect shift from state 6 to 7 |
| parameterized_ring_counter | libraries/counters/parameterized_ring_counter.v | ✓ PASS | N/A | N/A | 5.06 | Execution completed successfully |
| parameterized_self_correcting_counter | libraries/counters/parameterized_self_correcting_counter.v | ✗ FAIL | N/A | N/A | 0.69 | Build failed: MODULE="parameterized_self_correcting_counter"; VERILOG_FILE=$(find libraries -name "$MODULE.v"); TESTBENCH_FILE=$(find libraries -name "tb_$MODULE.cpp"); if [ -n "$VERILOG_FILE" ] && [ -n "$TESTBENCH_FILE" ]; then echo "Building $MODULE from $(dirname $VERILOG_FILE)..."; verilator -Wall -Wno-EOFNEWLINE --trace --cc --build -j --Mdir build -Wno-EOFNEWLINE -Wno-UNUSEDSIGNAL -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-UNUSEDPARAM --exe "$VERILOG_FILE" "$TESTBENCH_FILE"; touch build/.$MODULE.built; else echo "Module $MODULE not found or missing testbench"; echo "  Verilog file: $VERILOG_FILE"; echo "  Testbench file: $TESTBENCH_FILE"; exit 1; fi

Error output sample:
../libraries/counters/tb_parameterized_self_correcting_counter.cpp:118:5: error: ‘m_trace’ does not name a type
  118 |     m_trace->close();
      |     ^~~~~~~
../libraries/counters/tb_parameterized_self_correcting_counter.cpp:119:5: error: expected unqualified-id before ‘delete’
  119 |     delete m_trace;
      |     ^~~~~~
../libraries/counters/tb_parameterized_self_correcting_counter.cpp:120:5: error: expected unqualified-id before ‘delete’
  120 |     delete dut;
      |     ^~~~~~
../libraries/counters/tb_parameterized_self_correcting_counter.cpp:122:5: error: expected unqualified-id before ‘return’
Error: Module parameterized_self_correcting_counter not built or missing executable |
| parameterized_sync_reset_counter | libraries/counters/parameterized_sync_reset_counter.v | ✓ PASS | N/A | N/A | 5.30 | Execution completed successfully |
| parameterized_updown_counter | libraries/counters/parameterized_updown_counter.v | ✓ PASS | 1/1 | N/A | 5.11 | 1 of 1 |

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
| parameterized_dds | libraries/dsp/parameterized_dds.v | ✓ PASS | 100/100 | N/A | 5.08 | 100 of 100 |
| parameterized_fft | libraries/dsp/parameterized_fft.v | ✗ FAIL | N/A | N/A | 0.07 | Build failed: MODULE="parameterized_fft"; VERILOG_FILE=$(find libraries -name "$MODULE.v"); TESTBENCH_FILE=$(find libraries -name "tb_$MODULE.cpp"); if [ -n "$VERILOG_FILE" ] && [ -n "$TESTBENCH_FILE" ]; then echo "Building $MODULE from $(dirname $VERILOG_FILE)..."; verilator -Wall -Wno-EOFNEWLINE --trace --cc --build -j --Mdir build -Wno-EOFNEWLINE -Wno-UNUSEDSIGNAL -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-UNUSEDPARAM --exe "$VERILOG_FILE" "$TESTBENCH_FILE"; touch build/.$MODULE.built; else echo "Module $MODULE not found or missing testbench"; echo "  Verilog file: $VERILOG_FILE"; echo "  Testbench file: $TESTBENCH_FILE"; exit 1; fi

Error output sample:
%Warning-BLKSEQ: libraries/dsp/parameterized_fft.v:116:21: Blocking assignment '=' in sequential logic process
                                                         : ... Suggest using delayed assignment '<='
  116 |                 out = (out << 1) | {{{LOG2_FFT_POINTS-1}{1'b0}}, in[j]};
      |                     ^
                 ... For warning description see https://verilator.org/warn/BLKSEQ?v=5.020
                 ... Use "/* verilator lint_off BLKSEQ */" and lint_on around source to disable this message.
%Error: Exiting due to 1 warning(s)
make: *** [Makefile:106: verify_parameterized_fft] Error 1
Error: Module parameterized_fft not built or missing executable |

<a name='category-division'></a>
### Division

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| non_restoring_divider | libraries/dividers/non_restoring_divider.v | ✗ FAIL | N/A | N/A | 0.62 | Build failed: MODULE="non_restoring_divider"; VERILOG_FILE=$(find libraries -name "$MODULE.v"); TESTBENCH_FILE=$(find libraries -name "tb_$MODULE.cpp"); if [ -n "$VERILOG_FILE" ] && [ -n "$TESTBENCH_FILE" ]; then echo "Building $MODULE from $(dirname $VERILOG_FILE)..."; verilator -Wall -Wno-EOFNEWLINE --trace --cc --build -j --Mdir build -Wno-EOFNEWLINE -Wno-UNUSEDSIGNAL -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-UNUSEDPARAM --exe "$VERILOG_FILE" "$TESTBENCH_FILE"; touch build/.$MODULE.built; else echo "Module $MODULE not found or missing testbench"; echo "  Verilog file: $VERILOG_FILE"; echo "  Testbench file: $TESTBENCH_FILE"; exit 1; fi

Error output sample:
../libraries/dividers/tb_non_restoring_divider.cpp: In function ‘bool test_division(Vnon_restoring_divider*, VerilatedVcdC*, uint8_t, uint8_t)’:
../libraries/dividers/tb_non_restoring_divider.cpp:64:33: error: ‘correct’ was not declared in this scope
   64 |     std::cout << "Result: " << (correct ? "Pass" : "Fail") << std::endl;
      |                                 ^~~~~~~
make[1]: *** [Vnon_restoring_divider.mk:61: tb_non_restoring_divider.o] Error 1
%Error: make -C build -f Vnon_restoring_divider.mk exited with 2
%Error: Command Failed ulimit -s unlimited 2>/dev/null; exec /usr/bin/verilator_bin -Wall -Wno-EOFNEWLINE --trace --cc --build -j --Mdir build -Wno-EOFNEWLINE -Wno-UNUSEDSIGNAL -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-UNUSEDPARAM --exe libraries/dividers/non_restoring_divider.v libraries/dividers/tb_non_restoring_divider.cpp
make: *** [Makefile:106: verify_non_restoring_divider] Error 1
Error: Module non_restoring_divider not built or missing executable |

<a name='category-encoding/decoding'></a>
### Encoding/Decoding

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| binary_to_gray | libraries/codings/binary_to_gray.v | ✓ PASS | 16/16 | N/A | 4.63 | 16 of 16 |
| configurable_priority_encoder | libraries/codings/configurable_priority_encoder.v | ✓ PASS | 30/30 | N/A | 4.80 | 30 of 30 |
| gray_to_binary | libraries/codings/gray_to_binary.v | ✓ PASS | 16/16 | N/A | 4.72 | 16 of 16 |
| hamming_code | libraries/codings/hamming_code.v | ✓ PASS | 31/31 | N/A | 4.86 | 31 of 31 |
| parameterized_crc_generator | libraries/codings/parameterized_crc_generator.v | ✓ PASS | 1/1 | N/A | 5.06 | 1 of 1 |
| parameterized_scrambler | libraries/codings/parameterized_scrambler.v | ✓ PASS | 2/2 | N/A | 5.47 | 2 of 2 |
| priority_encoder | libraries/codings/priority_encoder.v | ✓ PASS | 256/256 | N/A | 6.10 | 256 of 256 |

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
| async_fifo | libraries/fifo/async_fifo.v | ✓ PASS | N/A | N/A | 4.74 | Execution completed successfully |
| barrel_shifter_fifo | libraries/fifo/barrel_shifter_fifo.v | ✓ PASS | N/A | N/A | 4.69 | Execution completed successfully |
| bidirectional_fifo | libraries/fifo/bidirectional_fifo.v | ✓ PASS | N/A | N/A | 4.71 | Execution completed successfully |
| cache_fifo | libraries/fifo/cache_fifo.v | ✓ PASS | N/A | N/A | 4.81 | Execution completed successfully |
| circular_buffer_fifo | libraries/fifo/circular_buffer_fifo.v | ✓ PASS | N/A | N/A | 4.71 | Execution completed successfully |
| configurable_param_fifo | libraries/fifo/configurable_param_fifo.v | ✗ FAIL | N/A | N/A | 0.57 | Build failed: MODULE="configurable_param_fifo"; VERILOG_FILE=$(find libraries -name "$MODULE.v"); TESTBENCH_FILE=$(find libraries -name "tb_$MODULE.cpp"); if [ -n "$VERILOG_FILE" ] && [ -n "$TESTBENCH_FILE" ]; then echo "Building $MODULE from $(dirname $VERILOG_FILE)..."; verilator -Wall -Wno-EOFNEWLINE --trace --cc --build -j --Mdir build -Wno-EOFNEWLINE -Wno-UNUSEDSIGNAL -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-UNUSEDPARAM --exe "$VERILOG_FILE" "$TESTBENCH_FILE"; touch build/.$MODULE.built; else echo "Module $MODULE not found or missing testbench"; echo "  Verilog file: $VERILOG_FILE"; echo "  Testbench file: $TESTBENCH_FILE"; exit 1; fi

Error output sample:
../libraries/fifo/tb_configurable_param_fifo.cpp:234:247: warning: missing terminating ' character
  234 | Looking at the error message in the terminal, I can see that the program is crashing with a segmentation fault when testing the medium FIFO configuration (width=16, depth=8). This typically happens when the program tries to access memory it doesn't have permission to access.
      |                                                                                                                                                                                                                                                       ^
../libraries/fifo/tb_configurable_param_fifo.cpp:234:247: error: missing terminating ' character
  234 | Looking at the error message in the terminal, I can see that the program is crashing with a segmentation fault when testing the medium FIFO configuration (width=16, depth=8). This typically happens when the program tries to access memory it doesn't have permission to access.
      |                                                                                                                                                                                                                                                       ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~
../libraries/fifo/tb_configurable_param_fifo.cpp:236:29: error: stray ‘`’ in program
  236 | After examining the code in `tb_configurable_param_fifo.cpp`, I've identified the issue. The problem is in the data masking logic. When working with a 16-bit data width, the mask calculation is incorrect and could lead to accessing invalid memory.
      |                             ^
../libraries/fifo/tb_configurable_param_fifo.cpp:236:60: error: stray ‘`’ in program
Error: Module configurable_param_fifo not built or missing executable |
| configurable_sync_fifo | libraries/fifo/configurable_sync_fifo.v | ✓ PASS | N/A | N/A | 4.81 | ALL TESTS PASSED! |
| credit_based_fifo | libraries/fifo/credit_based_fifo.v | ✓ PASS | N/A | N/A | 4.92 | Final FIFO status - Full: No, Empty: Yes |
| dual_clock_fifo | libraries/fifo/dual_clock_fifo.v | ✓ PASS | N/A | N/A | 4.93 | Execution completed successfully |
| elastic_buffer | libraries/fifo/elastic_buffer.v | ✓ PASS | N/A | N/A | 4.78 | Execution completed successfully |
| fifo | libraries/fifo/fifo.v | ✓ PASS | 3/3 | N/A | 4.78 | 3 of 3 |
| fwft_fifo | libraries/fifo/fwft_fifo.v | ✓ PASS | N/A | N/A | 4.77 | Execution completed successfully |
| memory_mapped_fifo | libraries/fifo/memory_mapped_fifo.v | ✓ PASS | N/A | N/A | 4.78 | Execution completed successfully |
| multi_ported_fifo | libraries/fifo/multi_ported_fifo.v | ✗ FAIL | N/A | N/A | 0.06 | Build failed: MODULE="multi_ported_fifo"; VERILOG_FILE=$(find libraries -name "$MODULE.v"); TESTBENCH_FILE=$(find libraries -name "tb_$MODULE.cpp"); if [ -n "$VERILOG_FILE" ] && [ -n "$TESTBENCH_FILE" ]; then echo "Building $MODULE from $(dirname $VERILOG_FILE)..."; verilator -Wall -Wno-EOFNEWLINE --trace --cc --build -j --Mdir build -Wno-EOFNEWLINE -Wno-UNUSEDSIGNAL -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-UNUSEDPARAM --exe "$VERILOG_FILE" "$TESTBENCH_FILE"; touch build/.$MODULE.built; else echo "Module $MODULE not found or missing testbench"; echo "  Verilog file: $VERILOG_FILE"; echo "  Testbench file: $TESTBENCH_FILE"; exit 1; fi

Error output sample:
%Error: libraries/fifo/multi_ported_fifo.v:134:21: syntax error, unexpected IDENTIFIER, expecting "'{"
  134 |             integer i;
      |                     ^
%Error: libraries/fifo/multi_ported_fifo.v:145:21: syntax error, unexpected IDENTIFIER, expecting "'{"
  145 |             integer rp;
      |                     ^~
%Error: libraries/fifo/multi_ported_fifo.v:146:34: syntax error, unexpected IDENTIFIER, expecting "'{"
  146 |             reg [ADDR_WIDTH-1:0] current_rd_addr;
      |                                  ^~~~~~~~~~~~~~~
%Error: Exiting due to 3 error(s)
Error: Module multi_ported_fifo not built or missing executable |
| parameterized_priority_queue | libraries/fifo/parameterized_priority_queue.v | ✓ PASS | N/A | N/A | 5.18 | Execution completed successfully |
| pipelined_fifo | libraries/fifo/pipelined_fifo.v | ⏱ TIMEOUT | N/A | N/A | 120.00 | Execution exceeded 2 minutes and was terminated
Error: Test execution timed out after 2 minutes |
| showahead_fifo | libraries/fifo/showahead_fifo.v | ✓ PASS | N/A | N/A | 5.61 | Execution completed successfully |
| skid_buffer | libraries/fifo/skid_buffer.v | ✓ PASS | N/A | N/A | 5.84 | Execution completed successfully |
| smart_fifo | libraries/fifo/smart_fifo.v | ✓ PASS | N/A | N/A | 5.83 | Execution completed successfully |
| sync_fifo | libraries/fifo/sync_fifo.v | ⏱ TIMEOUT | N/A | N/A | 120.00 | Execution exceeded 2 minutes and was terminated
Error: Test execution timed out after 2 minutes |

<a name='category-filters'></a>
### Filters

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| configurable_fir_filter | libraries/filters/configurable_fir_filter.v | ✓ PASS | N/A | N/A | 4.91 | TEST PASSED! |
| fir_filter | libraries/filters/fir_filter.v | ✓ PASS | N/A | N/A | 4.78 | Execution completed successfully |

<a name='category-input/output'></a>
### Input/Output

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| dma_controller | libraries/io/dma_controller.v | ⚠ NO TESTBENCH | 0/0 | N/A | 0.00 | No testbench available |
| gpio_controller | libraries/io/gpio_controller.v | ✗ FAIL | 2/5 | N/A | 4.87 | 2 of 5

Error output sample:
make: *** [Makefile:106: verify_gpio_controller] Error 1 |

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
| fixed_point_sqrt | libraries/math/fixed_point_sqrt.v | ✗ FAIL | N/A | N/A | 0.06 | Build failed: MODULE="fixed_point_sqrt"; VERILOG_FILE=$(find libraries -name "$MODULE.v"); TESTBENCH_FILE=$(find libraries -name "tb_$MODULE.cpp"); if [ -n "$VERILOG_FILE" ] && [ -n "$TESTBENCH_FILE" ]; then echo "Building $MODULE from $(dirname $VERILOG_FILE)..."; verilator -Wall -Wno-EOFNEWLINE --trace --cc --build -j --Mdir build -Wno-EOFNEWLINE -Wno-UNUSEDSIGNAL -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-UNUSEDPARAM --exe "$VERILOG_FILE" "$TESTBENCH_FILE"; touch build/.$MODULE.built; else echo "Module $MODULE not found or missing testbench"; echo "  Verilog file: $VERILOG_FILE"; echo "  Testbench file: $TESTBENCH_FILE"; exit 1; fi

Error output sample:
%Warning-UNDRIVEN: libraries/math/fixed_point_sqrt.v:12:37: Signal is not driven: 'in_ready'
                                                          : ... note: In instance 'fixed_point_sqrt'
   12 |     output wire                     in_ready,
      |                                     ^~~~~~~~
                   ... For warning description see https://verilator.org/warn/UNDRIVEN?v=5.020
                   ... Use "/* verilator lint_off UNDRIVEN */" and lint_on around source to disable this message.
%Warning-UNDRIVEN: libraries/math/fixed_point_sqrt.v:15:37: Signal is not driven: 'out_data'
                                                          : ... note: In instance 'fixed_point_sqrt'
   15 |     output reg [OUTPUT_WIDTH-1:0]   out_data,
      |                                     ^~~~~~~~
Error: Module fixed_point_sqrt not built or missing executable |
| floating_point_adder | libraries/math/floating_point_adder.v | ✓ PASS | N/A | N/A | 4.87 | Execution completed successfully |

<a name='category-memory'></a>
### Memory

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| ddr_controller | libraries/mems/ddr_controller.v | ✗ FAIL | N/A | N/A | 0.06 | Build failed: MODULE="ddr_controller"; VERILOG_FILE=$(find libraries -name "$MODULE.v"); TESTBENCH_FILE=$(find libraries -name "tb_$MODULE.cpp"); if [ -n "$VERILOG_FILE" ] && [ -n "$TESTBENCH_FILE" ]; then echo "Building $MODULE from $(dirname $VERILOG_FILE)..."; verilator -Wall -Wno-EOFNEWLINE --trace --cc --build -j --Mdir build -Wno-EOFNEWLINE -Wno-UNUSEDSIGNAL -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-UNUSEDPARAM --exe "$VERILOG_FILE" "$TESTBENCH_FILE"; touch build/.$MODULE.built; else echo "Module $MODULE not found or missing testbench"; echo "  Verilog file: $VERILOG_FILE"; echo "  Testbench file: $TESTBENCH_FILE"; exit 1; fi

Error output sample:
%Warning-GENUNNAMED: libraries/mems/ddr_controller.v:118:55: Unnamed generate block 'genblk1' (IEEE 1800-2017 27.6)
                                                           : ... Suggest assign a label with 'begin : gen_<label_name>'
  118 |         if (DDR_TYPE == "DDR4" || DDR_TYPE == "DDR5") begin
      |                                                       ^~~~~
                     ... For warning description see https://verilator.org/warn/GENUNNAMED?v=5.020
                     ... Use "/* verilator lint_off GENUNNAMED */" and lint_on around source to disable this message.
%Warning-GENUNNAMED: libraries/mems/ddr_controller.v:120:18: Unnamed generate block 'genblk1' (IEEE 1800-2017 27.6)
                                                           : ... Suggest assign a label with 'begin : gen_<label_name>'
  120 |         end else begin
      |                  ^~~~~
Error: Module ddr_controller not built or missing executable |
| dual_port_ram | libraries/mems/dual_port_ram.v | ✓ PASS | N/A | N/A | 4.76 | Execution completed successfully |
| memory_controller | libraries/mems/memory_controller.v | ✓ PASS | N/A | N/A | 4.70 | Execution completed successfully |
| parameterized_cam | libraries/mems/parameterized_cam.v | ✓ PASS | 5/5 | N/A | 5.14 | 5 of 5 |

<a name='category-multiplication'></a>
### Multiplication

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| booth_multiplier | libraries/multipliers/booth_multiplier.v | ✓ PASS | 4/8 | N/A | 4.64 | Execution completed successfully |
| configurable_mult | libraries/multipliers/configurable_mult.v | ✓ PASS | 6/6 | N/A | 4.84 | 6 of 6 |
| radix4_booth_multiplier | libraries/multipliers/radix4_booth_multiplier.v | ✓ PASS | 6/6 | N/A | 5.67 | 6 of 6 |

<a name='category-network-on-chip'></a>
### Network on Chip

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| configurable_mesh_router | libraries/noc/configurable_mesh_router.v | ✓ PASS | 11/11 | N/A | 5.36 | 11 of 11 |
| crossbar_switch | libraries/noc/crossbar_switch.v | ✓ PASS | 12/12 | N/A | 4.83 | 12 of 12 |
| mesh_router | libraries/noc/mesh_router.v | ✗ FAIL | N/A | N/A | 0.07 | Build failed: MODULE="mesh_router"; VERILOG_FILE=$(find libraries -name "$MODULE.v"); TESTBENCH_FILE=$(find libraries -name "tb_$MODULE.cpp"); if [ -n "$VERILOG_FILE" ] && [ -n "$TESTBENCH_FILE" ]; then echo "Building $MODULE from $(dirname $VERILOG_FILE)..."; verilator -Wall -Wno-EOFNEWLINE --trace --cc --build -j --Mdir build -Wno-EOFNEWLINE -Wno-UNUSEDSIGNAL -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-UNUSEDPARAM --exe "$VERILOG_FILE" "$TESTBENCH_FILE"; touch build/.$MODULE.built; else echo "Module $MODULE not found or missing testbench"; echo "  Verilog file: $VERILOG_FILE"; echo "  Testbench file: $TESTBENCH_FILE"; exit 1; fi

Error output sample:
%Warning-VARHIDDEN: libraries/noc/mesh_router.v:96:21: Declaration of signal hides declaration in upper scope: 'dest_x'
   96 |         input [3:0] dest_x;
      |                     ^~~~~~
                    libraries/noc/mesh_router.v:79:16: ... Location of original declaration
   79 |     wire [3:0] dest_x [0:PORT_COUNT-1];
      |                ^~~~~~
                    ... For warning description see https://verilator.org/warn/VARHIDDEN?v=5.020
                    ... Use "/* verilator lint_off VARHIDDEN */" and lint_on around source to disable this message.
%Warning-VARHIDDEN: libraries/noc/mesh_router.v:97:21: Declaration of signal hides declaration in upper scope: 'dest_y'
   97 |         input [3:0] dest_y;
Error: Module mesh_router not built or missing executable |
| network_interface | libraries/noc/network_interface.v | ⏱ TIMEOUT | N/A | N/A | 120.00 | Execution exceeded 2 minutes and was terminated
Error: Test execution timed out after 2 minutes |

<a name='category-power-management'></a>
### Power Management

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| clock_divider | libraries/power/clock_divider.v | ✓ PASS | N/A | N/A | 4.66 | Execution completed successfully |
| clock_gating | libraries/power/clock_gating.v | ⚠ NO TESTBENCH | 0/0 | N/A | 0.00 | No testbench available |
| parameterized_clock_gating | libraries/power/parameterized_clock_gating.v | ✓ PASS | N/A | N/A | 5.21 | Execution completed successfully |
| parameterized_freq_divider | libraries/power/parameterized_freq_divider.v | ✓ PASS | N/A | N/A | 5.31 | ALL TESTS PASSED! |
| power_domain_controller | libraries/power/power_domain_controller.v | ✓ PASS | 3/3 | N/A | 5.93 | 3 of 3 |

<a name='category-registers'></a>
### Registers

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| barrel_rotator | libraries/registers/barrel_rotator.v | ✓ PASS | 80/80 | N/A | 4.69 | 80 of 80 |
| barrel_shifter | libraries/registers/barrel_shifter.v | ✓ PASS | 300/300 | N/A | 4.67 | 300 of 300 |
| bidirectional_shift_register | libraries/registers/bidirectional_shift_register.v | ✓ PASS | 6/6 | N/A | 4.59 | 6 of 6 |
| dual_edge_register | libraries/registers/dual_edge_register.v | ✓ PASS | 6/6 | N/A | 4.69 | 6 of 6 |
| lfsr | libraries/registers/lfsr.v | ✓ PASS | 2/2 | N/A | 4.75 | 2 of 2 |
| onehot_decoder_register | libraries/registers/onehot_decoder_register.v | ✓ PASS | 5/5 | N/A | 5.05 | 5 of 5 |
| parameterized_barrel_rotator | libraries/registers/parameterized_barrel_rotator.v | ✓ PASS | N/A | N/A | 5.07 | Tests: a0 of a0 |
| parameterized_rotation_sipo | libraries/registers/parameterized_rotation_sipo.v | ✗ FAIL | N/A | N/A | 0.07 | Build failed: MODULE="parameterized_rotation_sipo"; VERILOG_FILE=$(find libraries -name "$MODULE.v"); TESTBENCH_FILE=$(find libraries -name "tb_$MODULE.cpp"); if [ -n "$VERILOG_FILE" ] && [ -n "$TESTBENCH_FILE" ]; then echo "Building $MODULE from $(dirname $VERILOG_FILE)..."; verilator -Wall -Wno-EOFNEWLINE --trace --cc --build -j --Mdir build -Wno-EOFNEWLINE -Wno-UNUSEDSIGNAL -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-UNUSEDPARAM --exe "$VERILOG_FILE" "$TESTBENCH_FILE"; touch build/.$MODULE.built; else echo "Module $MODULE not found or missing testbench"; echo "  Verilog file: $VERILOG_FILE"; echo "  Testbench file: $TESTBENCH_FILE"; exit 1; fi

Error output sample:
%Warning-SELRANGE: libraries/registers/parameterized_rotation_sipo.v:67:43: [-1:0] Slice range has ascending bit ordering, perhaps you wanted [0:-1]
                                                                          : ... note: In instance 'parameterized_rotation_sipo'
   67 |                 parallel_out <= {shift_reg[ROTATION-1:0], shift_reg[WIDTH-1:ROTATION]};
      |                                           ^
                   ... For warning description see https://verilator.org/warn/SELRANGE?v=5.020
                   ... Use "/* verilator lint_off SELRANGE */" and lint_on around source to disable this message.
%Error: Exiting due to 1 warning(s)
make: *** [Makefile:106: verify_parameterized_rotation_sipo] Error 1
Error: Module parameterized_rotation_sipo not built or missing executable |
| piso_register | libraries/registers/piso_register.v | ✓ PASS | 1/1 | N/A | 5.69 | 1 of 1 |
| register_file | libraries/registers/register_file.v | ✓ PASS | 5/5 | N/A | 5.69 | 5 of 5 |
| scan_register | libraries/registers/scan_register.v | ✓ PASS | 4/4 | N/A | 5.63 | 4 of 4 |
| shadow_register | libraries/registers/shadow_register.v | ✓ PASS | 7/7 | N/A | 5.94 | 7 of 7 |
| shift_register | libraries/registers/shift_register.v | ✓ PASS | 1/2 | N/A | 5.76 | Execution completed successfully |
| shift_register_left | libraries/registers/shift_register_left.v | ✓ PASS | 1/1 | N/A | 5.80 | 1 of 1 |
| shift_register_right | libraries/registers/shift_register_right.v | ✓ PASS | 1/1 | N/A | 5.79 | 1 of 1 |
| sipo_register | libraries/registers/sipo_register.v | ✓ PASS | 4/4 | N/A | 6.06 | 4 of 4 |
| siso_register | libraries/registers/siso_register.v | ✓ PASS | 4/4 | N/A | 5.61 | 4 of 4 |
| sync_preset_register | libraries/registers/sync_preset_register.v | ✓ PASS | 8/8 | N/A | 6.36 | 8 of 8 |
| toggle_register | libraries/registers/toggle_register.v | ✓ PASS | 8/8 | N/A | 6.36 | 8 of 8 |
| universal_shift_register | libraries/registers/universal_shift_register.v | ✓ PASS | 5/5 | N/A | 6.45 | 5 of 5 |

<a name='category-signal-processing'></a>
### Signal Processing

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| configurable_lfsr | libraries/signals/configurable_lfsr.v | ✓ PASS | N/A | N/A | 4.78 | Execution completed successfully |
| configurable_prng | libraries/signals/configurable_prng.v | ✓ PASS | 3/3 | N/A | 4.82 | 3 of 3 |
| digital_thermometer_controller | libraries/signals/digital_thermometer_controller.v | ✓ PASS | 5/5 | N/A | 4.74 | 5 of 5 |
| multi_phase_pwm_controller | libraries/signals/multi_phase_pwm_controller.v | ✓ PASS | 5/5 | N/A | 4.74 | 5 of 5 |
| parameterized_pwm | libraries/signals/parameterized_pwm.v | ✓ PASS | 6/6 | N/A | 5.30 | 6 of 6 |
| pulse_width_detector | libraries/signals/pulse_width_detector.v | ✓ PASS | 2/3 | N/A | 5.93 | Execution completed successfully |
| pwm_generator | libraries/signals/pwm_generator.v | ✓ PASS | 3/3 | N/A | 5.74 | 3 of 3 |

<a name='category-state-machines'></a>
### State Machines

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| sequence_detector_fsm | libraries/fsm/sequence_detector_fsm.v | ✓ PASS | 26/26 | N/A | 5.87 | 26 of 26 |

<a name='category-testing'></a>
### Testing

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| bist_controller | libraries/test/bist_controller.v | ✓ PASS | 4/4 | N/A | 4.70 | 4 of 4 |
| jtag_controller | libraries/test/jtag_controller.v | ✓ PASS | 3/3 | N/A | 4.74 | 3 of 3 |

<a name='category-voting'></a>
### Voting

[Back to top](#table-of-contents)

| Module | File Path | Status | Tests | Coverage | Runtime (s) | Details |
|--------|-----------|:------:|------:|---------:|------------:|----------:|
| majority_voter | libraries/voters/majority_voter.v | ✓ PASS | 4/4 | N/A | 4.71 | 4 of 4 |

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
