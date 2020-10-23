`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:52:57 10/21/2020
// Design Name:   RegisterFile
// Module Name:   /home/ise/Xilinx_host/RegisterFile/RegisterFileTest.v
// Project Name:  RegisterFile
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RegisterFile
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module RegisterFileTest;

	// Inputs
	reg clk;
	reg rst;
	reg [4:0] Ra;
	reg [4:0] Rb;
	reg [4:0] Rw;
	reg WrEn;
	reg [15:0] busW;

	// Outputs
	wire [15:0] busA;
	wire [15:0] busB;

	// Instantiate the Unit Under Test (UUT)
	RegisterFile uut (
		.clk(clk), 
		.rst(rst), 
		.Ra(Ra), 
		.Rb(Rb), 
		.Rw(Rw), 
		.WrEn(WrEn), 
		.busA(busA), 
		.busB(busB), 
		.busW(busW)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		#500 clk <= !clk;
		#500 clk <= !clk; 
		#500 clk <= !clk;
		
		rst = 0;
		Ra = 10;
		Rb = 22;
		Rw = 10;
		WrEn = 1;
		busW = 12;

		// Wait 100 ns for global reset to finish
		#500 clk <= !clk;
		WrEn = 0; 
		#500 clk <= !clk; #500 clk <= !clk;
		rst = 1; 
		WrEn = 1; 
		Rw = 22; 
		busW = 57; 
		#500 clk <= !clk; #500 clk <= !clk;
		
        
		// Add stimulus here

		$finish; 
	end
      
	
endmodule

