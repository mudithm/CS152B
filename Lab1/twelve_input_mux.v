`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:04:51 10/23/2020 
// Design Name: 
// Module Name:    twelve_input_mux 
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
module twelve_input_mux(
		input_1,
		input_2,
		input_3,
		input_4,
		input_5,
		input_6,
		input_7,
		input_8,
		input_9,
		input_10,
		input_11,
		input_12,
		selector,
		out
    );
	 
	 input [15:0] input_1,input_2,input_3,input_4,input_5,input_6,input_7,input_8,input_9,input_10,input_11,input_12;
	 input [3:0] selector;
	 
	 output wire [15:0] out;
	 
	 
	 assign out = ({16{!(selector ^ 4'b0000)}} & input_1) | 
						({16{!(selector ^ 4'b0001)}} & input_2) | 
						({16{!(selector ^ 4'b0010)}} & input_3) | 
						({16{!(selector ^ 4'b0011)}} & input_4) | 
						({16{!(selector ^ 4'b0100)}} & input_5) | 
						({16{!(selector ^ 4'b0101)}} & input_6) | 
						({16{!(selector ^ 4'b0110)}} & input_7) | 
						({16{!(selector ^ 4'b1100)}} & input_8) | 
						({16{!(selector ^ 4'b1110)}} & input_9) | 
						({16{!(selector ^ 4'b1000)}} & input_10) | 
						({16{!(selector ^ 4'b1010)}} & input_11) | 
						({16{!(selector ^ 4'b1001)}} & input_12);
	 

endmodule
