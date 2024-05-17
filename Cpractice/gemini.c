#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 10  // Define a maximum number of books allowed

typedef struct library {
    char author[20];
    long long isbn; // Use long long for ISBN
    int id;
    char title[20];
    char type[20];
} Book;

int bookCount = 0;

int addBook(Book library[]);
void searchBook(Book library[]);
void displayBooks(Book library[]);

int main() {
    Book library[MAX_BOOKS];
    int choice;

    printf("Welcome to the eBook Library!\n");

    do {
        printf("\nEnter your choice:\n");
        printf("1. Add Book\n");
        printf("2. Search Book\n");
        printf("3. Display Books\n");
        printf("4. Exit\n");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (addBook(library) == -1) {
                    printf("Library is full!\n");
                }
                break;
            case 2:
                searchBook(library);
                break;
            case 3:
                displayBooks(library);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

int addBook(Book library[]) {
    if (bookCount == MAX_BOOKS) {
        return -1;  // Indicate library is full
    }

    printf("\nEnter book details:\n");
    printf("Author: ");
    if (fgets(library[bookCount].author, sizeof(library[bookCount].author), stdin) == NULL) {
        printf("Error reading author name.\n");
        return -1;  // Indicate error
    }
    library[bookCount].author[strcspn(library[bookCount].author, "\n")] = '\0';  // Remove trailing newline from author name

    printf("ISBN: ");
    scanf("%lld", &library[bookCount].isbn); // Use %lld for long long
    __fpurge(stdin);  // Consider removing if not needed for your compiler

    printf("ID: ");
    scanf("%d", &library[bookCount].id);
    __fpurge(stdin);

    printf("Title: ");
    if (fgets(library[bookCount].title, sizeof(library[bookCount].title), stdin) == NULL) {
        printf("Error reading title.\n");
        return -1;  // Indicate error
    }
    
