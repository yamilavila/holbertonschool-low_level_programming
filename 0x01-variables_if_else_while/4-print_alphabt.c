#include <stdio.h>

/**
 * main - void
 * Return: 0
 */

int main(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
	if ((a != 'q') && (a != 'e'))
	{
		putchar (a);
	}
	}
	putchar('\n');
	return (0);
}
