/*
Create a program that dynamically allocates memory for a Car structure and then free it at the end of the program.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Declare a structure
struct Car{
    char make[30];
    char model[20];
    float petrol_engine;
    char color[10];
    int seater;
};

int main(){
    // Declare structure variable
    struct Car *myCar = (struct Car *)malloc(sizeof(struct Car));

    if (myCar == NULL){
        printf("Not enough memory");
        return 1;
    }
   
    // Take input from user
    printf("Enter make of car: ");
    fgets(myCar->make, sizeof(myCar->make), stdin);
    myCar->make[strcspn(myCar->make, "\n")] = '\0';
    printf("Enter model of car: ");
    fgets(myCar->model, sizeof(myCar->model), stdin);
    myCar->model[strcspn(myCar->model, "\n")] = '\0';
    printf("Enter color of car: ");
    fgets(myCar->color, sizeof(myCar->color), stdin);
    myCar->color[strcspn(myCar->color, "\n")] = '\0';
    printf("Enter number of seats of car: ");
    scanf("%d", &myCar->seater);
    printf("Enter capacity of petrol tank of car: ");
    scanf("%f", &myCar->petrol_engine);

    printf("\n\nDetails of Car:\n");
    printf("Make: %s\n", myCar->make);
    printf("Model: %s\n", myCar->model);
    printf("Petrol Capacity: %.2f\n", myCar->petrol_engine);
    printf("Color: %s\n", myCar->color);
    printf("Seater: %d\n", myCar->seater);
    free(myCar);
    

    return 0;
}