#include <libchessviz/board.h>
#include <stdio.h>

int boardFill(char desk[][9])
{
    int i, j;
    desk[0][0] = 32;
    desk[0][1] = 'a';
    desk[0][2] = 'b';
    desk[0][3] = 'c';
    desk[0][4] = 'd';
    desk[0][5] = 'e';
    desk[0][6] = 'f';
    desk[0][7] = 'g';
    desk[0][8] = 'h';
    desk[1][0] = '1';
    desk[1][1] = 'R';
    desk[1][2] = 'N';
    desk[1][3] = 'B';
    desk[1][4] = 'Q';
    desk[1][5] = 'K';
    desk[1][6] = 'B';
    desk[1][7] = 'N';
    desk[1][8] = 'R';
    desk[2][0] = '2';

    for (i = 1; i < 9; i++) {
        desk[2][i] = 'P';
    }

    desk[3][0] = '3';
    desk[4][0] = '4';
    desk[5][0] = '5';
    desk[6][0] = '6';

    for (i = 3; i < 6; i++) {
        for (j = 1; j < 9; j++) {
            desk[i][j] = 32;
        }
    }

    desk[7][0] = '7';

    for (i = 1; i < 9; i++) {
        desk[7][i] = 'p';
    }

    desk[8][0] = '8';
    desk[8][1] = 'r';
    desk[8][2] = 'n';
    desk[8][3] = 'b';
    desk[8][4] = 'q';
    desk[8][5] = 'k';
    desk[8][6] = 'b';
    desk[8][7] = 'n';
    desk[8][8] = 'r';

    return 0;
}
