/*
Create a program to find the Least Common Multiple (LCM) of two numbers.
*/

#include<stdio.h>

int main(){
    // Declare  two variables to store two values
    int num1, num2;

    // Take input from user
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    // Check which number is greatest and store it in a variable
    int max = (num1 > num2) ? num1 : num2;
    int lcm = max;

    // Using while loop because we don't know when loop end
    while (1) {
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            printf("%d is LCM of %d and %d.", lcm, num1, num2);
            break;
        }
        lcm++;
    }

    return 0;
}