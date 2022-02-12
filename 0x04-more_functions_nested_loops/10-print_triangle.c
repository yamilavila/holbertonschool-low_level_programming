#include "main.h"
/**
 * print_triangle - prints a triangle of n size
 * @size: define the size
 * Return: 0
 */
void print_triangle(int size)
{
	int h, t;

	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (t = 0; t < size; t++)
			{
				if ((h + t) >= (size - 1))
					_putchar('#');
				else
					_putchar(32);
			}

				_putchar('\n');
		}
	} else
		if (size == 1)
			_putchar('#');
		else
			_putchar('\n');
}

