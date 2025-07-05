/*
Create a program to merge two sorted arrays.
*/

#include<stdio.h>

int main(){
    // Declare three arrays
    int arr1[50], arr2[50], merge[50];

    // Declare variables
    int size1, size2, size3;

    // Take input from user of 1st matrix
    printf("Enter the size of 1st array: ");
    scanf("%d", &size1);

    printf("Enter the elements of array:\n");
    for(int i = 0; i < size1; i++){
        printf("Enter %d element of array: ", i+1);
        scanf("%d", &arr1[i]);
    }

    // Take input from user of 2nd matrix
    printf("Enter the size of 2nd array: ");
    scanf("%d", &size2);

    printf("Enter the elements of array:\n");
    for(int i = 0; i < size2; i++){
        printf("Enter %d element of array: ", i+1);
        scanf("%d", &arr2[i]);
    }

    // Merge the two sorted arrays
    int i = 0, j = 0, k = 0;
    while(i < size1 && j < size2){
        if(arr1[i] < arr2[j]){
            merge[k++] = arr1[i++];
        } else {
            merge[k++] = arr2[j++];
        }
    }
    // Copy remaining elements
    while(i < size1){
        merge[k++] = arr1[i++];
    }
    while(j < size2){
        merge[k++] = arr2[j++];
    }

    // Print merged array
    printf("Merged array: ");
    for(int m = 0; m < size3; m++){
        printf("%d ", merge[m]);
    }

    return 0;
}