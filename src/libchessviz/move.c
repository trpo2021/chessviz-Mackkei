#include <stdio.h>

int move(char desk[][], char move[])
{
    int i, j;
    char t;

    j = move[0] - '`';
    i = move[1] - '0';

    t = desk[i][j];
    desk[i][j] = ' ';

    j = move[3] - '`';
    i = move[4] - '0';

    desk[i][j] = t;

    j = move[6] - '`';
    i = move[7] - '0';

    t = desk[i][j];
    desk[i][j] = ' ';

    j = move[9] - '`';
    i = move[10] - '0';

    desk[i][j] = t;

    return 0;
}

