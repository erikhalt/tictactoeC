#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include "../include/tictactoe.h"

int run()
{
    int a = 0;
    resetboard();
    while (a == 0)
    {
        system("cls");
        printboard();
        playermove();
        system("cls");
        printboard();
        computermove();
        int win = checkwin();
        if (win != 0)
        {
            if (win == 1)
            {
                if (playerwin() == 1)
                {
                    break;
                }
                else
                {
                    clearboard();
                }
            }
            if (win == 2)
            {
                if (computerwin() == 1)
                {
                    break;
                }
                else
                {
                    clearboard();
                }
            }
        }
    }
    return 0;
}

int playerwin()
{
    // return 1 no rematch
    // return 0 rematch
    return 0;
}

int computerwin()
{
    // return 1 no rematch
    // return 0 rematch
    return 0;
}

int checkwin()
{
    // return 0 no win
    // return 1 playerwin
    // return 2 computerwin
    return 0;
}

void computermove()
{
    int random_row = (rand() % 3);
    int random_col = (rand() % 3);

    printf("\n");
    printf("Computer Choose");

    board[random_row][random_col] = 'O';
}

void playermove()
{
    while (1)
    {
        int row, col;
        printf("Enter your move (row and column)");
        scanf("%d %d", &row, &col);
        if (row > 3 || row < 0)
        {
            printf("Invalid Move");
        }
        else if (col > 3 || col < 0)
        {
            printf("Invalid Move");
        }
        else if (board[row - 1][col - 1] == ' ')
        {
            board[row - 1][col - 1] = 'X';
            break;
        }
        else
        {
            printf("Invalid Move");
        }
    }
}

void printboard()
{
    for (int i = 0; i < 3; i++)
    {
        printf("                ");
        for (int j = 0; j < 3; j++)
        {
            printf("%c ", board[i][j]);
            if (j < 2)
            {
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
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}