/*
Create a program to find the sum and average of all elements in an array.
*/

#include<stdio.h>

int main(){
    // Declare an array
    int array[50];

    // Declare variables 
    int n, sum = 0;

    // Take input from user
    printf("Enter size of your array: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Enter %d element of an array: ", i+1);
        scanf("%d", &array[i]);
    }

    // Calculate sum of all elements
    for(int i = 0; i < n; i++){
        sum += array[i];
    }

    printf("The sum of all elements of your array is %d.\n", sum);

    // Calculating average of elements
    float avg = (float)sum / n;

    // Print average
    printf("The average of array is %.2f.", avg);

    return 0;
}