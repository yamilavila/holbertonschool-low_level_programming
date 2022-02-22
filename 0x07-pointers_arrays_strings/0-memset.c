#include "main.h"
/**
 * *_memset - fill memory with a constant byte
 * @s: buffer pointer
 * @b: char
 * @n: int bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	for (; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
