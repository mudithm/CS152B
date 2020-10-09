// Function to add two bits, with a carry out bit
function [1:0] single_bit_adder;
	input a, b, carryin;
	reg sum, carryout;
	begin
		sum = a ^ b ^ carryin;
		carryout = (a & b) | (a & carryin) | (b & carryin);
		single_bit_adder = { sum, carryout };
	end	
endfunction

// Function to add two digits, with a carry out bit
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

// Function to add all four digits
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

