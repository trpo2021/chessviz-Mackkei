#include "chessviz/board_read.h"
#include "libchessviz/board.h"
#include "libchessviz/board_print_plain.h"
#include "libchessviz/move.h"
#include <stdio.h>

int main()
{
    char desk[9][9];
    char chessMove[11];
    int check;
    check = 0;

    boardFill(desk);
    boardPrint(desk);
    printf("Move example: 'e2-e4'\nType 0 to exit program");

    while (1) {
        printf("\nType a move: ");
        boardRead(chessMove);
        check = move(desk, chessMove);
        if (check == 1) {
            printf("\nInput data fail\n");
            break;
        }
        if (check == 2) {
            printf("\n\nExiting program\n");
            break;
        }

        boardPrint(desk);
    }

    return 0;
}
