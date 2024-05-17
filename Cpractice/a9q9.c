#include<stdio.h>
typedef struct student   //structure for students details
{
    char name[30];
    int age;
    char gen;
    char city[20];
    int pin;
} std;
void display(std arr[],int n); //funtion declaration
int main()
{   
    int n,n1;
    std arr[10]; 
    printf("Enter Number of students:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)   //taking the student details
    {
        printf ("Enter the Name:\n");
        scanf ("%s", arr[i].name);
        printf ("Enter your age \n");
        scanf ("%d", &(arr[i].age));
        printf ("Enter your gender (M/F) \n");
        scanf (" %c", &(arr[i].gen));
        printf ("Enter your city \n");
        scanf (" %s",arr[i].city);
    
        printf ("Enter your Pin code\n");
        scanf ("%d", &arr[i].pin);
    }
    printf("which student details you want to print");//giving a choice to user to choose which student info he wants
    scanf("%d",&n1);
    display(arr,n1-1);
    return 0;
}
void display(std arr[],int n)//use display fuction for display the contents
{
    printf ("student Name:%s\n",arr[n].name); //printing or displaying students details
    printf ("student age:%d\n",arr[n].age);
    printf ("student gender (M/F) %c\n",arr[n].gen);
    printf ("student city %s\n",arr[n].city);
    printf ("student Pin code%d\n",arr[n].pin);
}
