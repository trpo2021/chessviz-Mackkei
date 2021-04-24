#include "libchessviz/board.h"
#include "libchessviz/move.h"

#include <string.h>
#include <thirdparty/ctest.h>

CTEST(chessmove_suite, input_chess)
{
    char desk[9][9];
    boardFill(desk);

    char testStep[11];
    strcpy(testStep, "e2-e4");

    int testExp = SUCCESS;

    int testResult = move(desk, testStep);

    ASSERT_EQUAL(testExp, testResult);
}
