/*
Create a program to calculate the absolute value of a given integer using ternary operator.
*/

#include<stdio.h>

int main(){
    // Declare variable to store value
    int num;

    // Take inpu from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate absolute value using ternary operator
    (num < 0) ? printf("Absolute value of %d is %d.", num, -1 * num) : printf("Absolute value of %d is %d.", num, num);

    return 0;
}