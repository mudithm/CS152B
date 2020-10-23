`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:06:35 10/22/2020
// Design Name:   one_bit_alu
// Module Name:   /home/ise/Xilinx_Shared/Lab1/one_bit_alu_test.v
// Project Name:  Lab1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: one_bit_alu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module one_bit_alu_test;

	// Outputs
	reg a, b, invert_b, cin;
	reg [1:0] operation;
	
	wire result;
	wire cout;

	// Instantiate the Unit Under Test (UUT)
	one_bit_alu uut (
		.a(a), // input 1
		.b(b), // input 2
		.invert_b(invert_b), // if b should be inverted for subtraction
		.cin(cin), // carry in
		.operation(operation), // operation
		.result(result), // result
		.cout(cout) // carry out
	);

	initial begin
		// Initialize Inputs

		// Wait 100 ns for global reset to finish
		#100;
		
		//Operation: and
		a = 0;
		b = 0;
		invert_b = 0;
		cin = 0;
		operation = 2'b00;
		#500;
		
		a = 1;
		b = 0;
		invert_b = 0;
		cin = 0;
		operation = 2'b00;
		#500;
		
		a = 0;
		b = 1;
		invert_b = 0;
		cin = 0;
		operation = 2'b00;
		#500;
		
		a = 1;
		b = 1;
		invert_b = 0;
		cin = 0;
		operation = 2'b00;
		#500;
		
		a = 0;
		b = 0;
		invert_b = 1;
		cin = 0;
		operation = 2'b00;
		#500;
		
		a = 1;
		b = 0;
		invert_b = 1;
		cin = 0;
		operation = 2'b00;
		#500;
		
		a = 0;
		b = 1;
		invert_b = 1;
		cin = 0;
		operation = 2'b00;
		#500;
		
		a = 1;
		b = 1;
		invert_b = 1;
		cin = 0;
		operation = 2'b00;
		#500;
		
		a = 0;
		b = 0;
		invert_b = 0;
		cin = 1;
		operation = 2'b00;
		#500;
		
		a = 1;
		b = 0;
		invert_b = 0;
		cin = 1;
		operation = 2'b00;
		#500;
		
		a = 0;
		b = 1;
		invert_b = 0;
		cin = 1;
		operation = 2'b00;
		#500;
		
		a = 1;
		b = 1;
		invert_b = 0;
		cin = 1;
		operation = 2'b00;
		#500;
		
		a = 0;
		b = 0;
		invert_b = 1;
		cin = 1;
		operation = 2'b00;
		#500;
		
		a = 1;
		b = 0;
		invert_b = 1;
		cin = 1;
		operation = 2'b00;
		#500;
		
		a = 0;
		b = 1;
		invert_b = 1;
		cin = 1;
		operation = 2'b00;
		#500;
		
		a = 1;
		b = 1;
		invert_b = 1;
		cin = 1;
		operation = 2'b00;
		#500;

		//Operation: or
		a = 0;
		b = 0;
		invert_b = 0;
		cin = 0;
		operation = 2'b01;
		#500;
		
		a = 1;
		b = 0;
		invert_b = 0;
		cin = 0;
		operation = 2'b01;
		#500;
		
		a = 0;
		b = 1;
		invert_b = 0;
		cin = 0;
		operation = 2'b01;
		#500;
		
		a = 1;
		b = 1;
		invert_b = 0;
		cin = 0;
		operation = 2'b01;
		#500;
		
		a = 0;
		b = 0;
		invert_b = 1;
		cin = 0;
		operation = 2'b01;
		#500;
		
		a = 1;
		b = 0;
		invert_b = 1;
		cin = 0;
		operation = 2'b01;
		#500;
		
		a = 0;
		b = 1;
		invert_b = 1;
		cin = 0;
		operation = 2'b01;
		#500;
		
		a = 1;
		b = 1;
		invert_b = 1;
		cin = 0;
		operation = 2'b01;
		#500;
		
		a = 0;
		b = 0;
		invert_b = 0;
		cin = 1;
		operation = 2'b01;
		#500;
		
		a = 1;
		b = 0;
		invert_b = 0;
		cin = 1;
		operation = 2'b01;
		#500;
		
		a = 0;
		b = 1;
		invert_b = 0;
		cin = 1;
		operation = 2'b01;
		#500;
		
		a = 1;
		b = 1;
		invert_b = 0;
		cin = 1;
		operation = 2'b01;
		#500;
		
		a = 0;
		b = 0;
		invert_b = 1;
		cin = 1;
		operation = 2'b01;
		#500;
		
		a = 1;
		b = 0;
		invert_b = 1;
		cin = 1;
		operation = 2'b01;
		#500;
		
		a = 0;
		b = 1;
		invert_b = 1;
		cin = 1;
		operation = 2'b01;
		#500;
		
		a = 1;
		b = 1;
		invert_b = 1;
		cin = 1;
		operation = 2'b01;
		#500;		
		
		
		//Operation: add/subtract
		a = 0;
		b = 0;
		invert_b = 0;
		cin = 0;
		operation = 2'b10;
		#500;
		
		a = 1;
		b = 0;
		invert_b = 0;
		cin = 0;
		operation = 2'b10;
		#500;
		
		a = 0;
		b = 1;
		invert_b = 0;
		cin = 0;
		operation = 2'b10;
		#500;
		
		a = 1;
		b = 1;
		invert_b = 0;
		cin = 0;
		operation = 2'b10;
		#500;
		
		a = 0;
		b = 0;
		invert_b = 1;
		cin = 0;
		operation = 2'b10;
		#500;
		
		a = 1;
		b = 0;
		invert_b = 1;
		cin = 0;
		operation = 2'b10;
		#500;
		
		a = 0;
		b = 1;
		invert_b = 1;
		cin = 0;
		operation = 2'b10;
		#500;
		
		a = 1;
		b = 1;
		invert_b = 1;
		cin = 0;
		operation = 2'b10;
		#500;
		
		a = 0;
		b = 0;
		invert_b = 0;
		cin = 1;
		operation = 2'b10;
		#500;
		
		a = 1;
		b = 0;
		invert_b = 0;
		cin = 1;
		operation = 2'b10;
		#500;
		
		a = 0;
		b = 1;
		invert_b = 0;
		cin = 1;
		operation = 2'b10;
		#500;
		
		a = 1;
		b = 1;
		invert_b = 0;
		cin = 1;
		operation = 2'b10;
		#500;
		
		a = 0;
		b = 0;
		invert_b = 1;
		cin = 1;
		operation = 2'b10;
		#500;
		
		a = 1;
		b = 0;
		invert_b = 1;
		cin = 1;
		operation = 2'b10;
		#500;
		
		a = 0;
		b = 1;
		invert_b = 1;
		cin = 1;
		operation = 2'b10;
		#500;
		
		a = 1;
		b = 1;
		invert_b = 1;
		cin = 1;
		operation = 2'b10;
		#500;		
		$finish;
	end
      
endmodule

