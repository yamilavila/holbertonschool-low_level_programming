#include "main.h"
/**
 * print_line - print lines
 * Return: 0
 */
void print_line(int n)
{
	int e;

	for (e = '0'; e < n; e++)
		_putchar('_');
	_putchar('\n');
}
