/*
Create a program to calculate product of two floating point numbers.
*/

#include<stdio.h>

int main(){
    // Declaring two variables
    float num1, num2;

    // Taking input of number 1 from user
    printf("Enter the value of number 1: ");
    scanf("%f", &num1);

    // Taking input of number 2 from user
    printf("Enter the value of number 2: ");
    scanf("%f", &num2);

    // Initializing a variable to store the product of two float values
    float product = num1 * num2;

    // Printing product of two floating point numbers.
    printf("The product of %.2f and %.2f is %.2f.\n", num1, num2, product);

    return 0;
}