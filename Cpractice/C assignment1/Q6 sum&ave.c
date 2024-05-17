//sum and average
#include<stdio.h>
int main()
{
    int a,b,c,sum,ave;
    printf("enter any three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    ave=sum/3;
    printf("%d is the sum\n",sum);
    printf("%d is the average of given numbers\n",ave);

    return 0;
}
