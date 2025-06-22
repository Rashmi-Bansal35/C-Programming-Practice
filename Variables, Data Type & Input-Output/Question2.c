/*
Show the following patterns just using single print statements:
i) Right Half Pyramid  |  ii) Reverse Right Half Pyramid  | iii) Left Half Pyramid
    *                  |      *****                       |           *
    **                 |      ****                        |          **
    ***                |      ***                         |         ***
    ****               |      **                          |        ****
    *****              |      *                           |       *****
*/

//We did the same question just before the basic difference is,
//In previous question we print patterns using multiple print functions
// But in this question we print patterns using single print function

#include<stdio.h>

int main(){
    printf("i) Right Half Pyramid\n");
    printf("*\n**\n***\n****\n*****\n");

    printf("\nii) Reverse Right Half Pyramid\n");
    printf("*****\n****\n***\n**\n*\n");

    printf("\niii) Left Half Pyramid\n");
    printf("    *\n   **\n  ***\n ****\n*****\n");
}