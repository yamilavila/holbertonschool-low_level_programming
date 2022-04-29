#include "main.h"
/**
 * print_diagonal- print a diagonal line
 * @n: digit
 * Return: success
 */

void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y <= x; y++)
			{
				if (y != 1)
					_putchar(' ');
				if (y == x)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	else
		_putchar('\n');
}
