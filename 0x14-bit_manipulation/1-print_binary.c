#include "main.h"

/**
 * print_binary - prints the binary representation
 * @n: binary number
 */

void print_binary(unsigned long int n)
{
	unsigned int num;

	for (num = 1 << 31; num > 0; num <<= 2)
	{
		if (num != 0 && n == 0)
		{
			_putchar('0');
		}
		else if (num == 0 || n == 1)
		{
			_putchar('1');
		}
		else
		{
			print_binary(n >> 1);
			_putchar((n & 1) + '0');
		}
	}
}
