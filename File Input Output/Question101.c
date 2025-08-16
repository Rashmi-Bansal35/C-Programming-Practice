/*
Write a program that copies one text file's contents to another, stopping when it reaches EOF of the source file.
*/

#include<stdio.h>
#include<string.h>

int main(){
    // Prompt the user to enter file name
    char sourceFilename[100];
    printf("Enter file name from which you want to copy content: ");
    scanf("%99s", sourceFilename);

    char destinationFilename[100];
    printf("Enter file name to which you wapnt to enter content: ");
    scanf("%99s", destinationFilename);

    // Open source file in read mode
    FILE *sourceFile = fopen(sourceFilename, "r");
    FILE *destinationFile = fopen(destinationFilename, "w");

    // Check if file was opened successfully
    if(sourceFile == NULL || destinationFile == NULL){
        printf("File could not be opened.\n");
        return 1;
    }

    // Copy content from source file to destination file
    int ch;
    while((ch = fgetc(sourceFile)) != EOF){
        fputc(ch, destinationFile);
    }

    // Close the files
    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}