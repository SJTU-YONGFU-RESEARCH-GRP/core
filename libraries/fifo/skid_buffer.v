module skid_buffer #(
    parameter DATA_WIDTH = 8
) (
    input  wire                  clk,
    input  wire                  rst_n,
    
    // Upstream interface
    input  wire                  s_valid,
    output wire                  s_ready,
    input  wire [DATA_WIDTH-1:0] s_data,
    
    // Downstream interface
    output wire                  m_valid,
    input  wire                  m_ready,
    output wire [DATA_WIDTH-1:0] m_data
);

    // Internal registers for skid buffer functionality
    reg [DATA_WIDTH-1:0] data_reg;      // Main data register
    reg [DATA_WIDTH-1:0] skid_reg;      // Skid register for overflow
    reg                  valid_reg;     // Valid flag for main register
    reg                  skid_valid_reg; // Valid flag for skid register
    
    // Control logic
    wire push = s_valid && s_ready;
    wire pop = m_valid && m_ready;
    
    // Upstream ready signal generation
    // We're ready to accept new data if:
    // 1. The skid register is not valid (we have a place to store overflow)
    // 2. We're popping data out (making room for new data)
    assign s_ready = !skid_valid_reg || pop;
    
    // Downstream valid signal
    // We have valid data to send if the main register is valid
    assign m_valid = valid_reg;
    
    // Downstream data
    assign m_data = data_reg;
    
    // Main register update logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            valid_reg <= 1'b0;
            data_reg <= {DATA_WIDTH{1'b0}};
        end else if (pop) begin
            // If we're popping data out, check if we have skid data to move in
            if (skid_valid_reg) begin
                data_reg <= skid_reg;
                valid_reg <= 1'b1;
            end else if (push) begin
                // No skid data, but new data is coming in
                data_reg <= s_data;
                valid_reg <= 1'b1;
            end else begin
                // No skid data and no new data, invalidate the register
                valid_reg <= 1'b0;
            end
        end else if (push && !valid_reg) begin
            // If not popping but pushing and the main register is empty
            data_reg <= s_data;
            valid_reg <= 1'b1;
        end
    end
    
    // Skid register update logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            skid_valid_reg <= 1'b0;
            skid_reg <= {DATA_WIDTH{1'b0}};
        end else if (push && valid_reg && !pop) begin
            // If we're pushing but not popping and the main register is full,
            // store the incoming data in the skid register
            skid_reg <= s_data;
            skid_valid_reg <= 1'b1;
        end else if (pop && skid_valid_reg) begin
            // If we're popping and have skid data, the skid data moves to the main register,
            // so the skid register becomes empty
            skid_valid_reg <= 1'b0;
        end
    end

endmodule 
