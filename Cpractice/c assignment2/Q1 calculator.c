/*Implement a calculator that takes two numbers and an operator as input. 
Use a switch statement to perform addition, subtraction, multiplication, 
or division based on the operator.*/

#include<stdio.h>
int main()
{
    float a,b;
    int operation;
    printf("enter any two numbers\n");
    scanf("%f %f",&a,&b);
    printf("enter the operation(+,-,*,/)\n");
    scanf("%d", &operation);
    switch(operation)
    {
        case 1:printf("addition is %f+%f=%f",a,b,a+b);
        break;
        case 2:printf("substraction is %f-%f=%f",a,b,a-b);
        break;
        case 3:printf("multiplication is %f*%f=%f",a,b,a*b);
        break;
        case 4:printf("division is: %f/%f=%.2f",a,b,a/b);
        break;
        default:printf("invalide operation");
        //break;
    }
    return 0;
}