#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: NULL or pointer
 */

char *_strdup(char *str)
{
	int a;
	char *p;

	if (!str)
		return (NULL);
	for (a = 0; str[a]; a++)
		;
	p = malloc(sizeof(char) * (a + 1));
	if (!p)
		return (NULL);
	for (a = 0; str[a]; a++)
		p[a] = str[a];
	p[a] = '\0';
	return (p);
}
