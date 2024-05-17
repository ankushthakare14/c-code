//Q1. Implement a choice based arithmetic calculator (1-add,2-sub,3-
//mul,4-div etc), by implementing functions.

#include<stdio.h>
int main()
    
{   
    int a,b,c,d;
    printf("enter any two numbers:\n");
    scanf("%d%d",&a ,&b);
    printf("\n eneter your choice 1=add,2=mul,3=sub,4=div \n");
    scanf("%d",&d);
    switch(d)
    {
        case 1: c=a+b;
                printf("the addition is :%d",c);
                break;
        default:
                printf("nop");
                break;
    }
    return 0;
}