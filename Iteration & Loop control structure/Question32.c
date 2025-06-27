/*
Create a program to sum all odd numbers from 1 to a specified number N.
*/

#include<stdio.h>

int main(){
    // Declare a number to store a number
    int num;

    // Initialize a variable to store the odd numbers
    int sum = 0;

    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Using for loop to add odd numbers
    for(int i = 1; i <= num; i++){
        if (i % 2 != 0){
            sum += i;
        }
        else {
            continue;
        }
    }

    // Print sum of odd numbers
    printf("The sum of all odd number upto %d is %d.", num, sum);

    return 0;
}