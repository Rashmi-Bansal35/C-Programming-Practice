/*
Write a function where the Student structure also has books they have borrowed inside, showing nested structure usage.
*/

#include<stdio.h>
#include<string.h>

// Declare a structure
struct books_borrowed{
        char books[50];
};

struct Student{
    char name[30];
    int roll_no;
    struct books_borrowed borrowed[10];
    int no_of_books;
};

// Declare a function
void student_books(struct Student *s);

int main(){
    // Declare structure variable
    struct Student s;
    struct books_borrowed b[10];

    // Take input from user
    printf("Enter details:\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0';
    printf("Enter Roll no.: ");
    scanf("%d", &s.roll_no);
    getchar();
    printf("Enter number of books you have borrowed: ");
    scanf("%d", &s.no_of_books);
    getchar();
    printf("Enter the name of books: ");
    for(int i = 0; i < s.no_of_books; i++){
        fgets(s.borrowed[i].books, sizeof(s.borrowed[i].books), stdin);
        s.borrowed[i].books[strcspn(s.borrowed[i].books, "\n")] = '\0';
    }

    // Call a function
    student_books(&s);

    return 0;
}

// Define a function
void student_books(struct Student *s){
    printf("\n\nDetails:\n");
    printf("Name: %s\n", s->name);
    printf("Roll no.: %d\n", s->roll_no);
    printf("The name of books you borrowed: ");
    for(int i = 0; i < s->no_of_books; i++){
        printf("%d. %s\n", i+1, s->borrowed[i].books);
    }
}