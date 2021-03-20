#include <libchessviz/move.h>
#include <stdio.h>

int move(char desk[][9], char chessMove[])
{
    int i, j;
    char t;

    j = chessMove[0] - '`';
    i = chessMove[1] - '0';

    if (desk[i][j] == ' ') {
        printf("\nInput data fail\n");
        return 1;
    }

    t = desk[i][j];
    desk[i][j] = ' ';

    j = chessMove[3] - '`';
    i = chessMove[4] - '0';

    desk[i][j] = t;

    j = chessMove[6] - '`';
    i = chessMove[7] - '0';

    if (desk[i][j] == ' ') {
        printf("\nInput data fail\n");
        return 1;
    }

    t = desk[i][j];
    desk[i][j] = ' ';

    j = chessMove[9] - '`';
    i = chessMove[10] - '0';

    desk[i][j] = t;

    return 0;
}

