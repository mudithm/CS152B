`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:07:02 10/22/2020 
// Design Name: 
// Module Name:    two_one_mux 
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
module two_one_mux(
    input_1, // first input
	 input_2, // second input
	 selector, // selector bit
	 out // output wire
	 );
	 
	input input_1, input_2, selector;
	output wire out;
	
	assign out = (input_2 & selector) | (input_1 & ~selector);

endmodule
