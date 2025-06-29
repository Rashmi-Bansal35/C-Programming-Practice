/*
Create a program using continue to sum all positive numbers entered by the user; skip any negative numbers.
*/

#include<stdio.h>

int main(){
    // Declare a variable
    int num;

    // Initialize a variable
    int sum = 0;

    // Using while loop 
    while(1){
        printf("Enter a number (0 to exit): ");
        scanf("%d", &num);
        if(num < 0){
            continue;
        }
        else{
            sum += num;
        }
        printf("Sum is %d.\n", sum);
    }

    return 0;
}