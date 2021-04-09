#include <libchessviz/move.h>
#include <math.h>
#include <stdio.h>

int move(char desk[][9], char chessMove[], int step)
{
    int i, j, m, n;
    char t;
    for (i = 0; i < 11; i++) {
        if (chessMove[i] == '0')
            return 2;
    }

    if (chessMove[0] > '`' && chessMove[0] < 'k') {
        j = chessMove[0] - '`';
        i = chessMove[1] - '0';

        m = chessMove[3] - '`';
        n = chessMove[4] - '0';

        if (i > 8 || i < 1 || j > 8 || j < 1 || m > 8 || m < 1 || n > 8
            || n < 1)
            return 5;

        if (desk[i][j] != 'p' && desk[i][j] != 'P')
            return 3;

        if (chessMove[2] == '-') {
            if (chessMove[0] != chessMove[3])
                return 4;
            if ((step == 1 && i != 2 && (n - i) != 1)
                || (step == -1 && i != 7 && (i - n) != 1))
                return 4;
            if (desk[m][n] != 32 && desk[m][n] != 0)
                return 4;
            if ((step == 1 && (desk[m][n - 1] != 0 && desk[m][n - 1] != 32))
                || (step == -1
                    && (desk[m][n + 1] != 0 && desk[m][n + 1] != 32)))
                return 4;
        }

        t = desk[i][j];
        desk[i][j] = 32;
        desk[m][n] = t;
        printf("%d%d", m, n);
    }

    return 0;
}
