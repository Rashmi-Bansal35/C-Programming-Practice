/*
Create a program to Based on a student's score, categorize as "High", "Moderate", or "Low" using the 
ternary operator (e.g., High for scores > 80, Moderate for 50-80, Low for < 50).
*/

#include<stdio.h>

int main(){
    // Declare a variable to store marks
    float score;

    // Take input from user
    printf("Enter your score: ");
    scanf("%f", &score);

    // Categorize the score
    (score > 80) ? printf("High") : ((score <= 80) && (score >= 50)) ? printf("Moderate") : printf("Low"); 

    return 0;
}