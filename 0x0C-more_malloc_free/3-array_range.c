#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: lower number
 * @max: highest number
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int leng, a;
	int *p;

	if (min > max)
		return (NULL);
	leng = max - min + 1;
	p = malloc(sizeof(int) * leng);
	if (!p)
		return (NULL);
	for (a = 0; a < leng; a++)
		p[a] = min++;
	return (p);
}
