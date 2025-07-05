/*
Create a program to check if the given array is sorted.
*/

#include<stdio.h>

int main(){
    // Declare array
    int array1[50], array2[50];

    // Declare variables
    int n, condition = 0;

    // Take input from suer
    printf("Enter size of array: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Enter %d element of array: ", i+1);
        scanf("%d", &array1[i]);
    }

    // Check if it is sorted
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(array1[i] >= array1[i+1] || array1[i] <= array1[i+1]){
                continue;
            } 
            else{
                condition = 1;
                break;
            }
            
        }
    }

    if(condition = 1){
        printf("The array is not sorted.");
    }
    else{
        printf("The array is sorted.");
    }

    return 0;
}