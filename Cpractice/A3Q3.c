//Q3. Implement a C program to Differentiate between post, pre decrement
//operators, consider below mention scenario.
//a) k=i++, k=++i
//b) y=x++*10, y=++x*10
//c) q=p--/3, q=—p/3

#include<stdio.h>
int main()
{
    int k,q,p;
    int y=10,i=2,x=3;
    k=i++,k=++i;
    printf("%d",&k);

    y=x++*10,y=++x*10;
    printf("%d",&y);

    q=p--/3,q=-p/3;
    printf("%d",&q);
}