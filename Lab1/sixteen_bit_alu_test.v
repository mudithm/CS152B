`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:04:24 10/23/2020
// Design Name:   sixteen_bit_alu
// Module Name:   /home/ise/Xilinx_Shared/Lab1/sixteen_bit_alu_test.v
// Project Name:  Lab1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sixteen_bit_alu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module sixteen_bit_alu_test;

	// Inputs
	reg [15:0] A;
	reg [15:0] B;
	reg [3:0] ALUCtrl;

	// Outputs
	wire Overflow;
	wire Zero;
	wire [15:0] S;

	// Instantiate the Unit Under Test (UUT)
	sixteen_bit_alu uut (
		.A(A), 
		.B(B), 
		.Overflow(Overflow), 
		.Zero(Zero), 
		.S(S), 
		.ALUCtrl(ALUCtrl)
	);

	initial begin
		// subtraction
		A = 30;
		B = 12;
		ALUCtrl = 4'b0000;

		#500;
		
		A = -1;
		B = 2;
		ALUCtrl = 4'b0000;
        
		
		#500;
		
		A = -1;
		B = -1;
		ALUCtrl = 4'b0000;
		
		#500;
		
		A = 32767;
		B = 32767;
		ALUCtrl = 4'b0000;
		
		#500
		
				// addition
		A = 30;
		B = 12;
		ALUCtrl = 4'b0001;

		#500;
		
		A = -1;
		B = 2;
		ALUCtrl = 4'b0001;
        
		
		#500;
		
		A = -1;
		B = -1;
		ALUCtrl = 4'b0001;
		
		#500;
		
		A = 32767;
		B = 32767;
		ALUCtrl = 4'b0001;
		
		#500
		
		// bitwise or
		A = 16'b0000000011111111;
		B = 16'b1111111100000000;
		ALUCtrl = 4'b0010;
				#500

		// bitwise and
		A = 16'b0000000011111111;
		B = 16'b1111111100000000;
		ALUCtrl = 4'b0011;
				#500

		A = 16'b0000000011111111;
		B = 16'b0000000000000000;
		ALUCtrl = 4'b0011;
		#500


		// Decrement
		A = 32767;
		ALUCtrl = 4'b0100;
		
		#500
		
		A = -32766;
		ALUCtrl = 4'b0100;
		
		#500
		
		// Increment
		A = 32767;
		ALUCtrl = 4'b0101;
		
		#500
		
		A = -32766;
		ALUCtrl = 4'b0101;
		
		#500
		
		// invert
		A = 16'b0000000000000000;
		ALUCtrl = 4'b0110;
		
		#500
		
		A = 16'b1111111111111111;
		ALUCtrl = 4'b0110;
		
		#500
		
		
		// arithmetic left shift
		A = 16'b0000000011111111;
		B = 8;
		ALUCtrl = 4'b1100;
		#500
		
		A = 16'b1111111111111111;
		B = 2;
		ALUCtrl = 4'b1100;
		#500
		
		// arithmetic right shift
		A = 16'b0000000011111111;
		B = 8;
		ALUCtrl = 4'b1110;
		#500
		
		A = 16'b1111111111111111;
		B = 2;
		ALUCtrl = 4'b1110;
		#500
		
		// logical left shift
		A = 16'b0000000011111111;
		B = 8;
		ALUCtrl = 4'b1000;
		#500
		
		A = 16'b1111111111111111;
		B = 2;
		ALUCtrl = 4'b1000;
		#500
		
		// logical right shift
		A = 16'b0000000011111111;
		B = 8;
		ALUCtrl = 4'b1010;
		#500
		
		A = 16'b1111111111111111;
		B = 2;
		ALUCtrl = 4'b1010;
		#500
		
		
		// Set on less than or equal
		A = 100;
		B = 3;
		ALUCtrl = 4'b1001;
		#500

		A = 0;
		B = 10;
		ALUCtrl = 4'b1001;
		#500
		
		
		A = -1;
		B = 0;
		ALUCtrl = 4'b1001;
		#500
		
		A = 27;
		B = 27;
		ALUCtrl = 4'b1001;
		#500



		$finish;
	end
      
endmodule

