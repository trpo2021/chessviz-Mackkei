#pragma once

enum test {
	WRONGINPUT = 1,
	EXITSUCCESS,
	PAWNERROR,
	KINGERROR,
	BORDERLIMIT,
	QUEENERROR,
	ROOKERROR,
	KNIGHTERROR,
	BISHOPERROR,
	CHECKMATE;
	};
	
int move(char desk[][9], char chessMove[]);
