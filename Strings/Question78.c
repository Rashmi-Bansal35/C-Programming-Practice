/*
Read a line of text from the user using fgets and then print it using puts.
*/

#include<stdio.h>
#include<string.h>

int main(){
    // Declare a string
    char text[50];

    // Take input from user
    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    // Print the line
    puts(text);

    return 0;
}