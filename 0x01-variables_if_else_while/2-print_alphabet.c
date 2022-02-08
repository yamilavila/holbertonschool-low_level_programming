#include <stdio.h>
#include <stdlib.h>
/**
 *main - putchar a-z
 *Return: 0
 */
int main(void)
{
	char  a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
