#include "libchessviz/board.h"
#include "libchessviz/board_print_plain.h"
#include "libchessviz/board_read.h"
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
        if (check == WRONGINPUT) {
            printf("\nInput data fail\n");
            break;
        }
        if (check == EXITSUCCESS) {
            printf("\n\nExiting program\n");
            break;
        }

        if (check == PAWNERROR) {
            printf("\n\nWrong figure chosen. Must be Pawn\n");
            break;
        }

        if (check == KINGERROR) {
            printf("\n\nWrong figure chosen. Must be King\n");
            break;
        }

        if (check == BORDERLIMIT) {
            printf("\n\nStep out of border\n");
            break;
        }

        if (check == QUEENERROR) {
            printf("\n\nWrong figure chosen. Must be Queen\n");
            break;
        }

        if (check == ROOKERROR) {
            printf("\n\nWrong figure chosen. Must be Rook\n");
            break;
        }

        if (check == KNIGHTERROR) {
            printf("\n\nWrong figure chosen. Must be knight\n");
            break;
        }

        if (check == BISHOPERROR) {
            printf("\n\nWrong figure chosen. Must be Bishop\n");
            break;
        }

        if (check == CHECKMATE) {
            printf("\n\nCheckmate, well done!\n");
            break;
        }

        boardPrint(desk);
    }

    return 0;
}
