/*
Write a program that takes user input and writes it to a file, ensuring each entry is on a new line.
*/

#include<stdio.h>
#include<string.h>

int main(){
    // Prompt the user to enter file name
    char filename[100];
    printf("Enter the filename: ");
    scanf("%99s", filename);

    // Open file in write mode
    FILE *file = fopen(filename, "w");

    // Check if file was opened
    if (file == NULL){
        printf("File could not be opend.\n");
        return 1;
    }

    // Prompt the user to enter content in file
    char data[100];
    while(1){
        printf("Enter content (type 'exit' to quit): ");
        if (fgets(data, sizeof(data), stdin) == NULL) {
            break; // EOF encountered
        }

        // Remove trailing newline from fgets
        data[strcspn(data, "\n")] = 0;

        if (strcmp(data, "exit") == 0) {
            break; // Exit loop if user types "exit"
        }

        fprintf(file, "%s\n", data);
    }

    // Close th file
    fclose(file);

    return 0;
}