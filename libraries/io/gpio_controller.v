module gpio_controller #(
    parameter PIN_COUNT = 32,
    parameter SUPPORT_INTERRUPTS = 1
)(
    // Global signals
    input  wire                   clk,
    input  wire                   rst_n,
    
    // GPIO pins (bidirectional)
    inout  wire [PIN_COUNT-1:0]   gpio_pins,
    
    // Control interface
    input  wire [PIN_COUNT-1:0]   gpio_dir,      // 0=input, 1=output
    input  wire [PIN_COUNT-1:0]   gpio_out,      // Output values
    output wire [PIN_COUNT-1:0]   gpio_in,       // Input values
    
    // Interrupt control (optional)
    input  wire [PIN_COUNT-1:0]   int_enable,    // Enable interrupts per pin
    input  wire [PIN_COUNT-1:0]   int_type,      // 0=level, 1=edge
    input  wire [PIN_COUNT-1:0]   int_polarity,  // 0=low/falling, 1=high/rising
    output wire [PIN_COUNT-1:0]   int_status,    // Interrupt status
    input  wire [PIN_COUNT-1:0]   int_clear,     // Clear interrupts
    output wire                   int_out        // Interrupt output
);

    // Input synchronizers to prevent metastability
    reg [PIN_COUNT-1:0] gpio_in_sync1;
    reg [PIN_COUNT-1:0] gpio_in_sync2;
    
    // Edge detection registers
    reg [PIN_COUNT-1:0] gpio_in_prev;
    wire [PIN_COUNT-1:0] rising_edge;
    wire [PIN_COUNT-1:0] falling_edge;
    
    // Interrupt handling
    reg [PIN_COUNT-1:0] int_status_reg;
    
    // Generate bidirectional pins
    genvar i;
    generate
        for (i = 0; i < PIN_COUNT; i = i + 1) begin : pin_gen
            assign gpio_pins[i] = gpio_dir[i] ? gpio_out[i] : 1'bz;
            assign gpio_in[i] = gpio_pins[i];
        end
    endgenerate
    
    // Detect rising and falling edges
    assign rising_edge = ~gpio_in_prev & gpio_in_sync2;
    assign falling_edge = gpio_in_prev & ~gpio_in_sync2;
    
    // Input synchronization and edge detection
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            gpio_in_sync1 <= 0;
            gpio_in_sync2 <= 0;
            gpio_in_prev <= 0;
        end else begin
            gpio_in_sync1 <= gpio_in;
            gpio_in_sync2 <= gpio_in_sync1;
            gpio_in_prev <= gpio_in_sync2;
        end
    end
    
    // Interrupt logic (only if SUPPORT_INTERRUPTS=1)
    generate
        if (SUPPORT_INTERRUPTS) begin : int_logic
            // Interrupt output
            assign int_out = |int_status_reg;
            assign int_status = int_status_reg;
            
            // Interrupt handling
            always @(posedge clk or negedge rst_n) begin
                if (!rst_n) begin
                    int_status_reg <= 0;
                end else begin
                    for (int j = 0; j < PIN_COUNT; j = j + 1) begin
                        if (int_clear[j]) begin
                            // Clear interrupt if requested
                            int_status_reg[j] <= 1'b0;
                        end else if (int_enable[j]) begin
                            if (int_type[j]) begin
                                // Edge-triggered interrupts
                                if ((int_polarity[j] && rising_edge[j]) || 
                                    (!int_polarity[j] && falling_edge[j])) begin
                                    int_status_reg[j] <= 1'b1;
                                end
                            end else begin
                                // Level-triggered interrupts
                                if ((int_polarity[j] && gpio_in_sync2[j]) || 
                                    (!int_polarity[j] && !gpio_in_sync2[j])) begin
                                    int_status_reg[j] <= 1'b1;
                                end
                            end
                        end
                    end
                end
            end
        end else begin : no_int
            // No interrupt support
            assign int_out = 1'b0;
            assign int_status = {PIN_COUNT{1'b0}};
        end
    endgenerate

endmodule 