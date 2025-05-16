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
    
    // Read data output registers
    reg [DATA_WIDTH-1:0] rd_data_regs [0:NUM_READ_PORTS-1];
    reg [NUM_READ_PORTS-1:0] rd_valid_regs;
    
    // Calculate number of active write and read requests
    wire [ADDR_WIDTH:0] wr_requests;
    wire [ADDR_WIDTH:0] rd_requests;
    
    // Count active write and read requests
    reg [ADDR_WIDTH:0] wr_count;
    reg [ADDR_WIDTH:0] rd_count;
    
    always @(*) begin
        integer i;
        wr_count = 0;
        rd_count = 0;
        
        // Count write requests that can be serviced
        for (i = 0; i < NUM_WRITE_PORTS; i = i + 1) begin
            if (wr_en[i] && !full && (fifo_count + wr_count < (1<<ADDR_WIDTH))) begin
                wr_count = wr_count + 1'b1;
            end
        end
        
        // Count read requests that can be serviced
        for (i = 0; i < NUM_READ_PORTS; i = i + 1) begin
            if (rd_en[i] && (fifo_count > rd_count)) begin
                rd_count = rd_count + 1'b1;
            end
        end
    end
    
    assign wr_requests = wr_count;
    assign rd_requests = rd_count;
    
    // FIFO status signals
    wire [ADDR_WIDTH:0] next_count = fifo_count + wr_requests - rd_requests;
    
    assign data_count = fifo_count;
    assign full = (fifo_count >= (1<<ADDR_WIDTH) - NUM_WRITE_PORTS + 1);
    assign empty = (fifo_count == 0);
    assign almost_full = (fifo_count >= (1<<ADDR_WIDTH) - ALMOST_FULL_THRESHOLD);
    assign almost_empty = (fifo_count <= ALMOST_EMPTY_THRESHOLD);
    
    // Generate write ready signals based on available space
    genvar w;
    generate
        for (w = 0; w < NUM_WRITE_PORTS; w = w + 1) begin : write_port_ready
            assign wr_ready[w] = !full && (fifo_count + w < (1<<ADDR_WIDTH));
        end
    endgenerate
    
    // Generate empty flags per read port
    wire [NUM_READ_PORTS-1:0] empty_per_port;
    genvar r;
    generate
        for (r = 0; r < NUM_READ_PORTS; r = r + 1) begin : read_port_status
            assign empty_per_port[r] = (fifo_count <= r);
            assign rd_valid[r] = rd_valid_regs[r];
            assign rd_data[(r*DATA_WIDTH) +: DATA_WIDTH] = rd_data_regs[r];
        end
    endgenerate
    
    // Write operation with proper wrap-around
    always @(posedge clk) begin
        integer wp;
        reg [ADDR_WIDTH-1:0] current_wr_addr;
        reg [ADDR_WIDTH:0] write_count;
        
        current_wr_addr = wr_ptr[ADDR_WIDTH-1:0];
        write_count = 0;
        
        for (wp = 0; wp < NUM_WRITE_PORTS; wp = wp + 1) begin
            if (wr_en[wp] && !full && (fifo_count + write_count < (1<<ADDR_WIDTH))) begin
                mem[current_wr_addr] <= get_wr_data(wp);
                current_wr_addr = (current_wr_addr + 1'b1);
                write_count = write_count + 1'b1;
            end
        end
    end
    
    // FIFO state management
    always @(posedge clk or negedge rst_n) begin
        integer i;
        reg [ADDR_WIDTH-1:0] current_rd_addr;
        reg [ADDR_WIDTH:0] read_count;
        
        if (!rst_n) begin
            wr_ptr <= 0;
            rd_ptr <= 0;
            fifo_count <= 0;
            rd_valid_regs <= 0;
            
            // Clear read data registers
            for (i = 0; i < NUM_READ_PORTS; i = i + 1) begin
                rd_data_regs[i] <= 0;
            end
        end else begin
            // Update write pointer
            if (wr_requests > 0) begin
                wr_ptr <= wr_ptr + wr_requests;
            end
            
            // Process read ports
            current_rd_addr = rd_ptr[ADDR_WIDTH-1:0];
            read_count = 0;
            
            for (i = 0; i < NUM_READ_PORTS; i = i + 1) begin
                if (rd_en[i] && (fifo_count > read_count)) begin
                    rd_data_regs[i] <= mem[current_rd_addr];
                    rd_valid_regs[i] <= 1'b1;
                    current_rd_addr = (current_rd_addr + 1'b1);
                    read_count = read_count + 1'b1;
                end else begin
                    rd_valid_regs[i] <= 1'b0;
                end
            end
            
            // Update read pointer
            if (rd_requests > 0) begin
                rd_ptr <= rd_ptr + rd_requests;
            end
            
            // Update FIFO count
            fifo_count <= next_count;
        end
    end

endmodule 