`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:03:32 10/05/2020
// Design Name:   BCD_Counter
// Module Name:   /home/ise/Xilinx_Shared/Lab0/BCD_Counter_Test.v
// Project Name:  Lab0
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: BCD_Counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module BCD_Counter_Test;

	//Inputs
	reg CLK;
	reg ENABLE;
	reg LOAD;
	reg UP;
	reg CLR;
	
	reg [3:0] D; // data input
	
	// Outputs
	wire CO; // carry output
	wire [3:0] Q; // counter value

	// Instantiate the Unit Under Test (UUT)
	BCD_Counter uut (
		.CLK(CLK),
		.ENABLE(ENABLE),
		.LOAD(LOAD),
		.UP(UP),
		.CLR(CLR),
		.Q(Q),
		.CO(CO),
		.D(D)
	);

	initial begin
		// Initialize Inputs
		CLK = 1;
		CLR = 1;
		// Wait 100 ns for global reset to finish
		#100;
      CLR = 0;
		
		// Test Loading from D
		/*
		D = 4'b1001;
		ENABLE = 1;
		LOAD = 1;
		UP = 0;
		*/
		
		//Clear test
		D <= 4'b0100;
		ENABLE = 1;
		LOAD = 1;
		UP = 0;
				
		#100 CLK <= !CLK;
		#100 CLK <= !CLK;
		
	end
	
	/*
	always @(*) begin
		// Test decrementing
		ENABLE = 1;
		LOAD = 0;
		UP = 1;
		
		#100 CLK <= !CLK;
		#100 CLK <= !CLK;
	end
	*/
	
	/*
	always @(*) begin
		// Test decrementing
		ENABLE = 1;
		LOAD = 0;
		UP = 0;
		
		#100 CLK <= !CLK;
		#100 CLK <= !CLK;
	end
	*/
	
	
	/*
	always @(*) begin
		// Test Loading
		// Test Loading from D
		D = D + 1;
		ENABLE = 1;
		LOAD = 1;
		UP = 0;
		
		
		#100 CLK <= !CLK;
		#100 CLK <= !CLK;
	end
	*/
	
	//CLR test
	always @(*) begin
		// Test Loading from D
		
		CLR = 1;
		ENABLE = 0;
		LOAD = 0;
		UP = 0;
		
		#100 CLK <= !CLK;
		#100 CLK <= !CLK;
		CLR = 0;
		
		#100 CLK <= !CLK;
		#100 CLK <= !CLK;
		
	end
	
      
endmodule

