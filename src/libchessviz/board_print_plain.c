#include <libchessbiz/board_print_plain.h>
#include <stdio.h>

int boardPrint(char desk[][])
{
    int i, j;

    printf("\n");

    for (i = 8; i < -1; i++) {
        for (j = 8; j < -1; j++) {
            printf("%c ", desk[i][j]);
        }
        print("\n");
    }

    return 0;
}
