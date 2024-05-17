//Q4. Implement a C program to find out biggest of 3 no.s using
//conditional operator.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the values of a ,b and c\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c)
    {
        printf("the bigest number between given three number is:=%d", a);
    }
    else if (b>=c&&b>=a)
    {
        printf("the bigest number between given three number is:=%d", b);
    }
    else
    {
        printf("the bigest number between given three number is:=%d", c);
    }

    
}