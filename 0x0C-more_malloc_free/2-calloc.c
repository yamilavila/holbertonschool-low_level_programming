#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function  allocates  size  bytes and returns a pointer
 * @nmemb: elements to allocate
 * @size: size of space
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *p;

	if (!nmemb || !size)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	for (a = 0; a < nmemb; a++)
		p[a] = 0;
	return (p);
}
