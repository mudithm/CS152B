`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:06:18 10/22/2020 
// Design Name: 
// Module Name:    one_bit_alu 
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
module one_bit_alu(
	a, // input 1
	b, // input 2
	invert_b, // signal to invert b
	cin, // carry in
	operation, // operation
	result, // result
	cout // carry out
    );
	 
	 input a, b, invert_b, cin;
	 input [1:0] operation;
	 
	 output wire result, cout;
	 
	 wire final_b, final_sum;
	
		// mux to choose between b and inverse of b
		two_one_mux b_or_b_inverse (
			.input_1(b), // b
			.input_2(~b), // inverse of b
			.selector(invert_b), // if b should be inverted
			.out(final_b) // b or inverse of b
		);
		
		// perform the addition
		addbit sum(
		 .cin(cin), // carry in
		 .a(a), // first addend
		 .b(final_b), // second addend
		 .s(final_sum), // sum
		 .cout(cout) // carry out
		);
		
		// mux to choose which operation is assigned to the result
		three_one_mux set_result(
			 .input_1( a & final_b ), // and operation
			 .input_2( a | final_b ), // or operation
			 .input_3( final_sum ), // addition/subtraction
			 .selector(operation), // operation selector
			 .out(result) // final result wire
		);
	
	
	

endmodule
