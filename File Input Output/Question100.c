/*
Create a program that reads integers from a file and calculates their sum.
*/
#include <stdio.h>

int main() {
    // Prompt the user to enter the file name
    char filename[100];
    printf("Enter file name: ");
    scanf("%s", filename);

    // Open the file in read mode
    FILE *file = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    // Variable to store each integer read from the file
    // Variable 'sum' will store the total of all integers
    int number, sum = 0;

    // Read integers from the file until no more integers can be read
    // Add each read integer to 'sum'
    while (fscanf(file, "%d", &number) == 1) {
        sum += number;
    }

    // Display the sum of all integers in the file
    printf("The sum of numbers is %d.", sum);

    // Close the file
    fclose(file);
    return 0;
}
