#include "main.h"
/**
 * *_strcmp - compares two string
 * @s1: first string
 * @s2: second string
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int dst = 0;

	for (; s1[dst] && s2[dst]; dst++)
	{

	if (s1[dst] != s2[dst])

	{
	return (s1[dst] - s2[dst]);
	}

	}
	return (0);
}
