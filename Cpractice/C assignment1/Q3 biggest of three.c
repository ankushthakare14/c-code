//find biggest of three inputs
#include <stdio.h>
int main()
{
    int a,b,c,big=0;
    printf("enter any three inputs:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
    printf("biggest number in all three is :%d", a);
    }
    else if(b>a  && b>c){
    printf("biggest number inall three is:%d", b);
    }
    else{
    printf("biggest number is all three is :%d",c);
    }
    return 0;
}