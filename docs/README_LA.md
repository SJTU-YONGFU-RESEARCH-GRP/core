# Logic Analyzer

A parameterized logic analyzer module for debugging digital designs. This module can capture multiple channels of data with configurable trigger conditions.

## Features

- Configurable number of channels, sample depth, and sample width
- Multiple trigger modes: equal, not equal, rising edge, falling edge
- Channel masking to select which channels to monitor
- Trigger masking to select which bits to compare for triggering
- Status signals for trigger, capture, and buffer full conditions
- Simple read interface for captured data

## Parameters

- `CHANNEL_COUNT`: Number of input channels (default: 32)
- `SAMPLE_DEPTH`: Number of samples to capture (default: 1024)
- `SAMPLE_WIDTH`: Number of bits per sample (default: 1)
- `TRIGGER_WIDTH`: Number of bits used for trigger comparison (default: 8)

## Usage

### Integration

```verilog
logic_analyzer #(
    .CHANNEL_COUNT(8),
    .SAMPLE_DEPTH(512),
    .SAMPLE_WIDTH(1),
    .TRIGGER_WIDTH(8)
) my_analyzer (
    .clk(system_clk),
    .rst_n(reset_n),
    .probe_in(signals_to_monitor),
    .arm(arm_signal),
    .force_trigger(force_trig),
    .channel_mask(8'hFF),        // All channels active
    .trigger_value(8'hA5),       // Value to trigger on
    .trigger_mask(8'hFF),        // All bits considered in trigger
    .trigger_mode(2'b00),        // Equal mode
    .trigger_channel(8'h01),     // Channel 0 is trigger source
    .triggered(trig_status),
    .capturing(cap_status),
    .buffer_full(full_status),
    .read_en(read_enable),
    .read_addr(read_address),
    .read_data(captured_data)
);
```

### Operation

1. **Configure**: Set the channel mask, trigger value, trigger mask, trigger mode, and trigger channel.
2. **Arm**: Assert the `arm` signal for at least one clock cycle to arm the trigger.
3. **Wait**: The module will begin capturing samples and wait for the trigger condition.
4. **Trigger**: When the trigger condition is met (or `force_trigger` is asserted), the module will capture until the buffer is full.
5. **Read**: After `buffer_full` is asserted, read back the captured data by providing a read address and asserting `read_en`.

## Trigger Modes

- `2'b00`: Equal - Trigger when masked value equals trigger value
- `2'b01`: Not Equal - Trigger when masked value does not equal trigger value
- `2'b10`: Rising Edge - Trigger when masked value increases
- `2'b11`: Falling Edge - Trigger when masked value decreases

## Verilator Testbench

The `testbench` directory contains a Verilator testbench to simulate and test the logic analyzer module.

### Running the Testbench

```bash
cd testbench
make
```

This will:
1. Verilate the design
2. Compile the testbench
3. Run the simulation
4. Generate a waveform file (`waveform.vcd`)

To view the generated waveform:

```bash
make view
```

## Example Test Scenarios

The testbench demonstrates:
1. Arming the logic analyzer
2. Generating sample data until a trigger condition is met
3. Reading back captured data
4. Testing forced trigger functionality 