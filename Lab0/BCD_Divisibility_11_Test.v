`timescale 10ns / 1ps

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
	reg CLK;
	
	// Outputs
	// Instantiate the Unit Under Test (UUT)
	BCD_Divisibility_11 uut (
		.INPUT(INPUT),
		.OUTPUT(OUTPUT),
		.CLK(CLK)
	);

	initial begin
		// Initialize Inputs
		INPUT = 16'b0000000000000000;

		// Wait 100 ns for global reset to finish
		#500;
		CLK = 0;
      		
		#500;
		INPUT = 16'b0000000000000000; // 0
		#10 CLK = ~CLK;		
		#500 CLK = ~CLK;
		
		#500;
		INPUT = 16'b0000000000000001; // 1
		#10 CLK = ~CLK;		
		#500 CLK = ~CLK;
		
		#500;
		INPUT = 16'b0000000000010001; // 11
		#10 CLK = ~CLK;		
		#500 CLK = ~CLK;
		
		#500;
		INPUT = 16'b0000000000010010; // 12
		#10 CLK = ~CLK;		
		#500 CLK = ~CLK;
		
		#500;
		INPUT = 16'b0000000000100010; // 22
		#10 CLK = ~CLK;		
		#500 CLK = ~CLK;
		
		#500;
		INPUT = 16'b0000000000100011; // 23
		#10 CLK = ~CLK;		
		#500 CLK = ~CLK;
		
		#500;
		INPUT = 16'b0000000000110011; // 33
		#10 CLK = ~CLK;		
		#500 CLK = ~CLK;
		
		#500;
		INPUT = 16'b1001100110011000; // 9998
		#10 CLK = ~CLK;		
		#500 CLK = ~CLK;
		
		#500;
		INPUT = 16'b1001100001100111; // 9867
		#10 CLK = ~CLK;		
		#500 CLK = ~CLK;
		
		#500;
		INPUT = 16'b1001000010010000; // 9090
		#10 CLK = ~CLK;		
		#500 CLK = ~CLK;
		
		#500;
		INPUT = 16'b1001100110011001; // 9999
		#10 CLK = ~CLK;		
		#500 CLK = ~CLK;
		
		#500;
		INPUT = 16'b0000100110011001; // 0999
		#10 CLK = ~CLK;		
		#500 CLK = ~CLK;
		
		$finish;
	end
      
endmodule

