/*
Create a program using do-while to find password checker until a valid password is entered.
*/

#include<stdio.h>
#include<string.h>

int main(){
    // Initialize a string
    char password[] = "Rashmi@", password_check[50];

    // Declare a variable
    int result;

    // Check password
    do{
        printf("Enter the password: ");
        fgets(password_check, sizeof(password_check), stdin);
        password_check[strcspn(password_check, "\n")] = '\0';
        result = strcmp(password, password_check);
        if(result == 0){
            printf("Correct Password\n");
        }
        else{
            printf("TRY AGAIN!\n");
        }
    }
    while(result != 0);

    return 0;
}