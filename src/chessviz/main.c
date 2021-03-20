#include "chessviz/board_read.h"
#include "libchessviz/board.h"
#include "libchessviz/board_print_plain.h"
#include "libchessviz/move.h"
#include <stdio.h>

int main()
{
    char desk[9][9];
    char chessMove[11];

    boardFill(desk);
    boardPrint(desk);

    while (1) {
        printf("\nType a move: ");
        boardRead(chessMove);
        move(desk, chessMove);
        if (move(desk, chessMove) == 1)
            break;
        boardPrint(desk);
    }

    return 0;
}
