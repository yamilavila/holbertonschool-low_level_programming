#include "main.h"
/**
 * prototype: print_alphabet- lowercase
 * Desription: ANSII table 97-122
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int i = 0;

	for (i = 97; i <= 122; i++)

	{
		_putchar(i);
	}
	_putchar('\n');
}
