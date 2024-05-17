#include<stdio.h>

int fact(int n);
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);

    if(num<0)
    {
        printf("no factorial for negative number");
    }
    else
    {
        printf("factorial of the given number %d",fact(num));
    }
    return 0;

}



int fact(int n)
{
    if(n==0)
    return 1;
    return (n*fact(n-1));
}