/*
Create a program to declare two integer variables, assign them values, and display their values.
*/

#include<stdio.h>

int main(){
    //Declaring two int variables
    int num1, num2;
    //We can also declare two varibles like
    //int num1;
    //int num2;

    //Assigning values
    num1 = 60;
    num2 = 79;
    //We can also declare in single line
    //num1 = 60, num2 = 70;

    //Displaying values
    printf("Number 1 is %d.\nNumber 2 is %d.", num1, num2);

    return 0;
}