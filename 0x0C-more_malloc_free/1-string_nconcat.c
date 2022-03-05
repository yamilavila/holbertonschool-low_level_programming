#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - length of a string
 * @s: string
 * Return: pointer
 */

int _strlen(char *s)
{
	char *p = s;

	while (*s)
		s++;
	return (s - p);
}

/**
 * string_nconcat - concatinates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, leng1, leng2, size;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	leng1 = _strlen(s1);
	leng2 = _strlen(s2);
	if (n > leng2)
		n = leng2;
	size = leng1 + n;
	p = malloc(sizeof(char) * size + 1);
	if (!p)
		return (NULL);
	for (a = 0; a < leng1; a++)
		p[a] = s1[a];
	for (b = 0; b < leng2; b++)
		p[a] = s2[b];
		p[a] = '\0';
	return (p);
}
