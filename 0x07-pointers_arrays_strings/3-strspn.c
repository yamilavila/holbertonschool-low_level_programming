#include "main.h"
/**
 * _strspn - search a string for a set of bytes
 * @s: string
 * @accept: bytes accepted
 * Return: bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int a = 0;
	int b = 0;
	int dst;

	for (; s[a]; a++)
	{
		for (; accept[b] >= 0; b++)
		{
			if (s[a] == accept[b])
			{
				dst++;
				break;
			}
			if (accept[b] == '\0')
				return (dst);
		}
	}
	return (dst);
}
