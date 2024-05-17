#include<stdio.h>
void selection(int,float);
int main()
{
    int age;
    float ht;
    while(1)
    {
    printf("enter age and height:");
    scanf("%d%f",&age,&ht);
    selection(age,ht);
    
}
return 0;
}
void selection(int age,float ht)
{
    if(age>25)
        printf("age should be less than 25\n");
    else if(age<25)
        printf("Congrats! you entered the right age");
    else
        printf("Tu chutiya hai");
    if(ht<5)
        printf("height shold be more than 5\n");

}