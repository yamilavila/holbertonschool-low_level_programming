#include "main.h"

/**
 * times_table - print the 9 table
 */

void times_table(void)
{
	int a;
	int b;
	int z;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (b == 0)
			{
				_putchar(48);
				continue;
			}
			z = a * b;
			_putchar(',');
			_putchar(' ');
			if (z >= 10)
			{
				_putchar(z / 10 + 48);
				_putchar(z % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(z + 48);
			}
		}
		_putchar('\n');
	}
}
