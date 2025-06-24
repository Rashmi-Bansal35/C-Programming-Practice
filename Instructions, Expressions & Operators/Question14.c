/*
Create a program to calculate the perimeter of a rectangle.
Perimeter of rectangle ABCD = A + B + C + D or 2*(Length + Breadth)
*/

#include<stdio.h>

int main(){
    // Declare two variables of float data type for length and breadth
    float length, breadth;

    // Take input of length of rectangle from user
    printf("Enter the length of rectangle: ");
    scanf("%f", &length);

    // Take input of breadth of rectangle from user
    printf("Enter the breadth of rectangle: ");
    scanf("%f", &breadth);

    // Calculate the perimeter of the rectangle
    float perimeter = 2 * (length + breadth);

    // Print the perimeter of the rectangle 
    printf("The perimeter of rectangle of length %.2f and breadth %.2f is %.2f.", length, breadth, perimeter);

    return 0;
}

