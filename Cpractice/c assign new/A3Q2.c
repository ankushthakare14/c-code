//Swapping of two no.s (with, without temporary, one line code with
//xor operator)

#include <stdio.h>
int main()
{
int num1 = 5, num2 = 7; //
printf("Before swap: n1: %d \t n2: %d\n", num1, num2);//taking input from user 
num1 = num1 ^ num2;  //using xor logic for swapping numbers 
num2 = num1 ^ num2;
num1 = num1 ^ num2;
printf("After swap: n1: %d \t n2: %d\n", num1, num2);
return 0;
}