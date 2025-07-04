/*
Create a program to reverse an array.
*/

#include<stdio.h>

int main(){
    // Declare two arrays
    int arr[50], reverse[50];

    // Declare variable
    int size;
    
    // Take input from user
    printf("Enter the size of array: ");
    scanf("%d", &size);

    for(int i = 0; i < size; i++){
        printf("Enter the %d element of array: ", i+1);
        scanf("%d", &arr[i]);
    }

    // Reverse the array
    for(int i = 0; i < size; i++){
        reverse[i] = arr[size - 1 -i];
    }

    // Print the array
    printf("The reverse of array is : ");
    for(int i = 0; i < size; i++){
        printf("%d", reverse[i]);
        if(i != size - 1) printf(", ");
    }

    return 0;
}