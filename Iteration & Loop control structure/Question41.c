/*
Create a program to verify if a number is a palindrome.
*/

#include<stdio.h>

int main(){
    // Declare a variable
    int num;

    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the input in another variable
    int temp = num;

    // Initialize reverse variable
    int reverse = 0;

    while (num != 0){
        int remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    // Check if number is palindrome
    if (reverse == temp){
        printf("%d is a palindrome number.", temp);
    }
    else{
        printf("%d is not a palindrome number.", temp);
    }

    return 0;
}