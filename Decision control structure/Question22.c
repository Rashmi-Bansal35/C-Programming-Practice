/*
Create a program that determines if a given year is a leap year
(considering conditions like divisible by 4 but not 100, unless also divisible by 400).
*/

#include<stdio.h>

int main(){
    // Declare a variable to store year
    int year;

    // Take input from user
    printf("Enter a year to check it's leap year or not: ");
    scanf("%d", &year);

    // Check if given year is leap year or not
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        printf("%d is a leap year.", year);
    }
    else{
        printf("%d is not leap year.", year);
    }

    return 0;
}