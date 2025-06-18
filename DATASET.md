# Verilog Dataset Analysis Report

## Dataset Overview

The dataset contains 137 Verilog modules across 24 different categories, providing a comprehensive collection of digital design components.

### Module Distribution by Category

![Module Distribution](plots/module_distribution.png)

### Synchronous vs Asynchronous Designs

- Synchronous Designs: 115
- Asynchronous Designs: 22

## Code Metrics

### Average Metrics per Module
- Lines of Code: 112.19
- Parameters: 2.77
- Ports: 11.08

### Module Complexity Distribution

![Complexity Distribution](plots/complexity_distribution.png)

- Simple (0-50 lines): 38
- Medium (51-200 lines): 81
- Complex (>200 lines): 18

## Design Patterns

![Design Patterns](plots/design_patterns.png)

| Pattern | Count | Percentage |
|---------|-------|------------|
| generate | 30 | 21.9% |
| for_loop | 110 | 80.3% |
| case | 56 | 40.9% |
| if_else | 124 | 90.5% |
| while_loop | 2 | 1.5% |

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
- filters: 2 modules
- io: 2 modules
- test: 2 modules
- encryption: 1 modules
- fsm: 1 modules
- voters: 1 modules


## Synthesis Statistics (Yosys)

The following table summarizes the gate (cell) count, wire count, memory countfor each module as reported by Yosys synthesis:

