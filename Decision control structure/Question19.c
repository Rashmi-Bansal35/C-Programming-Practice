/*
Create a program that determines if a number is positive, negative, or zero.
*/

#include<stdio.h>

int main(){
    // Declare a variable to store the number
    int number;

    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the given number is positive, negative, or zero
    if (number < 0){
        printf("%d is a negative number.", number);
    }
    else if (number > 0){
        printf("%d is a positive number.", number);
    }
    else{
        printf("Given number is zero.");
    }

    return 0;
}