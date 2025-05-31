# Verilog Dataset Analysis Report

## Dataset Overview

The dataset contains 138 Verilog modules across 24 different categories, providing a comprehensive collection of digital design components.

### Module Distribution by Category

![Module Distribution](plots/module_distribution.png)

### Synchronous vs Asynchronous Designs

- Synchronous Designs: 116
- Asynchronous Designs: 22

## Code Metrics

### Average Metrics per Module
- Lines of Code: 112.57
- Parameters: 2.75
- Ports: 11.20

### Module Complexity Distribution

![Complexity Distribution](plots/complexity_distribution.png)

- Simple (0-50 lines): 39
- Medium (51-200 lines): 80
- Complex (>200 lines): 19

## Design Patterns

![Design Patterns](plots/design_patterns.png)

| Pattern | Count | Percentage |
|---------|-------|------------|
| generate | 30 | 21.7% |
| for_loop | 111 | 80.4% |
| case | 56 | 40.6% |
| if_else | 125 | 90.6% |
| while_loop | 2 | 1.4% |

## Category Details

- fifos: 20 modules
- registers: 19 modules
- counters: 15 modules
- comms: 12 modules
- signals: 9 modules
- codings: 7 modules
- adders: 6 modules
- cdc: 5 modules
- noc: 5 modules
- power: 5 modules
- arbiters: 4 modules
- interfaces: 4 modules
- mems: 4 modules
- cordic: 3 modules
- math: 3 modules
- multipliers: 3 modules
- alu: 2 modules
- debug: 2 modules
- encryption: 2 modules
- filters: 2 modules
- io: 2 modules
- test: 2 modules
- fsm: 1 modules
- voters: 1 modules


## Synthesis Statistics (Yosys)

The following table summarizes the gate (cell) count for each module as reported by Yosys synthesis:

