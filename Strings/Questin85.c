/*
Create a program that checks if a given string is a palindrome and outputs the result.
*/

#include<stdio.h>
#include<string.h>

int main(){
    // Declare string
    char str[50], reverse[50];

    // Take input from user
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    // reverse the string
    for(int i = 0; i < len; i++){
        reverse[i] = str[len - 1 - i];
    }
    reverse[len] = '\0';
    
    int result = strcmp(reverse, str);
    if (result == 0){
        printf("Your given string is Palindrome.");
    }
    else {
        printf("Your given string is not Palindrome.");
    }

    return 0;
}