# Fair Priority Arbiter

## Overview
This module implements a parameterized priority arbiter with round-robin fairness. The arbiter is designed to handle multiple requesters, each with their own priority level, and grants access to one requester at a time based on both priority and fair round-robin scheduling.

## Features
- Parameterized design: configurable number of requesters and priority bit width
- Priority-based arbitration: grants access to the highest-priority requester
- Round-robin fairness: ensures fair access among requesters with equal priority
- Valid signal to indicate when a grant is active

## Parameters
- `NUM_REQUESTERS`: Number of requesters (default: 4)
- `PRIORITY_WIDTH`: Bit width of the priority values (default: 2)

## Interface
### Inputs
- `clk`: System clock
- `rst_n`: Active-low reset
- `request[NUM_REQUESTERS-1:0]`: Request signals from all requesters
- `priorities[NUM_REQUESTERS*PRIORITY_WIDTH-1:0]`: Concatenated priority values for all requesters

### Outputs
- `grant[NUM_REQUESTERS-1:0]`: One-hot encoded grant signals
- `grant_idx[$clog2(NUM_REQUESTERS)-1:0]`: Binary index of the granted requester
- `valid`: Indicates a valid grant is present

## Operation
1. The arbiter first looks at all active requests.
2. Starting from the position after the last granted request, it checks for the highest priority requester.
3. If multiple requesters have the same highest priority, it grants to the first one encountered in the round-robin order.
4. If no requests are active, no grant is given (valid = 0).

## Example Usage
```verilog
// Instantiate a fair priority arbiter with 8 requesters and 3-bit priorities
fair_priority_arbiter #(
    .NUM_REQUESTERS(8),
    .PRIORITY_WIDTH(3)
) arbiter_inst (
    .clk(system_clk),
    .rst_n(system_rst_n),
    .request(req_signals),
    .priorities(priority_values),
    .grant(grant_signals),
    .grant_idx(granted_index),
    .valid(grant_valid)
);
```

## Verification
The module has been verified using Verilator with a C++ testbench that checks:
- Basic priority-based arbitration
- Tie-breaking with equal priorities
- Round-robin fairness across multiple cycles 