#include "main.h"
/**
 * print_chessboard - obvio print a chessboard
 * @a: array
 */

void print_chessboard(char (*a)[8])
{
	int x;
	int b;

	for (x = 0; x < 8; a++)
	{
		for (b = 0; b < 8; b++)
		_putchar(a[x][b]);
		_putchar('\n');
	}
}

