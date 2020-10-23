`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:07:44 10/22/2020
// Design Name:   two_one_mux
// Module Name:   /home/ise/Xilinx_Shared/Lab1/two_one_mux_test.v
// Project Name:  Lab1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: two_one_mux
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module two_one_mux_test;

	// Outputs
	
	reg input_1, input_2, selector;
	wire out;
	
	// Instantiate the Unit Under Test (UUT)
	two_one_mux uut (
		.input_1(input_1),
		.input_2(input_2),
		.selector(selector),
		.out(out)
	);

	initial begin
		// Initialize Inputs

		// Wait 100 ns for global reset to finish
		#100;
        input_1 = 0;
		  input_2 = 0;
		  selector = 0;
		  
		  #500;

		  input_1 = 1;
		  input_2 = 0;
		  selector = 0;
		  
		  #500;

		  input_1 = 0;
		  input_2 = 1;
		  selector = 0;
		  
		  #500;

		  input_1 = 1;
		  input_2 = 1;
		  selector = 0;
		  
		  #500;

		  input_1 = 0;
		  input_2 = 0;
		  selector = 1;
		  
		  #500;

		  input_1 = 1;
		  input_2 = 0;
		  selector = 1;
		  
		  #500;

		  input_1 = 0;
		  input_2 = 1;
		  selector = 1;
		  
		  #500;

		  input_1 = 1;
		  input_2 = 1;
		  selector = 1;

		  #500;

		 $finish;
	end
      
endmodule

