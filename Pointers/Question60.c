/*
Write a program to change the value of an integer variable using a pointer and the * operator.
*/

#include<stdio.h>

int main(){
    // Initialize a variable
    int num = 50;

    // Declare a pointer
    int *p;
    p = &num;

    // Change value of variable using pointer
    *p = 108;

    // Print value of variable
    printf("The value of variable is %d.", num);

    return 0;
}