| Module | Gate/Cell Count |
|--------|-----------------|
| configurable_brent_kung_adder | 160 |
| configurable_carry_lookahead_adder | 168 |
| configurable_carry_select_adder | 913 |
| configurable_carry_skip_adder | 226 |
| configurable_conditional_sum_adder | 500 |
| configurable_kogge_stone_adder | 549 |
| alu | 353 |
| configurable_comparator | 109 |
| arbiter | N/A |
| arbiter_rr | N/A |
| fair_priority_arbiter | N/A |
| matrix_arbiter | N/A |
| bsg_async_credit_counter | 32 |
| clock_domain_crossing | 79 |
| clock_domain_crossing_fifo | 1758 |
| handshake_synchronizer | 78 |
| multi_flop_synchronizer | 2 |
| binary_to_gray | 3 |
| configurable_priority_encoder | 27 |
| gray_to_binary | 3 |
| hamming_code | 57 |
| parameterized_crc_generator | 50 |
| parameterized_scrambler | 13 |
| priority_encoder | 27 |
| ahb_lite_master | 518 |
| basic_spi_master | 156 |
| final_spi_master | 162 |
| fixed_spi_master | 157 |
| parameterized_deserializer | 87 |
| parameterized_i2c_master | N/A |
| parameterized_serdes | 107 |
| parameterized_spi_master | 180 |
| parameterized_uart_rx | 598 |
| parameterized_uart_tx | 109 |
| simple_spi_master | 166 |
| spi_master | 161 |
| cordic | 846 |
| cordic_core | 4045 |
| sine_cosine_generator | 277 |
| configurable_clz_clo | N/A |
| gray_counter | 36 |
| johnson_counter | 9 |
| leading_zero_counter | N/A |
| loadable_updown_counter | 77 |
| parameterized_decade_counter | 18 |
| parameterized_gray_counter | 12 |
| parameterized_johnson_counter | 5 |
| parameterized_johnson_updown_counter | 10 |
| parameterized_loadable_counter | 33 |
| parameterized_onehot_counter | 15 |
| parameterized_ring_counter | 4 |
| parameterized_self_correcting_counter | 23 |
| parameterized_sync_reset_counter | 36 |
| parameterized_updown_counter | 35 |
| logic_analyzer | 104318 |
| performance_counter | 1504 |
| aes_core | N/A |
| true_random_generator | 424 |
| async_fifo | 504 |
| barrel_shifter_fifo | N/A |
| bidirectional_fifo | 747 |
| cache_fifo | N/A |
| circular_buffer_fifo | 644 |
| configurable_param_fifo | 400 |
| configurable_sync_fifo | N/A |
| credit_based_fifo | 555 |
| dual_clock_fifo | 466 |
| elastic_buffer | 270 |
| fifo | 488 |
| fwft_fifo | 388 |
| memory_mapped_fifo | 1945 |
| multi_ported_fifo | N/A |
| parameterized_priority_queue | N/A |
| pipelined_fifo | N/A |
| showahead_fifo | 499 |
| skid_buffer | 46 |
| smart_fifo | 1268 |
| sync_fifo | 380 |
| configurable_fir_filter | N/A |
| fir_filter | 296 |
| sequence_detector_fsm | 61 |
| axi_lite_master | 204 |
| axi_stream_interface | 0 |
| pcie_endpoint | 405 |
| wishbone_master | 229 |
| dma_controller | 2059 |
| gpio_controller | N/A |
| fixed_point_sqrt | 197 |
| floating_point_adder | 2195 |
| non_restoring_divider | N/A |
| ddr_controller | 1586 |
| dual_port_ram | 609 |
| memory_controller | 25734 |
| parameterized_cam | 574 |
| booth_multiplier | 450 |
| configurable_mult | 652 |
| radix4_booth_multiplier | 462 |
| configurable_mesh_router | N/A |
| crossbar_switch | 128 |
| mesh_router | N/A |
| network_interface | 211 |
| network_interface_cdc | 284 |
| clock_divider | 1632 |
| clock_gating | 3 |
| parameterized_clock_gating | N/A |
| parameterized_freq_divider | 3918 |
| power_domain_controller | 201 |
| barrel_rotator | 194 |
| barrel_shifter | 827 |
| bidirectional_shift_register | 26 |
| dual_edge_register | N/A |
| lfsr | 20 |
| onehot_decoder_register | 46 |
| parameterized_barrel_rotator | 528 |
| parameterized_rotation_sipo | 1 |
| piso_register | 16 |
| register_file | 3191 |
| scan_register | 32 |
| shadow_register | 129 |
| shift_register_left | 17 |
| shift_register_right | 17 |
| sipo_register | N/A |
| siso_register | 8 |
| sync_preset_register | 27 |
| toggle_register | 25 |
| universal_shift_register | 59 |
| configurable_lfsr | 32 |
| configurable_prng | 69 |
| digital_thermometer_controller | 104 |
| multi_phase_pwm_controller | 552 |
| parameterized_dds | N/A |
| parameterized_fft | 10629 |
| parameterized_pwm | 232 |
| pulse_width_detector | 90 |
| pwm_generator | 119 |
| bist_controller | 496 |
| jtag_controller | 206 |
| majority_voter | N/A |


#### Synthesis Plots

- ![Cell Count Histogram](plots/cell_count_histogram.png)
- ![Wire Count Histogram](plots/wire_count_histogram.png)
- ![Memory Count Histogram](plots/memory_count_histogram.png)
- ![Top Cell Types](plots/cell_type_histogram.png)
\n## Conclusion\n\nThis dataset provides a diverse collection of Verilog modules that represent various aspects of digital design:\n\n1. **Design Complexity**: The dataset includes 39 simple (0-50 lines), 80 medium (51-200 lines), and 19 complex (>200 lines) modules, offering a varied set for analysis and research purposes.\n\n2. **Design Patterns**: Common Verilog constructs such as if_else (90.6%), for_loop (80.4%), case (40.6%) are frequently used (5 distinct patterns observed), indicating that the dataset reflects typical coding practices.\n\n3. **Parameterization**: An average of 2.75 parameters per module suggests that many designs are configurable and promote reusability.\n\n4. **Interface Complexity**: With an average of 11.20 ports per module, the designs demonstrate a range of interface complexities suitable for diverse applications.\n\n5. **Synthesis Metrics**: Available synthesis statistics (e.g., an average of 1645.76 cells for 114 successfully synthesized modules with cell data) provide insights into the hardware implications and implementation styles. Detailed metrics are available in the synthesis section.\n\nThis dataset is well-suited for research in areas such as:
- RTL design patterns and best practices
- Code complexity analysis and prediction
- Design automation, synthesis, and optimization techniques
- Advanced verification and testing methodologies
- Design reuse strategies and parameterization effectiveness
- Benchmarking for synthesis tools and hardware cost analysis
