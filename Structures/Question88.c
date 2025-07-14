/*
Create a program where you need to store and process data for a Book with attributes like title, author, and price, 
demonstrating why a structure is more suitable than separate variables.
*/

#include<stdio.h>
#include<string.h>

// Declare a structure
struct book{
    char title[50];
    char author[50];
    float price;
};

int main(){
    // Declare structure variable
    struct book book_details[2];

    // Take input from user
    for(int i = 0; i < 2; i++){
        printf("Enter the details of book %d", i+1);
        printf("\nEnter the title of book %d: ", i+1);
        fgets(book_details[i].title, sizeof(book_details[i].title), stdin);
        printf("Enter the author of book %d: ", i+1);
        fgets(book_details[i].author, sizeof(book_details[i].author), stdin);
        printf("Enter the price of book %d: ", i+1);
        scanf("%f", &book_details[i].price);
        getchar(); //Consume leftover newline
    }

    // Remove newline character
    for(int i = 0; i < 2; i++){
        book_details[i].title[strcspn(book_details[i].title, "\n")] = '\0';
        book_details[i].author[strcspn(book_details[i].author, "\n")] = '\0';
    }

    // Print the details of books
    for(int i = 0; i < 2; i++){
        printf("The details of book %d\n", i+1);
        printf("Title: %s\n", book_details[i].title);
        printf("Author: %s\n", book_details[i].author);
        printf("Price: %.2f\n",  book_details[i].price);
    }

    return 0;
}