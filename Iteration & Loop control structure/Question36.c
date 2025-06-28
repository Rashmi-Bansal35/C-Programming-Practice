/*
Create a program to find the Greatest Common Divisor (GCD) of two integers.
*/

#include<stdio.h>

int main(){
    // Declare  two variables to store two values
    int num1, num2;

    // Take input from user
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    // Find smaller number
    int min = (num1 < num2)? num1 : num2;
    int GCD = 1;

    // Logic to find GCD
    for(int i = min; i >= 1; i--){
        if (num1 % i == 0 && num2 % i == 0){
            GCD = i;
            break;
        }
    }

    printf("%d is GCD of %d and %d.", GCD, num1, num2);

    return 0;
}