/*
Define a Car structure to a function with fields for make, model, year, and color.
*/

#include<stdio.h>

// Declare a structure
struct Car{
    char make[20];
    char model[20];
    int year;
    char color[20];
};

int main(){
    // Declare variable of stucture
    struct Car c[3];

    // Take input from user
    for(int i = 0; i < 3; i++){
        printf("Enter the details of car %d\n", i+1);
        printf("Enter the brand of car %d: ", i+1);
        scanf("%s", c[i].make);
        printf("Enter the model of car %d: ", i+1);
        scanf("%s", c[i].model);
        printf("Enter the year of car %d: ", i+1);
        scanf("%d", &c[i].year);
        printf("Enter the color of car %d: ", i+1);
        scanf("%s", c[i].color);
    }

    // Print the deatils of cars
    for(int i = 0; i < 3; i++){
        printf("\n\nThe details of car %d\n", i+1);
        printf("Brand: %s\n", c[i].make);
        printf("Model: %s\n", c[i].model);
        printf("Year: %d\n", c[i].year);
        printf("Color: %s\n",c[i].color);
    }

    return 0;
}