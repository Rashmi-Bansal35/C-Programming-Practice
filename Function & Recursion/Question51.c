/*
Write a function that adds that takes 4 int parameters and returns the sum.
*/

#include<stdio.h>

// Declare a function
int addition(int a, int b, int c, int d);

int main(){
    // Declare variables
    int num1, num2, num3, num4;

    // Take input from user
    printf("Input four numbers:");
    scanf("%d%d%d%d", &num1, &num2, &num3, &num4);

    // Call a function
    int sum = addition(num1, num2, num3, num4);

    // Print sum
    printf("Sum of %d, %d, %d, and %d is %d.", num1, num2, num3, num4, sum);

    return 0;
}

// Define a function
int addition(int a, int b, int c, int d){
    int sum = a + b + c + d;
    return sum; 
}