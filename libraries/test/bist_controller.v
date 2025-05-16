module bist_controller #(
    parameter MEM_ADDR_WIDTH = 5,  // Reduced to 5 bits for faster testing
    parameter MEM_DATA_WIDTH = 32,
    parameter PATTERN_TYPE = "MARCH_C"  // Test pattern type
)(
    // Global signals
    input  wire                        clk,
    input  wire                        rst_n,
    
    // Control and status
    input  wire                        bist_start,
    output reg                         bist_done,
    output reg                         bist_pass,
    output reg  [31:0]                 error_count,
    output reg  [MEM_ADDR_WIDTH-1:0]   error_addr,
    
    // Memory interface
    output wire [MEM_ADDR_WIDTH-1:0]   mem_addr,
    output wire                        mem_write,
    output wire [MEM_DATA_WIDTH-1:0]   mem_wdata,
    input  wire [MEM_DATA_WIDTH-1:0]   mem_rdata,
    output wire                        mem_enable
);

    // State machine states
    localparam IDLE         = 4'd0;
    localparam INIT         = 4'd1;
    // MARCH C states (operations)
    localparam MARCH_UP_W0  = 4'd2;  // ⇑(w0)
    localparam MARCH_UP_R0W1 = 4'd3; // ⇑(r0,w1)
    localparam MARCH_UP_R1W0 = 4'd4; // ⇑(r1,w0)
    localparam MARCH_DOWN_R0W1 = 4'd5; // ⇓(r0,w1)
    localparam MARCH_DOWN_R1W0 = 4'd6; // ⇓(r1,w0)
    localparam MARCH_DOWN_R0 = 4'd7; // ⇓(r0)
    localparam DONE         = 4'd8;

    // Internal registers
    reg [3:0]                  state, next_state;
    reg [MEM_ADDR_WIDTH-1:0]   addr_counter;
    reg [MEM_ADDR_WIDTH-1:0]   max_addr;
    reg                        read_phase;
    reg                        write_phase;
    reg                        op_done;
    reg                        phase_complete;
    
    // March C algorithm
    // MARCH C: {⇑(w0); ⇑(r0,w1); ⇑(r1,w0); ⇓(r0,w1); ⇓(r1,w0); ⇓(r0)}
    
    // Output assignments
    assign mem_addr = addr_counter;
    assign mem_write = write_phase;
    assign mem_wdata = (state == MARCH_UP_W0 || state == MARCH_UP_R1W0 || state == MARCH_DOWN_R1W0) ? 
                     {MEM_DATA_WIDTH{1'b0}} : {MEM_DATA_WIDTH{1'b1}};
    assign mem_enable = (state != IDLE && state != DONE && state != INIT);
    
    // State machine - sequential part
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
            addr_counter <= 0;
            bist_done <= 0;
            bist_pass <= 0;
            error_count <= 0;
            error_addr <= 0;
            max_addr <= (1 << MEM_ADDR_WIDTH) - 1;
            read_phase <= 0;
            write_phase <= 0;
            op_done <= 0;
            phase_complete <= 0;
        end else begin
            state <= next_state;
            
            case (state)
                IDLE: begin
                    if (bist_start) begin
                        addr_counter <= 0;
                        error_count <= 0;
                        bist_done <= 0;
                        bist_pass <= 0;
                        read_phase <= 0;
                        write_phase <= 0;
                        phase_complete <= 0;
                    end
                end
                
                INIT: begin
                    addr_counter <= 0;
                    read_phase <= 0;
                    write_phase <= 0;
                    op_done <= 0;
                    phase_complete <= 0;
                end
                
                MARCH_UP_W0: begin
                    // Write 0 to all cells (up)
                    if (!phase_complete) begin
                        write_phase <= 1;
                        phase_complete <= 1;
                    end else begin
                        write_phase <= 0;
                        phase_complete <= 0;
                        
                        if (addr_counter == max_addr) begin
                            addr_counter <= 0;
                        end else begin
                            addr_counter <= addr_counter + 1;
                        end
                    end
                end
                
                MARCH_UP_R0W1: begin
                    // Read 0, write 1 (up)
                    if (!read_phase && !write_phase && !phase_complete) begin
                        // Start read phase
                        read_phase <= 1;
                    end else if (read_phase) begin
                        // Check read data and start write phase
                        read_phase <= 0;
                        
                        // Check for all zeros
                        if (mem_rdata != {MEM_DATA_WIDTH{1'b0}}) begin
                            error_count <= error_count + 1;
                            error_addr <= addr_counter;
                        end
                        
                        write_phase <= 1;
                    end else if (write_phase) begin
                        // End write phase, move to next address
                        write_phase <= 0;
                        phase_complete <= 1;
                    end else if (phase_complete) begin
                        // Move to next address
                        phase_complete <= 0;
                        
                        if (addr_counter == max_addr) begin
                            addr_counter <= 0;
                        end else begin
                            addr_counter <= addr_counter + 1;
                        end
                    end
                end
                
                MARCH_UP_R1W0: begin
                    // Read 1, write 0 (up)
                    if (!read_phase && !write_phase && !phase_complete) begin
                        // Start read phase
                        read_phase <= 1;
                    end else if (read_phase) begin
                        // Check read data and start write phase
                        read_phase <= 0;
                        
                        // Check for all ones
                        if (mem_rdata != {MEM_DATA_WIDTH{1'b1}}) begin
                            error_count <= error_count + 1;
                            error_addr <= addr_counter;
                        end
                        
                        write_phase <= 1;
                    end else if (write_phase) begin
                        // End write phase
                        write_phase <= 0;
                        phase_complete <= 1;
                    end else if (phase_complete) begin
                        // Move to next address
                        phase_complete <= 0;
                        
                        if (addr_counter == max_addr) begin
                            addr_counter <= max_addr; // Stay at max for transition to down
                        end else begin
                            addr_counter <= addr_counter + 1;
                        end
                    end
                end
                
                MARCH_DOWN_R0W1: begin
                    // Read 0, write 1 (down)
                    if (!read_phase && !write_phase && !phase_complete) begin
                        // Start read phase
                        read_phase <= 1;
                    end else if (read_phase) begin
                        // Check read data and start write phase
                        read_phase <= 0;
                        
                        // Check for all zeros
                        if (mem_rdata != {MEM_DATA_WIDTH{1'b0}}) begin
                            error_count <= error_count + 1;
                            error_addr <= addr_counter;
                        end
                        
                        write_phase <= 1;
                    end else if (write_phase) begin
                        // End write phase
                        write_phase <= 0;
                        phase_complete <= 1;
                    end else if (phase_complete) begin
                        // Move to next address
                        phase_complete <= 0;
                        
                        if (addr_counter == 0) begin
                            addr_counter <= 0; // Stay at 0 for next phase
                        end else begin
                            addr_counter <= addr_counter - 1;
                        end
                    end
                end
                
                MARCH_DOWN_R1W0: begin
                    // Read 1, write 0 (down)
                    if (!read_phase && !write_phase && !phase_complete) begin
                        // Start read phase
                        read_phase <= 1;
                    end else if (read_phase) begin
                        // Check read data and start write phase
                        read_phase <= 0;
                        
                        // Check for all ones
                        if (mem_rdata != {MEM_DATA_WIDTH{1'b1}}) begin
                            error_count <= error_count + 1;
                            error_addr <= addr_counter;
                        end
                        
                        write_phase <= 1;
                    end else if (write_phase) begin
                        // End write phase
                        write_phase <= 0;
                        phase_complete <= 1;
                    end else if (phase_complete) begin
                        // Move to next address
                        phase_complete <= 0;
                        
                        if (addr_counter == 0) begin
                            addr_counter <= 0; // Stay at 0 for next phase
                        end else begin
                            addr_counter <= addr_counter - 1;
                        end
                    end
                end
                
                MARCH_DOWN_R0: begin
                    // Read 0 (down)
                    if (!read_phase && !phase_complete) begin
                        // Start read phase
                        read_phase <= 1;
                    end else if (read_phase) begin
                        // Check read data
                        read_phase <= 0;
                        phase_complete <= 1;
                        
                        // Check for all zeros
                        if (mem_rdata != {MEM_DATA_WIDTH{1'b0}}) begin
                            error_count <= error_count + 1;
                            error_addr <= addr_counter;
                        end
                    end else if (phase_complete) begin
                        // Move to next address
                        phase_complete <= 0;
                        
                        if (addr_counter == 0) begin
                            addr_counter <= 0; // Stay at 0 for done state
                        end else begin
                            addr_counter <= addr_counter - 1;
                        end
                    end
                end
                
                DONE: begin
                    bist_done <= 1;
                    bist_pass <= (error_count == 0);
                end
                
                default: begin
                    // Do nothing for any undefined states
                end
            endcase
        end
    end
    
    // State machine - combinational part
    always @(*) begin
        next_state = state;
        
        case (state)
            IDLE: begin
                if (bist_start)
                    next_state = INIT;
            end
            
            INIT: begin
                next_state = MARCH_UP_W0;
            end
            
            MARCH_UP_W0: begin
                if (addr_counter == max_addr && phase_complete)
                    next_state = MARCH_UP_R0W1;
            end
            
            MARCH_UP_R0W1: begin
                if (addr_counter == max_addr && phase_complete)
                    next_state = MARCH_UP_R1W0;
            end
            
            MARCH_UP_R1W0: begin
                if (addr_counter == max_addr && phase_complete)
                    next_state = MARCH_DOWN_R0W1;
            end
            
            MARCH_DOWN_R0W1: begin
                if (addr_counter == 0 && phase_complete)
                    next_state = MARCH_DOWN_R1W0;
            end
            
            MARCH_DOWN_R1W0: begin
                if (addr_counter == 0 && phase_complete)
                    next_state = MARCH_DOWN_R0;
            end
            
            MARCH_DOWN_R0: begin
                if (addr_counter == 0 && phase_complete)
                    next_state = DONE;
            end
            
            DONE: begin
                if (!bist_start)
                    next_state = IDLE;
            end
            
            default: begin
                next_state = IDLE;
            end
        endcase
    end

endmodule 