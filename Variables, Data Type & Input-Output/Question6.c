/*
Define variables for storing a user's first name, last name, and age
using appropriate naming conventions and then display them.
*/

#include<stdio.h>

int main(){
    // Declaring variables in camel case style
    char first_name[20], last_name[20];
    int age;

    // Taking inputs from user
    printf("Enter your first name: ");
    // Read up to 19 characters to avoid buffer overflow
    scanf("%19s", first_name);

    printf("Enter your last name: ");
    scanf("%19s", last_name);

    printf("Enter your age: ");
    // Read integer value for age
    scanf("%d", &age);

    // Printing the values
    printf("Your full name is %s %s and age is %d.", first_name, last_name, age);

    return 0;
}

/*
In this question, we are trying to take input from user and display them.
Did you notice that I didn't use ampersand(&) while taking input of user's first name and last name.
Some of you will think I forgot to write it, but here is the thing: while taking input in string we don't 
usually need to use ampersand(&) in scanf, because the array name itself acts as a pointer.
When we declare a variable for a string, it acts as an array.
*/