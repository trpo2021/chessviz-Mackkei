#include <chessviz/board_read.h>
#include <stdio.h>

int boardRead(char move[])
{
    int i;

    for (i = 0; i < 11; i++) {
        scanf("%c", &move[i]);
    }

    return 0;
}
