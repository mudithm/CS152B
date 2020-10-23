`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:31:26 10/21/2020 
// Design Name: 
// Module Name:    RegisterFile 
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
module RegisterFile(clk,rst,Ra,Rb,Rw,WrEn,busA,busB,busW);

input clk;
input rst;
input wire [4:0] Ra;
input wire [4:0] Rb;
input wire [4:0] Rw;
input WrEn; 
input wire [15:0] busW; 

output reg [15:0] busA; 
output reg [15:0] busB;


reg [15:0] mem [31:0];  

integer i;  

initial begin 
	for(i=0;i<32;i=i+1) begin
		mem[i] <= 16'b0;
		$display(" Address = %g  Data = %b",i,mem[i]);
	end
	
	busA = mem[Ra]; 
	busB = mem[Rb];
end

always @(*) begin 
	busA = mem[Ra]; 
	busB = mem[Rb];

	@(posedge clk) begin 
		if (rst) begin
			for(i=0;i<31;i=i+1) begin
				mem[i] = 16'b0;
				$display(" Address = %g  Data = %b",i,mem[i]);
			end

		end 
		
	end  
	
	if (WrEn) begin
		mem[Rw] = busW; 
				
	end
	
	busA = mem[Ra]; 
	busB = mem[Rb];
end 

endmodule
