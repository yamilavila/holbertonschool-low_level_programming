#include "main.h"
/**
 * more_numbers - print numbers 0 -14
 * Return: 0
 */
void more_numbers(void)
{
	int num1 = 0;
	int num2 = 0;
	int check;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 14; num2++)
		{
			check = num2 / 10;
			if (check >= 1)
			{
				_putchar(check + '0');
			}
			_putchar((num2 % 10) + '0');
		}
		_putchar('\n');
	}
}
