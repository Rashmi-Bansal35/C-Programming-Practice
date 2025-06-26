/*
Create a program to find if the given number is even or odd using ternary operator.
*/

#include<stdio.h>

int main(){
    // Declare variable to store value
    int number;

    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check for number is zero or not
    if (number == 0){
        printf("Given number is zero. It is neither odd nor even.");
    }
    else {
        // Use ternary operator to print even or odd
        (number % 2 == 0) ? printf("%d is even number.", number) : printf("%d is odd number.", number);
    }

    return 0;
}