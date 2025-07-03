/*
Create a program to find number of occurrences of an element in an array.
*/

#include<stdio.h>

int main(){
    // Declare an array
    int array[50];

    // Declare variables
    int n, no_of_times = 0, find;

    // Take input from user
    printf("Enter the size of your array: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Enter the %d element of array: ", i+1);
        scanf("%d", &array[i]);
    }

    printf("Enter a number you want to find in array: ");
    scanf("%d", &find);

    // Check No. of occurence
    for(int i = 0; i < n; i++){
        if(find == array[i]){
            no_of_times += 1;
        }
    }

    // Print the rseults
    printf("The number of occurence of %d is %d.", find,no_of_times);

    return 0;
}