`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:25:37 10/08/2020 
// Design Name: 
// Module Name:    BCD_Divisibility_3 
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
module BCD_Divisibility_3(INPUT, OUTPUT, CLK);

input wire [15:0] INPUT;
output wire OUTPUT;
input CLK;

wire [3:0] digit_0;
wire [3:0] digit_1;
wire [3:0] digit_2;
wire [3:0] digit_3;

assign digit_0 = INPUT[3:0];
assign digit_1 = INPUT[7:4];
assign digit_2 = INPUT[11:8];
assign digit_3 = INPUT[15:12];

reg [6:0] result;
wire [6:0] modulo_3;
`include "MathHelperFunctions.v"

assign modulo_3 = four_digit_adder(digit_0, digit_1, digit_2, digit_3);
assign OUTPUT = !(result ^ 0);

always @(posedge CLK) begin
	result <= get_remainder(modulo_3, 3);
end

endmodule

