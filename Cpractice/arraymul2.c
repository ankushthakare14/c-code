#include<stdio.h>
int main()
{
    
    int i,j,row,col,k;
    int a[3][3],b[3][3],mul[3][3];
    printf("enter the row size ");
    scanf("%d", &row);
    printf("enter the coloum size ");
    scanf("%d", &col);
    printf("enter the first matrix values\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("enter the secound matrix values\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
        printf("multiplication of the matrix 1&2 is:=\n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            mul[i][j]=0;

        for(k=0;k<col;k++)
        {
            mul[i][j]+=a[i][k]*b[k][j];
        }

        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }

return 0;
}
