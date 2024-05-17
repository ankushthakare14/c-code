#include <stdio.h>

int main ()
{
    char str[5];
    int j;

    printf("Enter a string : ");
    gets(str);

    printf("You entered: %s", str);

    for(int i=0;str[i]!='\0';i++)
    {
        if (str[i] ==' '){
            j++;
        }
        
    }
printf("number of spaces = %d",j);
    return(0);
}