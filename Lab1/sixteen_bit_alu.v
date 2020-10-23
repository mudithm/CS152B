`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:08:24 10/23/2020 
// Design Name: 
// Module Name:    sixteen_bit_alu 
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
module sixteen_bit_alu(
	A,
	B,
	Overflow,
	Zero,
	S,
	ALUCtrl
    );
	 
	 input [15:0] A, B;
	 input [3:0] ALUCtrl;
	 
	 output wire Overflow, Zero;
	 output wire [15:0] S;
	 
	 wire [15:0] sub, add, bit_or, bit_and, dec, inc, inv, arith_l, arith_r, log_l, log_r, set_on_le, negated_b;
	 wire temp;
	 
	 wire [3:0] possible_overflow;
	 
	 // subtraction
	 sixteen_bit_adder negation(
		.cin(0),
		.a(~B),
		.b(1),
		.overflow(temp),
		.result(negated_b)
    );
	 
	 sixteen_bit_adder subtraction(
		.cin(0),
		.a(A),
		.b(negated_b),
		.overflow(possible_overflow[0]),
		.result(sub)
    );
	 
	 // addition
	 sixteen_bit_adder addition(
		.cin(0),
		.a(A),
		.b(B),
		.overflow(possible_overflow[1]),
		.result(add)
    );
	 
	 // bitwise or
	 assign bit_or = A | B;
	 
	 // bitwise and
	 assign bit_and = A & B;
	 
	 // Decrement
	 sixteen_bit_adder decrement(
		.cin(0),
		.a(A),
		.b(16'b1111111111111111),
		.overflow(possible_overflow[2]),
		.result(dec)
    );
	 
	 //Increment
	 sixteen_bit_adder increment(
		.cin(0),
		.a(A),
		.b(1),
		.overflow(possible_overflow[3]),
		.result(inc)
    );
	 
	 //invert
	 assign inv = ~A;
	 
	 // Arithmetic Shift Left
	 assign arith_l = A <<< B;
	
	 // Arithmetic Shift Right
	 assign arith_r = $signed(A) >>> B;

	 // Logical Shift Left
	 assign log_l = A << B;

	 // Logical Shift Right
	 assign log_r = {0, A >> B};
	 
	 assign Overflow = ((A[15] ^ arith_l[15]) & (!(ALUCtrl ^ 4'b1100))) // arith shift left
							| ((A[15] ^ arith_r[15]) & (!(ALUCtrl ^ 4'b1110))) // arith shift right
							| ((A[15] ^ log_l[15]) & (!(ALUCtrl ^ 4'b1000))) // logic shift left
							| ((A[15] ^ log_r[15]) & (!(ALUCtrl ^ 4'b1010))) // logic shift right
							| (possible_overflow[0] & (!(ALUCtrl ^ 4'b0000))) 
							| (possible_overflow[1] & (!(ALUCtrl ^ 4'b0001))) 
							| (possible_overflow[2] & (!(ALUCtrl ^ 4'b0100))) 
							| (possible_overflow[3] & (!(ALUCtrl ^ 4'b0101))) ;
	 
	 assign set_on_le = sub[15] | !(sub ^ 0);
	 
	 twelve_input_mux ALU_results(
		.input_1(sub),
		.input_2(add),
		.input_3(bit_or),
		.input_4(bit_and),
		.input_5(dec),
		.input_6(inc),
		.input_7(inv),
		.input_8(arith_l),
		.input_9(arith_r),
		.input_10(log_l),
		.input_11(log_r),
		.input_12(set_on_le),
		.selector(ALUCtrl),
		.out(S)
    );
	 
	 assign Zero = !(S ^ 0);
	 
	 
	 
	 
	 
endmodule
