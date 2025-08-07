/*
Create an array using calloc and fill it with random numbers, then use realloc to shrink the array size by half and print the
remaining numbers.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    // Declare an array
    int *array;
    int size;

    // Take input of size of array
    printf("Enter size of array: ");
    scanf("%d", &size);

    // Allocate memory using calloc
    array = (int *)calloc(size, sizeof(int));

    // Check if memory has been successfully allocate
    if (array == NULL){
        printf("Not Enough Memory.");
        return 1;
    }

    printf("Enter %d elements of array: ", size);
    // Take input from user
    for(int i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }

    // Print the elements of array
    printf("Initial array: ");
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }

    // Reallocating memory
    array = (int *)realloc(array, (size/2) * sizeof(int));

    // Print the elements of array
    printf("\nUpdated array: ");
    for(int i = 0; i < sizeof(array)/4; i++){
        printf("%d ", array[i]);
    }

    // Deallocate the memory
    free(array);

    return 0;
}