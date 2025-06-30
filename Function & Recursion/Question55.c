/*
Demonstrate with a function increment that the original integer passed to it does not change after 
incrementing it inside the function.
*/

#include<stdio.h>

// Declare a function
void increment(int a);

int main(){
    // Declare a variable
    int num;

    // Take input from user
    printf("Input a number: ");
    scanf("%d", &num);

    // Call a function
    increment(num);

    // Print the value
    printf("In main function, value is %d.", num);

    return 0;
}

// Define a function
void increment(int a){
    a = a + 1;
    printf("In function, value is %d.\n", a);
}