#include <chessviz/board_read.h>
#include <libchessviz/libchessbiz.a>

int main()
{
    char desk[9][9];
    char move[11];

    board(desk);
    boardPrint(desk);

    while (true) {
        printf("\nType a move: ");
        boardRead(move);
        move(desk, move);
        if (move(desk, move) == 1)
            break;
        boardPrint(desk);
    }

    return 0;
}
