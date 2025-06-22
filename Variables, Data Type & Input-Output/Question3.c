/*
Create a program to input name of the person and respond with
  "Hello NAME, nice to meet you."
*/

#include<stdio.h>

int main(){
    char name[20];
    printf("Enter your name: ");
    scanf("%19s", &name);

    printf("Hello %s, nice to meet you.", name);
    
    return 0;
}

/*   Explanation
In this program, we declare a variable called 'name', which can store up to 20 characters.
To input the user's name, we use the string format specifier '%s' in scanf.
We use '%19s' instead of '%20s' to ensure that at most 19 characters are read, 
leaving space for the null terminator '\0' at the end of the string.
This prevents buffer overflow, which can occur if the user enters more characters than the array can hold.
Limiting the input size is a good practice for safe string handling in C.
Note: This method will only read input up to the first whitespace. It will not capture spaces in the name.
*/