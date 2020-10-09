`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:25:37 10/08/2020 
// Design Name: 
// Module Name:    BCD_Divisibility_3 
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
module BCD_Divisibility_3(INPUT, OUTPUT);

input wire [15:0] INPUT;
output wire OUTPUT;

wire [3:0] digit_0;
wire [3:0] digit_1;
wire [3:0] digit_2;
wire [3:0] digit_3;

assign digit_0 = INPUT[3:0];
assign digit_1 = INPUT[7:4];
assign digit_2 = INPUT[11:8];
assign digit_3 = INPUT[15:12];

wire [5:0] modulo_3;

function [1:0] single_bit_adder;
	input a, b, carryin;
	reg sum, carryout;
	begin
		sum = a ^ b ^ carryin;
		carryout = (a & b) | (a & carryin) | (b & carryin);
		single_bit_adder = { sum, carryout };
	end	
endfunction

function [6:0] two_digit_adder;
	input [5:0] a, b, carryin;
	reg sum5, sum4, sum3, sum2, sum1, sum0, carry, carryout;
	begin
		{sum0, carry} = single_bit_adder(a[0], b[0], carryin);
		{sum1, carry} = single_bit_adder(a[1], b[1], carry);
		{sum2, carry} = single_bit_adder(a[2], b[2], carry);
		{sum3, carry} = single_bit_adder(a[3], b[3], carry);
		{sum4, carry} = single_bit_adder(a[4], 0, carry); // in case the current sum has 5 bits
		{sum5, carryout} = single_bit_adder(a[5], 0, carry); // in case the current sum has 6 bits
		two_digit_adder = {sum5, sum4, sum3, sum2, sum1, sum0, carryout};
	end
endfunction

function [5:0] four_digit_adder;
	input [4:0] a, b, c, d;
	reg [6:0] sum1, sum0;
	reg carry;
	begin
		{sum0, carry} = two_digit_adder(a, b, 0);
		{sum1, carry} = two_digit_adder(sum0, c, carry);
		{four_digit_adder, carry} = two_digit_adder(sum1, d, carry);
	end
endfunction

assign modulo_3 = four_digit_adder(digit_0, digit_1, digit_2, digit_3);



endmodule

