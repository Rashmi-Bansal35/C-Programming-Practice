/*
Create a program to print the area of a circle by inputing its radius.
*/

#include<stdio.h>

int main(){
    // Define a constant for pi. The 'const' keyword makes the value unchangeable after initialization.
    const float pi = 3.14;

    // Declaring a variable for pi
    float radius;

    // Taking input from user of radius
    printf("Enter the radius of circle: ");
    scanf("%f", &radius);

    // Declaring a variable for area of circle( area = pi * radius * radius)
    float area = pi * radius * radius;

    // Printing the area f circle.
    printf("The area of circle is %.2f of radius %.2f", area, radius);

    return 0;
}