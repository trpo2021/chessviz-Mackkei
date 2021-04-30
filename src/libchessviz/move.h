#pragma once

enum test {
    SUCCESS,
    WRONGINPUT,
    EXITSUCCESS,
    PAWNERROR,
    KINGERROR,
    BORDERLIMIT,
    QUEENERROR,
    ROOKERROR,
    KNIGHTERROR,
    BISHOPERROR,
    CHECKMATE
};

int move(char desk[][9], char chessMove[]);
