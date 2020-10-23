`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:16:44 10/22/2020
// Design Name:   one_bit_alu
// Module Name:   /home/ise/Xilinx_Shared/Lab1/sixteen_one_mux_test.v
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

module sixteen_one_mux_test;

	// Inputs
	reg a;
	reg b;
	reg invert_b;
	reg cin;
	reg [1:0] operation;

	// Outputs
	wire result;
	wire cout;

	// Instantiate the Unit Under Test (UUT)
	one_bit_alu uut (
		.a(a), 
		.b(b), 
		.invert_b(invert_b), 
		.cin(cin), 
		.operation(operation), 
		.result(result), 
		.cout(cout)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		invert_b = 0;
		cin = 0;
		operation = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