| Module | Gate/Cell Count | Wire Count | Memory Count |
|--------|-----------------|------------|--------------|
| configurable_brent_kung_adder | 160 | 0 | 0 |
| configurable_carry_lookahead_adder | 104 | 0 | 0 |
| configurable_carry_select_adder | 88 | 0 | 0 |
| configurable_carry_skip_adder | 226 | 0 | 0 |
| configurable_conditional_sum_adder | 68 | 0 | 0 |
| configurable_kogge_stone_adder | 549 | 0 | 0 |
| alu | 353 | 0 | 0 |
| configurable_comparator | 109 | 0 | 0 |
| arbiter | 19 | 0 | 0 |
| arbiter_rr | 82 | 0 | 0 |
| fair_priority_arbiter | 147 | 0 | 0 |
| matrix_arbiter | 175 | 0 | 0 |
| bsg_async_credit_counter | 15 | 0 | 0 |
| clock_domain_crossing | 79 | 0 | 0 |
| clock_domain_crossing_fifo | 1758 | 0 | 0 |
| handshake_synchronizer | 78 | 0 | 0 |
| multi_flop_synchronizer | 2 | 0 | 0 |
| binary_to_gray | 3 | 0 | 0 |
| configurable_priority_encoder | 27 | 0 | 0 |
| gray_to_binary | 3 | 0 | 0 |
| hamming_code | 57 | 0 | 0 |
| parameterized_crc_generator | 50 | 0 | 0 |
| parameterized_scrambler | 13 | 0 | 0 |
| priority_encoder | 27 | 0 | 0 |
| ahb_lite_master | 518 | 0 | 0 |
| basic_spi_master | 156 | 0 | 0 |
| final_spi_master | 162 | 0 | 0 |
| fixed_spi_master | 157 | 0 | 0 |
| parameterized_deserializer | 87 | 0 | 0 |
| parameterized_i2c_master | 413 | 0 | 0 |
| parameterized_serdes | 107 | 0 | 0 |
| parameterized_spi_master | 180 | 0 | 0 |
| parameterized_uart_rx | 598 | 0 | 0 |
| parameterized_uart_tx | 109 | 0 | 0 |
| simple_spi_master | 166 | 0 | 0 |
| spi_master | 161 | 0 | 0 |
| cordic | 846 | 0 | 0 |
| cordic_core | 4045 | 0 | 0 |
| sine_cosine_generator | 277 | 0 | 0 |
| configurable_clz_clo | 490 | 0 | 0 |
| gray_counter | 36 | 0 | 0 |
| johnson_counter | 9 | 0 | 0 |
| leading_zero_counter | 165 | 0 | 0 |
| loadable_updown_counter | 77 | 0 | 0 |
| parameterized_decade_counter | 18 | 0 | 0 |
| parameterized_gray_counter | 12 | 0 | 0 |
| parameterized_johnson_counter | 5 | 0 | 0 |
| parameterized_johnson_updown_counter | 10 | 0 | 0 |
| parameterized_loadable_counter | 33 | 0 | 0 |
| parameterized_onehot_counter | 15 | 0 | 0 |
| parameterized_ring_counter | 4 | 0 | 0 |
| parameterized_self_correcting_counter | 23 | 0 | 0 |
| parameterized_sync_reset_counter | 36 | 0 | 0 |
| parameterized_updown_counter | 35 | 0 | 0 |
| logic_analyzer | 104318 | 0 | 0 |
| performance_counter | 1504 | 0 | 0 |
| true_random_generator | 424 | 0 | 0 |
| async_fifo | 504 | 0 | 0 |
| barrel_shifter_fifo | 4367 | 0 | 0 |
| bidirectional_fifo | 747 | 0 | 0 |
| cache_fifo | 10770 | 0 | 0 |
| circular_buffer_fifo | 644 | 0 | 0 |
| configurable_param_fifo | 400 | 0 | 0 |
| configurable_sync_fifo | 525 | 0 | 0 |
| credit_based_fifo | 555 | 0 | 0 |
| dual_clock_fifo | 466 | 0 | 0 |
| elastic_buffer | 270 | 0 | 0 |
| fifo | 488 | 0 | 0 |
| fwft_fifo | 388 | 0 | 0 |
| memory_mapped_fifo | 1945 | 0 | 0 |
| multi_ported_fifo | 1394 | 0 | 0 |
| parameterized_priority_queue | 1826 | 0 | 0 |
| pipelined_fifo | 144 | 0 | 0 |
| showahead_fifo | 499 | 0 | 0 |
| skid_buffer | 46 | 0 | 0 |
| smart_fifo | 1268 | 0 | 0 |
| sync_fifo | 380 | 0 | 0 |
| configurable_fir_filter | 1403 | 0 | 0 |
| fir_filter | 296 | 0 | 0 |
| sequence_detector_fsm | 61 | 0 | 0 |
| axi_lite_master | 204 | 0 | 0 |
| axi_stream_interface | 0 | 0 | 0 |
| pcie_endpoint | 405 | 0 | 0 |
| wishbone_master | 229 | 0 | 0 |
| dma_controller | 2059 | 0 | 0 |
| gpio_controller | 607 | 0 | 0 |
| fixed_point_sqrt | 197 | 0 | 0 |
| floating_point_adder | 2195 | 0 | 0 |
| non_restoring_divider | 188 | 0 | 0 |
| ddr_controller | 1586 | 0 | 0 |
| dual_port_ram | 609 | 0 | 0 |
| memory_controller | 25734 | 0 | 0 |
| parameterized_cam | 574 | 0 | 0 |
| booth_multiplier | 450 | 0 | 0 |
| configurable_mult | 652 | 0 | 0 |
| radix4_booth_multiplier | 462 | 0 | 0 |
| configurable_mesh_router | 5291 | 0 | 0 |
| crossbar_switch | 128 | 0 | 0 |
| mesh_router | 2142 | 0 | 0 |
| network_interface | 211 | 0 | 0 |
| network_interface_cdc | 284 | 0 | 0 |
| clock_divider | 1632 | 0 | 0 |
| clock_gating | 3 | 0 | 0 |
| parameterized_clock_gating | 5 | 0 | 0 |
| parameterized_freq_divider | 3918 | 0 | 0 |
| power_domain_controller | 201 | 0 | 0 |
| barrel_rotator | 194 | 0 | 0 |
| barrel_shifter | 827 | 0 | 0 |
| bidirectional_shift_register | 26 | 0 | 0 |
| dual_edge_register | 33 | 0 | 0 |
| lfsr | 20 | 0 | 0 |
| onehot_decoder_register | 46 | 0 | 0 |
| parameterized_barrel_rotator | 528 | 0 | 0 |
| parameterized_rotation_sipo | 1 | 0 | 0 |
| piso_register | 16 | 0 | 0 |
| register_file | 3191 | 0 | 0 |
| scan_register | 32 | 0 | 0 |
| shadow_register | 129 | 0 | 0 |
| shift_register_left | 17 | 0 | 0 |
| shift_register_right | 17 | 0 | 0 |
| sipo_register | 25 | 0 | 0 |
| siso_register | 8 | 0 | 0 |
| sync_preset_register | 27 | 0 | 0 |
| toggle_register | 25 | 0 | 0 |
| universal_shift_register | 59 | 0 | 0 |
| configurable_lfsr | 32 | 0 | 0 |
| configurable_prng | 69 | 0 | 0 |
| digital_thermometer_controller | 104 | 0 | 0 |
| multi_phase_pwm_controller | 552 | 0 | 0 |
| parameterized_dds | 17879 | 0 | 0 |
| parameterized_fft | 10629 | 0 | 0 |
| parameterized_pwm | 232 | 0 | 0 |
| pulse_width_detector | 90 | 0 | 0 |
| pwm_generator | 119 | 0 | 0 |
| bist_controller | 496 | 0 | 0 |
| jtag_controller | 206 | 0 | 0 |
| majority_voter | 90 | 0 | 0 |

