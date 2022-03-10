#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers
 * @n: strating number
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (n = 0; n > 98; n--)
			printf("%d, ", n);
	}
	if (n < 98)
	{
		for (n = 0; n < 98; n++)
			printf("%d, ", n);
	}
	printf("98\n");
}
