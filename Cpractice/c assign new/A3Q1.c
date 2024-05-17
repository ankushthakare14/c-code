//pascal triangle
#include<stdio.h>
int main()
{
    int i,j,space,c,n;
    
    printf("enter the n number\n");  //taking size of triangle trom user
    scanf("%d",&n);
    
    
    for(i=0;i<n;i++)  //for process iteration 
    {
        for(space=1;space<n-1;space++)  //for spaces
        {
            printf(" ");
            
            for(j=0;j<=i;j++)    //this loop for pascal triangle logic
            {
                if(i==0||j==0)
                {
                    c=1;
                }
                else
                {
                    c=(c*(i-j+1))/j;
                }
                printf("%d",c);
            
            } 
            printf("\n");
        }
    
    }
}