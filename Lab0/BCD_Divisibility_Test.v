`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:30:27 10/08/2020
// Design Name:   BCD_Divisibility
// Module Name:   /home/ise/Xilinx_Shared/Lab0/BCD_Divisibility_Test.v
// Project Name:  Lab0
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: BCD_Divisibility
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module BCD_Divisibility_Test;
	reg [15:0] INPUT;
	wire OUTPUT;
	
	// Outputs
	// Instantiate the Unit Under Test (UUT)
	BCD_Divisibility uut (
		.INPUT(INPUT),
		.OUTPUT(OUTPUT)
	);

	initial begin
		// Initialize Inputs
		INPUT = 16'b0000000000000000;

		// Wait 100 ns for global reset to finish
		#500;
        
		// Add stimulus here
		INPUT = 16'b0000000000000000;
		#500;
		
		INPUT = 16'b0000000000000001;
		#500;
		
		INPUT = 16'b0000000000000010;
		#500;
		
		INPUT = 16'b0000000000000011;
		#500;
		
		// digit 2
		INPUT = 16'b0000000000010000;
		#500;
		
		INPUT = 16'b0000000000100001;
		#500;
		
		INPUT = 16'b0000000000110010;
		#500;
		
		INPUT = 16'b0000000001000011;
		#500;
		
		INPUT = 16'b1001100110011001; // 9999
		#500;
		
		INPUT = 16'b1001100110011000; // 9998
		#500;
		
		$finish;
	end

      
endmodule

