/*
Create a program that computes the sum of the digits of an integer.
*/

#include<stdio.h>

int main(){
    // Declare variables to store a number and its duplicate
    int number, duplicate;

    // Initialize a variable to store sum of digits
    int sum = 0;

    // Take input from user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Store value of number in duplicate
    duplicate = number;

    // Using while loop
    while (number != 0){
        int remainder = number % 10;
        sum += remainder;
        number = number / 10;
    }

    printf("The sum of digits of %d is %d.", duplicate, sum);

    return 0;
}