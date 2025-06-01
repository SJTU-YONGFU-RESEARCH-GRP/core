module pulse_width_detector #(
    parameter WIDTH = 8  // Width of the counter
)(
    input wire clk,
    input wire rst,
    input wire signal_in,  // Input signal to monitor
    input wire [WIDTH-1:0] threshold,  // Configurable threshold
    output reg pulse_detected  // High when pulse width exceeds threshold
);

    // Counter to track pulse width
    reg [WIDTH-1:0] counter;
    
    // Previous signal state for edge detection
    reg signal_prev;
    
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            counter <= {WIDTH{1'b0}};
            pulse_detected <= 1'b0;
            signal_prev <= 1'b0;
        end else begin
            // Store previous signal state for edge detection
            signal_prev <= signal_in;
            
            // Rising edge detection
            if (signal_in && !signal_prev) begin
                counter <= {WIDTH{1'b0}};  // Reset counter on rising edge
                pulse_detected <= 1'b0;    // Reset detection flag
            end
            // Count while signal is high
            else if (signal_in) begin
                // Increment counter, but prevent overflow
                counter <= (counter == {WIDTH{1'b1}}) ? counter : counter + 1'b1;
                
                // Check if threshold is exceeded
                if (counter >= threshold) begin
                    pulse_detected <= 1'b1;
                end
            end
            // Falling edge detection
            else if (!signal_in && signal_prev) begin
                // Reset counter and detection when signal goes low
                counter <= {WIDTH{1'b0}};
                pulse_detected <= 1'b0;
            end
        end
    end

endmodule
