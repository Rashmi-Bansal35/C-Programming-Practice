/*
Implement a trim function that removes leading and trailing spaces from a string.
*/

#include<stdio.h>
#include<string.h>

// Declare a function
void trim();

int main(){
    
    // Call a function
    trim();

    return 0;
}

// Define a function
void trim(){
    // Declare a string
    char str[50], new[50];

    // Take input from user
    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    // Length of string
    int len = strlen(str);

    // Find start index
    int start = 0;
    while(str[start] == ' '){
        start++;
    }

    // Find end index
    int end = len - 1;
    while(str[end] == ' '){
        end--;
    }

    int j = 0;
    for(int i = start; i <= end; i++){
        new[j++] = str[i];
    }
    new[j] = '\0';

    puts(new);
}