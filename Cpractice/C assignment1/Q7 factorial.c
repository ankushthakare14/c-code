//factorials
#include<stdio.h>
int main()
{
    int i,num,fact=1;
    printf("enter any numbers for its factorial\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
   
    printf(" %d is the factorial of given number", fact);

    return 0;
}
