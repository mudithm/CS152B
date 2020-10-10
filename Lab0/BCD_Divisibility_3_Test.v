`timescale 10ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:25:57 10/08/2020
// Design Name:   BCD_Divisibility_3
// Module Name:   /home/ise/Xilinx_Shared/Lab0/BCD_Divisibility_3_Test.v
// Project Name:  Lab0
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: BCD_Divisibility_3
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module BCD_Divisibility_3_Test;
	reg [15:0] INPUT;
	wire OUTPUT;
	reg CLK;
	
	// Outputs
	// Instantiate the Unit Under Test (UUT)
	BCD_Divisibility_3 uut (
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
		// Add stimulus here
		
		#500;
		INPUT = 16'b0000000000000000; // 0
		#10 CLK = ~CLK;
		#500 CLK = ~CLK;
		
		#500;
		INPUT = 16'b0000000000000001; // 1
		#10 CLK = ~CLK;		
		#500 CLK = ~CLK;
		
		#500;
		INPUT = 16'b0000000000000010;  // 2
		#10 CLK = ~CLK;		
		#500 CLK = ~CLK;
				
		#500;
		INPUT = 16'b0000000000000011;  // 3
		#10 CLK = ~CLK;		
		#500 CLK = ~CLK;
				
		// digit 2
		
		#500;
		INPUT = 16'b0000000000010000; // 10
		#10 CLK = ~CLK;		
		#500 CLK = ~CLK;
				
		#500;
		INPUT = 16'b0000000000100001; // 21
#10 CLK = ~CLK;		
		#500 CLK = ~CLK;
				
		#500;
		INPUT = 16'b0000000000110010; // 32	
#10 CLK = ~CLK;		
		#500 CLK = ~CLK;
				
		#500;
		INPUT = 16'b0000000001000011; // 43
#10 CLK = ~CLK;		
		#500 CLK = ~CLK;
				
		#500;
		// all digits
		INPUT = 16'b1001100110011001; // 9999			
#10 CLK = ~CLK;		
		#500 CLK = ~CLK;
				
		#500;
		INPUT = 16'b1001100110011000; // 9998		
#10 CLK = ~CLK;		
		#500 CLK = ~CLK;

		$finish;
	end
	
	


      
endmodule