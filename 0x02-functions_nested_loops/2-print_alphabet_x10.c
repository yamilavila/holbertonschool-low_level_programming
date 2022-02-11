#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i, e;

	for (i = 0; i <= 9; i++)
	{
		for (e = 97; e <= 122; e++)
		{
			_putchar(e);
		}
		_putchar('\n');
	}
}
