#include "main.h"
/**
 * print_last_digit- print last digit
 * Description: variable modulos ten
 * @r: character
 * Return: r
 */
int print_last_digit(int r)
{
	r = (r % 10);
	if (r < 0)
	{
		r = (r * -1);
	}
	_putchar ('0' + r);
	return (r);
}
