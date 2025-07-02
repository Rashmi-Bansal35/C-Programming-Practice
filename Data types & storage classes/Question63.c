/*
Create a program that converts a large number of kilometers to miles, using long or long long to store the distance.
*/

#include<stdio.h>

int main(){
    // Declare a variable
    long long distance;

    // Take input from user
    printf("Enter distance (in km): ");
    scanf("%lld", &distance);

    // Convert km to miles using double for precision
    double miles = distance / 1.609344;

    // Print miles
    printf("%lld km is equal to %.2f miles.", distance, miles);

    return 0;
}