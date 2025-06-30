/*
Create a program using recursion to display the Fibonacci series up to a certain number.
*/

#include<stdio.h>

// Declare a function
void fibonacci(int n, int a, int b, int count);

int main(){
    // Declare a variable
    int terms;

    // Take input from user
    printf("Input number of terms: ");
    scanf("%d", &terms);

    int term1 = 0, term2 = 1;
    printf("Fibonacci Series:\n%d\t%d", term1, term2);

    // Call a function (already printed first two terms)
    fibonacci(terms, term1, term2, 2);

    return 0;
}

// Define the recursive function
void fibonacci(int n, int a, int b, int count){
    if(count >= n)
        return;
    int next = a + b;
    printf("\t%d", next);
    fibonacci(n, b, next, count + 1);
}