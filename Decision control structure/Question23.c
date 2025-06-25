/*
Create a program that calculates grades based on marks
A -> above 90% (90 < marks <= 100)
B -> above 75% (75 < marks <= 90)
C -> above 60% (60 < marks <= 75)
D -> above 30% (30 < marks <= 60)
F -> 30% or below (0 <= marks <= 30)
*/

#include<stdio.h>

int main(){
    // Declare variable to store marks
    float marks;

    // Take input from user
    printf("Enter your marks (in percent): ");
    scanf("%f", &marks);

    // Calculate grades based on marks
    if ((marks <= 100) && (marks > 90) ){
        printf("Grade : A");
    }
    else if ((marks <= 90) && (marks > 75)){
        printf("Grade : B");
    }
    else if ((marks <= 75) && (marks > 60)){
        printf("Grade : C");
    }
    else if ((marks <= 60) && (marks > 30)){
        printf("Grade : D");
    }
    else if ((marks <= 30) && (marks >= 0)){
        printf("Grade : F");
    }
    else{
        printf("Please enter your correct marks.");
    }

    return 0;
}