#include "main.h"
/**
 * prototype: print_alphabet- lowercase
 * Desription: ANSII table 97-122
 * Return: Always 0.
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
