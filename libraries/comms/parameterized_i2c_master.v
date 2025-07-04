/*
 * Parameterized I2C Master Controller
 * 
 * This module implements a configurable I2C master interface with the following features:
 * - Configurable system clock frequency
 * - Configurable I2C bus speed (standard mode 100kHz, fast mode 400kHz, etc.)
 * - Support for start/stop condition generation
 * - Support for 7-bit addressing
 * - Read/write operations with acknowledgement handling
 * - Busy status indication
 * 
 * Parameters:
 * - CLK_FREQ: System clock frequency in Hz
 * - I2C_FREQ: I2C bus frequency in Hz (default: 100kHz for standard mode)
 */

/* verilator lint_off MULTIDRIVEN */
module parameterized_i2c_master #(
    parameter CLK_FREQ = 50000000,  // 50 MHz default system clock
    parameter I2C_FREQ = 100000     // 100 kHz default I2C clock (standard mode)
)(
    // System interface
    input  wire        clk,         // System clock
    input  wire        rst_n,       // Active low reset
    
    // Control interface
    input  wire        start,       // Start transaction
    input  wire        stop,        // Stop transaction
    input  wire        read,        // Read operation (0 for write)
    input  wire        write,       // Write operation (0 for read)
    input  wire [7:0]  data_in,     // Data to transmit
    input  wire [6:0]  addr,        // 7-bit slave address
    
    // Status interface
    output reg         busy,        // Controller is busy
    output reg         done,        // Transaction complete
    output reg         ack_error,   // Slave did not acknowledge
    output reg  [7:0]  data_out,    // Received data
    
    // I2C interface
    output wire        scl,         // I2C clock (generated by master)
    inout  wire        sda,         // I2C data (bidirectional)
    
    // Debug interface
    output reg [3:0]   state,       // Current state for debugging
    output reg [1:0]   phase,       // Current phase for debugging
    output wire        scl_internal_debug, // Internal SCL value for debugging
    output wire        sda_internal_debug, // Internal SDA value for debugging
    output reg [7:0]   shift_reg_debug,  // Shift register value for debugging
    output reg [2:0]   bit_counter_debug // Bit counter value for debugging
);

    // Calculate the SCL clock divider value based on parameters
    localparam integer CLOCK_DIVIDER = CLK_FREQ / (I2C_FREQ * 4);
    localparam integer DIVIDER_WIDTH = $clog2(CLOCK_DIVIDER + 1);
    
    // I2C controller states
    localparam IDLE        = 4'b0000;
    localparam START       = 4'b0001;
    localparam ADDR        = 4'b0010;
    localparam ACK_ADDR    = 4'b0011;
    localparam WRITE_DATA  = 4'b0100;
    localparam ACK_WRITE   = 4'b0101;
    localparam READ_DATA   = 4'b0110;
    localparam ACK_READ    = 4'b0111;
    localparam STOP        = 4'b1000;
    
    // I2C bit phases
    localparam SCL_LOW     = 2'b00;  // SCL low phase
    localparam SCL_RISING  = 2'b01;  // SCL rising edge
    localparam SCL_HIGH    = 2'b10;  // SCL high phase
    localparam SCL_FALLING = 2'b11;  // SCL falling edge
    
    // Internal registers
    reg [DIVIDER_WIDTH-1:0] divider_counter;   // Clock divider counter
    reg        scl_internal;                   // SCL output value (1 = high-Z, 0 = drive low)
    reg        sda_internal;                   // SDA output value (1 = high-Z, 0 = drive low)
    reg        cmd_read;                       // Latched read command
    reg        cmd_write;                      // Latched write command
    
    // Open-drain outputs - only drive low, never high
    assign scl = (scl_internal) ? 1'bz : 1'b0;
    assign sda = (sda_internal) ? 1'bz : 1'b0;
    
    // Debug outputs
    assign scl_internal_debug = scl_internal;
    assign sda_internal_debug = sda_internal;
    
    // I2C state machine implementation
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            // Reset all registers
            state           <= IDLE;
            phase           <= SCL_LOW;
            divider_counter <= (CLOCK_DIVIDER - 1);
            bit_counter_debug <= 3'd7;               // MSB first
            shift_reg_debug   <= 8'h00;
            scl_internal    <= 1'b1;            // SCL released (idle high)
            sda_internal    <= 1'b1;            // SDA released (idle high)
            busy            <= 1'b0;
            done            <= 1'b0;
            ack_error       <= 1'b0;
            data_out        <= 8'h00;
            cmd_read        <= 1'b0;
            cmd_write       <= 1'b0;
        end else begin
            // Default signal assignments
            done <= 1'b0;  // Done is pulse signal
            
            // Clock divider for I2C timing
            if (divider_counter > 0) begin
                divider_counter <= divider_counter - 1'b1;
            end else begin
                // Reset divider counter for next phase
                divider_counter <= (CLOCK_DIVIDER - 1);
                
                // Handle phase sequencing
                case (phase)
                    SCL_LOW:    phase <= SCL_RISING;
                    SCL_RISING: phase <= SCL_HIGH;
                    SCL_HIGH:   phase <= SCL_FALLING;
                    SCL_FALLING: phase <= SCL_LOW;
                    default:    phase <= SCL_LOW;
                endcase
                
                // State machine
                case (state)
                    IDLE: begin
                        // Default signals in IDLE
                        scl_internal <= 1'b1;  // SCL released (idle high)
                        sda_internal <= 1'b1;  // SDA released (idle high)
                        busy        <= 1'b0;
                        
                        // Handle new transaction request
                        if (start) begin
                            state         <= START;
                            busy          <= 1'b1;
                            ack_error     <= 1'b0;
                            bit_counter_debug <= 3'd7;  // MSB first
                            // Prepare address+R/W bit
                            shift_reg_debug <= {addr, read};
                            cmd_read      <= read;
                            cmd_write     <= write;
                        end
                    end
                    
                    START: begin
                        busy <= 1'b1;
                        
                        case (phase)
                            SCL_LOW: begin
                                // SCL low, SDA high (if previously low)
                                scl_internal <= 1'b0;
                                sda_internal <= 1'b1;
                            end
                            SCL_RISING: begin
                                // SCL rising, SDA remains high
                                scl_internal <= 1'b1;
                                sda_internal <= 1'b1;
                            end
                            SCL_HIGH: begin
                                // START condition: SDA goes low while SCL is high
                                scl_internal <= 1'b1;
                                sda_internal <= 1'b0;
                                // Prepare address with R/W bit for next state
                                if (cmd_read) begin
                                    shift_reg_debug <= {addr, 1'b1};  // Read operation: addr + R bit (1)
                                end else begin
                                    shift_reg_debug <= {addr, 1'b0};  // Write operation: addr + W bit (0)
                                end
                                bit_counter_debug <= 3'd7;  // Start from MSB
                            end
                            SCL_FALLING: begin
                                // Transition to ADDR state 
                                scl_internal <= 1'b0;
                                sda_internal <= 1'b0; // Keep SDA low for MSB of address
                                state <= ADDR;
                            end
                        endcase
                    end
                    
                    ADDR: begin
                        busy <= 1'b1;
                        
                        case (phase)
                            SCL_LOW: begin
                                scl_internal <= 1'b0;
                                // Set SDA for the current bit to transmit
                                sda_internal <= shift_reg_debug[7];  // MSB first
                            end
                            SCL_RISING: begin
                                scl_internal <= 1'b1;
                                // SDA remains unchanged
                            end
                            SCL_HIGH: begin
                                // SCL high, data bit sampled by slave
                                scl_internal <= 1'b1;
                            end
                            SCL_FALLING: begin
                                // Shift data & move to next bit
                                scl_internal <= 1'b0;
                                
                                if (bit_counter_debug > 0) begin
                                    bit_counter_debug <= bit_counter_debug - 1'b1;
                                    shift_reg_debug <= {shift_reg_debug[6:0], 1'b0};  // Shift left
                                end else begin
                                    // Address sent, prepare for ACK
                                    state <= ACK_ADDR;
                                    // Release SDA for slave to drive ACK bit
                                    sda_internal <= 1'b1;
                                end
                            end
                        endcase
                    end
                    
                    ACK_ADDR: begin
                        busy <= 1'b1;
                        
                        case (phase)
                            SCL_LOW: begin
                                // Prepare for ACK - SCL low, SDA released
                                scl_internal <= 1'b0;
                                sda_internal <= 1'b1;  // Release SDA for slave ACK
                            end
                            SCL_RISING: begin
                                // SCL rising, SDA released
                                scl_internal <= 1'b1;
                                sda_internal <= 1'b1;
                            end
                            SCL_HIGH: begin
                                // Sample ACK/NACK during SCL high
                                scl_internal <= 1'b1;
                                
                                // Check for ACK (SDA low from slave) or NACK (SDA high/floating)
                                if (sda) begin
                                    // NACK received, we're done
                                    ack_error <= 1'b1;
                                    state <= STOP;
                                end
                            end
                            SCL_FALLING: begin
                                // SCL falling 
                                scl_internal <= 1'b0;
                                
                                // If no NACK detected during SCL_HIGH, proceed with data phase
                                if (!ack_error) begin
                                    // ACK received, decide next state
                                    if (cmd_read) begin
                                        // For read operation
                                        bit_counter_debug <= 3'd7;  // 8 bits to read
                                        state <= READ_DATA;
                                        sda_internal <= 1'b1;  // Release SDA for slave to drive
                                    end else begin
                                        // For write operation
                                        bit_counter_debug <= 3'd7;  // 8 bits to write
                                        state <= WRITE_DATA;
                                        shift_reg_debug <= data_in;  // Load data to write
                                        sda_internal <= shift_reg_debug[7];  // MSB first
                                    end
                                end
                            end
                        endcase
                    end
                    
                    WRITE_DATA: begin
                        busy <= 1'b1;
                        
                        case (phase)
                            SCL_LOW: begin
                                // Set SDA for current data bit during SCL low
                                scl_internal <= 1'b0;
                                sda_internal <= shift_reg_debug[bit_counter_debug] ? 1'b1 : 1'b0;
                            end
                            SCL_RISING: begin
                                // SCL rising, keep SDA stable
                                scl_internal <= 1'b1;
                                // SDA remains the same
                            end
                            SCL_HIGH: begin
                                // SCL high, keep SDA stable
                                scl_internal <= 1'b1;
                                // SDA remains the same
                            end
                            SCL_FALLING: begin
                                // SCL falling, move to next bit or ACK
                                scl_internal <= 1'b0;
                                if (bit_counter_debug > 0) begin
                                    bit_counter_debug <= bit_counter_debug - 1'b1;
                                    // SDA for next bit will be set in the next SCL_LOW phase
                                end else begin
                                    // All bits sent, move to ACK
                                    state <= ACK_WRITE;
                                    sda_internal <= 1'b1;  // Release SDA for slave ACK
                                end
                            end
                        endcase
                    end
                    
                    ACK_WRITE: begin
                        busy <= 1'b1;
                        
                        case (phase)
                            SCL_LOW: begin
                                // SCL low, SDA released for slave ACK
                                scl_internal <= 1'b0;
                                sda_internal <= 1'b1;  // Release SDA for slave ACK
                            end
                            SCL_RISING: begin
                                // SCL rising
                                scl_internal <= 1'b1;
                                // SDA remains released
                            end
                            SCL_HIGH: begin
                                // Sample ACK during SCL high
                                scl_internal <= 1'b1;
                                ack_error <= sda;  // ACK = 0, NACK = 1
                                // SDA remains released
                            end
                            SCL_FALLING: begin
                                // Next state decision
                                scl_internal <= 1'b0;
                                if (stop || sda) begin
                                    // STOP requested or NACK received
                                    state <= STOP;
                                    sda_internal <= 1'b0;  // Prepare for STOP condition
                                end else if (cmd_write) begin
                                    // Another byte to write
                                    state <= WRITE_DATA;
                                    bit_counter_debug <= 3'd7;
                                    shift_reg_debug <= data_in;  // Load new data
                                    sda_internal <= data_in[7] ? 1'b1 : 1'b0;  // Prepare MSB
                                end else begin
                                    // No more data, go to STOP
                                    state <= STOP;
                                    sda_internal <= 1'b0;  // Prepare for STOP condition
                                end
                            end
                        endcase
                    end
                    
                    READ_DATA: begin
                        busy <= 1'b1;
                        
                        case (phase)
                            SCL_LOW: begin
                                // SCL low, SDA released for slave to drive
                                scl_internal <= 1'b0;
                                sda_internal <= 1'b1;  // Release SDA for slave
                            end
                            SCL_RISING: begin
                                // SCL rising
                                scl_internal <= 1'b1;
                                // SDA remains released
                            end
                            SCL_HIGH: begin
                                // Sample data during SCL high
                                scl_internal <= 1'b1;
                                // Sample bit directly into shift register at the correct position
                                shift_reg_debug[bit_counter_debug] <= sda;
                            end
                            SCL_FALLING: begin
                                // Next bit or move to ACK
                                scl_internal <= 1'b0;
                                if (bit_counter_debug > 0) begin
                                    bit_counter_debug <= bit_counter_debug - 1'b1;
                                    // SDA remains released for next bit
                                end else begin
                                    // All bits read, move to ACK
                                    state <= ACK_READ;
                                    data_out <= shift_reg_debug;  // Save read data
                                    
                                    // Master sends ACK if more data expected, NACK if done
                                    sda_internal <= stop ? 1'b1 : 1'b0;  // NACK (1) or ACK (0)
                                end
                            end
                        endcase
                    end
                    
                    ACK_READ: begin
                        busy <= 1'b1;
                        
                        case (phase)
                            SCL_LOW: begin
                                // SCL low, SDA set for ACK/NACK
                                scl_internal <= 1'b0;
                                sda_internal <= stop ? 1'b1 : 1'b0;  // NACK or ACK
                            end
                            SCL_RISING: begin
                                // SCL rising
                                scl_internal <= 1'b1;
                                // SDA remains the same for ACK/NACK
                            end
                            SCL_HIGH: begin
                                // SCL high
                                scl_internal <= 1'b1;
                                // SDA remains the same for ACK/NACK
                            end
                            SCL_FALLING: begin
                                // Move to next state
                                scl_internal <= 1'b0;
                                if (stop) begin
                                    // STOP requested
                                    state <= STOP;
                                    sda_internal <= 1'b0;  // Prepare for STOP condition
                                end else if (cmd_read) begin
                                    // Another byte to read
                                    state <= READ_DATA;
                                    bit_counter_debug <= 3'd7;
                                    sda_internal <= 1'b1;  // SDA released (idle high)
                                end else begin
                                    // No more data, go to STOP
                                    state <= STOP;
                                    sda_internal <= 1'b0;  // Prepare for STOP condition
                                end
                            end
                        endcase
                    end
                    
                    STOP: begin
                        busy <= 1'b1;
                        
                        case (phase)
                            SCL_LOW: begin
                                // Prepare for STOP: SCL low, SDA low
                                scl_internal <= 1'b0;
                                sda_internal <= 1'b0;
                            end
                            SCL_RISING: begin
                                // STOP sequence: SCL rises while SDA stays low
                                scl_internal <= 1'b1;
                                sda_internal <= 1'b0;
                            end
                            SCL_HIGH: begin
                                // STOP condition: SDA rises while SCL is high
                                scl_internal <= 1'b1;
                                sda_internal <= 1'b1;
                            end
                            SCL_FALLING: begin
                                // Transaction complete, back to IDLE
                                scl_internal <= 1'b1;  // Keep SCL high in idle
                                sda_internal <= 1'b1;  // Keep SDA high in idle
                                state <= IDLE;
                                done <= 1'b1;  // Signal completion
                                busy <= 1'b0;  // No longer busy
                            end
                        endcase
                    end
                    
                    default: begin
                        // Invalid state, go back to IDLE
                        state <= IDLE;
                        scl_internal <= 1'b1;
                        sda_internal <= 1'b1;
                        busy <= 1'b0;
                    end
                endcase
            end
        end
    end
    
endmodule 
/* verilator lint_on MULTIDRIVEN */ 