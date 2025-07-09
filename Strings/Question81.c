/*
Create a simple text-based user login system that compares a stored password string using strcmp.
*/

#include<stdio.h>
#include<string.h>

int main(){
    // Declare strings
    char set_username[50] = "Rashmi Bansal", set_password[50] = "Bansalknl";
    char login_username[50], login_password[50];

    printf("Welcome to LOGIN:\n");

    // Take input from user
    printf("Username: ");
    fgets(login_username, sizeof(login_username), stdin);

    printf("Password: ");
    fgets(login_password, sizeof(login_password), stdin);

    // Remove trailing newline from input
    login_username[strcspn(login_username, "\n")] = '\0';
    login_password[strcspn(login_password, "\n")] = '\0';

    // Compare username and password
    int resultU = strcmp(set_username, login_username);
    int resultP = strcmp(set_password, login_password);

    if (resultU == 0 && resultP == 0){
        printf("SUCCESSFULLY LOGIN");
    }
    else if (resultU == 0 && resultP != 0){
        printf("Your password is incorrect.!");
    }
    else if (resultU != 0 && resultP == 0){
        printf("Your username is incorrect.!");
    }
    else{
        printf("TRY AGAIN!");
    }
    return 0;
}