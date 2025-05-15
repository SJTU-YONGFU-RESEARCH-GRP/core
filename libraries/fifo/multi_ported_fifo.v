module multi_ported_fifo #(
    parameter DATA_WIDTH = 32,           // Width of data bus
    parameter ADDR_WIDTH = 4,            // Address width (FIFO depth = 2^ADDR_WIDTH)
    parameter NUM_READ_PORTS = 2,        // Number of read ports
    parameter NUM_WRITE_PORTS = 2,       // Number of write ports
    parameter ALMOST_FULL_THRESHOLD = 2, // Almost full threshold
    parameter ALMOST_EMPTY_THRESHOLD = 2 // Almost empty threshold
) (
    // Global signals
    input  wire                                 clk,
    input  wire                                 rst_n,
    
    // Write ports
    input  wire [NUM_WRITE_PORTS-1:0]           wr_en,
    input  wire [NUM_WRITE_PORTS*DATA_WIDTH-1:0] wr_data,
    output wire [NUM_WRITE_PORTS-1:0]           wr_ready,
    
    // Read ports
    input  wire [NUM_READ_PORTS-1:0]           rd_en,
    output wire [NUM_READ_PORTS*DATA_WIDTH-1:0] rd_data,
    output wire [NUM_READ_PORTS-1:0]           rd_valid,
    
    // Status
    output wire                                 full,
    output wire                                 almost_full,
    output wire                                 empty,
    output wire                                 almost_empty,
    output wire [ADDR_WIDTH:0]                  data_count
);

    // Memory array for data storage
    reg [DATA_WIDTH-1:0] mem [(1<<ADDR_WIDTH)-1:0];
    
    // Write port data access helper function
    function [DATA_WIDTH-1:0] get_wr_data(input integer port);
        integer start_bit;
        begin
            start_bit = port * DATA_WIDTH;
            get_wr_data = wr_data[start_bit +: DATA_WIDTH];
        end
    endfunction
    
    // FIFO pointers and control signals
    reg [ADDR_WIDTH:0] wr_ptr;
    reg [ADDR_WIDTH:0] rd_ptr;
    reg [ADDR_WIDTH:0] fifo_count;
    
    // Compute the number of active write ports this cycle
    reg [ADDR_WIDTH:0] wr_requests;
    always @(*) begin
        integer i;
        wr_requests = 0;
        for (i = 0; i < NUM_WRITE_PORTS; i = i + 1) begin
            wr_requests = wr_requests + (wr_en[i] & wr_ready[i]);
        end
    end
    
    // Compute the number of active read ports this cycle
    reg [ADDR_WIDTH:0] rd_requests;
    always @(*) begin
        integer i;
        rd_requests = 0;
        for (i = 0; i < NUM_READ_PORTS; i = i + 1) begin
            rd_requests = rd_requests + (rd_en[i] & rd_valid[i]);
        end
    end
    
    // FIFO status signals
    assign data_count = fifo_count;
    assign full = (fifo_count >= (1<<ADDR_WIDTH) - (NUM_WRITE_PORTS-1));
    assign empty = (fifo_count < NUM_READ_PORTS);
    assign almost_full = (fifo_count >= (1<<ADDR_WIDTH) - ALMOST_FULL_THRESHOLD);
    assign almost_empty = (fifo_count <= ALMOST_EMPTY_THRESHOLD) && !empty;
    
    // Generate write ready signals
    // A write port is ready if there's enough space for its data
    genvar w;
    for (w = 0; w < NUM_WRITE_PORTS; w = w + 1) begin : write_port_ready
        assign wr_ready[w] = (fifo_count <= ((1<<ADDR_WIDTH) - (w+1)));
    end
    
    // Generate read valid signals
    // A read port can read if there's at least one item for its position
    genvar r;
    for (r = 0; r < NUM_READ_PORTS; r = r + 1) begin : read_port_valid
        assign rd_valid[r] = (fifo_count > r);
    end
    
    // Register to hold valid flags for read ports
    reg [NUM_READ_PORTS-1:0] rd_valid_regs;
    
    // Read data output registers
    reg [DATA_WIDTH-1:0] rd_data_regs [0:NUM_READ_PORTS-1];
    
    // Connect read data outputs
    genvar rd;
    for (rd = 0; rd < NUM_READ_PORTS; rd = rd + 1) begin : read_data_output
        assign rd_data[(rd*DATA_WIDTH) +: DATA_WIDTH] = rd_data_regs[rd];
    end
    
    // Write operation
    always @(posedge clk) begin
        integer wp;
        reg [ADDR_WIDTH-1:0] current_wr_addr;
        
        if (|wr_en) begin
            current_wr_addr = wr_ptr[ADDR_WIDTH-1:0];
            
            // Process each write port in order
            for (wp = 0; wp < NUM_WRITE_PORTS; wp = wp + 1) begin
                if (wr_en[wp] && wr_ready[wp]) begin
                    // Write data to memory at current address
                    mem[current_wr_addr] = get_wr_data(wp);
                    
                    // Move to next address
                    current_wr_addr = current_wr_addr + 1;
                    if (current_wr_addr == (1<<ADDR_WIDTH)) begin
                        current_wr_addr = 0;
                    end
                end
            end
        end
    end
    
    // FIFO state management
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            wr_ptr <= 0;
            rd_ptr <= 0;
            fifo_count <= 0;
            rd_valid_regs <= 0;
            
            // Clear read data registers
            integer i;
            for (i = 0; i < NUM_READ_PORTS; i = i + 1) begin
                rd_data_regs[i] <= 0;
            end
        end else begin
            // Update FIFO pointers and count
            wr_ptr <= wr_ptr + wr_requests;
            rd_ptr <= rd_ptr + rd_requests;
            fifo_count <= fifo_count + wr_requests - rd_requests;
            
            // Process each read port in order
            integer rp;
            reg [ADDR_WIDTH-1:0] current_rd_addr;
            current_rd_addr = rd_ptr[ADDR_WIDTH-1:0];
            
            for (rp = 0; rp < NUM_READ_PORTS; rp = rp + 1) begin
                if (rd_en[rp] && rd_valid[rp]) begin
                    // Read data from memory at current address
                    rd_data_regs[rp] <= mem[current_rd_addr];
                    rd_valid_regs[rp] <= 1'b1;
                    
                    // Move to next address
                    current_rd_addr = current_rd_addr + 1;
                    if (current_rd_addr == (1<<ADDR_WIDTH)) begin
                        current_rd_addr = 0;
                    end
                end else begin
                    rd_valid_regs[rp] <= 1'b0;
                end
            end
        end
    end
    
endmodule 