/*
Create a program to print the Fibonacci series up to a certain number.
*/

#include<stdio.h>

int main(){
    // Initialize two variables
    int t1 = 0, t2 = 1;
    int nextTerm = t1 + t2;

    int n;

    // Take input from user
    printf("Enter no. of terms to print fibonacci: ");
    scanf("%d", &n);

    // Print first two terms
    printf("Fibonacci Series: %d\t%d", t1, t2);

    // Using for loop to print fibonacci
    int i = 3;
    while (i <= n){
        printf("\t%d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
        i++;
    }

    return 0;
}