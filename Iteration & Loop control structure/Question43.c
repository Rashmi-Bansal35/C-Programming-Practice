/*
Create a program that prompts the user to enter a positive number. 
Use a do-while loop to keep asking for the number until the user enters a valid positive number.
*/

#include<stdio.h>

int main(){
    // Declare a variable to store value
    int num;

    // Using do while loop
    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num > 0){
            printf("Congrats! You entered a valid positive number.");
            break;
        }
        else{
            printf("Try Again!\n");
        }
    } while (1);
    

    return 0;
}