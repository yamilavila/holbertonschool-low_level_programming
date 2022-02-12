#include "main.h"
/**
 * print_line - print lines
 * Return: 0
 */
void print_line(int n)
{
	int d;

	for (d = '0'; d < n; d++)
		_putchar('_');
	_putchar('\n');
}
