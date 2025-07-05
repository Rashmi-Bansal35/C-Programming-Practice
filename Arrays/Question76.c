/*
Create a program to do sum and average of all elements in a 2-array.
*/

#include<stdio.h>

int main(){
    // Declare a 2-D array
    int arr[50][50];

    // Initialize a variable
    int sum = 0, size;
    float avg;

    // Take input from user
    printf("Enter the size of 2-D array: ");
    scanf("%d", &size);

    printf("Enter the elements of %d*%d matrix:\n", size, size);
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            printf("Enter [%d][%d] element of matrix: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate sum of all elements
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            sum += arr[i][j];
        }
    }

    // Print the sum 
    printf("The sum of all elements is %d.\n", sum);

    // Calculate average
    avg = (float)sum / (size * size);

    // Print the average
    printf("The average of 2-D array is %.2f.", avg);
    
    return 0;
}
