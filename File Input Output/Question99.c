/*
Write a program that asks the user for a filename, attempts to open it, and reports whether the operation was successful or not.
*/

// NOTE: The file name you enter should already exist in the current location.

#include<stdio.h>
#include<string.h>

int main(){
    FILE *filePointer;
    char fileName[100];

    printf("Enter file name: ");
    scanf("%99s", fileName);

    filePointer = fopen(fileName, "r");
    if (filePointer != NULL){
        printf("%s file is successfully opened.", fileName);
        fclose(filePointer);
    } 
    else {
        printf("\nFile could not be opened.");
        return 1;
    }

    return 0;
}