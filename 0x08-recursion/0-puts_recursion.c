#include "main.h"
/**
 * _puts_recursion - writes the string s and a trailing newline to stdout.
 * @s: string
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
