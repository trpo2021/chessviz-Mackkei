#pragma once
#include <stdio.h>

int boardRead(char desk[])
{
	int i;
	
	for (i = 0 ; i < 11; i++)
	{
		scanf("%c", &desk[i]);
	}
	
	return 0;
}
