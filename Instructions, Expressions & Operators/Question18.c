/*
Create a program to convert Fahrenheit to Celsius
C = (F - 32) * 5/9
*/

#include<stdio.h>

int main(){
    // Declare variables for celsius and fahrenheit
    float celsius, fahrenheit;

    // Take input of temperature in fahrenheit from user
    printf("Enter the temperature (in Fahrenheit): ");
    scanf("%f", &fahrenheit);

    // Calculate temperature in celsius
    celsius = (fahrenheit - 32) * 5 / 9;

    // Print the temperature in celsius
    printf("The %.2fF temperature in celsius is %.2f.", fahrenheit, celsius);

    return 0;
}