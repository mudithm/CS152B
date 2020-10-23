`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:08:21 10/22/2020
// Design Name:   three_one_mux
// Module Name:   /home/ise/Xilinx_Shared/Lab1/three_one_mux_test.v
// Project Name:  Lab1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: three_one_mux
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module three_one_mux_test;

	// Outputs
	reg input_1, input_2, input_3;
	reg [1:0] selector;
	
	wire out;

	// Instantiate the Unit Under Test (UUT)
	three_one_mux uut (
		.input_1(input_1),
		.input_2(input_2),
		.input_3(input_3),
		.selector(selector),
		.out(out)
	);

	initial begin
		// Initialize Inputs

		// Wait 100 ns for global reset to finish
		#100;
		
		// selector 1
        input_1 = 0;
		  input_2 = 0;
		  input_3 = 0;
		  selector = 2'b00;
		  
		  #500;
		  input_1 = 1;
		  input_2 = 0;
		  input_3 = 0;
		  selector = 2'b00;
		  
		  #500;
		  input_1 = 0;
		  input_2 = 1;
		  input_3 = 0;
		  selector = 2'b00;
		  
		  #500;
		  input_1 = 1;
		  input_2 = 1;
		  input_3 = 0;
		  selector = 2'b00;
		  
		  #500;
		  input_1 = 0;
		  input_2 = 0;
		  input_3 = 1;
		  selector = 2'b00;
		  
		  
		  #500;
		  input_1 = 1;
		  input_2 = 0;
		  input_3 = 1;
		  selector = 2'b00;
		  
		  
		  #500;
		  input_1 = 0;
		  input_2 = 1;
		  input_3 = 1;
		  selector = 2'b00;
		  
		  
		  #500;
		  input_1 = 1;
		  input_2 = 1;
		  input_3 = 1;
		  selector = 2'b00;
		  
		  #500;
		  
		  // selector 2
		  input_1 = 0;
		  input_2 = 0;
		  input_3 = 0;
		  selector = 2'b01;
		  
		  #500;
		  input_1 = 1;
		  input_2 = 0;
		  input_3 = 0;
		  selector = 2'b01;
		  
		  #500;
		  input_1 = 0;
		  input_2 = 1;
		  input_3 = 0;
		  selector = 2'b01;
		  
		  #500;
		  input_1 = 1;
		  input_2 = 1;
		  input_3 = 0;
		  selector = 2'b01;
		  
		  #500;
		  input_1 = 0;
		  input_2 = 0;
		  input_3 = 1;
		  selector = 2'b01;
		  
		  
		  #500;
		  input_1 = 1;
		  input_2 = 0;
		  input_3 = 1;
		  selector = 2'b01;
		  
		  
		  #500;
		  input_1 = 0;
		  input_2 = 1;
		  input_3 = 1;
		  selector = 2'b01;
		  
		  
		  #500;
		  input_1 = 1;
		  input_2 = 1;
		  input_3 = 1;
		  selector = 2'b01;
		  
		  #500;
		  
		  // selector 3
		  
		  input_1 = 0;
		  input_2 = 0;
		  input_3 = 0;
		  selector = 2'b10;
		  
		  #500;
		  input_1 = 1;
		  input_2 = 0;
		  input_3 = 0;
		  selector = 2'b10;
		  
		  #500;
		  input_1 = 0;
		  input_2 = 1;
		  input_3 = 0;
		  selector = 2'b10;
		  
		  #500;
		  input_1 = 1;
		  input_2 = 1;
		  input_3 = 0;
		  selector = 2'b10;
		  
		  #500;
		  input_1 = 0;
		  input_2 = 0;
		  input_3 = 1;
		  selector = 2'b10;
		  
		  
		  #500;
		  input_1 = 1;
		  input_2 = 0;
		  input_3 = 1;
		  selector = 2'b10;
		  
		  
		  #500;
		  input_1 = 0;
		  input_2 = 1;
		  input_3 = 1;
		  selector = 2'b10;
		  
		  
		  #500;
		  input_1 = 1;
		  input_2 = 1;
		  input_3 = 1;
		  selector = 2'b10;
		  
		  #500;
		  
		  $finish;
	end
      
endmodule

