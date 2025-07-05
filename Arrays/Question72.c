/*
Create a program to check if the array is palindrome or not.
*/

#include<stdio.h>

int main(){
    // Declare two arrays
    int arr[50], reverse[50];

    // Declare variables
    int size, flag = 0;

    // Take input from user
    printf("Enter the size of array: ");
    scanf("%d", &size);

    for(int i = 0; i < size; i++){
        printf("Enter the %d element of array: ", i+1);
        scanf("%d", &arr[i]);
    }

    // Reverse an array
    for(int i = 0; i < size; i++){
        reverse[i] = arr[size - 1 - i];
    }

    // Check if array is Palindrome
    for(int i = 0; i < size; i++){
        if(arr[i] != reverse[i]){
            flag = 1;
        }
    }

    if (flag == 0){
        printf("Array is Palindrome.");
    }
    else{
        printf("Array is not Palindrome.");
    }

    return 0;
}