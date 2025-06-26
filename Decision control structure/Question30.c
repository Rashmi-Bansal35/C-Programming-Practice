/*
Create a program to create a simple calculator that uses a switch statement to perform 
basic arithmetic operations like addition, subtraction, multiplication, and division.
*/

#include<stdio.h>

int main(){
    // Declare variables to store two numbers
    float num1, num2;

    // Declare variable to store operator as a character
    char operator;

    // Take input of two numbers from user
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Take input of operator from user
    printf("Enter any operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c

    // Using switch condition for arithmatic operations for different operators
    switch (operator)
    {
    case '+':
        printf("Addition of %f and %f is %f.", num1, num2, num1+num2);
        break;
    case '-':
        printf("Subtraction of %f and %f is %f.", num1, num2, num1-num2);
        break;
    case '*':
        printf("Multiplication of %f and %f is %f.", num1, num2, num1*num2);
        break;
    case '/':
        if (num2 == 0){
            printf("Division by zero is not allowed.");
        } 
        else{
            printf("Division of %f and %f is %f.", num1, num2, num1/num2);
        }
        break;
    default:
        printf("Please enter a valid operator.");
    }

    return 0;
}