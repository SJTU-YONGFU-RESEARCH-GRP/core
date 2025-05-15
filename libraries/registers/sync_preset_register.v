module sync_preset_register #(
    parameter WIDTH = 8
)(
    input wire clk,                    // Clock input
    input wire rst_n,                  // Active low asynchronous reset
    input wire sync_rst,               // Synchronous reset (active high)
    input wire sync_preset,            // Synchronous preset (active high)
    input wire enable,                 // Enable signal
    input wire [WIDTH-1:0] data_in,    // Data input
    output reg [WIDTH-1:0] data_out    // Output data
);

    // Reset/preset value constants
    localparam [WIDTH-1:0] RESET_VAL = {WIDTH{1'b0}};
    localparam [WIDTH-1:0] PRESET_VAL = {WIDTH{1'b1}};

    // Register logic with sync preset, sync reset, and async reset
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            // Asynchronous reset (highest priority)
            data_out <= RESET_VAL;
        end else begin
            if (sync_rst) begin
                // Synchronous reset (second priority)
                data_out <= RESET_VAL;
            end else if (sync_preset) begin
                // Synchronous preset (third priority)
                data_out <= PRESET_VAL;
            end else if (enable) begin
                // Normal operation (lowest priority)
                data_out <= data_in;
            end
        end
    end

endmodule 