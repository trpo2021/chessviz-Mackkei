#include "libchessviz/move.h"
#include "libchessviz/board.h"

#include <ctest.h>
#include <string.h>

CTEST(chessmove_suite, success_exit)
{
    char desk[9][9];
    boardFill(desk);

    char testStep[11];
    strcpy(testStep, "e2-e4");

    int testExp = SUCCESS;

    int testResult = move(desk, testStep);

    ASSERT_EQUAL(testExp, testResult);
}

CTEST(chessmove_suite, wrong_input)
{
    char desk[9][9];
    boardFill(desk);

    char testStep[11];
    strcpy(testStep, "Qe2bibe4");

    int testExp = WRONGINPUT;

    int testResult = move(desk, testStep);

    ASSERT_EQUAL(testExp, testResult);
}

CTEST(chessmove_suite, manual_exit)
{
    char desk[9][9];
    boardFill(desk);

    char testStep[11];
    strcpy(testStep, "0");

    int testExp = EXITSUCCESS;

    int testResult = move(desk, testStep);

    ASSERT_EQUAL(testExp, testResult);
}

CTEST(chessmove_suite, pawn_test)
{
    char desk[9][9];
    boardFill(desk);

    char testStep[11];
    strcpy(testStep, "e1-e8");

    int testExp = PAWNERROR;

    int testResult = move(desk, testStep);

    ASSERT_EQUAL(testExp, testResult);
}

CTEST(chessmove_suite, king_test)
{
    char desk[9][9];
    boardFill(desk);

    char testStep[11];
    strcpy(testStep, "Ke2-e4");

    int testExp = KINGERROR;

    int testResult = move(desk, testStep);

    ASSERT_EQUAL(testExp, testResult);
}

CTEST(chessmove_suite, border_limit)
{
    char desk[9][9];
    boardFill(desk);

    char testStep[11];
    strcpy(testStep, "e2-e9");

    int testExp = BORDERLIMIT;

    int testResult = move(desk, testStep);

    ASSERT_EQUAL(testExp, testResult);
}

CTEST(chessmove_suite, queen_test)
{
    char desk[9][9];
    boardFill(desk);

    char testStep[11];
    strcpy(testStep, "Qe2-e4");

    int testExp = QUEENERROR;

    int testResult = move(desk, testStep);

    ASSERT_EQUAL(testExp, testResult);
}

CTEST(chessmove_suite, rook_test)
{
    char desk[9][9];
    boardFill(desk);

    char testStep[11];
    strcpy(testStep, "Re2-e4");

    int testExp = ROOKERROR;

    int testResult = move(desk, testStep);

    ASSERT_EQUAL(testExp, testResult);
}

CTEST(chessmove_suite, knight_test)
{
    char desk[9][9];
    boardFill(desk);

    char testStep[11];
    strcpy(testStep, "Ne2-e4");

    int testExp = KNIGHTERROR;

    int testResult = move(desk, testStep);

    ASSERT_EQUAL(testExp, testResult);
}

CTEST(chessmove_suite, bishop_test)
{
    char desk[9][9];
    boardFill(desk);

    char testStep[11];
    strcpy(testStep, "Be2-e4");

    int testExp = BISHOPERROR;

    int testResult = move(desk, testStep);

    ASSERT_EQUAL(testExp, testResult);
}

CTEST(chessmove_suite, checkmate_test)
{
    char desk[9][9];
    boardFill(desk);

    char testStep[11];
    strcpy(testStep, "e2-e4#");

    int testExp = CHECKMATE;

    int testResult = move(desk, testStep);

    ASSERT_EQUAL(testExp, testResult);
}
