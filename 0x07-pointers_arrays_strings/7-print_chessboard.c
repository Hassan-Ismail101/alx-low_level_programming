#include "main.h"
/**
 * print_chessboard - print the chess board
 * @a: a pointer of entire 8 elements
 */
void print_chessboard(char (*a)[8])
{
	unsigned int itr;
	unsigned int board;

	itr = 0;
	board = 1;
	while (board <= 8)
	{
		_putchar(*(*a + itr));
		itr++;
		if ( itr == 8)
		{
			_putchar('\n');
			itr = 0;
			board++;
			a++;
		}
	}
}