- **Average Gate/Cell Count:** 1711.38
- **Average Wire Count:** 0.00
- **Average Memory Count:** 0.00

### Most Common Cell Types (All Modules)

| Cell Type | Total Count |
|-----------|------------|
| ANDNOT | 70203 |
| OR | 66965 |
| DFFE_PP | 47942 |
| MUX | 16563 |
| XOR | 7428 |
| DFFE_PN0P | 4827 |
| NOT | 3890 |
| NAND | 3747 |
| NOR | 2898 |
| ORNOT | 2896 |
| XNOR | 2641 |
| AND | 2007 |
| SDFFCE_PN0P | 1088 |
| DFF_PN0 | 840 |
| SDFFE_PN0P | 89 |
| DFFE_PN1P | 66 |
| DFFE_PN0N | 60 |
| SDFFE_PN1P | 52 |
| DFFE_NN0P | 40 |
| DFF_P | 35 |
| SDFFE_PN0N | 32 |
| DFFE_PP0P | 30 |
| SDFFE_PP0P | 19 |
| DFF_PN1 | 18 |
| SDFF_PN0 | 11 |
| print | 10 |
| DFF_PP0 | 7 |
| DFFE_NN0N | 4 |
| DFFE_PN1N | 3 |
| DLATCH_N | 2 |
| SDFFE_PP1P | 1 |
| SDFF_PP0 | 1 |
| SDFF_PP1 | 1 |
| SDFF_PN1 | 1 |
| DFF_NN0 | 1 |
| DFFE_NN1N | 1 |


#### Synthesis Plots

- ![Cell Count Histogram](plots/cell_count_histogram.png)
- ![Wire Count Histogram](plots/wire_count_histogram.png)
- ![Memory Count Histogram](plots/memory_count_histogram.png)
- ![Top Cell Types](plots/cell_type_histogram.png)

## Conclusion

This dataset provides a diverse collection of Verilog modules that represent various aspects of digital design:

1. **Design Complexity**: The dataset includes 38 simple (0-50 lines), 81 medium (51-200 lines), and 18 complex (>200 lines) modules, offering a varied set for analysis and research purposes.

2. **Design Patterns**: Common Verilog constructs such as if_else (90.5%), for_loop (80.3%), case (40.9%) are frequently used (5 distinct patterns observed), indicating that the dataset reflects typical coding practices.

3. **Parameterization**: An average of 2.77 parameters per module suggests that many designs are configurable and promote reusability.

4. **Interface Complexity**: With an average of 11.08 ports per module, the designs demonstrate a range of interface complexities suitable for diverse applications.

5. **Synthesis Metrics**: Available synthesis statistics (e.g., an average of 1711.38 cells for 137 successfully synthesized modules with cell data) provide insights into the hardware implications and implementation styles. Detailed metrics are available in the synthesis section.

This dataset is well-suited for research in areas such as:
- RTL design patterns and best practices
- Code complexity analysis and prediction
- Design automation, synthesis, and optimization techniques
- Advanced verification and testing methodologies
- Design reuse strategies and parameterization effectiveness
- Benchmarking for synthesis tools and hardware cost analysis
