/*
Use calloc to allocate an array for set of char characters representing a sentence, ensuring all the memory
is initialized to zero.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    // Declare a pointer array
    char *array;
    int size;

    // Take input for size from user
    printf("Enter the number of characters in your sentence: ");
    scanf("%d", &size);
    getchar();

    // Allocate memory using calloc
    array = (char*)calloc(size, sizeof(char));

    // Check if memory has been successfully allocated
    if (array == NULL){
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Before initializing value
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Take input from user
    printf("Enter sentence: ");
    fgets(array, size+1, stdin);

    // Print input
    printf("You entered: ");
    puts(array);

    // Free allocted memory
    free(array);

    return 0;
}