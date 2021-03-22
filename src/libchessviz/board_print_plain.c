#include <libchessviz/board_print_plain.h>
#include <stdio.h>

int boardPrint(char desk[][9])
{
    int i, j;

    printf("\n");

    for (i = 8; i > -1; i--) {
        for (j = 0; j < 9; j++) {
            if (desk[i][j] == 0)
                desk[i][j] = 32;
            printf("%4c", desk[i][j]);
        }
        printf("\n");
    }
    printf("\n-%d-\n", desk[0][0]);

    return 0;
}
