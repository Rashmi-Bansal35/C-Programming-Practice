/*
Create a program to check if a number is an Armstrong number.

Armstrong numbers are those where the sum of each digit raised to the power of the number of digits equals the number itself.
For example, 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.
*/

#include<stdio.h>

int main(){
    // Declare a variable to store the number
    int number;

    // Declare variables to store remainder and sum
    int remainder, sum = 0;

    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Store input into another variable for comparison later
    int duplicate = number;

    // Count the number of digits
    int digits = 0, temp = number;
    while (temp != 0) {
        digits++;
        temp = temp / 10;
    }

    // Reset sum and temp for calculation
    sum = 0;
    temp = number;

    // Calculate sum of digits raised to the power of number of digits
    while(temp != 0){
        remainder = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= remainder;
        }
        sum += power;
        temp = temp / 10;
    }

    // Check if sum is equal to the original number
    if (sum == duplicate){
        printf("%d is an Armstrong number.", duplicate);
    }
    else{
        printf("%d is not an Armstrong number.", duplicate);
    }

    return 0;
}