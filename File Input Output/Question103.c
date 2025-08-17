/*
Develop a program that appends user input to the end of a log file each time it's run.
*/

#include<stdio.h>
#include<string.h>

int main(){
    // Prompt the user to enter a filename
    char filename[100];
    printf("Enter file name: ");
    scanf("%99s", filename);

    // Clear the newline character left in the input buffer by scanf
    getchar();

    // Open file in append mode
    FILE *file = fopen(filename, "a");

    // Check if file was open
    if (file == NULL){
        printf("File could not be opened.\n");
        return 1;
    }

    // Prompt user to enter content in file
    char data[100];
    while(1){
        printf("Enter content(Enter 'quit' to exit): ");
        if (fgets(data, sizeof(data), stdin) == NULL) {
            break; // EOF encountered
        }

        // Remove trailing newline from fgets
        data[strcspn(data, "\n")] = 0;

        if (strcmp(data, "quit") == 0) {
            break; // Exit loop if user types "quit"
        }

        fprintf(file, "%s\n", data);
    }

    // Close the file
    fclose(file);

    return 0;
}