/*
Write a function that uses pointer arithmetic to copy an array of char into another.
*/

#include<stdio.h>

// Function to copy char array using pointer arithmetic
void copyCharArray(char *dest, char *src) {
    while(*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; // Null-terminate the destination array
}

int main(){
    // Declare arrays
    char arr1[50], arr2[50];

    // Take input
    printf("Enter a string: ");
    scanf("%s", arr1);

    // Copy using pointer arithmetic
    copyCharArray(arr2, arr1);

    // Print copied array
    printf("Copied string: %s\n", arr2);

    return 0;
}