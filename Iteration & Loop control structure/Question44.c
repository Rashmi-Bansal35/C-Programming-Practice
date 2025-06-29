/*
Develop a program that calculates the sum of all numbers entered by a user until the user enters 0. 
The total sum should then be displayed.
*/

#include<stdio.h>

int main(){
    // Declare a variable to store value
    int number;

    // Initialize a variable
    int sum = 0;

    // Using while loop
    while(1){
        printf("Enter a number: ");
        scanf("%d", &number);
        if (number == 0){
            printf("The sum of all numbers is %d.", sum);
            break;
        }
        else{
            sum += number;
        }
    }

    return 0;
}