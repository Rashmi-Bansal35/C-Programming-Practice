/*
Create a program using for to display if a number is prime or not.
*/

#include<stdio.h>

int main(){
    // Declare a variable
    int num;

    // Take input from user
    printf("Enter a number to check if it's prime or not: ");
    scanf("%d", &num);

    // Initialize a variable
    int flag = 0;

    // Using for loop
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            flag = 1;
            break;
        }
        else {
            i++;
            continue;
        }
    }

    // Check if it's prime or not
    if(flag == 1){
        printf("%d is not a prime number.", num);
    }
    else{
        printf("%d is a prime number.", num);
    }

    return 0;
}