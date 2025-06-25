/*
Create a program that categorize a person into different age groups
Child -> below 13                  Teen -> below 20
Adult -> below 60                  Senior -> above 60
*/

#include<stdio.h>

int main(){
    // Declare a variable to store age
    int age;

    // Take input from user
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check age is negative or not
    if (age < 0){
        printf("Please don't write age in negative. Try Again!");
    } else{
        // Check if person is child, teen, adult, or senior
        if (age < 13){
            printf("You are a child.");
        }
        else if (age >= 13 && age < 20){
            printf("You are a teen.");
        }
        else if (age >= 20 && age < 60){
            printf("You are an adult.");
        }
        else{
            printf("You are a senior.");
        }
    }
    
    return 0;
}