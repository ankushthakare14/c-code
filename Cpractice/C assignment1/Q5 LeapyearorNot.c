//leap year or not
#include<stdio.h>
int main()
{
    int y;
    printf("enter the year\n");
    scanf("%d",&y);
    if(y % 400 == 0){
        printf("%d it is a leap year",y);
        
    }
    else if(y % 100 == 0){
        printf("%d its Not a leap year",y);
    }
    else if(y % 4 == 0){
        ("%d its a leap year",y);
    }
    else{
        printf("%d its not a leap year",y);
    }
    

    return 0;
}
