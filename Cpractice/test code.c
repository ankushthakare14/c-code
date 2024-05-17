#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char ch=[50]={"hello ankush how are you im @ your house whre are you 234
    &hgkjgukgkjh*jkvkjvlugvl)jbhljhbvljhb$  jbljblj bjkb"};
    while(ch!=NULL)
    {
        for(int i=0;i<sizeof(ch);i++)
        {
            if('z'>=ch[i]>='a')
            printf("%c",ch[i]);
        }
}