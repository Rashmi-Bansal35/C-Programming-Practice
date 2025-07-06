/*
Use printf with format specifiers to format and print a date string (day, month, year).
*/

#include<stdio.h>
#include<string.h>

int main(){
    // Declare strings
    char day[50], month[50], year[50];

    // Take input from user
    printf("Enter current day: ");
    fgets(day, sizeof(day), stdin);

    printf("Enter current month: ");
    fgets(month, sizeof(month), stdin);

    printf("Enter current year: ");
    fgets(year, sizeof(year), stdin);

    // Remove trailing newline from each input
    day[strcspn(day, "\n")] = '\0';
    month[strcspn(month, "\n")] = '\0';
    year[strcspn(year, "\n")] = '\0';

    // Print the input
    printf("Day/Month/Year: %s/%s/%s\n", day, month, year);

    return 0;
}