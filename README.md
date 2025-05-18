# CORE: Corpus Of RTL designs for EDA Research

This repository contains a collection of parameterized and configurable RTL modules written in Verilog, organized by category. Each category has a dedicated documentation page in the `docs/` directory.

## Directory Structure
```
/ libraries         # Verilog RTL modules
/ docs              # Category documentation
report.py           # Verification report generator
REPORT.md           # Latest verification report
LICENSE             # Licensing information
README.md           # This file
``` 

## Dataset

| Category | Docs | Number | Modules |
|----------|------|-------:|---------|
| Adders | [Adders](docs/README_ADDERS.md) | 6 | [configurable_brent_kung_adder](libraries/adders/configurable_brent_kung_adder.v), [configurable_carry_lookahead_adder](libraries/adders/configurable_carry_lookahead_adder.v), [configurable_carry_select_adder](libraries/adders/configurable_carry_select_adder.v), [configurable_carry_skip_adder](libraries/adders/configurable_carry_skip_adder.v), [configurable_conditional_sum_adder](libraries/adders/configurable_conditional_sum_adder.v), [configurable_kogge_stone_adder](libraries/adders/configurable_kogge_stone_adder.v) |
| Arbitration | [Arbitration](docs/README_ARBITERS.md) | 4 | [arbiter](libraries/arbiters/arbiter.v), [arbiter_rr](libraries/arbiters/arbiter_rr.v), [fair_priority_arbiter](libraries/arbiters/fair_priority_arbiter.v), [matrix_arbiter](libraries/arbiters/matrix_arbiter.v) |
| Arithmetic | [Arithmetic](docs/README_ALU.md) | 2 | [alu](libraries/alu/alu.v), [configurable_comparator](libraries/alu/configurable_comparator.v) |
| CORDIC | [CORDIC](docs/README_CORDIC.md) | 3 | [cordic](libraries/cordic/cordic.v), [cordic_core](libraries/cordic/cordic_core.v), [sine_cosine_generator](libraries/cordic/sine_cosine_generator.v) |
| Clock Domain Crossing | [Clock Domain Crossing](docs/README_CDC.md) | 4 | [clock_domain_crossing](libraries/cdc/clock_domain_crossing.v), [clock_domain_crossing_fifo](libraries/cdc/clock_domain_crossing_fifo.v), [handshake_synchronizer](libraries/cdc/handshake_synchronizer.v), [multi_flop_synchronizer](libraries/cdc/multi_flop_synchronizer.v) |
| Communication | [Communication](docs/README_COMMS.md) | 12 | [ahb_lite_master](libraries/comms/ahb_lite_master.v), [basic_spi_master](libraries/comms/basic_spi_master.v), [fixed_spi_master](libraries/comms/fixed_spi_master.v), [final_spi_master](libraries/comms/final_spi_master.v), [parameterized_deserializer](libraries/comms/parameterized_deserializer.v), [parameterized_i2c_master](libraries/comms/parameterized_i2c_master.v), [parameterized_serdes](libraries/comms/parameterized_serdes.v), [parameterized_spi_master](libraries/comms/parameterized_spi_master.v), [parameterized_uart_rx](libraries/comms/parameterized_uart_rx.v), [parameterized_uart_tx](libraries/comms/parameterized_uart_tx.v), [simple_spi_master](libraries/comms/simple_spi_master.v), [spi_master](libraries/comms/spi_master.v) |
| Counters | [Counters](docs/README_COUNTERS.md) | 15 | [configurable_clz_clo](libraries/counters/configurable_clz_clo.v), [gray_counter](libraries/counters/gray_counter.v), [johnson_counter](libraries/counters/johnson_counter.v), [leading_zero_counter](libraries/counters/leading_zero_counter.v), [loadable_updown_counter](libraries/counters/loadable_updown_counter.v), [parameterized_decade_counter](libraries/counters/parameterized_decade_counter.v), [parameterized_gray_counter](libraries/counters/parameterized_gray_counter.v), [parameterized_johnson_counter](libraries/counters/parameterized_johnson_counter.v), [parameterized_johnson_updown_counter](libraries/counters/parameterized_johnson_updown_counter.v), [parameterized_loadable_counter](libraries/counters/parameterized_loadable_counter.v), [parameterized_onehot_counter](libraries/counters/parameterized_onehot_counter.v), [parameterized_ring_counter](libraries/counters/parameterized_ring_counter.v), [parameterized_self_correcting_counter](libraries/counters/parameterized_self_correcting_counter.v), [parameterized_sync_reset_counter](libraries/counters/parameterized_sync_reset_counter.v), [parameterized_updown_counter](libraries/counters/parameterized_updown_counter.v) |
| Debugging | [Debugging](docs/README_DEBUG.md) | 2 | [logic_analyzer](libraries/debug/logic_analyzer.v), [performance_counter](libraries/debug/performance_counter.v) |
| Encoding/Decoding | [Encoding/Decoding](docs/README_CODINGS.md) | 7 | [binary_to_gray](libraries/codings/binary_to_gray.v), [configurable_priority_encoder](libraries/codings/configurable_priority_encoder.v), [gray_to_binary](libraries/codings/gray_to_binary.v), [hamming_code](libraries/codings/hamming_code.v), [parameterized_crc_generator](libraries/codings/parameterized_crc_generator.v), [parameterized_scrambler](libraries/codings/parameterized_scrambler.v), [priority_encoder](libraries/codings/priority_encoder.v) |
| Encryption | [Encryption](docs/README_ENCRYPTION.md) | 2 | [aes_core](libraries/encryption/aes_core.v), [true_random_generator](libraries/encryption/true_random_generator.v) |
| FIFOs | [FIFOs](docs/README_FIFOS.md) | 20 | [async_fifo](libraries/fifos/async_fifo.v), [barrel_shifter_fifo](libraries/fifos/barrel_shifter_fifo.v), [bidirectional_fifo](libraries/fifos/bidirectional_fifo.v), [cache_fifo](libraries/fifos/cache_fifo.v), [circular_buffer_fifo](libraries/fifos/circular_buffer_fifo.v), [configurable_param_fifo](libraries/fifos/configurable_param_fifo.v), [configurable_sync_fifo](libraries/fifos/configurable_sync_fifo.v), [credit_based_fifo](libraries/fifos/credit_based_fifo.v), [dual_clock_fifo](libraries/fifos/dual_clock_fifo.v), [elastic_buffer](libraries/fifos/elastic_buffer.v), [fifo](libraries/fifos/fifo.v), [fwft_fifo](libraries/fifos/fwft_fifo.v), [memory_mapped_fifo](libraries/fifos/memory_mapped_fifo.v), [multi_ported_fifo](libraries/fifos/multi_ported_fifo.v), [parameterized_priority_queue](libraries/fifos/parameterized_priority_queue.v), [pipelined_fifo](libraries/fifos/pipelined_fifo.v), [showahead_fifo](libraries/fifos/showahead_fifo.v), [skid_buffer](libraries/fifos/skid_buffer.v), [smart_fifo](libraries/fifos/smart_fifo.v), [sync_fifo](libraries/fifos/sync_fifo.v) |
| Filters | [Filters](docs/README_FILTERS.md) | 2 | [configurable_fir_filter](libraries/filters/configurable_fir_filter.v), [fir_filter](libraries/filters/fir_filter.v) |
| Input/Output | [Input/Output](docs/README_IO.md) | 2 | [dma_controller](libraries/io/dma_controller.v), [gpio_controller](libraries/io/gpio_controller.v) |
| Interfaces | [Interfaces](docs/README_INTERFACES.md) | 4 | [axi_lite_master](libraries/interfaces/axi_lite_master.v), [axi_stream_interface](libraries/interfaces/axi_stream_interface.v), [pcie_endpoint](libraries/interfaces/pcie_endpoint.v), [wishbone_master](libraries/interfaces/wishbone_master.v) |
| Mathematics | [Mathematics](docs/README_MATH.md) | 3 | [fixed_point_sqrt](libraries/math/fixed_point_sqrt.v), [floating_point_adder](libraries/math/floating_point_adder.v), [non_restoring_divider](libraries/math/non_restoring_divider.v) |
| Memory | [Memory](docs/README_MEMORY.md) | 4 | [ddr_controller](libraries/mems/ddr_controller.v), [dual_port_ram](libraries/mems/dual_port_ram.v), [memory_controller](libraries/mems/memory_controller.v), [parameterized_cam](libraries/mems/parameterized_cam.v) |
| Multiplication | [Multiplication](docs/README_MULTIPLIERS.md) | 3 | [booth_multiplier](libraries/multipliers/booth_multiplier.v), [configurable_mult](libraries/multipliers/configurable_mult.v), [radix4_booth_multiplier](libraries/multipliers/radix4_booth_multiplier.v) |
| Network on Chip | [Network on Chip](docs/README_NOC.md) | 5 | [configurable_mesh_router](libraries/noc/configurable_mesh_router.v), [crossbar_switch](libraries/noc/crossbar_switch.v), [mesh_router](libraries/noc/mesh_router.v), [network_interface](libraries/noc/network_interface.v), [network_interface_cdc](libraries/noc/network_interface_cdc.v) |
| Power Management | [Power Management](docs/README_PM.md) | 5 | [clock_divider](libraries/power/clock_divider.v), [clock_gating](libraries/power/clock_gating.v), [parameterized_clock_gating](libraries/power/parameterized_clock_gating.v), [parameterized_freq_divider](libraries/power/parameterized_freq_divider.v), [power_domain_controller](libraries/power/power_domain_controller.v) |
| Registers | [Registers](docs/README_REGISTERS.md) | 19 | [barrel_rotator](libraries/registers/barrel_rotator.v), [barrel_shifter](libraries/registers/barrel_shifter.v), [bidirectional_shift_register](libraries/registers/bidirectional_shift_register.v), [dual_edge_register](libraries/registers/dual_edge_register.v), [lfsr](libraries/registers/lfsr.v), [onehot_decoder_register](libraries/registers/onehot_decoder_register.v), [parameterized_barrel_rotator](libraries/registers/parameterized_barrel_rotator.v), [parameterized_rotation_sipo](libraries/registers/parameterized_rotation_sipo.v), [piso_register](libraries/registers/piso_register.v), [register_file](libraries/registers/register_file.v), [scan_register](libraries/registers/scan_register.v), [shadow_register](libraries/registers/shadow_register.v), [sipo_register](libraries/registers/sipo_register.v), [siso_register](libraries/registers/siso_register.v), [sync_preset_register](libraries/registers/sync_preset_register.v), [toggle_register](libraries/registers/toggle_register.v), [universal_shift_register](libraries/registers/universal_shift_register.v), [shift_register_left](libraries/registers/shift_register_left.v), [shift_register_right](libraries/registers/shift_register_right.v) |
| Signal Processing | [Signal Processing](docs/README_SIGNALS.md) | 9 | [configurable_lfsr](libraries/signals/configurable_lfsr.v), [configurable_prng](libraries/signals/configurable_prng.v), [digital_thermometer_controller](libraries/signals/digital_thermometer_controller.v), [multi_phase_pwm_controller](libraries/signals/multi_phase_pwm_controller.v), [parameterized_dds](libraries/signals/parameterized_dds.v), [parameterized_fft](libraries/signals/parameterized_fft.v), [parameterized_pwm](libraries/signals/parameterized_pwm.v), [pulse_width_detector](libraries/signals/pulse_width_detector.v), [pwm_generator](libraries/signals/pwm_generator.v) |
| State Machines | [State Machines](docs/README_FSM.md) | 1 | [sequence_detector_fsm](libraries/fsm/sequence_detector_fsm.v) |
| Testing | [Testing](docs/README_TESTING.md) | 2 | [bist_controller](libraries/test/bist_controller.v), [jtag_controller](libraries/test/jtag_controller.v) |
| Voting | [Voting](docs/README_VOTING.md) | 1 | [majority_voter](libraries/voters/majority_voter.v) |

## Generating Verification Report
You can generate a comprehensive report of the verification results by running:

```bash
python3 report.py
```

This script will scan RTL files and their testbenches, execute tests using `make`, and produce `REPORT.md`.

You can view the latest report here: [REPORT.md](REPORT.md)

## License
This project is licensed under the [Creative Commons Attribution-NonCommercial 4.0 International Public License](LICENSE).
