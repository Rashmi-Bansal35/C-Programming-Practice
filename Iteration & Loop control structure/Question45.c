/*
Create a program using for loop to print the multiplication table for a number.
*/

#include<stdio.h>

int main(){
    // Declare a variable
    int number;

    // Take input from user
    printf("Enter a number to print its table: ");
    scanf("%d", &number);

    // Using for loop to print the table
    for(int i = 1; i < 11; i++){
        printf("%d * %d = %d\n", number, i, number * i);
    }

    return 0;
}