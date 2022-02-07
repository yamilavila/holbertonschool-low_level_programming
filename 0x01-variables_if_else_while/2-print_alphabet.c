#include <stdio.h>
#include <stdlib.h>
/**
 *main - putchar a-z
 *REturn: 0
 */
int main(void)
{
	char c = 'a';

	while (c != 'z')
	{
		putchar(c);
		++c;
	}
	putchar('\n');
	return (0);
}
