#include <stdio.h>
#include <stdlib.h>
typedef struct student {
    char name[10];
    char fname[10];
    int roll;
} std;

void addstud(std s[], int n);
void searchbyroll(std s[], int n);
void showall(std s[], int n);

int main() {
    std s[10];
    while (!exit){   
    printf("==========================================================\n");
    printf("\t\tWelcome to the college\n");
    printf("==========================================================\n");
    char a;
    int n;
    printf("How many students do you want to enter? ");
    scanf("%d", &n);
    printf("A.Add new student\nB.Search by roll number\nC.Show all students\nD.Exit\n");
    scanf(" %c", &a); // Note the space before %c
    switch (a) {
        case 'A':
            addstud(s, n);
            break;
        case 'B':
            searchbyroll(s, n);
            break;
        case 'C':
            showall(s, n);
            break;
        case 'D':
            exit(0);
            break;
        default:
            printf("Wrong value entered!\n");
    }
    }
    return 0;
}

void addstud(std s[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter student name: ");
        scanf("%s", s[i].name);
        printf("Enter father's name: ");
        scanf("%s", s[i].fname);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);
    }
}

void searchbyroll(std s[], int n) {
    int roll_to_find;
    int found = 0; // Flag to check if student is found

    printf("Enter roll number to search: ");
    scanf("%d", &roll_to_find);

    for (int i = 0; i < n; i++) {
        if (s[i].roll == roll_to_find) {
            printf("Student details:\n");
            printf("Name: %s\n", s[i].name);
            printf("Father's name: %s\n", s[i].fname);
            printf("Roll number: %d\n", s[i].roll);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with roll number %d not found!\n", roll_to_find);
    }
}

void showall(std s[], int n) {
    printf("\nStudent List:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s\n", s[i].name);
        printf("Father's name: %s\n", s[i].fname);
        printf("Roll number: %d\n", s[i].roll);
        printf("\n"); // Add a newline for better formatting
    }
}
