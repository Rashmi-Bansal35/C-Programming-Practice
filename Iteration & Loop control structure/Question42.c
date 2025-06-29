/*
Create a program that print patterns:
i) Right Half Pyramid  |  ii) Reverse Right Half Pyramid  | iii) Left Half Pyramid
    *                  |      *****                       |           *
    **                 |      ****                        |          **
    ***                |      ***                         |         ***
    ****               |      **                          |        ****
    *****              |      *                           |       *****
*/

#include<stdio.h>

int main(){
    // Declare a variable 
    int n;

    // Take input from user
    printf("Enter a number of lines: ");
    scanf("%d", &n);

    printf("Right Half Pyramid\n");

    // Using for loop
    for(int i = 1; i <=n; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n\nReverse Right Half Pyramid\n");

    // Using for loop
    for(int i = n; i >= 1; i--){
        for(int j = i; j >= 1; j--){
            printf("*");
        }
        printf("\n");
    }

    printf("\n\nLeft Half Pyramid\n");

    // Using for loop
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
          printf(" ");  
        }
        for(int k = 1; k <= i; k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}