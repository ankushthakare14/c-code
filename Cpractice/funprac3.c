#include<stdio.h>
int fun(void);
int main(void)
{
int x=10;
x=fun();
printf("%d\n",x);
return 0;
}
int fun(void)
{
    printf("ankush\n");
}