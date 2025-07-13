/*
Create a program using break to read inputs from the user in a loop and break the loop if a specific keyword 
(like "exit") is entered.
*/

#include<stdio.h>
#include<string.h>

int main(){
    // Declare a string
    char str[100];

    // Use while loop
    while(1){
        // Take input from user
        printf("Enter any word or line (Type 'exit' to quit): ");
        fgets(str, sizeof(str), stdin);
        // Remove next line character
        str[strcspn(str, "\n")] = '\0';
        if(strcmp(str, "exit") == 0){
            break;
        }
        else{
            puts(str);
        }
    }
    
    return 0;
}