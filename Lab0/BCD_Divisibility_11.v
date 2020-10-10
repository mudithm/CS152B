`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:27:30 10/08/2020 
// Design Name: 
// Module Name:    BCD_Divisibility_11 
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
module BCD_Divisibility_11(INPUT, OUTPUT, CLK);

input wire [15:0] INPUT;
output wire OUTPUT;
input CLK;

wire [3:0] digit_0;
wire [3:0] digit_1;
wire [3:0] digit_2;
wire [3:0] digit_3;

assign digit_0 = INPUT[3:0];
assign digit_1 = INPUT[7:4];
assign digit_2 = INPUT[11:8];
assign digit_3 = INPUT[15:12];

wire [5:0] modulo_11;
wire [5:0] modulo_11_normalized;

`include "MathHelperFunctions.v"

assign modulo_11 = four_digit_add_sub(digit_3, digit_2, digit_1, digit_0);

// since the sign doesn't affect modulus, we want the positive value.										 
assign modulo_11_normalized = ({6{modulo_11[5]}} & negator(modulo_11[5:0])) // if modulo_11 is negative, will be negation. 
																	| 
										(~{6{modulo_11[5]}} & modulo_11[5:0]); // Otherwise, will be modulo_11.


reg [6:0] result;
assign OUTPUT = !(result ^ 0);

always @(posedge CLK) begin
	result <= get_remainder_11(modulo_11_normalized, 11);
end
	
endmodule
