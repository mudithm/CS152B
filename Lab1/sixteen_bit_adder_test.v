`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:28:12 10/23/2020
// Design Name:   sixteen_bit_adder
// Module Name:   /home/ise/Xilinx_Shared/Lab1/sixteen_bit_adder_test.v
// Project Name:  Lab1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sixteen_bit_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module sixteen_bit_adder_test;

	// Inputs
	reg cin;
	reg [15:0] a;
	reg [15:0] b;

	// Outputs
	wire overflow;
	wire [15:0] result;

	// Instantiate the Unit Under Test (UUT)
	sixteen_bit_adder uut (
		.cin(cin), 
		.a(a), 
		.b(b), 
		.overflow(overflow), 
		.result(result)
	);

	initial begin
		// Initialize Inputs
		cin = 0;
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		cin = 0;
		a = 15;
		b = 12;
		#500;
		
				cin = 0;
		a = 13;
		b = 12;
		#500;
		
				cin = 0;
		a = 10;
		b = 2;
		#500;
		
				cin = 0;
		a = 19;
		b = 21;
		#500;
		
		cin = 0;
		a = -19;
		b = 21;
		#500;
		
		
		cin = 0;
		a = 1923;
		b = -6421;
		#500;
		
		cin = 0;
		a = 32767;
		b = 32767;
		#500;
		$finish;
	end
      
endmodule

