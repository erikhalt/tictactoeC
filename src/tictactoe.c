#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include "../include/tictactoe.h"



int run() {
    int a = 0;
    resetboard();
    while (a==0)
    {
        system("cls");
        printboard();
        playermove();
    }
    return 0;
}

void playermove()
{
    while (1) {
        int row,col;
        printf("Enter your move (row and column)");
        scanf("%d %d", &row, &col);
        if (board[row][col] == ' ')
        {
            board[row][col] = 'X';
            break;
        }
        else {
            printf("Invalid Move");
        }
    }
}


void printboard()
{
    for (int i=0;i<3;i++){
        printf("                ");
        for (int j=0;j<3;j++){
            printf("%c ", board[i][j]);
            if (j < 2) {
            printf("| ");
            }
        }
        printf("\n");
        printf("                ");
        printf("----------");
        printf("\n");

    }
}

void resetboard()
{
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            board[i][j] = ' ';
        }
    }
}