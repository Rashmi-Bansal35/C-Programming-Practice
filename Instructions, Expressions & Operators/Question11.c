/*
Create a program that takes two numbers and shows result of all arithmetic operators (+, -, *, /, %).
*/

#include<stdio.h>

int main(){
    // Declaring two variables for storing two numbers of integer data types
    int num1, num2;

    // Taking input of number 1
    printf("Enter the integer value of number 1: ");
    scanf("%d", &num1);

    // Taking input of number 2
    printf("Enter the integer value of number 2: ");
    scanf("%d", &num2);

    // Printing the results of arithmetic operations on two numbers
    printf("The addition (+) of %d and %d is %d.\n", num1, num2, num1+num2);
    printf("The subtraction (-) of %d and %d is %d.\n", num1, num2, num1-num2);
    printf("The multiplication (*) of %d and %d is %d.\n", num1, num2, num1*num2);

    // Check for division and modulo by zero
    if(num2 != 0) {
        printf("The division (/) of %d and %d is %d.\n", num1, num2, num1/num2);
        printf("The modulo or remainder (%%) of %d and %d is %d.\n", num1, num2, num1%num2);
    } else {
        printf("Division (/) and modulo (%%) by zero are undefined.\n");
    }

    return 0;
}