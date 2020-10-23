`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:13:25 10/23/2020 
// Design Name: 
// Module Name:    sixteen_bit_adder 
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
module sixteen_bit_adder(
		cin,
		a,
		b,
		overflow,
		result
    );
	 
	 input cin;
	 input [15:0] a, b;
	 wire [14:0] carry_during;
	 wire possible_overflow;
	
	 output wire overflow;
	 output wire [15:0] result;
	 
	 // adders for each individual bit
	 addbit d0(
	 .cin(cin), // carry in
	 .a(a[0]), // first addend
	 .b(b[0]), // second addend
	 .s(result[0]), // sum
	 .cout(carry_during[0]) // carry out
    );
	 
	 addbit d1(
	 .cin(carry_during[0]), // carry in
	 .a(a[1]), // first addend
	 .b(b[1]), // second addend
	 .s(result[1]), // sum
	 .cout(carry_during[1]) // carry out
    );
	 
	 addbit d2(
	 .cin(carry_during[1]), // carry in
	 .a(a[2]), // first addend
	 .b(b[2]), // second addend
	 .s(result[2]), // sum
	 .cout(carry_during[2]) // carry out
    );
	 
	 addbit d3(
	 .cin(carry_during[2]), // carry in
	 .a(a[3]), // first addend
	 .b(b[3]), // second addend
	 .s(result[3]), // sum
	 .cout(carry_during[3]) // carry out
    );
	 
	 addbit d4(
	 .cin(carry_during[3]), // carry in
	 .a(a[4]), // first addend
	 .b(b[4]), // second addend
	 .s(result[4]), // sum
	 .cout(carry_during[4]) // carry out
    );
	 
	  addbit d5(
	 .cin(carry_during[4]), // carry in
	 .a(a[5]), // first addend
	 .b(b[5]), // second addend
	 .s(result[5]), // sum
	 .cout(carry_during[5]) // carry out
    );
	 
	  addbit d6(
	 .cin(carry_during[5]), // carry in
	 .a(a[6]), // first addend
	 .b(b[6]), // second addend
	 .s(result[6]), // sum
	 .cout(carry_during[6]) // carry out
    );
	 
	  addbit d7(
	 .cin(carry_during[6]), // carry in
	 .a(a[7]), // first addend
	 .b(b[7]), // second addend
	 .s(result[7]), // sum
	 .cout(carry_during[7]) // carry out
    );
	 
	 addbit d8(
	 .cin(carry_during[7]), // carry in
	 .a(a[8]), // first addend
	 .b(b[8]), // second addend
	 .s(result[8]), // sum
	 .cout(carry_during[8]) // carry out
    );
	 
	 addbit d9(
	 .cin(carry_during[8]), // carry in
	 .a(a[9]), // first addend
	 .b(b[9]), // second addend
	 .s(result[9]), // sum
	 .cout(carry_during[9]) // carry out
    );
	 
	 addbit d10(
	 .cin(carry_during[9]), // carry in
	 .a(a[10]), // first addend
	 .b(b[10]), // second addend
	 .s(result[10]), // sum
	 .cout(carry_during[10]) // carry out
    );
	 
	 addbit d11(
	 .cin(carry_during[10]), // carry in
	 .a(a[11]), // first addend
	 .b(b[11]), // second addend
	 .s(result[11]), // sum
	 .cout(carry_during[11]) // carry out
    );
	 
	 addbit d12(
	 .cin(carry_during[11]), // carry in
	 .a(a[12]), // first addend
	 .b(b[12]), // second addend
	 .s(result[12]), // sum
	 .cout(carry_during[12]) // carry out
    );
	 
	 addbit d13(
	 .cin(carry_during[12]), // carry in
	 .a(a[13]), // first addend
	 .b(b[13]), // second addend
	 .s(result[13]), // sum
	 .cout(carry_during[13]) // carry out
    );
	 
	 addbit d14(
	 .cin(carry_during[13]), // carry in
	 .a(a[14]), // first addend
	 .b(b[14]), // second addend
	 .s(result[14]), // sum
	 .cout(carry_during[14]) // carry out
    );
	 
	 addbit d15(
	 .cin(carry_during[14]), // carry in
	 .a(a[15]), // first addend
	 .b(b[15]), // second addend
	 .s(result[15]), // sum
	 .cout(possible_overflow) // carry out
    );
	 
	assign overflow = (result[15] & (~a[15] & ~b[15])) | (~result[15] & (a[15] & b[15])); // if overflow occurred


endmodule
