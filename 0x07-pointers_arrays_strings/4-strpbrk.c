#include "main.h"
/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: string
 * @accept: bytes
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0;
	int b = 0;

	for (; s[a]; a++)
	{
		for (; accept[b]; b++)
		{
			if (s[a] == accept[b])
				return (s + a);
		}
	}
	return ('\0');
}
