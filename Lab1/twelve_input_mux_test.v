`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   04:22:31 10/23/2020
// Design Name:   twelve_input_mux
// Module Name:   /home/ise/Xilinx_Shared/Lab1/twelve_input_mux_test.v
// Project Name:  Lab1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: twelve_input_mux
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module twelve_input_mux_test;

	// Inputs
	reg [15:0] input_1;
	reg [15:0] input_2;
	reg [15:0] input_3;
	reg [15:0] input_4;
	reg [15:0] input_5;
	reg [15:0] input_6;
	reg [15:0] input_7;
	reg [15:0] input_8;
	reg [15:0] input_9;
	reg [15:0] input_10;
	reg [15:0] input_11;
	reg [15:0] input_12;
	reg [3:0] selector;

	// Outputs
	wire [15:0] out;

	// Instantiate the Unit Under Test (UUT)
	twelve_input_mux uut (
		.input_1(input_1), 
		.input_2(input_2), 
		.input_3(input_3), 
		.input_4(input_4), 
		.input_5(input_5), 
		.input_6(input_6), 
		.input_7(input_7), 
		.input_8(input_8), 
		.input_9(input_9), 
		.input_10(input_10), 
		.input_11(input_11), 
		.input_12(input_12), 
		.selector(selector), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		input_1 = 1;
		input_2 = 2;
		input_3 = 3;
		input_4 = 4;
		input_5 = 5;
		input_6 = 6;
		input_7 = 7;
		input_8 = 8;
		input_9 = 9;
		input_10 = 10;
		input_11 = 11;
		input_12 = 12;
		selector = 0;

		// Wait 100 ns for global reset to finish
				#500;
		selector = 4'b0001;
				#500;
		selector = 4'b0010;
				#500;
		selector = 4'b0011;
				#500;
		selector = 4'b0100;
				#500;
		selector = 4'b0101;
				#500;
		selector = 4'b0110;
				#500;
		selector = 4'b1100;
				#500;
		selector = 4'b1110;
				#500;
		selector = 4'b1000;
				#500;
		selector = 4'b1010;
				#500;
		selector = 4'b1001;
		#500;
		
		selector = 4'b1111;
		#500;
		
        
		$finish;
	end
      
endmodule

