#include<stdio.h>
/*1->>>Bitwise AND Operator &

The output of bitwise AND is 1 if the corresponding 
bits of two operands is 1. If either bit of an operand is 0,
 the result of corresponding bit is evaluated to 0.

Let us suppose the bitwise AND operation of two integers 12 and 25.

12 = 00001100 (In Binary)
25 = 00011001 (In Binary)

Bit Operation of 12 and 25
  00001100
& 00011001
  ________
  00001000  = 8 (In decimal)

2->>>Bitwise OR Operator |

The output of bitwise OR is 1 if at least
 one corresponding bit of two operands is 1.
  In C Programming, bitwise OR operator is denoted by |.

12 = 00001100 (In Binary)
25 = 00011001 (In Binary)

Bitwise OR Operation of 12 and 25
  00001100
| 00011001
  ________
  00011101  = 29 (In decimal)



3->>>Bitwise Complement Operator ~

Bitwise complement operator is a unary operator (works on only one operand). 
It changes 1 to 0 and 0 to 1. It is denoted by ~.

35 = 00100011 (In Binary)

Bitwise complement Operation of 35
~ 00100011 
  ________
  11011100  = 220 (In decimal)

Twist in bitwise complement operator in C Programming

The bitwise complement of 35 (~35) is -36 instead of 220, but why?

For any integer n, bitwise complement of n will be -(n+1).
 To understand this, you should have the knowledge of 2's complement.
2's Complement

Two's complement is an operation on binary numbers.
 The 2's complement of a number is equal to the complement
 of that number plus 1. For example:

 Decimal         Binary           2's complement 
   0            00000000           -(11111111+1) = -00000000 = -0(decimal)
   1            00000001           -(11111110+1) = -11111111 = -256(decimal)
   12           00001100           -(11110011+1) = -11110100 = -244(decimal)
   220          11011100           -(00100011+1) = -00100100 = -36(decimal)

Note: Overflow is ignored while computing 2's complement.

The bitwise complement of 35 is 220 (in decimal). The 2's complement
 of 220 is -36. Hence, the output is -36 instead of 220.
Bitwise complement of any number N is -(N+1). Here's how:

bitwise complement of N = ~N (represented in 2's complement form)
2'complement of ~N= -(~(~N)+1) = -(N+1)






4->>>Bitwise XOR (exclusive OR) Operator ^
  for a=2 & b=3
   convert a & b binary
   then sum then compare same element to 0 or otherwise 1;
   2 = 10
   3 = 11
   -------
     = 0 1
     = 1
     ------
     4=100
     5=101
  ------------
      =001

     4=100
     3=011
  ------------
      =111

*/

int main(){
    int a = 1, b = 2, c = 3, d = 4, e = 5;
    int res;
    res = a^b;
    printf("%d ", res);
    res = a | b;
    printf("%d\n", res);
      res = d & b;
    printf("%d\n", res);
    res = ~20;
    printf("%d \n", res);
    res = 4 >>1;
    printf("%d \n", res);

     res = 4<<1;
    printf("%d \n", res);
}