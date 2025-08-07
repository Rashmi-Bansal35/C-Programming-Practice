/*
Allocate memory for a struct representing a Point with x and y coordinates, set some values, and then properly deallocate
the memory using free.
*/

#include<stdio.h>
#include<stdlib.h>

// Create a structure named point
struct point{
    int x;
    int y;
};

int main(){
    // Declare structure pointer
    struct point *p = (struct point *)malloc(sizeof(struct point));

    // Check if memory has been successfully allocate
    if (p == NULL){
        printf("Not enough space.");
        return 1;
    }
    
    // Take input from user
    printf("Enter x coordinates: ");
    scanf("%d", &p->x);
    printf("Enter Y coordinates: ");
    scanf("%d", &p->y);

    // Print result 
    printf("The x coordinate is %d and y coordinate is %d.", p->x, p->y);

    // Deallocating memory using free
    free(p);

    return 0;
}