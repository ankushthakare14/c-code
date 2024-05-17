/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
typedef struct student{
    char name[30];
    int id;
    int age;
}stud;
int add(stud s[]);
void search(stud s[],int );
void display(stud s[],int);
int count=0;
int z=0;


int main()
{
    stud s[5];
    int choice;
    printf("welcome to collage portal");
    while(1)
    {
    printf("enter choice\n1)add\n2)search by id\n3)display\n4)exit\n");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:add(s);
        break;
        case 2:search(s,z);
        break;
        case 3:display(s,z);
        break;
        case 4:exit(0);
        return 0;
        
    }
    if(choice>4)
    {
        printf("invalid entry...");
    }
    }
    

    return 0;
}

int add(stud s[])
{
   
    printf("enter how many student you want to add");
    scanf("%d",&z);
    for(int i=0;i<z;i++)
    {
        printf("student %d",count+1);
        printf("name=\n");
        scanf("%s",s[i].name);
        __fpurge(stdin);
        printf("id=\n");
        scanf("%d",&s[i].id);
        __fpurge(stdin);
        printf("age=\n");
        scanf("%d",&s[i].age);
        __fpurge(stdin);
        count++;
        
    }
    return z;

    
}
void search(stud s[],int z)
{
    int x;
    printf("enter the student id to search");
    scanf("%d",&x);
    for(int i=0;i<z;i++)
    {
        if(s[i].id==x)
        {
            printf("student found");
        }
    }
    
}
void display(stud s[],int z)
{
    for(int i=0;i<z;i++)
    {
    printf("name=%s\n",s[i].name);
    printf("id=%d\n",s[i].id);
    printf("name=%d\n",s[i].age);
    
    }
    
}
