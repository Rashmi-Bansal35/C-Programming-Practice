/*
Create a program to define a constant for the mathematical value pi(3.14159) and 
use it to calculate and print the circumference of a circle with radius input from user.
*/

#include<stdio.h>

int main(){
    // Define a constant for pi. The 'const' keyword makes the value unchangeable after initialization.
    // It is used for values that should remain constant, like pi.
    const float pi = 3.14159;

    // Declare variable for radius
    float radius;

    // Taking input from user
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    // Calculate circumference (circumference = 2 * pi * radius)
    float circum = 2 * pi * radius;

    // Print the value of circumference
    printf("The circumference of circle is %.3f of radius %.3f.\n", circum, radius);

    return 0;
}