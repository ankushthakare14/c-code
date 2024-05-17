#include<stdio.h>
#include<stdlib.h>
typedef struct student
{                         //by using  stucture
    char name[30];
    int age;
    char gen;
    char city[20];
    int pin;
} stud;
int main()
{   
        stud arr;
        printf ("Enter the Name:\n");  //taking details from user
        scanf ("%s", arr.name);
        char *vp=(char *)malloc(sizeof(arr.name));//here we allot the dynamic memory 
        vp=arr.name;
        printf ("Enter your age \n");
        scanf ("%d", &arr.age);
        printf ("Enter your gender (M/F) \n");
        scanf (" %c", &arr.gen);
        printf ("Enter your city \n");
        scanf (" %s",arr.city);
        char *ap=(char *)malloc(sizeof(arr.city)); //printing details
        ap=arr.city;
        printf ("Enter your Pin code\n");
        scanf ("%d", &arr.pin);
        printf ("your Name:%s\n",vp);
        printf ("your age:%d\n",arr.age);
        printf ("your gender (M/F) %c\n",arr.gen);
        printf ("your city: %s\n",ap);
        printf ("your Pin code:%d\n",arr.pin);
    return 0;
}