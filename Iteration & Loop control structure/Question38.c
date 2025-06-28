/*
Create a program to reverse the digits of a number.
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

    printf("%d is reverse of %d.", reverse, temp);

    return 0;
}