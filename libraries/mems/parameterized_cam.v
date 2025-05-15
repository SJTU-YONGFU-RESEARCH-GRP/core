module parameterized_cam #(
    parameter DATA_WIDTH = 8,       // Width of data to be stored
    parameter ADDR_WIDTH = 4,       // Address width
    parameter NUM_ENTRIES = 16,     // Number of entries in the CAM (2^ADDR_WIDTH)
    parameter PRIORITY_ENCODER = 1  // 1: Return lowest matching address, 0: Return highest matching address
)(
    input wire clk,
    input wire rst_n,                         // Active low reset
    input wire write_enable,                  // Write enable signal
    input wire [ADDR_WIDTH-1:0] write_addr,   // Write address
    input wire [DATA_WIDTH-1:0] write_data,   // Data to be written
    input wire compare_enable,                // Enable compare operation
    input wire [DATA_WIDTH-1:0] compare_data, // Data to compare with stored data
    output reg match,                         // Match found flag
    output reg [ADDR_WIDTH-1:0] match_addr,   // Address of the matching entry
    output reg valid                          // Valid output signal
);

    // Memory array to store the data
    reg [DATA_WIDTH-1:0] cam_memory [0:NUM_ENTRIES-1];
    
    // Valid bits to indicate if a location contains valid data
    reg [NUM_ENTRIES-1:0] valid_bits;
    
    // Internal match signals
    reg [NUM_ENTRIES-1:0] match_lines;
    
    integer i;
    
    // Write operation
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            for (i = 0; i < NUM_ENTRIES; i = i + 1) begin
                cam_memory[i] <= {DATA_WIDTH{1'b0}};
                valid_bits[i] <= 1'b0;
            end
        end else if (write_enable) begin
            cam_memory[write_addr] <= write_data;
            valid_bits[write_addr] <= 1'b1;
        end
    end
    
    // Compare operation - generate match lines for all entries
    always @(*) begin
        for (i = 0; i < NUM_ENTRIES; i = i + 1) begin
            match_lines[i] = valid_bits[i] && (cam_memory[i] == compare_data);
        end
    end
    
    // Priority encoder to select the matching address based on PRIORITY_ENCODER parameter
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            match <= 1'b0;
            match_addr <= {ADDR_WIDTH{1'b0}};
            valid <= 1'b0;
        end else if (compare_enable) begin
            valid <= 1'b1;
            
            if (|match_lines) begin
                match <= 1'b1;
                
                // Priority logic based on parameter
                if (PRIORITY_ENCODER == 1) begin
                    // Lowest address priority (default)
                    match_addr <= {ADDR_WIDTH{1'b1}}; // Initialize to highest possible value
                    for (i = 0; i < NUM_ENTRIES; i = i + 1) begin
                        if (match_lines[i]) begin
                            match_addr <= i[ADDR_WIDTH-1:0];
                            // Exit the loop after finding the first match (lowest address)
                            i = NUM_ENTRIES;
                        end
                    end
                end else begin
                    // Highest address priority
                    match_addr <= {ADDR_WIDTH{1'b0}}; // Initialize to lowest possible value
                    for (i = NUM_ENTRIES-1; i >= 0; i = i - 1) begin
                        if (match_lines[i]) begin
                            match_addr <= i[ADDR_WIDTH-1:0];
                            // Exit the loop after finding the first match (highest address)
                            i = -1;
                        end
                    end
                end
            end else begin
                match <= 1'b0;
                match_addr <= {ADDR_WIDTH{1'b0}};
            end
        end else begin
            valid <= 1'b0;
            match <= 1'b0;
        end
    end

endmodule 