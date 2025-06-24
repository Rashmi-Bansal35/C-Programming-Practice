/*
Create a program to calculate compound interest.
Compound interest = Principal(1 + Rate/100)Time
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

    // Calculate compound interest
    float compound_interest = principal *(1 + rate / 100)* time;

    // Print the compound interest
    printf("The simple interest of amount %.2f at rate of %.2f for %.2f years is %.2f", principal, rate, time, compound_interest);


    return 0;
}