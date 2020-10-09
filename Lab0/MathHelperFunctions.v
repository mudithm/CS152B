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
		{sum4, carry} = single_bit_adder(a[4], b[4], carry); // in case the current sum has 5 bits
		{sum5, carryout} = single_bit_adder(a[5], b[5], carry); // in case the current sum has 6 bits
		two_digit_adder = {sum5, sum4, sum3, sum2, sum1, sum0, carryout};
	end
endfunction

// Function to add all four digits
function [5:0] four_digit_adder;
	input [3:0] a, b, c, d;
	reg [6:0] sum1, sum0;
	reg carry;
	begin
		{sum0, carry} = two_digit_adder(a, b, 0);
		{sum1, carry} = two_digit_adder(sum0, c, carry);
		{four_digit_adder, carry} = two_digit_adder(sum1, d, carry);
	end
endfunction

// Function to subtract the second from the first and the fourth from the third digits (for 11 divisibility)
function [6:0] four_digit_add_sub;
	input [5:0] a, b, c, d;
	reg [6:0] sum1, sum0;
	reg carry;
	begin
		$display("Adding %d, %d, %d, and %d", a, b, c, d);
		{sum0, carry} = two_digit_adder(a, c, 0); 
		$display("%d + %d gives %b carry %b", a, c, sum0, carry);
		{sum1, carry} = two_digit_adder(sum0, negator(b), 0); 
		$display("%d + %d gives %b carry %b", sum0, $signed(negator(b)), $signed(sum1), carry);
		{four_digit_add_sub, carry} = $signed(two_digit_adder($signed(sum1), negator(d), 0)); 
		$display("%d + %d gives %b carry %b", $signed(sum1), $signed(negator(d)), $signed(four_digit_add_sub), carry);
	end
endfunction


// Function to negate a four-bit digit
function [5:0] negator;
	input [5:0] a;
	reg carryout;
	begin
		{negator, carryout} = two_digit_adder($signed(~a), 1, 0);	
	end
endfunction
	
