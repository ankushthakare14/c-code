#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>

typedef struct student{
    char name[20];
    char fname[20];
    long rollno;
}stud;

typedef union studid{
    long adhar;
    long vcard;
    long dlcard;
    
}id;

void addnew(stud s[],id j[]);
void search(stud s[]);
void showall(stud s[],id j[]);

int main()
{
    stud s[10];
    id j[10];
    char choice;
    while(1)
    {
    printf("==============================================================\n");
    printf("\t\t\tWELCOME TO COLLAGE\n");
    printf("==============================================================\n");
    printf("enter your choice\nA: add new student\nB: search a student by roll number\nC: show all student\nD: EXIT\n");
    __fpurge(stn);
    scanf("%c",&choice);
    switch(choice)
    {
        case 'A':
        addnew(s,j);
        break;
        case 'B':
        search(s);
        break;
        case 'C':
        showall(s,j);
        break;
        case 'D':
        printf("============================Exited===============================\n=");
        return 0;
        break;
        if (choice!='A'||'B'||'C'||'D')
        printf("invalid entry...!\n");
    }
    }

}


void addnew(stud s[],id j[]){
    for(int i=0;i<10;i++)
    {
        int idd;
        printf("enter student name: \n");
        scanf("%s",s[i].name);
        __fpurge(stdin);
        printf("enter student father's name: \n");
        scanf("%s",s[i].fname);
        __fpurge(stdin);
        printf("enter student roll number \n");
        scanf("%ld",&s[i].rollno);
        __fpurge(stdin);
        printf("enter gov id:\n1)adhar (or)\n2)votar id (or)\n3)driving licence\n");
        scanf("%ld",&idd);
        
        switch(idd)
        {
            case 1:printf("enter your adhar number:\n");
                    __fpurge(stdin);
                    scanf("%ld",&j[i].adhar);
                    __fpurge(stdin);
                    break;
            case 2:printf("enter your voter card number:\n");
                    scanf("%ld",&j[i].vcard);
                    __fpurge(stdin);
                    break;
            case 3:printf("enter your driving licence number:\n");
                    scanf("%ld",&j[i].dlcard);
                    __fpurge(stdin);
                    break;
            default:
            printf("invalid entry...");
            break;
        }
        return ;

    }
}
void search(stud s[]){
    int abc;
    printf("enter the roll no you want to search: \n");
    __fpurge(stdin);
    scanf("%ld",&abc);
    __fpurge(stdin);
    for(int i=0;i<10;i++)
    {
        if(s[i].rollno==abc){
            printf("student recoard found:%s\n\n",s[i].name);
        
            return;
        }
            else{
            printf("recoard not found!!!\n");
            }
    }
    
    return ;

}
void showall(stud s[],id j[]){
    for(int i=0;i<10;i++)
    {
        printf("%s\n",s[i].name);
        __fpurge(stdin);
        printf("%s\n",s[i].fname);
        __fpurge(stdin);
        printf("%ld",s[i].rollno);
         __fpurge(stdin);
        printf("%ld",j[i].adhar);
         __fpurge(stdin);
        printf("%ld",j[i].vcard);
         __fpurge(stdin);
        printf("%ld",j[i].dlcard);
    }
    return;

}