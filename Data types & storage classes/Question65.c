/*
Write a C program that initializes an unsigned int to its maximum possible value and an int to a negative number.
Add 1 to both, and print the results to show how the unsigned int wraps around to 0, whereas the int remains 
negative due to overflow.
*/

#include<stdio.h>

int main(){
    // Initialize a variable
    unsigned int var1 = 4294967295U;

    // Initialize a variable
    int var2 = -4294967295;

    // Addiging one to both variables
    var1 += 1;
    var2 += 1;

    // Print the values of unsigned int and an int
    printf("The value of unsigned int is %u.\nThe value of int is %d.", var1, var2);

    return 0;
}