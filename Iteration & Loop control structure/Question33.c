/*
Write a function that calculates the factorial of a given number.
*/

#include<stdio.h>

int main(){
    // Declare a variable to store number
    int num;

    // Initialize the variable to store factorial
    int factorial = 1;

    // Take input from user
    printf("Enter a number for it's factorial: ");
    scanf("%d", &num);

    // Using for loop to find factorial
    for(int i = 1; i <= num; i++){
        factorial *= i;
    } 

    printf("The factorial of %d is %d.", num, factorial);

    return 0;
}