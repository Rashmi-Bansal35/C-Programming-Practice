/*
Create a program to calculate simple interest.
Simple interest = (Principal * Rate * Time)/100
*/

#include<stdio.h>

int main(){
    // Declare variables for principal, rate, and time
    float principal, rate, time;

    // Take input of principal amount from user
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    // Take input of interest rate from user
    printf("Enter the interest rate: ");
    scanf("%f", &rate);

    // Take input of duration (in years) from user
    printf("Enter the duration for which money is borrowed or invested (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    float simple_interest = (principal * rate * time) / 100;

    // Print the simple interest
    printf("The simple interest of amount %.2f at rate of %.2f for %.2f years is %.2f", principal, rate, time, simple_interest);

    return 0;
}