#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse
 * @s: pointer to string
 * Return: 0
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	while (i > 0)
	{
		i--;
		putchar(s[i]);
	}
	putchar('\n');
}
