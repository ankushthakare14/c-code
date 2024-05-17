#include<stdio.h>
int main()
{
        for(int row=1;row<=5;row++)
        {
            for(int col=1;col<=8;col++)
            {
                if(row==1||row==5||col==1||col==8){
                printf("* ");
                }
                else if(row==3&&col==3)
                    printf("D");
                else if(row==3&&col==4)
                printf("E");
                else if(row==3&&col==5)
                printf("S");
                else if(row==3&&col==6)
                printf("D    ");
                //else if(row==3&&col==7)
               // printf(" ");
                else
                printf("  ");

            }
            printf("\n");
        }    
}