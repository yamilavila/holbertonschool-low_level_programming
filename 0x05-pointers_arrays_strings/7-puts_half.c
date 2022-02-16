#include "main.h"
/**
 * puts_half - prints half string
 * @str: string to print
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, h;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	i += 1;

	for (h = (i / 2); str[h] != '\0'; h++)
	{
		putchar(str[h]);
	}
	putchar('\n');
}
