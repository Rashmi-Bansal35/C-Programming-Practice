/*
Write a function that takes a string and reverses it in place.
*/

#include<stdio.h>
#include<string.h>

int main(){
    // Declare a string
    char name[50];

    // Take input from user
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Remove next line terminator
    name[strcspn(name, "\n")] = '\0';

    // Reverse the input string
    int len = strlen(name);
    for(int i = 0; i < len / 2; i++){
        char temp = name[i];
        name[i] = name[len - 1 - i];
        name[len - 1 - i] = temp;
    }

    puts(name);
    return 0;
}