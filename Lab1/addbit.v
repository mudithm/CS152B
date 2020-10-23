`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:08:56 10/22/2020 
// Design Name: 
// Module Name:    addbit 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module addbit(
	 cin, // carry in
	 a, // first addend
	 b, // second addend
	 s, // sum
	 cout // carry out
    );
	 
	 input a, b, cin;
	 output wire s, cout;
	 
	 assign s = a ^ b ^ cin;
	 assign cout = (a & b) | (a & cin) | (b & cin);

endmodule
