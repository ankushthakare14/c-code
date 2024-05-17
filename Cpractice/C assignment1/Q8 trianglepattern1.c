//triangle pattern 1
#include<stdio.h>
int main()
{
    int i,j,a;
    printf("enter the pattern value\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)// it is for rows
    {
        for(j=1;j<i;j++)//it is for colums
        {
            printf("%d",i);//pattern rows num is depend on i value
        }
    printf("%d\n",i);
    }
    return 0;
}