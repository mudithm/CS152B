`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:09:09 10/22/2020
// Design Name:   addbit
// Module Name:   /home/ise/Xilinx_Shared/Lab1/addbit_test.v
// Project Name:  Lab1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: addbit
//
// Dependencines:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module addbit_test;

	// Outputs
   reg a, b, cin;
	wire s, cout;

	// Instantiate the Unit Under Test (UUT)
	addbit uut (
		.a(a),
		.b(b),
		.cin(cin),
		.s(s),
		.cout(cout)
	);

	initial begin
		// Initialize Inputs

		// Wait 100 ns for global reset to finish
	  #100;
	  a = 0;
	  b = 0;
	  cin = 0;
	  
	  #500;
	  a = 1;
	  b = 0;
	  cin = 0;
	  
	  #500;
	  a = 0;
	  b = 1;
	  cin = 0;
	  
	  #500;
	  a = 1;
	  b = 1;
	  cin = 0;
	  
	  #500;
	  a = 0;
	  b = 0;
	  cin = 1;		  
	  
	  #500;
	  a = 1;
	  b = 0;
	  cin = 1;		  
	  
	  #500;
	  a = 0;
	  b = 1;
	  cin = 1;		  
	  
	  #500;
	  a = 1;
	  b = 1;
	  cin = 1;
	  
	  #500;
	  
	  $finish;

	end
      
endmodule

