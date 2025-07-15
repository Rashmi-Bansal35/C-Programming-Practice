/*
Initialize an array of Book structures with different data for each book using designated initializers.
*/

#include<stdio.h>

// Declare structure
struct book{
    char name[50];
    float price;
    int quantity;
};

int main(){
    // Declare and initialize structure array of book using designated initializers
    struct book b[3] = {
        {.name = "C Programming", .price = 299.99, .quantity = 10},
        {.name = "Data Structures", .price = 399.50, .quantity = 5},
        {.name = "Algorithms", .price = 499.00, .quantity = 7}
    };

    // Print the structure
    for(int i = 0; i < 3; i++){
        printf("Details of book %d :\n", i+1);
        printf("Name: %s\n", b[i].name);
        printf("Price: %.2f\n", b[i].price);
        printf("Quantity: %d\n", b[i].quantity);
    }

    return 0;
}