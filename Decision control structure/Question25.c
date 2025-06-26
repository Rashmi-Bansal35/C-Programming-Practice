/*
Create a program to find the minimum of two numbers using ternary operator.
*/

#include<stdio.h>

int main(){
    // Declare two variables to store values
    int num1, num2;

    // Take input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Check for equality first
    if (num1 == num2) {
        printf("Both numbers are equal.");
    } else {
        // Use ternary operator to print the minimum value
        (num1 > num2) ? printf("%d is minimum.", num2) : printf("%d is minimum.", num1);
    }

    return 0;
}