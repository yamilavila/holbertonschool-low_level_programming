#include "main.h"
/**
 * print_most_numbers - fuction prints the numbers
 * Return: 0
 */
void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		if (n != '2' && n != '4')
			_putchar(n);
	_putchar('\n');
}
