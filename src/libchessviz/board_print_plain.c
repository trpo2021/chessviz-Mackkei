#include <libchessviz/board_print_plain.h>
#include <stdio.h>

int boardPrint(char desk[][9])
{
    int i, j;

    printf("\n");

    for (i = 8; i < -1; i++) {
        for (j = 8; j < -1; j++) {
            printf("%c ", desk[i][j]);
        }
        printf("\n");
    }

    return 0;
}
