module shadow_register #(
    parameter WIDTH = 32
)(
    input wire clk,
    input wire rst_n,
    
    // Main register interface
    input wire main_load_en,
    input wire [WIDTH-1:0] main_data_in,
    output reg [WIDTH-1:0] main_data_out,
    
    // Shadow register interface
    input wire shadow_capture_en,  // Capture main register value into shadow
    input wire shadow_load_en,     // Load shadow register from external source
    input wire [WIDTH-1:0] shadow_data_in,
    output reg [WIDTH-1:0] shadow_data_out,
    
    // Control signals
    input wire use_shadow_out      // Use shadow register as output (1: shadow, 0: main)
);

    // Main register
    reg [WIDTH-1:0] main_reg;
    
    // Shadow register
    reg [WIDTH-1:0] shadow_reg;
    
    // Main register logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            main_reg <= {WIDTH{1'b0}};
        end
        else if (main_load_en) begin
            main_reg <= main_data_in;
        end
    end
    
    // Shadow register logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            shadow_reg <= {WIDTH{1'b0}};
        end
        else if (shadow_capture_en) begin
            // Capture main register value
            shadow_reg <= main_reg;
        end
        else if (shadow_load_en) begin
            // Load from external source
            shadow_reg <= shadow_data_in;
        end
    end
    
    // Output selection
    always @(*) begin
        shadow_data_out = shadow_reg;
        
        if (use_shadow_out) begin
            main_data_out = shadow_reg;
        end
        else begin
            main_data_out = main_reg;
        end
    end

endmodule 
