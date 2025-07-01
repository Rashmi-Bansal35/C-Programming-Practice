/*
Write a program that declares an integer variable and a pointer to it. Assign a value and print it using the pointer.
*/

#include<stdio.h>

int main(){
    // Declare a variable;
    int num;

    // Declare a pointer
    int *p;

    // Assign a value to variable
    num = 60;

    // Assign location of variable to pointer
    p = &num;

    // Print value using pointer
    printf("The value is %d", *p);

    return 0;
}