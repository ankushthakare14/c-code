//fuction practice

#include<stdio.h>

int add(int a,int b);
int mul(int a,int b);
int div(int a,int b);

int main()
{

    while(1)
    {
    int a,b,sum,multi;
    float divi;
    printf("enter the values of a and b\n");
    scanf("%d%d",&a, &b);
    sum= add(a,b);
    printf("addition of a and b is:%d\n",sum);
    multi= mul(a,b);
    printf("multiplication is :%d\n",multi);
    divi= div(a,b);
    printf("division is:%.2f\n",divi);
    }
    return 0;
}

int add(int a,int b)
{
    return a+b;
}
int mul(int a,int b)
{
    return a*b;
}
int div(int a,int b)
{
    return a/b;
}