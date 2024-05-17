//find biggest of three inputs
#include <stdio.h>
int main()
{
    int a,b,c,big=0;
    printf("enter any three inputs:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
    big=a;
        printf("biggest number in all three is :%d", big);
    }
    else if(b>a  && b>c)
    {
        big=b;
        printf("biggest number inall three is:%d", big);
        }
    else{
        big=c;
        printf("biggest number is all three is :%d",big);
    }
        
    return 0;
}