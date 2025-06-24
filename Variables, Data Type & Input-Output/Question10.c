/*
Create a program to swap two numbers.
*/

//------->> EXAMPLE <<---------
/* We have two numbers a = 5, b = 8 so, 
after swapping the numbers the output should be a = 8, b = 5
*/

#include<stdio.h>

int main(){
    // Declaring two variables of same data type. Here I use int data type we can also do this with float data type
    int num1, num2;

    // Taking input of 1st number
    printf("Enter the value of 1st number: ");
    scanf("%d", &num1);

    // Taking input of 2nd number
    printf("Enter the value of 2nd number: ");
    scanf("%d", &num2);

    // Printing the values of variables before swapping 
    printf("Before swapping,\nThe value of 1st number is %d and 2nd number is %d\n", num1, num2);

    // Swapping steps:
    // Step 1: Store the value of num2 in a temporary variable 'swap'
    int swap = num2;

    // Step 2: Assign the value of num1 to num2
    num2 = num1;

    // Step 3: Assign the original value of num2 (stored in 'swap') to num1
    num1 = swap;

    // Printing the value of 1st number and 2nd number after swapping
    printf("After swapping,\nThe value of 1st number is %d and 2nd number is %d\n", num1, num2);

    return 0;
}