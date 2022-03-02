#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - creates an array of chars
 * @c: char
 * @size: the size or the memory to print
 * Return: NULL if size 0 or pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *p;

	p = malloc(sizeof(*p) * size);
	if (!size || !p)
		return (NULL);
	for (a = 0; a < size; a++)
		p[a] = c;
	return (p);
}
