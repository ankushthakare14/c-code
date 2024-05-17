#include<stdio.h>

void fun(void);
int main(void)
{
    printf("lucknow\n");
    goto ab; 
    return 0;

}
void fun(void)
{
    ab:printf("bareilly\n");
}
