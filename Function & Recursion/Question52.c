/*
Define a function square that takes an int and returns its square.
*/

#include<stdio.h>

// Declare a function
int square(int a);

int main(){
    // Declare a variable
    int num;

    // Take input from user
    printf("Input a number: ");
    scanf("%d", &num);

    // Call a function
    int result = square(num);

    // Print the square
    printf("Square of %d is %d.", num, result);

    return 0;
}

// Define a function
int square(int a){
    int sq = a * a;
    return sq;
}