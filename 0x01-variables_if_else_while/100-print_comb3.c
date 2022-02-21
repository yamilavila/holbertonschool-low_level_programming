#include <stdio.h>
/**
 * main - print all different combinations possibles
 * Return: 0
 */
int main(void)
{
	int a = 48;
	int b;

	for (; a < 58; a++)
	{
		for (b = a + 1; b < 58; b++)
		{
			putchar(a);
			putchar(b);
			if (a != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
