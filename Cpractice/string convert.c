#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char string[]="kufykutf7646i5fkhjfky5vjhlukO&^tyfkF^$836rFGHvkutdi5797t8Ljhguktf^$3869";
    printf("befor convert:= %s",string);
    int length=strlen(string);
    int j=0;
    for(int i=0;i<length;i++)
    {
        if(isalpha(string[i]))
        {
            string[j]=string[i];
            j++;
        }
    }
    string[j]='\0';
    printf("after convert",string);
    return 0;
}