/*
Create a program to calculate the Area of a triangle.
Area of triangle = 1/2 * Base * Height
*/

#include<stdio.h>

int main(){
    //Declare two variables of float data type
    float base, height;

    // Take input of base of triangle from user
    printf("Enter the length of base of triangle: ");
    scanf("%f", &base);

    //Take input of height of triangle from user
    printf("Enter the height of triangle: ");
    scanf("%f", &height);

    // Calculate the area of triangle
    float area = 0.5*base*height;
    
    // Print the area of triangle
    printf("The area of triangle of base %.2f and height %.2f is %.2f.", base, height, area);
    
    return 0;
}