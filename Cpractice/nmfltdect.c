#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[20];
    printf("enter your name\n");
    scanf("%s",&a);
    
    for(int i=0;i<strlen(a);i++)
    {
    if(('A' <= a[i] && 'Z' <=a[i])||('a'<=a[i] && 'z'<=a[i]))
    {
        // printf("%c",a[i]);
    }
    else{
        printf("invalid name");
        break;
    }  
}
}
