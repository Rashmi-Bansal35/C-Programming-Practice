/*
Implement a void minmax(int *a, int *b, int *min, int *max) function that takes two integer pointers a and b as 
input and assigns the smaller value to min and the larger value to max using call by reference. 
Write a main function to test it with different values.
*/

#include<stdio.h>

// Declare a function
void minmax(int *a, int *b, int *min, int *max);

int main(){
    // Declare variables
    int var1, var2, greater, smaller;

    // Take input from user
    printf("Enter two values: ");
    scanf("%d%d", &var1, &var2);

    // Declare two pointers
    int *p1, *p2, *g, *s;

    // Assign address to pointers
    p1 = &var1, p2 = &var2, g = &greater, s = &smaller;

    // Call the function
    minmax(p1, p2, s, g);

    // Print values 
    printf("The 1st value is %d and 2nd value is %d from which %d is max and %d is min.", var1, var2, greater, smaller);

    return 0;
}

// Define a function
void minmax(int *a, int *b, int *min, int *max){
    // Check which one is min and max
    if (*a > *b){
        *max = *a;
        *min = *b;
    }
    else{
        *max = *b;
        *min = *a;
    }
}