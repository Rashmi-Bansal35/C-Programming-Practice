/*
Create a program to find the maximum and minimum element in an array.
*/

#include<stdio.h>

int main(){
    // Declare an array
    int array[50];

    // Declare variables
    int n, max, min;

    // Take input from user
    printf("Enter the size of array: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Enter the %d element of array: ", i+1);
        scanf("%d", &array[i]);
    }

    max = array[0];
    min = array[0];

    // Check for maximum element in array
    for(int i = 0; i < n; i++){
        if(max < array[i]){
            max = array[i];
        }
    }

    // Check for minimum element in array
    for(int i = 0; i < n; i++){
        if(min > array[i]){
            min = array[i];
        }
    }

    // Print the results
    printf("The minimum element in array is %d.\nThe maximum element in array is %d.", min, max);

    return 0;
}