//reversenumber
#include<stdio.h>
int main()
{
    int a,b,c,d,num,rev;
    printf("enter any numbers three digit number\n");
    scanf("%d",&num);
    a=num/100;
    b=num%100;
    c=b/10;
    d=b%10;
    rev=d*100+c*10+a;
    
   
    printf(" %d is a reverse number",rev);

    return 0;
}
