/*
Call a function get_average that takes five int numbers and returns the average.
*/

#include<stdio.h>

// Declare a function
float get_average(int a, int b, int c, int d, int e);

int main(){
    // Declare variables to store marks
    int sub1, sub2, sub3, sub4, sub5;

    // Take input from user
    printf("Input marks of five subjects (in integer): ");
    scanf("%d%d%d%d%d", &sub1, &sub2, &sub3, &sub4, &sub5);

    // Call a function
    float result = get_average(sub1, sub2, sub3, sub4, sub5);

    // Print the average
    printf("The average of marks of five subjects is %f.", result);

    return 0;
}

// Define a function
float get_average(int a, int b, int c, int d, int e){
    int total = a + b + c + d + e;
    float average = total / 5.0; // Use 5.0 to force floating-point division
    return average;
}