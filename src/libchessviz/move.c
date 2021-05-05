#include <libchessviz/move.h>
#include <math.h>
#include <stdio.h>

int move(char desk[][9], char chessMove[])
{
    int i, j, m, n, c;
    char t;

    if (chessMove[0] == '0')
        return EXITSUCCESS;

    if (chessMove[0] > '`' && chessMove[0] < 'i') {
        j = chessMove[0] - '`';
        i = chessMove[1] - '0';
        c = 0;

        if (chessMove[2] != '-' && chessMove[2] != 'x' && chessMove[2] != 'e'
            && chessMove[3] != '.' && chessMove[4] != 'p'
            && chessMove[5] != '.')
            return WRONGINPUT;

        if (chessMove[2] == 'e' && chessMove[3] == '.' && chessMove[4] == 'p'
            && chessMove[5] == '.')
            c = 3;

        if ((desk[i][j] != 'p') && (desk[i][j] != 'P'))
            return PAWNERROR;

        n = chessMove[3 + c] - '`';
        m = chessMove[4 + c] - '0';

        if (chessMove[5 + c] == '#')
            return CHECKMATE;
    }

    if (chessMove[0] == 'K') {
        j = chessMove[1] - '`';
        i = chessMove[2] - '0';

        c = 0;

        if (chessMove[3] != '-' && chessMove[3] != 'x' && chessMove[3] != 'e'
            && chessMove[4] != '.' && chessMove[5] != 'p'
            && chessMove[6] != '.')
            return WRONGINPUT;

        if (chessMove[3] == 'e' && chessMove[4] == '.' && chessMove[5] == 'p'
            && chessMove[6] == '.')
            c = 3;

        if ((desk[i][j] != 'k') && (desk[i][j] != 'K'))
            return KINGERROR;

        n = chessMove[4 + c] - '`';
        m = chessMove[5 + c] - '0';
        if (chessMove[6 + c] == '#')
            return CHECKMATE;
    }

    if (chessMove[0] == 'Q') {
        j = chessMove[1] - '`';
        i = chessMove[2] - '0';

        if (chessMove[3] != '-' && chessMove[3] != 'x' && chessMove[3] != 'e'
            && chessMove[4] != '.' && chessMove[5] != 'p'
            && chessMove[6] != '.')
            return WRONGINPUT;

        if (chessMove[3] == 'e' && chessMove[4] == '.' && chessMove[5] == 'p'
            && chessMove[6] == '.')
            c = 3;

        if ((desk[i][j] != 'q') && (desk[i][j] != 'Q'))
            return QUEENERROR;

        n = chessMove[4 + c] - '`';
        m = chessMove[5 + c] - '0';
        if (chessMove[6 + c] == '#')
            return CHECKMATE;
    }

    if (chessMove[0] == 'R') {
        j = chessMove[1] - '`';
        i = chessMove[2] - '0';

        if (chessMove[3] != '-' && chessMove[3] != 'x' && chessMove[3] != 'e'
            && chessMove[4] != '.' && chessMove[5] != 'p'
            && chessMove[6] != '.')
            return WRONGINPUT;

        if (chessMove[3] == 'e' && chessMove[4] == '.' && chessMove[5] == 'p'
            && chessMove[6] == '.')
            c = 3;

        if ((desk[i][j] != 'r') && (desk[i][j] != 'R'))
            return ROOKERROR;

        n = chessMove[4 + c] - '`';
        m = chessMove[5 + c] - '0';
        if (chessMove[6 + c] == '#')
            return CHECKMATE;
    }

    if (chessMove[0] == 'N') {
        j = chessMove[1] - '`';
        i = chessMove[2] - '0';

        if (chessMove[3] != '-' && chessMove[3] != 'x' && chessMove[3] != 'e'
            && chessMove[4] != '.' && chessMove[5] != 'p'
            && chessMove[6] != '.')
            return WRONGINPUT;

        if (chessMove[3] == 'e' && chessMove[4] == '.' && chessMove[5] == 'p'
            && chessMove[6] == '.')
            c = 3;

        if ((desk[i][j] != 'n') && (desk[i][j] != 'N'))
            return KNIGHTERROR;

        n = chessMove[4 + c] - '`';
        m = chessMove[5 + c] - '0';
        if (chessMove[6 + c] == '#')
            return CHECKMATE;
    }

    if (chessMove[0] == 'B') {
        j = chessMove[1] - '`';
        i = chessMove[2] - '0';

        if (chessMove[3] != '-' && chessMove[3] != 'x' && chessMove[3] != 'e'
            && chessMove[4] != '.' && chessMove[5] != 'p'
            && chessMove[6] != '.')
            return WRONGINPUT;

        if (chessMove[3] == 'e' && chessMove[4] == '.' && chessMove[5] == 'p'
            && chessMove[6] == '.')
            c = 3;

        if ((desk[i][j] != 'b') && (desk[i][j] != 'B'))
            return BISHOPERROR;

        n = chessMove[4 + c] - '`';
        m = chessMove[5 + c] - '0';
        if (chessMove[6 + c] == '#')
            return CHECKMATE;
    }

    if (i > 8 || i < 1 || j < 1 || j > 8 || m > 8 || m < 1 || n < 1 || n > 8)
        return BORDERLIMIT;
    {
        t = desk[i][j];
        desk[i][j] = 32;
        desk[m][n] = t;
    }

    return SUCCESS;
}
