/*
Create a program using recursion to check if a number is a palindrome using recursion.
*/

#include<stdio.h>

// Declare a function
int palindrome(int a, int r);

int main(){
    // Declare two variables
    int num, reverse = 0;

    // Take input from user
    printf("Input a number: ");
    scanf("%d", &num);

    // Store input value in other variable
    int temp = num; 

    // Call a function and assign the result to reverse
    reverse = palindrome(num, 0);

    if (reverse == temp){
        printf("%d is Palindrome.", temp);
    }
    else {
        printf("%d is not Palindrome.", temp);
    }

    return 0;
}

// Define a function
int palindrome(int a, int r){
    if(a == 0){
        return r;
    }
    int remainder = a % 10;
    r = r * 10 + remainder;
    return palindrome(a / 10, r);
}