`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:27:30 10/08/2020 
// Design Name: 
// Module Name:    BCD_Divisibility_11 
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
module BCD_Divisibility_11(INPUT, OUTPUT);

input wire [15:0] INPUT;
output wire OUTPUT;

wire [3:0] digit_0;
wire [3:0] digit_1;
wire [3:0] digit_2;
wire [3:0] digit_3;

assign digit_0 = INPUT[3:0];
assign digit_1 = INPUT[7:4];
assign digit_2 = INPUT[11:8];
assign digit_3 = INPUT[15:12];

wire [5:0] modulo_11;
assign modulo_11 = (digit_3 - digit_2 + digit_1 - digit_0) % 11;

assign OUTPUT = ~|(modulo_11 ^ 5'b00000);

endmodule
