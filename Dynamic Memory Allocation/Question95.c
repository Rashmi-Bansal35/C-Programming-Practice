/*
Create a program that uses malloc to dynamically allocate an array for a specified number of float values entered by the user
and then stores user-entered numbers into it.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    // Declare an array pointer
    float *arr;
    int size;

    // Take input from user
    printf("Enter size of array: ");
    scanf("%d", &size);

    // Dynamically allocate memory using malloc
    arr = (float*)malloc(size * sizeof(float));

    // Check if the memory has been successfully allocated
    if (arr == NULL){
        printf("Memory allocation failed");
        return 1;
    }

    // Input elements into an array
    for(int i = 0; i < size; i++){
        printf("Enter element %d: ", i+1);
        scanf("%f", &arr[i]);
    }

    // Print the values
    printf("\nElements of array is:\n");
    for(int i = 0; i < size; i++){
        printf("%.2f\n", arr[i]);
    }

    return 0;
}