`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:08:07 10/22/2020 
// Design Name: 
// Module Name:    three_one_mux 
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
module three_one_mux(
    input_1, // first input
	 input_2, // second input
	 input_3, // third input
	 selector, // selector bits (2)
	 out // output wire
	 );
	 
	input input_1, input_2, input_3;
	input [1:0] selector;
	output wire out;
	
	wire select_1, select_2, select_3;
	
	assign select_1 = !(selector ^ 2'b00);
	assign select_2 = !(selector ^ 2'b01);
	assign select_3 = !(selector ^ 2'b10);
	
	assign out = (input_1 & select_1) | (input_2 & select_2) | (input_3 & select_3);

endmodule
