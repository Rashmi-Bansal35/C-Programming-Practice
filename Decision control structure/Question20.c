/*
Create a program that determines if a number is odd or even.
*/

#include<stdio.h>

int main(){
    // Declare variable to store the number
    int number;

    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if given number is odd or even
    if (number % 2 == 0){
        printf("%d is a even number.", number);
    }
    else{
        printf("%d is odd number", number);
    }

    return 0;
}