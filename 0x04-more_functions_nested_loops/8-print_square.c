#include "main.h"
/**
 * print_square - prints a square, followed by a new line
 * @size: size of the squares
 * Return: 0
 */

void print_square(int size)
{
	int s1, s2;

	if (size > 0)
		for (s1 = 0; s1 < size; s1++)
		{
			for (s2 = 0; s2 < size; s2++)
				_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
