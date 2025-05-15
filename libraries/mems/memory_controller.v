module memory_controller #(
    parameter ADDR_WIDTH = 8,
    parameter DATA_WIDTH = 32,
    parameter MEM_DEPTH = 256,
    parameter BURST_LENGTH = 4,
    parameter READ_LATENCY = 2
)(
    input wire clk,
    input wire rst_n,
    
    // Command interface
    input wire cmd_valid,
    input wire [1:0] cmd_type, // 00: IDLE, 01: READ, 10: WRITE, 11: REFRESH
    input wire [ADDR_WIDTH-1:0] cmd_addr,
    output reg cmd_ready,
    
    // Write interface
    input wire write_valid,
    input wire [DATA_WIDTH-1:0] write_data,
    output reg write_ready,
    
    // Read interface
    output reg read_valid,
    output reg [DATA_WIDTH-1:0] read_data,
    input wire read_ready,
    
    // Status
    output reg busy,
    output reg [1:0] state
);

    // Internal memory (simplified - would typically interface with external memory)
    reg [DATA_WIDTH-1:0] memory [0:MEM_DEPTH-1];
    
    // State definitions
    localparam IDLE = 2'b00;
    localparam READ = 2'b01;
    localparam WRITE = 2'b10;
    localparam REFRESH = 2'b11;
    
    // Counters
    reg [$clog2(READ_LATENCY):0] latency_counter;
    reg [$clog2(BURST_LENGTH):0] burst_counter;
    
    // Address registers
    reg [ADDR_WIDTH-1:0] current_addr;
    
    // State machine
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
            cmd_ready <= 1'b1;
            write_ready <= 1'b0;
            read_valid <= 1'b0;
            read_data <= {DATA_WIDTH{1'b0}};
            busy <= 1'b0;
            latency_counter <= 0;
            burst_counter <= 0;
        end else begin
            case (state)
                IDLE: begin
                    busy <= 1'b0;
                    cmd_ready <= 1'b1;
                    write_ready <= 1'b0;
                    read_valid <= 1'b0;
                    
                    if (cmd_valid) begin
                        cmd_ready <= 1'b0;
                        current_addr <= cmd_addr;
                        busy <= 1'b1;
                        
                        case (cmd_type)
                            2'b01: begin // READ
                                state <= READ;
                                latency_counter <= READ_LATENCY[$clog2(READ_LATENCY):0];
                                burst_counter <= 0;
                            end
                            2'b10: begin // WRITE
                                state <= WRITE;
                                write_ready <= 1'b1;
                                burst_counter <= 0;
                            end
                            2'b11: begin // REFRESH
                                state <= REFRESH;
                            end
                            default: begin
                                state <= IDLE;
                            end
                        endcase
                    end
                end
                
                READ: begin
                    if (latency_counter > 0) begin
                        latency_counter <= latency_counter - 1;
                    end else begin
                        read_valid <= 1'b1;
                        read_data <= memory[current_addr + {{(ADDR_WIDTH-$clog2(BURST_LENGTH)-1){1'b0}}, burst_counter}];
                        
                        if (read_ready) begin
                            if (burst_counter < (BURST_LENGTH[$clog2(BURST_LENGTH):0] - 1)) begin
                                burst_counter <= burst_counter + 1;
                            end else begin
                                state <= IDLE;
                            end
                        end
                    end
                end
                
                WRITE: begin
                    if (write_valid && write_ready) begin
                        memory[current_addr + {{(ADDR_WIDTH-$clog2(BURST_LENGTH)-1){1'b0}}, burst_counter}] <= write_data;
                        
                        if (burst_counter < (BURST_LENGTH[$clog2(BURST_LENGTH):0] - 1)) begin
                            burst_counter <= burst_counter + 1;
                        end else begin
                            write_ready <= 1'b0;
                            state <= IDLE;
                        end
                    end
                end
                
                REFRESH: begin
                    // In a real design, this would refresh DRAM
                    // Here it's just a wait state for demonstration
                    state <= IDLE;
                end
                
                default: begin
                    state <= IDLE;
                end
            endcase
        end
    end

endmodule 

