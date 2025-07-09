/*
Use a 2-D character array to store and display a tic-tac-toe board.
*/

#include<stdio.h>

int main(){
    // Declare a 2-D char array
    char game[3][3] = {{'X', 'O', 'X'}, {'O', 'X', 'O'}, {'O', 'O', 'X'}};

    printf("Welcome to tic-tac-board:\n\n");
    printf("%c|%c|%c\n", game[0][1], game[0][1], game[0][2]);
    printf("%c|%c|%c\n", game[1][1], game[1][1], game[1][2]);
    printf("%c|%c|%c\n", game[2][1], game[2][1], game[2][2]);

    return 0;
}