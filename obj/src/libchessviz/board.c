#include <stdio.h>

int main()
{
    int i, j;
    char Desk[9][9];
    Desk[0][0] = '8';
    Desk[0][1] = 'r';
    Desk[0][2] = 'n';
    Desk[0][3] = 'b';
    Desk[0][4] = 'q';
    Desk[0][5] = 'k';
    Desk[0][6] = 'b';
    Desk[0][7] = 'n';
    Desk[0][8] = 'r';
    Desk[1][0] = '7';
    
    for (i = 1; i < 9; i++)
    {
    	Desk[1][i] = 'p';
    }
    
    for (i = 2; i < 6; i++)
    {
    	for (j = 1; j < 9; j++)
    	{
    		Desk[i][j] = ' ';
    	}
    		
    }
    Desk[2][0] = '6';
    Desk[3][0] = '5';
    Desk[4][0] = '4';
    Desk[5][0] = '3';
    Desk[6][0] = '2';
    
    for (i = 1; i < 9; i++)
    {
    	Desk[6][i] = 'P';
    }
    
    Desk[7][0] = '1';
    Desk[8][0] = ' ';
    Desk[7][1] = 'R';
    Desk[7][2] = 'N';
    Desk[7][3] = 'B';
    Desk[7][4] = 'Q';
    Desk[7][5] = 'K';
    Desk[7][6] = 'B';
    Desk[7][7] = 'N';
    Desk[7][8] = 'R';
    Desk[8][1] = 'a';
    Desk[8][2] = 'b';
    Desk[8][3] = 'c';
    Desk[8][4] = 'd';
    Desk[8][5] = 'e';
    Desk[8][6] = 'f';
    Desk[8][7] = 'g';
    Desk[8][8] = 'h';
    
    for (i = 0; i < 9; i++)
    {
    	for (j = 0; j < 9; j++)
    	{
    		printf("%c ", Desk[i][j]);
    	}
    	printf("\n");
    }
    

    return 0;
}
