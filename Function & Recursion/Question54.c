/*
Create a function max that takes two float arguments and returns the larger value.
*/

#include<stdio.h>

// Declare a function 
float max(float a, float b);

int main(){
    // Declare two variables
    float num1, num2;

    // Take input from user
    printf("Input two float (decimal) numbers: ");
    scanf("%f%f", &num1, &num2);

    // Call a function
    float result = max(num1, num2);

    // Print the larger value
    printf("The larger value from %f and %f is %f.", num1, num2, result);

    return 0;
}

// Define a function
float max(float a, float b){
    float larger = (a > b) ? a : b;
    return larger;
}