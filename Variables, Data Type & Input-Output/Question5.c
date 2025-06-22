/*
Create a program that declares one variable of each of the fundamental data types (int, float, char, double)
 and prints their size using sizeof() operator.
*/

#include<stdio.h>

int main(){
    int variable1;
    float variable2;
    char variable3;
    double variable4;

    printf("Size of integer data type is %d\n", sizeof(variable1));
    printf("Size of float data type is %d\n", sizeof(variable2));
    printf("Size of character data type is %d\n", sizeof(variable3));
    printf("Size of double data type is %d", sizeof(variable4));

    return 0;
}

/*
The sizeof() operator is an in-built function that tells us how much memory is used for a particular data type.
We can also use the sizeof() operator with other data types like long, short, or long double.
Also, the size of some data types depends on whether the system is a 32-bit or 64-bit processor.
*/