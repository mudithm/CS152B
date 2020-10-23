`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:08:24 10/23/2020 
// Design Name: 
// Module Name:    sixteen_bit_alu 
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
module sixteen_bit_alu(
	A,
	B,
	Overflow,
	Zero,
	S,
	ALUCtrl
    );
	 
	 input [15:0] A, B;
	 input [3:0] ALUCtrl;
	 
	 output wire Overflow, Zero;
	 output wire [15:0] S;
	 
	 wire [15:0] sub, add, bit_or, bit_and, dec, inc, inv, arith_l, arith_r, log_l, log_r, set_on_le;
	 
	 // subtraction
	 


endmodule
