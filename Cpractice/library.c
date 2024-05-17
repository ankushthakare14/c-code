#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct library{
    char auther[20];
    int isbn;
    int id;
    char title[20];
    char type[20];
}var;
int count;

int addbook(var l[]);
void searchbook(var l[]);
void displaybooks(var l[]);


int main()
{
    var l[10];
    int choice;
    int count=0;

    printf("welcome to ebook");
    printline();
    printf("enter your choice\n1-add book\n2-searchbook\n3-display book\n");
    scanf("%d",choice);


    switch(choice)
    {
        case 1:addbook(l);
        break;
        case 2:searchbook(l);
        break;
        case 3:displaybook(l);
        break;
        
        

    }
}
int addbook(var l[])
{
    for(int i=0;i<count;i++)
    {

    printf("enter auther\n");
    scanf("%s",l[i].auther);
    __fpurge(stdin);
    printf("enter isbn of book:\n");
    scanf("%s",l[i].isbn);
    __fpurge(stdin);    
    printf("enter id of book:\n");
    scanf("%d",l[i].id);
    __fpurge(stdin);
    printf("enter title of book:\n");
    scanf("%s",l[i].title);
    __fpurge(stdin);
    printf("enter type of book:\n");
    scanf("%s",l[i].type);
    
    }
    count++;
    return 0;
}
void searchbook(var l[])
{
    int x;
    printf("enter the book if you want to search");
    scanf("%d",&x);
    for(int i=0;i<count;i++)
    {
        if(l[i].title==x)
        {
            printf("book is found");
            printf("book title is=%s",l[i].title);
        }
    }
    return;

}
void displaybooks(var l[])
{
        for(int i=0;i<count;i++)
        {
    printf("book auter is =%s",l[i].auther);
    printf("book isdn no is=%d",l[i].isbn);
    printf("book id is =%d",l[i].id);
    printf("book title is=%s",l[i].title);
    printf("book type is =%s",l[i].type);
        }
    
}