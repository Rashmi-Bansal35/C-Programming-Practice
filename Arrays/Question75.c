/*
Create a program to search an element in a 2-D array.
*/

#include<stdio.h>

int main(){
    // Declare a 2-D array
    int arr[50][50];

    // Initialize a variable
    int find, size;
    
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

    printf("Enter the element you want to find: ");
    scanf("%d", &find);

    // Find the element
    int found = 0;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(arr[i][j] == find){
                printf("The element found at index %d %d.", i+1, j+1);
                found = 1;
            }
        }
    }
    if(found == 0){
        printf("Element not found in the array.");
    }

    return 0;
}