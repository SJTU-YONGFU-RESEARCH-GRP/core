module toggle_register #(
    parameter WIDTH = 8
)(
    input wire clk,                    // Clock input
    input wire rst_n,                  // Active low reset
    input wire enable,                 // Enable signal
    input wire [WIDTH-1:0] toggle_mask, // Bits to toggle when enabled
    input wire load_en,                // Load enable
    input wire [WIDTH-1:0] load_data,  // Data to load
    output reg [WIDTH-1:0] data_out    // Output data
);

    // Toggle register implementation
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            data_out <= {WIDTH{1'b0}};
        end else if (load_en) begin
            // Load mode: load external data
            data_out <= load_data;
        end else if (enable) begin
            // Toggle mode: toggle bits according to mask
            data_out <= data_out ^ toggle_mask;
        end
    end

endmodule 