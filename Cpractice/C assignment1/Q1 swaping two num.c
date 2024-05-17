//swaping of two numbeers
#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the two numbers\n",a, b);
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping the value of a=%d and b=%d\n",a, b);
    return 0;


}    