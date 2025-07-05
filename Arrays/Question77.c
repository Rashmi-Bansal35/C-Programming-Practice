/*
Create a program to find the sum of two diagonal elements.
*/

#include<stdio.h>

int main(){
    // Declare a 2-D array
    int arr[2][2];

    // Initialize a variable
    int sum = 0;

    // Take input from user
    printf("Enter the elements of 2*2 matrix:\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Enter [%d][%d] element of matrix: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate sum of diagonal elements
    for(int i = 0; i < 2; i++){
        sum += arr[i][i];
    }

    // Print the sum 
    printf("The sum of two diagonal elements is %d.", sum);

    return 0;
}