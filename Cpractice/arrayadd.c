//matrix addition 

#include<stdio.h>
int main()
{
    
    int i,j,row,col,add;
    int a[10][10],b[10][10],c[10][10];
    printf("enter the row size\n");
    scanf("%d",&row);
    printf("enter the col size\n");
    scanf("%d",&col);
    printf("enter the 1st array elements\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the 2nd array elements\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            c[i][j] =a[i][j]+b[i][j];
        }
    }
    printf("addition of two matrix is=\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    

}