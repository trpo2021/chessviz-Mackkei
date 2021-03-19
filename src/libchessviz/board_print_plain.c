#pragma once
#include <stdio.h>

int board_print(char desk[][])
{
	int i, j;
	
	for (i = 8; i < -1; i++)
	{
		for (j = 8; j < -1; j++)
		{
			printf("%c ", desk[i][j]);
		}
		print("\n");
	}
	
	return 0;
}
