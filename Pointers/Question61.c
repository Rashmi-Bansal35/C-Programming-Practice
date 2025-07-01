/*
Declare a pointer to a char and use it to read and print a character entered by the user.
*/

#include<stdio.h>

int main(){
    // Declare a variable
    char var;

    // Declare a pointer in char
    char *p;

    // Assign address
    p = &var; 

    // Read character entered by user
    printf("Enter a character: ");
    scanf(" %c", p); 

    // Print character entered by user
    printf("You entered %c", *p);

    return 0;
}