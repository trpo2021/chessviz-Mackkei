#include <libchessviz/move.h>
#include <math.h>
#include <stdio.h>

int move(char desk[][9], char chessMove[])
{
    int i, j, m, n, c;
    char t;
    for (i = 0; i < 11; i++) {
        if (chessMove[i] == '0')
            return 2;
    }

    if (chessMove[0] > '`' && chessMove[0] < 'k') {
        j = chessMove[0] - '`';
        i = chessMove[1] - '0';
        c = 0;

        if (chessMove[2] != '-' && chessMove[2] != 'x' && chessMove[2] != 'e'
            && chessMove[3] != '.' && chessMove[4] != 'p'
            && chessMove[5] != '.')
            return 1;

        if (chessMove[2] == 'e' && chessMove[3] == '.' && chessMove[4] == 'p'
            && chessMove[5] == '.')
            c = 3;

        if ((desk[i][j] != 'p') && (desk[i][j] != 'P'))
            return 3;

        n = chessMove[3 + c] - '`';
        m = chessMove[4 + c] - '0';

        if (chessMove[5 + c] == '#')
            return 10;
    }

    if (chessMove[0] == 'K') {
        j = chessMove[1] - '`';
        i = chessMove[2] - '0';

        c = 0;

        if (chessMove[3] != '-' && chessMove[3] != 'x' && chessMove[3] != 'e'
            && chessMove[4] != '.' && chessMove[5] != 'p'
            && chessMove[6] != '.')
            return 1;

        if (chessMove[3] == 'e' && chessMove[4] == '.' && chessMove[5] == 'p'
            && chessMove[6] == '.')
            c = 3;

        if ((desk[i][j] != 'k') && (desk[i][j] != 'K'))
            return 4;

        n = chessMove[4 + c] - '`';
        m = chessMove[5 + c] - '0';
        if (chessMove[6 + c] == '#')
            return 10;
    }

    if (chessMove[0] == 'Q') {
        j = chessMove[1] - '`';
        i = chessMove[2] - '0';

        if (chessMove[3] != '-' && chessMove[3] != 'x' && chessMove[3] != 'e'
            && chessMove[4] != '.' && chessMove[5] != 'p'
            && chessMove[6] != '.')
            return 1;

        if (chessMove[3] == 'e' && chessMove[4] == '.' && chessMove[5] == 'p'
            && chessMove[6] == '.')
            c = 3;

        if ((desk[i][j] != 'q') && (desk[i][j] != 'Q'))
            return 6;

        n = chessMove[4 + c] - '`';
        m = chessMove[5 + c] - '0';
        if (chessMove[6 + c] == '#')
            return 10;
    }

    if (chessMove[0] == 'R') {
        j = chessMove[1] - '`';
        i = chessMove[2] - '0';

        if (chessMove[3] != '-' && chessMove[3] != 'x' && chessMove[3] != 'e'
            && chessMove[4] != '.' && chessMove[5] != 'p'
            && chessMove[6] != '.')
            return 1;

        if (chessMove[3] == 'e' && chessMove[4] == '.' && chessMove[5] == 'p'
            && chessMove[6] == '.')
            c = 3;

        if ((desk[i][j] != 'r') && (desk[i][j] != 'R'))
            return 7;

        n = chessMove[4 + c] - '`';
        m = chessMove[5 + c] - '0';
        if (chessMove[6 + c] == '#')
            return 10;
    }

    if (chessMove[0] == 'N') {
        j = chessMove[1] - '`';
        i = chessMove[2] - '0';

        if (chessMove[3] != '-' && chessMove[3] != 'x' && chessMove[3] != 'e'
            && chessMove[4] != '.' && chessMove[5] != 'p'
            && chessMove[6] != '.')
            return 1;

        if (chessMove[3] == 'e' && chessMove[4] == '.' && chessMove[5] == 'p'
            && chessMove[6] == '.')
            c = 3;

        if ((desk[i][j] != 'n') && (desk[i][j] != 'N'))
            return 8;

        n = chessMove[4 + c] - '`';
        m = chessMove[5 + c] - '0';
        if (chessMove[6 + c] == '#')
            return 10;
    }

    if (chessMove[0] == 'B') {
        j = chessMove[1] - '`';
        i = chessMove[2] - '0';

        if (chessMove[3] != '-' && chessMove[3] != 'x' && chessMove[3] != 'e'
            && chessMove[4] != '.' && chessMove[5] != 'p'
            && chessMove[6] != '.')
            return 1;

        if (chessMove[3] == 'e' && chessMove[4] == '.' && chessMove[5] == 'p'
            && chessMove[6] == '.')
            c = 3;

        if ((desk[i][j] != 'b') && (desk[i][j] != 'B'))
            return 9;

        n = chessMove[4 + c] - '`';
        m = chessMove[5 + c] - '0';
        if (chessMove[6 + c] == '#')
            return 10;
    }

    if (i > 8 || i < 1 || j < 1 || j > 8 || m > 8 || m < 1 || n < 1 || n > 8)
        return 5;
    {
        t = desk[i][j];
        desk[i][j] = 32;
        desk[m][n] = t;
    }

    return 0;
}
