/*
Create a program to return a new array deleting a specific element.
*/

#include<stdio.h>

int main(){
    // Declare two arrays
    int arr1[50], arr2[50];

    // Declare variables
    int n, delete;

    // Take input from user
    printf("Enter the size of array: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Enter %d element of array: ", i+1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter a number you want to remove from array: ");
    scanf("%d", &delete);

    // Remove element from array
    int j = 0;
    for(int i = 0; i < n; i++){
        if(arr1[i] != delete){
            arr2[j] = arr1[i];
            j++;
        }
    }

    // Print new array after deletion of element
    printf("The new array after deletion of element: ");
    for(int i = 0; i < j; i++){
        printf("%d ", arr2[i]);        
    }

    return 0;
}