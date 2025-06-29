/*
Create a program using continue to print only even numbers using continue for odd numbers.
*/

#include<stdio.h>
int main(){
    // Declare a variable to store a number
    int num;

    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Even numbers are:\n");

    // Using for loop to print only even numbers
    for(int i = 1; i <= num; i++){
        if (i % 2 == 0){
            printf("%d\n", i);
        }
        else{
            continue;
        }
    }

    return 0;
}