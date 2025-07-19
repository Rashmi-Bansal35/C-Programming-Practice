/*
Pass a Car structure to a function that prints out a description of the car in one complete sentence.
*/

#include<stdio.h>
#include<string.h>

// Declare a structure
struct Car{
    int seater;
    char brand[20];
    char color[20];
    float petrol_engine;
};

// Declare a function
void car_description(struct Car c);

int main(){
    // Declare variable of structure
    struct Car c;

    // Take input from user
    printf("Enter the details of car:\n");
    printf("Enter the brand of car: ");
    fgets(c.brand, sizeof(c.brand), stdin);
    c.brand[strcspn(c.brand, "\n")] = '\0'; // Remove newline character from string
    printf("Enter the number of seats in the car: ");
    scanf("%d", &c.seater);
    getchar();
    printf("Enter the color of car: ");
    fgets(c.color, sizeof(c.color), stdin);
    c.color[strcspn(c.color, "\n")] = '\0'; // Remove newline character from string
    printf("Enter the petrol tank capacity of the car (in liters): ");
    scanf("%f", &c.petrol_engine);
    getchar();

    // Call a function
    car_description(c);

    return 0;
}

// Define a function
void car_description(struct Car c){
    printf("The car is a %s %d-seater %s with a %.2fL pertrol engine, offering great mileage and a smooth driving experience.", c.color, 
    c.seater, c.brand, c.petrol_engine);
}