//triangle pattern 1
#include<stdio.h>
int main()
{
    int i,j,a;
    printf("enter the pattern value\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)// it is for rows
    {
        for(j=a;j>=1;j--)//it is for colums
        {
            if(i>=j){
            printf("%d",i);//pattern rows num is depend on i value
        }
        else{
            printf(" ");
        }
        }
    printf("\n");
    }
    return 0;
}