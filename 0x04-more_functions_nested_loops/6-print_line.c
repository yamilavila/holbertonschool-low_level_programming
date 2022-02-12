#include "main.h"
/**
 * print_line - print lines
 * @n: integer
 */
void print_line(int n)
{
	int e;

	if (n > 0)
	{
		for (e = 0; e < n; e++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
