/*
Create a program that determines the greatest of the three numbers.
*/

#include<stdio.h>

int main(){
    // Declare three variables to store the input numbers
    int num1, num2, num3;

    // Take input from user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Check which number is greatest
    if ((num1 > num2) && (num1 > num3)){
        printf("%d is the greatest number.", num1);
    }
    else if ((num2 > num1) && (num2 > num3)){
        printf("%d is the greatest number.", num2);
    }
    else if ((num3 > num2) && (num3 > num1)){
        printf("%d is the greatest number.", num3);
    }
    else {
        // Handles cases where two or all numbers are equal
        printf("Either all given numbers are same or any two numbers are same.");
    }

    return 0;
}