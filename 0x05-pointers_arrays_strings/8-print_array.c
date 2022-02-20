#include "main.h"
/**
 * print_array - prints variable elements of an array of integers
 * @a: the array of integers
 * @n: the number of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	n--;

	for (i = 0; i <= n; i++)
	{
		if (i == n)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
