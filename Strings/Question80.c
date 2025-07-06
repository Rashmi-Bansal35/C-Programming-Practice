/*
Write a program to convert a input string to uppercase.
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    // Declare a string
    char str[100];

    // Take input from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if present
    str[strcspn(str, "\n")] = '\0';

    for(int i = 0; str[i] != '\0'; i++){
        str[i] = toupper(str[i]);
    }

    // Print input in uppercase
    printf("%s", str);

    return 0;
}