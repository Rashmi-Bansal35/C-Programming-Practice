/*
Call a function print_date that prints the current date. Define the function without any parameters.
*/

#include<stdio.h>

// Declare a function
void print_date();

int main(){
    // Call a function
    print_date();

    return 0;
}

// Define a function
void print_date(){
    // Declare a variable
    int date;

    // Take input from user
    printf("Input current date: ");
    scanf("%d", &date);

    // Print date
    printf("Current date is %d.", date);
}