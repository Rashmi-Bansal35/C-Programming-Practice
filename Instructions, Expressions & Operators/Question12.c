/*
Given an integer value, convert it to a floating-point value and print both.
*/

#include<stdio.h>

int main(){
    // Initializing a variable
    int value = 36;

    // Converting an int variable into float and storing it to a new variable 
    float floatValue = (float)value;

    // Printing integer value and float value
    printf("Integer value is %d.\nFloat value is %f", value, floatValue);

    return 0;
}