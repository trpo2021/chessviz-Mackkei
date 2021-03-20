#include <chessviz/board_read.h>
#include <stdio.h>

int boardRead(char chessMove[])
{
    int i;
    char c;

    for (i = 0; i < 11; i++) {
        scanf("%c", &c);
        chessMove[i] = c;
    }

    return 0;
}
