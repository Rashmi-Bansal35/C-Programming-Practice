/*
Create a program to check whether a given number is prime using while.
*/

#include<stdio.h>

int main(){
    // Declare a variable to store the number
    int isPrime;

    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &isPrime);

    // Initialize a variable
    int flag = 0;

    // Check if number is prime or not
    if (isPrime < 2) {
        printf("%d is not a Prime number.", isPrime);
        return 0;
    }
    int i = 2;
    while (i < isPrime){
        if (isPrime % i == 0){
            flag = 1;
            break;
        }
        i++;
    }
    
    if (flag == 1){
        printf("%d is not a Prime number.", isPrime);
    }
    else{
        printf("%d is a Prime number.", isPrime);
    }

    return 0;
}