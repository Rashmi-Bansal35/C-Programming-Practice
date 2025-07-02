/*
Write a program to demonstrate the difference in range between long and long long by calculating the factorial of 20.
*/

#include<stdio.h>

int main(){
    // Initialize a variable
    long factorial1 = 1;

    // Initialize a variable
    long long factorial2 = 1;

    // Initialize a variable
    int n = 20;

    // Calculate factorial using long data type
    for(int i = 1; i <= n; i++){
        factorial1 *= i;
    }

    // Print factorial of long
    printf("The factorial of %d using long is %ld.\n", n, factorial1);

    // Calculate factorial using long long data type
    for(int i = 1; i <= n; i++){
        factorial2 *= i;
    }

    // Print factorial of long long
    printf("The factorial of %d using long long is %lld.\n", n, factorial2);

    // Explain the difference
    printf("Notice: The value using long is incorrect due to overflow, but long long gives the correct result.\n");

    return 0;
}