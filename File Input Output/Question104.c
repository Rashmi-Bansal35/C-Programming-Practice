/*
Create a program that performs both reading and writing operations on a file called data.txt
*/

#include <stdio.h>
#include <string.h>

int main() {
    char choice;
    char data[5000];
    char write[2000];

    // Ask user if they want to read or write
    printf("Enter 'R' to read or 'W' to write: ");
    scanf(" %c", &choice);

    // Clear newline left in input buffer
    getchar();

    if (choice == 'R' || choice == 'r') {
        FILE *file = fopen("data.txt", "r");  // Open file for reading
        if (file == NULL) {
            printf("File could not be opened or is empty.\n");
        } else {
            // Read and print the file content line by line
            while (fgets(data, sizeof(data), file) != NULL) {
                printf("%s", data);
            }
            fclose(file);
        }
    } else if (choice == 'W' || choice == 'w') {
        FILE *file = fopen("data.txt", "w");  // Open file for writing (overwrite)
        if (file == NULL) {
            printf("File could not be opened.\n");
            return 1;
        }
        printf("Enter content (enter 'quit' to stop):\n");
        while (1) {
            fgets(write, sizeof(write), stdin);
            // Remove trailing newline
            write[strcspn(write, "\n")] = 0;

            if (strcmp(write, "quit") == 0) {
                break;
            }

            fprintf(file, "%s\n", write);
        }
        fclose(file);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
