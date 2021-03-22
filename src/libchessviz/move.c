#include <libchessviz/move.h>
#include <stdio.h>

int move(char desk[][9], char chessMove[])
{
    int i, j;
    char t;
    for (i = 0; i < 11; i++)
    {
    	if (chessMove[i] == '0')
    	return 2;
    }

    j = chessMove[0] - '`';
    i = chessMove[1] - '0';

    if (desk[i][j] == 32) {
        return 1;
    }

    t = desk[i][j];
    desk[i][j] = 32;

    j = chessMove[3] - '`';
    i = chessMove[4] - '0';
    
    desk[i][j] = t;

    return 0;
}

