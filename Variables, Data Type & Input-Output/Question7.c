/*
Create a program to print the area of square by inputing its side length.
*/

#include<stdio.h>

int main(){
    // Declaring a variable
    float length_of_square;

    // Taking input from user
    printf("Enter the length of side of square: ");
    scanf("%f", &length_of_square);

    // The area of square is side * side (* is used for multiplication, also known as multiplication operator)
    float area = length_of_square * length_of_square;

    printf("The area of square is %.2f for length %.2f\n", area, length_of_square);

    return 0;
}

