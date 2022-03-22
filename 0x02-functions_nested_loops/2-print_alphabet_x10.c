#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i = 0, e = 97;

	for (; i <= 9; i++)
	{
		for (; e <= 122; e++)
		{
			_putchar(e);
		}
		_putchar('\n');
	}
}
