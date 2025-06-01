module true_random_generator #(
    parameter DATA_WIDTH = 32,
    parameter USE_RINGOSCILLATOR = 1
)(
    // Global signals
    input  wire                  clk,
    input  wire                  rst_n,
    
    // Control signals
    input  wire                  enable,
    input  wire                  read_next,
    output wire                  data_valid,
    
    // Data output
    output wire [DATA_WIDTH-1:0] random_data,
    
    // Health monitoring
    output wire                  entropy_low,
    output wire                  test_failed
);

    // Internal signals
    reg [DATA_WIDTH-1:0] lfsr_reg;
    reg [DATA_WIDTH-1:0] entropy_pool;
    reg [DATA_WIDTH-1:0] entropy_pool2;  // Additional entropy pool
    reg                  data_valid_reg;
    reg [7:0]            health_counter;
    
    // State machine
    localparam IDLE        = 2'b00;
    localparam COLLECTING  = 2'b01;
    localparam READY       = 2'b10;
    localparam TEST        = 2'b11;
    
    reg [1:0] state, next_state;
    
    // Ring oscillator (synthesized as an odd number of inverters in a loop)
    // Note: This is a simplified model - in actual hardware, this would be
    // implemented using structural primitives specific to the target FPGA/ASIC
    generate
        if (USE_RINGOSCILLATOR) begin : gen_ring_osc
            /* verilator lint_off UNOPTFLAT */
            (* dont_touch = "true" *) wire [5:0] inv_chain;
            /* verilator lint_on UNOPTFLAT */
            (* dont_touch = "true" *) reg  toggle_sampling;
            (* dont_touch = "true" *) reg  init_osc = 1'b1;  // Initial value to break circularity for simulation
            
            // Oscillator chain (synthesis will optimize if not protected)
            // Add init_osc to break circularity for simulation
            assign inv_chain[0] = ~(inv_chain[5] | init_osc);
            assign inv_chain[1] = ~inv_chain[0];
            assign inv_chain[2] = ~inv_chain[1];
            assign inv_chain[3] = ~inv_chain[2];
            assign inv_chain[4] = ~inv_chain[3];
            assign inv_chain[5] = ~inv_chain[4];
            
            // Deassert init after a few cycles
            always @(posedge clk) begin
                if (!rst_n)
                    init_osc <= 1'b1;
                else
                    init_osc <= 1'b0;
            end
            
            // Sample the oscillator output on clk edges
            always @(posedge clk) begin
                if (!rst_n) 
                    toggle_sampling <= 1'b0;
                else if (enable)
                    toggle_sampling <= inv_chain[5];
            end
            
            // Mix the oscillator bit into the entropy pool
            always @(posedge clk) begin
                if (!rst_n) 
                    entropy_pool <= {{(DATA_WIDTH-1){1'b0}}, 1'b1}; // Non-zero initialization
                else if (enable && state == COLLECTING)
                    entropy_pool <= {entropy_pool[DATA_WIDTH-2:0], toggle_sampling ^ entropy_pool[DATA_WIDTH-1]};
            end
            
            // Second entropy pool with different feedback
            always @(posedge clk) begin
                if (!rst_n) 
                    entropy_pool2 <= {DATA_WIDTH{1'b1}}; // Different initialization
                else if (enable && state == COLLECTING)
                    entropy_pool2 <= {entropy_pool2[0], entropy_pool2[DATA_WIDTH-1:1]} ^ 
                                    {toggle_sampling, {(DATA_WIDTH-1){1'b0}}};
            end
        end
        else begin : gen_lfsr_only
            // Without ring oscillator, use LFSR with more complex feedback
            // First entropy pool (Fibonacci style)
            always @(posedge clk) begin
                if (!rst_n) 
                    entropy_pool <= {{(DATA_WIDTH-1){1'b0}}, 1'b1}; // Non-zero initialization
                else if (enable && state == COLLECTING) begin
                    if (DATA_WIDTH == 32) begin
                        // 32-bit Fibonacci LFSR with more taps
                        entropy_pool <= {entropy_pool[DATA_WIDTH-2:0], 
                                        entropy_pool[31] ^ entropy_pool[30] ^ entropy_pool[29] ^ 
                                        entropy_pool[27] ^ entropy_pool[25] ^ entropy_pool[22] ^ 
                                        entropy_pool[19] ^ entropy_pool[15] ^ entropy_pool[10] ^ entropy_pool[5] ^ 
                                        entropy_pool[1] ^ entropy_pool[0]};
                    end
                    else begin
                        // Default LFSR for any width
                        entropy_pool <= {entropy_pool[DATA_WIDTH-2:0], 
                                        entropy_pool[DATA_WIDTH-1] ^ entropy_pool[DATA_WIDTH/2] ^ 
                                        entropy_pool[DATA_WIDTH/4] ^ entropy_pool[0]};
                    end
                end
            end
            
            // Second entropy pool (different direction shift)
            always @(posedge clk) begin
                if (!rst_n) 
                    entropy_pool2 <= {DATA_WIDTH{1'b1}}; // Different initialization
                else if (enable && state == COLLECTING) begin
                    if (DATA_WIDTH == 32) begin
                        // 32-bit LFSR with different taps, right shifting
                        entropy_pool2 <= {entropy_pool2[0], entropy_pool2[DATA_WIDTH-1:1]};
                        entropy_pool2[31] <= entropy_pool2[0] ^ entropy_pool2[3] ^ 
                                            entropy_pool2[7] ^ entropy_pool2[11] ^ 
                                            entropy_pool2[13] ^ entropy_pool2[21] ^ entropy_pool2[31];
                    end
                    else begin
                        // Default LFSR for any width
                        entropy_pool2 <= {entropy_pool2[0], entropy_pool2[DATA_WIDTH-1:1]};
                        entropy_pool2[DATA_WIDTH-1] <= entropy_pool2[0] ^ entropy_pool2[DATA_WIDTH/3];
                    end
                end
            end
        end
    endgenerate
    
    // LFSR for additional entropy (Galois type)
    always @(posedge clk) begin
        if (!rst_n) begin
            lfsr_reg <= 32'hABCDE971; // Better non-zero seed
        end
        else if (enable) begin
            if (DATA_WIDTH == 32) begin
                // 32-bit Galois LFSR polynomial: x^32 + x^31 + x^29 + x^25 + x^16 + x^11 + x^8 + x^6 + x^5 + x^1 + 1
                // This polynomial has maximum period
                lfsr_reg <= {lfsr_reg[30:0], 1'b0} ^ 
                          (lfsr_reg[31] ? 32'hA8000001 : 32'h0) ^
                          (lfsr_reg[30] ? 32'h40000800 : 32'h0) ^
                          (lfsr_reg[29] ? 32'h20000020 : 32'h0) ^
                          (lfsr_reg[28] ? 32'h00010000 : 32'h0);
            end
            else begin
                // Generic LFSR for any width
                lfsr_reg <= {lfsr_reg[DATA_WIDTH-2:0], 1'b0} ^ 
                          (lfsr_reg[DATA_WIDTH-1] ? {{(DATA_WIDTH-5){1'b0}}, 5'b10111} : {DATA_WIDTH{1'b0}});
            end
        end
    end
    
    // Extra mixing for improved bit distribution
    reg [DATA_WIDTH-1:0] mixed_output;
    
    always @(posedge clk) begin
        if (!rst_n) begin
            mixed_output <= {DATA_WIDTH{1'b0}};
        end
        else if (state == READY) begin
            // Complex bit mixing for better distribution
            mixed_output <= entropy_pool ^ entropy_pool2 ^ lfsr_reg ^ 
                          {lfsr_reg[15:0], lfsr_reg[31:16]} ^  // Swap halves
                          {entropy_pool[7:0], entropy_pool[15:8], entropy_pool[23:16], entropy_pool[31:24]}; // Byte swap
        end
    end
    
    // State machine logic - use only synchronous reset to fix SYNCASYNCNET warning
    always @(posedge clk) begin
        if (!rst_n) begin
            state <= IDLE;
        end
        else begin
            state <= next_state;
        end
    end
    
    // State machine transitions
    always @(*) begin
        case (state)
            IDLE: begin
                if (enable)
                    next_state = COLLECTING;
                else
                    next_state = IDLE;
            end
            
            COLLECTING: begin
                if (!enable)
                    next_state = IDLE;
                else if (health_counter >= 8'd64) // Collect more samples for better entropy
                    next_state = TEST;
                else
                    next_state = COLLECTING;
            end
            
            TEST: begin
                if (!enable)
                    next_state = IDLE;
                else
                    next_state = READY;
            end
            
            READY: begin
                if (!enable)
                    next_state = IDLE;
                else if (read_next)
                    next_state = COLLECTING;
                else
                    next_state = READY;
            end
            
            default: next_state = IDLE;
        endcase
    end
    
    // Collection counter - use only synchronous reset
    always @(posedge clk) begin
        if (!rst_n) begin
            health_counter <= 8'd0;
        end
        else if (state == COLLECTING) begin
            health_counter <= health_counter + 8'd1;
        end
        else if (state == IDLE) begin
            health_counter <= 8'd0;
        end
    end
    
    // Data valid logic - use only synchronous reset
    always @(posedge clk) begin
        if (!rst_n) begin
            data_valid_reg <= 1'b0;
        end
        else begin
            data_valid_reg <= (state == READY);
        end
    end
    
    // Combine entropy pool and LFSR for output
    assign random_data = (state == READY) ? mixed_output : {DATA_WIDTH{1'b0}};
    assign data_valid = data_valid_reg;
    
    // Simple health checks
    assign entropy_low = (health_counter < 8'd32) && (state != IDLE);
    
    // Basic statistical test (check if output is all 0s or all 1s)
    assign test_failed = (random_data == {DATA_WIDTH{1'b0}}) || (random_data == {DATA_WIDTH{1'b1}});
    
endmodule 