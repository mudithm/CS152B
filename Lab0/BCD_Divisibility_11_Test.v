`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:27:52 10/08/2020
// Design Name:   BCD_Divisibility_11
// Module Name:   /home/ise/Xilinx_Shared/Lab0/BCD_Divisibility_11_Test.v
// Project Name:  Lab0
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: BCD_Divisibility_11
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module BCD_Divisibility_11_Test;
	reg [15:0] INPUT;
	wire OUTPUT;
	
	// Outputs
	// Instantiate the Unit Under Test (UUT)
	BCD_Divisibility_11 uut (
		.INPUT(INPUT),
		.OUTPUT(OUTPUT)
	);

	initial begin
		// Initialize Inputs
		INPUT = 16'b0000000000000000;

		// Wait 100 ns for global reset to finish
		#500;
        
		INPUT = 16'b0000000000000000; // 0
		#500;
		
		INPUT = 16'b0000000000000001; // 1
		#500;
		
		INPUT = 16'b0000000000010001; // 11
		#500;
		
		INPUT = 16'b0000000000010010; // 12
		#500;
		
		INPUT = 16'b0000000000100010; // 22
		#500;
		
		INPUT = 16'b0000000000100011; // 23
		#500;
		
		INPUT = 16'b0000000000110011; // 33
		#500;
		
		INPUT = 16'b1001100110011000; // 9998
		#500;
		
		INPUT = 16'b1001100001100111; // 9867
		#500;
		
		INPUT = 16'b1001000010010000; // 9090
		#500;
		
		INPUT = 16'b1001100110011001; // 9999
		#500;
		$finish;
	end
      
endmodule

