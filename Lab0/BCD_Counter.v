`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:43:38 10/05/2020 
// Design Name: 
// Module Name:    BCD_Counter 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module BCD_Counter(CLK, ENABLE, LOAD, UP, CLR, D, CO, Q);

input CLK;

input ENABLE;
input LOAD;
input UP;
input CLR;

input wire [3:0] D;

output wire CO; // Carry output
output reg [3:0] Q; // Counter value

reg reset = 1; // to initialize

wire load_data; // if we should load data
assign load_data = (LOAD & ENABLE);

wire increment; // if we should increment
assign increment = (!LOAD & (ENABLE & UP));

wire decrement; // if we should decrement
assign decrement = (!LOAD & (ENABLE & !UP));

wire [3:0] value_0; // if Q is 0
assign value_0 = !(Q ^ 4'b0000);

wire [3:0] value_9; // if Q is 9
assign value_9 = !(Q ^ 4'b1001);

wire [3:0] carry_add; // if we should carry from addition
assign carry_add = (ENABLE & UP) & value_9;

wire [3:0] carry_sub; // if we should carry from subtraction
assign carry_sub = (ENABLE & !UP) & value_0;

assign CO = carry_add | carry_sub; // carry logic

reg pos_edge = 0;

always @(posedge CLK) begin
		pos_edge = 1;
end


always @(*) begin
	if (reset | CLR) begin // initialize values or clear (Asynchronous)
		Q <= 4'b0000;
		reset <= 0;
	end
	
	else if (pos_edge) begin // if on positive edge of clock (Synchronous)
		
		//Loading Logic
		if (load_data) begin // load
			Q <= D[3:0];
		end
		
		//Incrementing/Decrementing logic
		else if (increment) begin
			if (value_9) begin // if counter is 9
				Q <= 0;
			end
			else begin
				Q <= Q + 1;
			end
		end
		else if (decrement) begin
			if (value_0) begin // if counter is 0
				Q <= 9;
			end
			else begin
				Q <=  Q - 1;
			end
		end
		
	pos_edge = 0;
	end

end


endmodule
